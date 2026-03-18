/*
 * XREFs of KeResumeClockTimerFromIdle @ 0x1400F6D60
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1400F4810 (PpmIdleExecuteTransition.c)
 * Callees:
 *     KiUpdateTimeAssist @ 0x14001AF68 (KiUpdateTimeAssist.c)
 *     KiGetPendingTick @ 0x14002DC20 (KiGetPendingTick.c)
 *     KiSendClockInterruptToClockOwner @ 0x14002EA08 (KiSendClockInterruptToClockOwner.c)
 *     KeQuerySystemAllowedCpuSetAffinity @ 0x140045000 (KeQuerySystemAllowedCpuSetAffinity.c)
 *     KiEventClockStateChange @ 0x140068030 (KiEventClockStateChange.c)
 *     KiSetPendingTick @ 0x140068070 (KiSetPendingTick.c)
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     KeFindFirstSetRightAffinityEx @ 0x1401FCE60 (KeFindFirstSetRightAffinityEx.c)
 *     KiAdjustTimersAfterDripsExit @ 0x1401FD43C (KiAdjustTimersAfterDripsExit.c)
 *     KiResetForceIdle @ 0x140206078 (KiResetForceIdle.c)
 *     ExRecordOneTimerExpiry @ 0x14025CEE8 (ExRecordOneTimerExpiry.c)
 */

