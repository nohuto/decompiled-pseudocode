/*
 * XREFs of KeResumeClockTimerFromIdle @ 0x14010DC30
 * Callers:
 *     PpmIdleExecuteTransition @ 0x14010BC10 (PpmIdleExecuteTransition.c)
 * Callees:
 *     KiSendClockInterruptToClockOwner @ 0x140005910 (KiSendClockInterruptToClockOwner.c)
 *     KiRestoreClockTickRate @ 0x140005B28 (KiRestoreClockTickRate.c)
 *     KiEventClockStateChange @ 0x140005D9C (KiEventClockStateChange.c)
 *     KiSetPendingTick @ 0x140005DDC (KiSetPendingTick.c)
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x140035404 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     KiUpdateTimeAssist @ 0x1400A9728 (KiUpdateTimeAssist.c)
 *     EtwTraceKernelEvent @ 0x1400C1C38 (EtwTraceKernelEvent.c)
 *     KiGetPendingTick @ 0x1400C6A38 (KiGetPendingTick.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     KeFindFirstSetRightAffinityEx @ 0x140240270 (KeFindFirstSetRightAffinityEx.c)
 *     KiAdjustTimersAfterDripsExit @ 0x1402409E8 (KiAdjustTimersAfterDripsExit.c)
 *     KiResetForceIdle @ 0x14024A92C (KiResetForceIdle.c)
 *     KiGetPastDueIRTimerInfo @ 0x14024AD0C (KiGetPastDueIRTimerInfo.c)
 *     ExRecordOneTimerExpiry @ 0x1402BAEC8 (ExRecordOneTimerExpiry.c)
 */

