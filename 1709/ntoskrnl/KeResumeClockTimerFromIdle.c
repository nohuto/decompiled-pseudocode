/*
 * XREFs of KeResumeClockTimerFromIdle @ 0x140098E10
 * Callers:
 *     PpmIdleExecuteTransition @ 0x140096C70 (PpmIdleExecuteTransition.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     KiSendClockInterruptToClockOwner @ 0x14010F0C8 (KiSendClockInterruptToClockOwner.c)
 *     KiEventClockStateChange @ 0x14010F7E8 (KiEventClockStateChange.c)
 *     KiSetPendingTick @ 0x14010F828 (KiSetPendingTick.c)
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x1401174F8 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     KiUpdateTimeAssist @ 0x14011F9AC (KiUpdateTimeAssist.c)
 *     KiGetPendingTick @ 0x14012AE9C (KiGetPendingTick.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     KeFindFirstSetRightAffinityEx @ 0x140202C60 (KeFindFirstSetRightAffinityEx.c)
 *     KiAdjustTimersAfterDripsExit @ 0x1402033D8 (KiAdjustTimersAfterDripsExit.c)
 *     KiResetForceIdle @ 0x14020C668 (KiResetForceIdle.c)
 *     ExRecordOneTimerExpiry @ 0x1402867C4 (ExRecordOneTimerExpiry.c)
 */