char __fastcall KeResumeClockTimerFromIdle(_DWORD *a1)
{
  unsigned __int64 v1; // rax
  struct _KPRCB *CurrentPrcb; // rbx
  char v4; // si
  __int64 v5; // rcx
  signed __int32 v6; // eax
  unsigned __int64 v7; // rbp
  char v8; // r14
  unsigned __int64 v9; // rdx
  int v10; // ecx
  char v11; // cl
  __int64 Number; // r14
  int v13; // r8d
  unsigned int v14; // r9d
  __int32 v15; // edi
  char v16; // al
  _BOOL8 v17; // rcx
  __int64 v19; // [rsp+30h] [rbp-68h] BYREF
  __int64 v20; // [rsp+38h] [rbp-60h] BYREF
  __int64 v21; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v22[8]; // [rsp+48h] [rbp-50h] BYREF
  _QWORD v23[2]; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v24; // [rsp+60h] [rbp-38h] BYREF
  int v25; // [rsp+68h] [rbp-30h]

  LOBYTE(v1) = KiDynamicTickDisableReason;
  if ( (_BYTE)KiDynamicTickDisableReason )
    return v1;
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = 0;
  if ( a1 )
    *a1 = -1;
  v5 = 3LL;
  while ( 1 )
  {
    v6 = KiClockState;
    if ( KiClockState == 1 )
    {
      v6 = _InterlockedCompareExchange(&KiClockState, 3, 1);
      if ( v6 == 1 )
        break;
    }
    if ( v6 != 3 )
      goto LABEL_7;
    _mm_pause();
  }
  KiUpdateTimeAssist(0LL, (__int64)&v19, (__int64)v22);
  v7 = v19;
  KiClockTimerOneShotEndTime = v19;
  v8 = off_14033B5A8[0]();
  v9 = KiClockTimerNextTickTime;
  v10 = KiClockTimerOwner;
  if ( KiClockLatencyMeasurementEnabled )
  {
    if ( a1 && KiClockTimerOwner == CurrentPrcb->Number && v7 >= KiClockTimerNextTickTime && v8 )
      *a1 = v7 - KiClockTimerNextTickTime;
    KiClockLatencyMeasurementEnabled = 0;
  }
  if ( a1 )
  {
    if ( v10 == CurrentPrcb->Number && v7 >= v9 )
    {
      v16 = off_14033B5A8[0]();
      v9 = KiClockTimerNextTickTime;
      if ( v16 )
        *a1 = v7 - KiClockTimerNextTickTime;
    }
  }
  KiClockLatencyMeasurementEnabled = 0;
  if ( v7 - KiClockTimerOneShotStartTime < qword_1403561E8 )
    qword_1403561E8 = v7 - KiClockTimerOneShotStartTime;
  if ( v7 - KiClockTimerOneShotStartTime > qword_1403561E0 )
    qword_1403561E0 = v7 - KiClockTimerOneShotStartTime;
  if ( KiConsiderTimerRebasing )
  {
    if ( v8 && v7 >= qword_140356798 )
      ExRecordOneTimerExpiry(
        *(unsigned __int8 *)((qword_140356790 & 0xFFFFFFFFFFFFFFFEuLL) - 46),
        *(unsigned __int8 *)((qword_140356790 & 0xFFFFFFFFFFFFFFFEuLL) - 45));
    KiAdjustTimersAfterDripsExit(CurrentPrcb, v7);
    v9 = KiClockTimerNextTickTime;
    KiConsiderTimerRebasing = 0;
  }
  v11 = KiClockTimerPerCpu;
  if ( KiClockTimerPerCpu )
  {
    KeQuerySystemAllowedCpuSetAffinity(&KiClockOwnerAllowedCpuSet, KiClockOwnerAllowedCpuSetVersion);
    Number = CurrentPrcb->Number;
    if ( ((*((_QWORD *)&KiClockOwnerAllowedCpuSet + ((unsigned int)KiProcessorIndexToNumberMappingTable[Number] >> 6)
                                                  + 1) >> (KiProcessorIndexToNumberMappingTable[Number] & 0x3F)) & 1) == 0 )
    {
      LODWORD(Number) = KeFindFirstSetRightAffinityEx(&KiIntSteerMask);
      if ( (_DWORD)Number == -1 )
        LODWORD(Number) = CurrentPrcb->Number;
    }
    v9 = KiClockTimerNextTickTime;
    v11 = KiClockTimerPerCpu;
  }
  else
  {
    LODWORD(Number) = CurrentPrcb->Number;
  }
  v13 = CurrentPrcb->Number;
  if ( v13 != (_DWORD)Number )
  {
    v4 = 1;
LABEL_41:
    ++qword_1403561D8;
    v15 = 2;
    KiEventClockStateChange(2, 1, 0LL, 0LL);
    if ( v4 )
    {
      KiClockTimerOwner = Number;
      KiSendClockInterruptToClockOwner();
    }
    goto LABEL_35;
  }
  v14 = KiLastRequestedTimeIncrement;
  if ( (unsigned int)KiLastRequestedTimeIncrement + v7 > v9 )
    goto LABEL_41;
  if ( v11 )
  {
    CurrentPrcb->ClockOwner = 1;
    KiClockTimerOwner = v13;
    if ( !KiGetPendingTick() )
    {
      off_14033B590[0]();
      v14 = KiLastRequestedTimeIncrement;
    }
  }
  v20 = v14;
  v15 = 0;
  ((void (__fastcall *)(_QWORD, _QWORD, __int64 *))off_14033B5A0[0])(0LL, v14, &v21);
  KiSetPendingTick(1);
  KiClockTimerNextTickTime = v7 + (unsigned int)KeTimeIncrement;
  KiEventClockStateChange(0, 1, &v21, &v20);
LABEL_35:
  if ( KiForceIdleReset )
  {
    KiForceIdleReset = 0;
    v17 = (unsigned __int8)off_14033B5A8[0]() == 0;
    KiResetForceIdle(v17, 0LL);
  }
  v5 = (unsigned int)KiClockTimerOwner;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x100000) != 0 )
  {
    v25 = KiClockTimerOwner;
    v23[0] = &v24;
    v24 = v7;
    v23[1] = 16LL;
    EtwTraceKernelEvent((int)v23, 1, 0x40100000u, 3928, 1538);
  }
  _InterlockedExchange(&KiClockState, v15);
LABEL_7:
  v1 = (unsigned int)KiClockTimerOwner;
  if ( KiClockTimerOwner == CurrentPrcb->Number )
  {
    if ( CurrentPrcb->ClockOwner )
    {
LABEL_14:
      if ( KiClockTimerPerCpu )
        v1 = (unsigned __int64)KeGetCurrentPrcb();
      else
        v1 = KiProcessorBlock[v1];
      LOBYTE(v1) = *(_BYTE *)(v1 + 34);
      if ( (v1 & 1) == 0 )
        LOBYTE(v1) = ((__int64 (__fastcall *)(__int64))off_14033B590[0])(v5);
      goto LABEL_9;
    }
    CurrentPrcb->ClockOwner = 1;
  }
  if ( CurrentPrcb->ClockOwner )
    goto LABEL_14;
LABEL_9:
  if ( !CurrentPrcb->ClockOwner && (CurrentPrcb->PendingTickFlags & 1) != 0 )
  {
    ((void (__fastcall *)(__int64))off_14033B598[0])(v5);
    LOBYTE(v1) = KiSetPendingTick(0);
  }
  return v1;
}
