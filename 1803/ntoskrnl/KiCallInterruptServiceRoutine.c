/*
 * XREFs of KiCallInterruptServiceRoutine @ 0x14007EA00
 * Callers:
 *     KiScanInterruptObjectList @ 0x1401AC250 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x1401AC420 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x1401AC560 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptSubDispatchNoLockNoEtw @ 0x1401AC6A0 (KiInterruptSubDispatchNoLockNoEtw.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1402494EC (KiInvokeInterruptServiceRoutine.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x140069440 (KxWaitForSpinLockAndAcquire.c)
 *     KiIntRedirectQueueRequestOnProcessor @ 0x14007EC7C (KiIntRedirectQueueRequestOnProcessor.c)
 *     KeFindFirstSetRightGroupAffinity @ 0x14007ED10 (KeFindFirstSetRightGroupAffinity.c)
 *     KiCheckAndRearmForceIdle @ 0x1400D14A4 (KiCheckAndRearmForceIdle.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     KiAcquireSpinLockInstrumented @ 0x140242718 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402427F0 (KiReleaseSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 *     KiResetForceIdle @ 0x14024A92C (KiResetForceIdle.c)
 */

char __fastcall KiCallInterruptServiceRoutine(__int64 a1, char a2)
{
  __int64 v4; // r9
  struct _KPRCB *CurrentPrcb; // rdi
  _QWORD *IsrDpcStats; // r14
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r12
  char v9; // bp
  unsigned __int64 v10; // rax
  volatile signed __int32 *v12; // rbp
  struct _KPRCB *v13; // r10
  _DWORD *SchedulerAssist; // rcx
  __int64 v15; // rdx
  volatile signed __int64 *v16; // rcx
  struct _KPRCB *v17; // rcx
  _DWORD *v18; // rdx
  unsigned int v19; // r8d
  unsigned int FirstSetRightGroupAffinity; // eax
  unsigned __int64 v21; // rax
  int v22; // eax
  int v23; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( (unsigned int)(*(_DWORD *)(a1 + 88) - 48) <= 0x9F && !KiForceIdleDisabled )
  {
    if ( KiForceIdleState == 4 )
    {
      KiResetForceIdle(1LL, 0LL);
    }
    else if ( (unsigned int)(KiForceIdleState - 1) <= 1 )
    {
      KiCheckAndRearmForceIdle();
    }
  }
  if ( !*(_BYTE *)(a1 + 93) )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 24))(a1, *(_QWORD *)(a1 + 48));
    return v9 != 0;
  }
  v4 = *(_QWORD *)(a1 + 240);
  if ( v4 )
  {
    if ( *(_BYTE *)(v4 + 16) )
    {
      v19 = KiProcessorIndexToNumberMappingTable[KeGetPcr()->Prcb.Number];
      if ( ((unsigned int)(*(_QWORD *)v4 >> (v19 & 0x3F)) & (v19 >> 6 == *(unsigned __int16 *)(v4 + 8))) == 0 )
      {
        FirstSetRightGroupAffinity = KeFindFirstSetRightGroupAffinity(*(_QWORD *)(a1 + 240));
        KiIntRedirectQueueRequestOnProcessor(FirstSetRightGroupAffinity);
        return 2;
      }
    }
  }
  CurrentPrcb = KeGetCurrentPrcb();
  IsrDpcStats = CurrentPrcb->IsrDpcStats;
  *(_BYTE *)(a1 + 224) = 1;
  CurrentPrcb->IsrDpcStats = (void *)(a1 + 176);
  v7 = __rdtsc();
  *(_QWORD *)(a1 + 184) = v7;
  v8 = v7;
  if ( a2 )
  {
    v12 = *(volatile signed __int32 **)(a1 + 72);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireSpinLockInstrumented(*(_QWORD *)(a1 + 72));
    }
    else
    {
      v13 = KeGetCurrentPrcb();
      SchedulerAssist = v13->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( v13->NestingLevel <= 1u )
        {
          v22 = SchedulerAssist[5];
          SchedulerAssist[5] = v22 + 1;
          if ( v22 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
            KiPerformUnboostKick(v13);
        }
      }
      if ( _interlockedbittestandset64(v12, 0LL) )
      {
        KiSetVpThreadSpinLockCount(v13, 0LL);
        KxWaitForSpinLockAndAcquire(v12, v15);
      }
    }
  }
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 24))(a1, *(_QWORD *)(a1 + 48));
  if ( a2 )
  {
    v16 = *(volatile signed __int64 **)(a1 + 72);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v16, retaddr);
    else
      _InterlockedAnd64(v16, 0LL);
    v17 = KeGetCurrentPrcb();
    v18 = v17->SchedulerAssist;
    if ( v18 )
    {
      if ( v17->NestingLevel <= 1u )
      {
        v23 = v18[5] - 1;
        v18[5] = v23;
        if ( !v23 && !*((_BYTE *)v18 + 25) && !*((_BYTE *)v18 + 27) )
          KiPerformUnboostKick(v17);
      }
    }
  }
  v10 = __rdtsc();
  *(_QWORD *)(a1 + 176) += v10 - *(_QWORD *)(a1 + 184);
  if ( IsrDpcStats != (_QWORD *)1 )
  {
    v21 = v10 - v8;
    if ( *((_BYTE *)IsrDpcStats + 48) )
      IsrDpcStats[1] += v21;
    else
      IsrDpcStats[4] += v21;
  }
  CurrentPrcb->IsrDpcStats = IsrDpcStats;
  *(_BYTE *)(a1 + 224) = 0;
  if ( v9 )
  {
    ++*(_QWORD *)(a1 + 192);
    return v9 != 0;
  }
  return 0;
}