void __fastcall KeResumeClockTimerFromIdle(_DWORD *a1)
{
  struct _KPRCB *CurrentPrcb; // rbx
  char v3; // si
  __int64 v4; // rcx
  signed __int32 v5; // eax
  __int64 v6; // rax
  struct _KPRCB *v7; // rax
  unsigned __int64 v8; // rbp
  char v9; // r14
  __int64 Number; // r14
  int v11; // ecx
  __int32 v12; // edi
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  _BOOL8 v16; // rcx
  __int64 v17; // [rsp+30h] [rbp-68h] BYREF
  __int64 v18; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v19[8]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v20[8]; // [rsp+48h] [rbp-50h] BYREF
  _QWORD v21[2]; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v22; // [rsp+60h] [rbp-38h] BYREF
  int v23; // [rsp+68h] [rbp-30h]

  if ( (_BYTE)KiDynamicTickDisableReason )
    return;
  CurrentPrcb = KeGetCurrentPrcb();
  v3 = 0;
  if ( a1 )
    *a1 = -1;
  v4 = 3LL;
  while ( 1 )
  {
    v5 = KiClockState;
    if ( KiClockState == 1 )
    {
      v5 = _InterlockedCompareExchange(&KiClockState, 3, 1);
      if ( v5 == 1 )
        break;
    }
    if ( v5 != 3 )
      goto LABEL_7;
    _mm_pause();
  }
  KiUpdateTimeAssist(0LL, &v17, v20);
  v8 = v17;
  KiClockTimerOneShotEndTime = v17;
  v9 = off_1403535D8[0]();
  if ( KiClockLatencyMeasurementEnabled )
  {
    if ( a1 && KiClockTimerOwner == CurrentPrcb->Number && v8 >= KiClockTimerNextTickTime && v9 )
      *a1 = v8 - KiClockTimerNextTickTime;
    KiClockLatencyMeasurementEnabled = 0;
  }
  if ( a1
    && KiClockTimerOwner == CurrentPrcb->Number
    && v8 >= KiClockTimerNextTickTime
    && (unsigned __int8)off_1403535D8[0]() )
  {
    *a1 = v8 - KiClockTimerNextTickTime;
  }
  KiClockLatencyMeasurementEnabled = 0;
  if ( v8 - KiClockTimerOneShotStartTime < qword_140370D08 )
    qword_140370D08 = v8 - KiClockTimerOneShotStartTime;
  if ( v8 - KiClockTimerOneShotStartTime > qword_140370D00 )
    qword_140370D00 = v8 - KiClockTimerOneShotStartTime;
  if ( KiConsiderTimerRebasing )
  {
    if ( v9 && v8 >= qword_140371298 )
      ExRecordOneTimerExpiry(
        *(unsigned __int8 *)((qword_140371290 & 0xFFFFFFFFFFFFFFFEuLL) - 46),
        *(unsigned __int8 *)((qword_140371290 & 0xFFFFFFFFFFFFFFFEuLL) - 45));
    KiAdjustTimersAfterDripsExit(CurrentPrcb, v8);
    KiConsiderTimerRebasing = 0;
  }
  if ( !KiClockTimerPerCpu
    || (KeQuerySystemAllowedCpuSetAffinity(KiClockOwnerAllowedCpuSet, &KiClockOwnerAllowedCpuSetVersion),
        Number = CurrentPrcb->Number,
        ((KiClockOwnerAllowedCpuSet[((unsigned int)KiProcessorIndexToNumberMappingTable[Number] >> 6) + 1] >> (KiProcessorIndexToNumberMappingTable[Number] & 0x3F)) & 1) == 0)
    && (LODWORD(Number) = KeFindFirstSetRightAffinityEx(&KiIntSteerMask), (_DWORD)Number == -1) )
  {
    LODWORD(Number) = CurrentPrcb->Number;
  }
  v11 = CurrentPrcb->Number;
  if ( v11 != (_DWORD)Number )
  {
    v3 = 1;
LABEL_40:
    ++qword_140370CF8;
    v12 = 2;
    KiEventClockStateChange(2LL, 1LL, 0LL, 0LL);
    if ( v3 )
    {
      KiClockTimerOwner = Number;
      KiSendClockInterruptToClockOwner(v15, v14);
    }
    goto LABEL_35;
  }
  if ( v8 + (unsigned int)KiLastRequestedTimeIncrement > KiClockTimerNextTickTime )
    goto LABEL_40;
  if ( KiClockTimerPerCpu )
  {
    CurrentPrcb->ClockOwner = 1;
    KiClockTimerOwner = v11;
    if ( !(unsigned __int8)KiGetPendingTick() )
      off_1403535C0[0]();
  }
  v18 = (unsigned int)KiLastRequestedTimeIncrement;
  v12 = 0;
  ((void (__fastcall *)(_QWORD, _QWORD, _BYTE *))off_1403535D0[0])(0LL, (unsigned int)KiLastRequestedTimeIncrement, v19);
  LOBYTE(v13) = 1;
  KiSetPendingTick(v13);
  KiClockTimerNextTickTime = v8 + (unsigned int)KeTimeIncrement;
  KiEventClockStateChange(0LL, 1LL, v19, &v18);
LABEL_35:
  if ( KiForceIdleReset )
  {
    KiForceIdleReset = 0;
    v16 = (unsigned __int8)off_1403535D8[0]() == 0;
    KiResetForceIdle(v16, 0LL);
  }
  v4 = (unsigned int)KiClockTimerOwner;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x100000) != 0 )
  {
    v23 = KiClockTimerOwner;
    v21[0] = &v22;
    v22 = v8;
    v21[1] = 16LL;
    EtwTraceKernelEvent((unsigned int)v21, 1, 1074790400, 3928, 1538);
  }
  _InterlockedExchange(&KiClockState, v12);
LABEL_7:
  v6 = (unsigned int)KiClockTimerOwner;
  if ( KiClockTimerOwner == CurrentPrcb->Number )
  {
    if ( CurrentPrcb->ClockOwner )
    {
LABEL_14:
      if ( KiClockTimerPerCpu )
        v7 = KeGetCurrentPrcb();
      else
        v7 = (struct _KPRCB *)KiProcessorBlock[v6];
      if ( (v7->PendingTickFlags & 1) == 0 )
        ((void (__fastcall *)(__int64))off_1403535C0[0])(v4);
      goto LABEL_9;
    }
    CurrentPrcb->ClockOwner = 1;
  }
  if ( CurrentPrcb->ClockOwner )
    goto LABEL_14;
LABEL_9:
  if ( !CurrentPrcb->ClockOwner && (CurrentPrcb->PendingTickFlags & 1) != 0 )
  {
    ((void (__fastcall *)(__int64))off_1403535C8[0])(v4);
    KiSetPendingTick(0LL);
  }
}