void __fastcall KeResumeClockTimerFromIdle(_DWORD *a1)
{
  struct _KPRCB *CurrentPrcb; // rbx
  char v3; // si
  signed __int32 v4; // eax
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned __int8 ClockOwner; // cl
  struct _KPRCB *v8; // rax
  unsigned __int64 v9; // rbp
  char v10; // r14
  __int64 v11; // r8
  __int64 Number; // r14
  __int64 v13; // rdx
  int v14; // ecx
  __int32 v15; // edi
  _BOOL8 v16; // rcx
  unsigned __int8 v17; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v18[7]; // [rsp+31h] [rbp-67h] BYREF
  __int64 v19; // [rsp+38h] [rbp-60h] BYREF
  __int64 v20; // [rsp+40h] [rbp-58h] BYREF
  __int64 v21; // [rsp+48h] [rbp-50h] BYREF
  _BYTE v22[8]; // [rsp+50h] [rbp-48h] BYREF
  _QWORD v23[2]; // [rsp+58h] [rbp-40h] BYREF
  unsigned __int64 v24; // [rsp+68h] [rbp-30h] BYREF
  int v25; // [rsp+70h] [rbp-28h]

  if ( (_BYTE)KiDynamicTickDisableReason )
    return;
  CurrentPrcb = KeGetCurrentPrcb();
  v3 = 0;
  if ( a1 )
    *a1 = -1;
  while ( 1 )
  {
    v4 = KiClockState;
    if ( KiClockState == 1 )
    {
      v4 = _InterlockedCompareExchange(&KiClockState, 3, 1);
      if ( v4 == 1 )
        break;
    }
    if ( v4 != 3 )
      goto LABEL_6;
    _mm_pause();
  }
  KiUpdateTimeAssist(0LL, (__int64)&v19, (__int64)v22);
  v9 = v19;
  KiClockTimerOneShotEndTime = v19;
  v10 = off_140398978[0]();
  if ( KiClockLatencyMeasurementEnabled )
  {
    if ( a1 && KiClockTimerOwner == CurrentPrcb->Number && v9 >= KiClockTimerNextTickTime && v10 )
      *a1 = v9 - KiClockTimerNextTickTime;
    KiClockLatencyMeasurementEnabled = 0;
  }
  if ( a1
    && KiClockTimerOwner == CurrentPrcb->Number
    && v9 >= KiClockTimerNextTickTime
    && (unsigned __int8)off_140398978[0]() )
  {
    *a1 = v9 - KiClockTimerNextTickTime;
  }
  KiClockLatencyMeasurementEnabled = 0;
  if ( v9 - KiClockTimerOneShotStartTime < qword_1403B3DE8 )
    qword_1403B3DE8 = v9 - KiClockTimerOneShotStartTime;
  if ( v9 - KiClockTimerOneShotStartTime > qword_1403B3DE0 )
    qword_1403B3DE0 = v9 - KiClockTimerOneShotStartTime;
  if ( KiConsiderTimerRebasing )
  {
    if ( v10 && (unsigned int)KiGetPastDueIRTimerInfo(v9, v18, &v17) )
      ExRecordOneTimerExpiry(v18[0], v17);
    KiAdjustTimersAfterDripsExit(CurrentPrcb, v9);
    KiConsiderTimerRebasing = 0;
  }
  if ( KiClockTimerPerCpu )
  {
    KeQuerySystemAllowedCpuSetAffinity(&KiClockOwnerAllowedCpuSet, &KiClockOwnerAllowedCpuSetVersion);
    Number = CurrentPrcb->Number;
    v13 = *((_QWORD *)&KiClockOwnerAllowedCpuSet + ((unsigned int)KiProcessorIndexToNumberMappingTable[Number] >> 6) + 1) >> (KiProcessorIndexToNumberMappingTable[Number] & 0x3F);
    if ( (v13 & 1) == 0 )
    {
      LODWORD(Number) = KeFindFirstSetRightAffinityEx(&KiIntSteerMask, v13, v11);
      if ( (_DWORD)Number == -1 )
        LODWORD(Number) = CurrentPrcb->Number;
    }
    v14 = CurrentPrcb->Number;
  }
  else
  {
    LODWORD(Number) = CurrentPrcb->Number;
    v14 = Number;
  }
  if ( v14 != (_DWORD)Number )
  {
    v3 = 1;
LABEL_43:
    ++qword_1403B3DD8;
    v15 = 2;
    KiEventClockStateChange(2, 1, 0LL, 0LL);
    if ( v3 )
    {
      KiClockTimerOwner = Number;
      KiSendClockInterruptToClockOwner();
    }
    goto LABEL_38;
  }
  if ( v9 + (unsigned int)KiLastRequestedTimeIncrement > KiClockTimerNextTickTime )
    goto LABEL_43;
  if ( KiClockTimerPerCpu )
  {
    CurrentPrcb->ClockOwner = 1;
    KiClockTimerOwner = v14;
    if ( !KiGetPendingTick() )
      off_140398960[0]();
  }
  v15 = 0;
  KiRestoreClockTickRate(v9, &v20);
  KiClockTimerNextTickTime = v9 + (unsigned int)KeTimeIncrement;
  KiEventClockStateChange(0, 1, &v21, &v20);
LABEL_38:
  if ( KiForceIdleReset )
  {
    KiForceIdleReset = 0;
    v16 = (unsigned __int8)off_140398978[0]() == 0;
    KiResetForceIdle(v16, 0LL);
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x100000) != 0 )
  {
    v25 = KiClockTimerOwner;
    v23[0] = &v24;
    v24 = v9;
    v23[1] = 16LL;
    EtwTraceKernelEvent((int)v23, 1, 0x40100000u, 3928, 1538);
  }
  _InterlockedExchange(&KiClockState, v15);
LABEL_6:
  v5 = CurrentPrcb->Number;
  if ( KiClockTimerOwner != (_DWORD)v5 )
    goto LABEL_7;
  if ( !CurrentPrcb->ClockOwner )
  {
    CurrentPrcb->ClockOwner = 1;
LABEL_7:
    if ( !CurrentPrcb->ClockOwner )
    {
      v6 = *(_QWORD *)(KiProcessorBlock[v5] + 25016);
      if ( v6 )
      {
        if ( (KiVelocityFlags & 0x40) != 0 && *(_BYTE *)(v6 + 27) )
          *(_BYTE *)(v6 + 27) = 0;
      }
    }
  }
  ClockOwner = CurrentPrcb->ClockOwner;
  if ( ClockOwner )
  {
    v8 = KiClockTimerPerCpu ? KeGetCurrentPrcb() : (struct _KPRCB *)KiProcessorBlock[KiClockTimerOwner];
    if ( (v8->PendingTickFlags & 1) == 0 )
    {
      off_140398960[0]();
      ClockOwner = CurrentPrcb->ClockOwner;
    }
  }
  if ( !ClockOwner && (CurrentPrcb->PendingTickFlags & 1) != 0 )
  {
    off_140398968[0]();
    KiSetPendingTick(0);
  }
}
