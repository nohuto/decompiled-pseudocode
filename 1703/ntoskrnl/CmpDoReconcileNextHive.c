/*
 * XREFs of CmpDoReconcileNextHive @ 0x1404D89C0
 * Callers:
 *     <none>
 * Callees:
 *     CmpGetNextFailedUnloadHive @ 0x14007EA48 (CmpGetNextFailedUnloadHive.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008AB1C (KiQueryUnbiasedInterruptTime.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     CmpDoFileSetSizeEx @ 0x14043B560 (CmpDoFileSetSizeEx.c)
 *     CmpFlushUnsupportedOperationTelemetry @ 0x1404592A4 (CmpFlushUnsupportedOperationTelemetry.c)
 *     CmpDereferenceKeyControlBlock @ 0x140490D70 (CmpDereferenceKeyControlBlock.c)
 *     CmpSignalUnloadEventArrayForHive @ 0x1404CD710 (CmpSignalUnloadEventArrayForHive.c)
 *     CmpCmdHiveClose @ 0x1404CD78C (CmpCmdHiveClose.c)
 *     HvFreeHive @ 0x1404D2664 (HvFreeHive.c)
 *     HvGetEffectiveLogSizeCapForHive @ 0x1404D3B9C (HvGetEffectiveLogSizeCapForHive.c)
 *     CmpFlushHive @ 0x1404D6DE0 (CmpFlushHive.c)
 *     CmpGetNextActiveHive @ 0x1404D8480 (CmpGetNextActiveHive.c)
 *     CmpIsHiveEligibleForLazyReconcile @ 0x1404D8AE0 (CmpIsHiveEligibleForLazyReconcile.c)
 *     CmpLockRegistry @ 0x1404FF6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
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
  __int64 v18; // rcx

  v2 = 0;
  v3 = 10000000LL * (unsigned int)dword_14033B904;
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
        EffectiveLogSizeCapForHive = HvGetEffectiveLogSizeCapForHive((unsigned int *)NextActiveHive);
        if ( (int)CmpFlushHive(
                    (ULONG_PTR)NextActiveHive,
                    *((_DWORD *)NextActiveHive + 40) < EffectiveLogSizeCapForHive ? 22 : 6) < 0 )
        {
          *a1 = 1;
          v8 = UnbiasedInterruptTime + 10000000LL * (unsigned int)dword_14033B90C;
        }
      }
      else if ( *((_DWORD *)NextActiveHive + 28) )
      {
        if ( (NextActiveHive[18] & 0x8001) == 0 )
        {
          v2 = 1;
          v10 = NextActiveHive[674] + 10000000LL * (unsigned int)dword_14033B900;
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
          v16 = *(_QWORD **)(NextFailedUnloadHive + 2768);
          if ( *(_QWORD *)(v15 + 8) != NextFailedUnloadHive + 2760 || *v16 != NextFailedUnloadHive + 2760 )
            __fastfail(3u);
          *v16 = v15;
          *(_QWORD *)(v15 + 8) = v16;
          ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
          v17 = *(_DWORD *)(NextFailedUnloadHive + 1400) + 4096;
          HvFreeHive(NextFailedUnloadHive, 1);
          if ( (*(_DWORD *)(NextFailedUnloadHive + 144) & 0x8000) == 0
            && (__int64)(*(_QWORD *)(NextFailedUnloadHive + 2968) - v17) > 0x100000 )
          {
            CmpDoFileSetSizeEx(NextFailedUnloadHive, 0LL, v17, 0);
          }
          CmpCmdHiveClose(NextFailedUnloadHive);
          CmpSignalUnloadEventArrayForHive(NextFailedUnloadHive);
          CmpLockRegistry(v18);
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
