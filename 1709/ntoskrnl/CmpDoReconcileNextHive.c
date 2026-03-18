/*
 * XREFs of CmpDoReconcileNextHive @ 0x1404E3D10
 * Callers:
 *     <none>
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140016D50 (KiQueryUnbiasedInterruptTime.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     CmpGetNextFailedUnloadHive @ 0x140131358 (CmpGetNextFailedUnloadHive.c)
 *     CmpSignalUnloadEventArrayForHive @ 0x14046FE70 (CmpSignalUnloadEventArrayForHive.c)
 *     CmpCmdHiveClose @ 0x14046FEEC (CmpCmdHiveClose.c)
 *     CmpDereferenceKeyControlBlock @ 0x140478370 (CmpDereferenceKeyControlBlock.c)
 *     HvFreeHive @ 0x140479C44 (HvFreeHive.c)
 *     CmpLockRegistry @ 0x14047E6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpFlushHive @ 0x1404DD950 (CmpFlushHive.c)
 *     CmpGetNextActiveHive @ 0x1404E3AA0 (CmpGetNextActiveHive.c)
 *     CmpIsHiveEligibleForLazyReconcile @ 0x1404E3E30 (CmpIsHiveEligibleForLazyReconcile.c)
 *     HvGetEffectiveLogSizeCapForHive @ 0x1404E5F64 (HvGetEffectiveLogSizeCapForHive.c)
 *     CmpDoFileSetSizeEx @ 0x1404E657C (CmpDoFileSetSizeEx.c)
 *     CmpFlushUnsupportedOperationTelemetry @ 0x140596294 (CmpFlushUnsupportedOperationTelemetry.c)
 */

char __fastcall CmpDoReconcileNextHive(_BYTE *a1, unsigned __int64 *a2)
{
  char v2; // si
  unsigned __int64 v3; // rbp
  struct _EX_RUNDOWN_REF *v6; // rcx
  __int64 *NextActiveHive; // rbx
  unsigned __int64 v8; // rdi
  unsigned __int64 UnbiasedInterruptTime; // r14
  unsigned __int64 v10; // rcx
  unsigned int EffectiveLogSizeCapForHive; // eax
  __int64 NextFailedUnloadHive; // rbx
  __int64 v14; // rdi
  __int64 v15; // rdx
  _QWORD *v16; // rcx
  unsigned int v17; // r14d
  __int64 v18; // r8

  v2 = 0;
  v3 = 10000000LL * (unsigned int)dword_140353934;
  if ( !CmpNoWrite )
  {
    v6 = 0LL;
    while ( 1 )
    {
      NextActiveHive = CmpGetNextActiveHive(v6);
      if ( !NextActiveHive )
        break;
      v8 = -1LL;
      UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
      if ( (unsigned __int8)CmpIsHiveEligibleForLazyReconcile(NextActiveHive) )
      {
        EffectiveLogSizeCapForHive = HvGetEffectiveLogSizeCapForHive(NextActiveHive);
        if ( (int)CmpFlushHive(
                    (ULONG_PTR)NextActiveHive,
                    *((_DWORD *)NextActiveHive + 40) < EffectiveLogSizeCapForHive ? 22 : 6) < 0 )
        {
          *a1 = 1;
          v8 = UnbiasedInterruptTime + 10000000LL * (unsigned int)dword_14035393C;
        }
      }
      else if ( *((_DWORD *)NextActiveHive + 28) )
      {
        if ( (NextActiveHive[18] & 0x8001) == 0 )
        {
          v2 = 1;
          v10 = NextActiveHive[674] + 10000000LL * (unsigned int)dword_140353930;
          if ( UnbiasedInterruptTime < v10 )
            v8 = v10 - UnbiasedInterruptTime;
        }
      }
      v6 = (struct _EX_RUNDOWN_REF *)NextActiveHive;
      if ( v8 < v3 )
        v3 = v8;
    }
    NextFailedUnloadHive = CmpGetNextFailedUnloadHive(0LL);
    if ( NextFailedUnloadHive )
    {
      do
      {
        v14 = CmpGetNextFailedUnloadHive(NextFailedUnloadHive);
        if ( (int)CmpFlushHive(NextFailedUnloadHive, 0xCu) >= 0 )
        {
          ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
          v15 = *(_QWORD *)(NextFailedUnloadHive + 2760);
          if ( *(_QWORD *)(v15 + 8) != NextFailedUnloadHive + 2760
            || (v16 = *(_QWORD **)(NextFailedUnloadHive + 2768), *v16 != NextFailedUnloadHive + 2760) )
          {
            __fastfail(3u);
          }
          *v16 = v15;
          *(_QWORD *)(v15 + 8) = v16;
          ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
          v17 = *(_DWORD *)(NextFailedUnloadHive + 1400) + 4096;
          HvFreeHive(NextFailedUnloadHive, 1, v18);
          if ( (*(_DWORD *)(NextFailedUnloadHive + 144) & 0x8000) == 0
            && (__int64)(*(_QWORD *)(NextFailedUnloadHive + 2968) - v17) > 0x100000 )
          {
            CmpDoFileSetSizeEx(NextFailedUnloadHive, 0LL, v17, 0LL);
          }
          CmpCmdHiveClose(NextFailedUnloadHive);
          CmpSignalUnloadEventArrayForHive(NextFailedUnloadHive);
          CmpLockRegistry();
          CmpDereferenceKeyControlBlock(*(_QWORD *)(NextFailedUnloadHive + 4104));
          CmpUnlockRegistry();
        }
        else
        {
          v2 = 1;
        }
        NextFailedUnloadHive = v14;
      }
      while ( v14 );
    }
    CmpFlushUnsupportedOperationTelemetry();
    if ( v2 )
      *a2 = v3;
  }
  return v2;
}
