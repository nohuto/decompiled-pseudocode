/*
 * XREFs of KePrepareClockTimerForIdle @ 0x140067B60
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1400F4810 (PpmIdleExecuteTransition.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140044EC0 (RtlGetInterruptTimePrecise.c)
 *     KeIsForceIdleEngaged @ 0x140067DD8 (KeIsForceIdleEngaged.c)
 *     PoAllProcessorsDeepIdle @ 0x140067DF8 (PoAllProcessorsDeepIdle.c)
 *     KiEventClockStateChange @ 0x140068030 (KiEventClockStateChange.c)
 *     KiSetPendingTick @ 0x140068070 (KiSetPendingTick.c)
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     KiGetNextTimerExpirationDueTime @ 0x1400F96E0 (KiGetNextTimerExpirationDueTime.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     KiResetForceIdle @ 0x140206078 (KiResetForceIdle.c)
 *     PoTraceDynamicTickDisabled @ 0x14022FAC8 (PoTraceDynamicTickDisabled.c)
 */

void __fastcall KePrepareClockTimerForIdle(unsigned __int8 a1, unsigned __int64 a2, char a3)
{
  int v3; // ebx
  struct _KPRCB *CurrentPrcb; // r14
  unsigned __int64 v6; // rdi
  unsigned __int32 v8; // r12d
  int v9; // edx
  __int64 v10; // r13
  unsigned __int64 v11; // r15
  LARGE_INTEGER InterruptTimePrecise; // r13
  unsigned __int64 v13; // r15
  __int64 v14; // rcx
  bool v15; // cf
  __int64 v16; // rcx
  __int64 v17; // [rsp+30h] [rbp-78h] BYREF
  int v18; // [rsp+38h] [rbp-70h] BYREF
  unsigned __int64 v19; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v20[8]; // [rsp+48h] [rbp-60h] BYREF
  unsigned __int64 v21; // [rsp+50h] [rbp-58h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+58h] [rbp-50h] BYREF
  _QWORD v23[2]; // [rsp+60h] [rbp-48h] BYREF

  v17 = 0LL;
  v3 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = a2;
  if ( (_BYTE)KiDynamicTickDisableReason )
    return;
  if ( a2 <= (unsigned int)KiLastRequestedTimeIncrement )
  {
    v3 = 2;
LABEL_4:
    v18 = v3;
    if ( (DWORD2(PerfGlobalGroupMask) & 0x100000) != 0 )
    {
      v23[1] = 1LL;
      v23[0] = &v18;
      EtwTraceKernelEvent((unsigned int)v23, 1, 1074790400, 3929, 1538);
    }
    return;
  }
  if ( a2 > KiMaxDynamicTickDuration )
  {
    ++dword_1403561CC;
    v6 = KiMaxDynamicTickDuration;
  }
  v8 = _InterlockedExchange(&KiClockState, 3);
  if ( !(unsigned __int8)PoAllProcessorsDeepIdle() )
  {
    v3 = 1;
    goto LABEL_32;
  }
  if ( !a1 && (unsigned __int8)KeIsForceIdleEngaged() )
  {
    v3 = 6;
    goto LABEL_32;
  }
  LOBYTE(v9) = 1;
  v10 = MEMORY[0xFFFFF78000000008];
  KiGetNextTimerExpirationDueTime((_DWORD)CurrentPrcb, v9, MEMORY[0xFFFFF78000000008], a1, (__int64)&v21, (__int64)v20);
  v11 = v21;
  if ( a3 )
  {
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  }
  else
  {
    if ( v21 <= v10 + (unsigned __int64)(unsigned int)KiLastRequestedTimeIncrement )
    {
      v3 = 2;
      goto LABEL_32;
    }
    if ( !a1 && KiClockTimerHighLatency )
    {
      if ( KiClockTimerOneShotStartTime )
      {
        if ( (unsigned __int64)(KiClockTimerOneShotEndTime - KiClockTimerOneShotStartTime) < 0x2710 )
          ++KiDynamicTickCancellations;
        KiClockTimerOneShotStartTime = 0LL;
      }
      if ( v10 - KiClockTimerOneShotEndTime >= (unsigned __int64)KeMaximumIncrement )
      {
        KiDynamicTickCancellations = 0;
      }
      else if ( (unsigned int)KiDynamicTickCancellations > 3 )
      {
        v3 = 3;
        goto LABEL_32;
      }
    }
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
    if ( v11 <= InterruptTimePrecise.QuadPart + (unsigned __int64)(unsigned int)KiLastRequestedTimeIncrement )
    {
LABEL_37:
      v3 = 4;
      goto LABEL_32;
    }
  }
  if ( v11 <= InterruptTimePrecise.QuadPart + (unsigned __int64)(unsigned int)KiMinDynamicTickDuration )
    goto LABEL_37;
  v13 = v11 - InterruptTimePrecise.QuadPart;
  if ( v13 > v6 )
    v13 = v6;
  v19 = v13;
  if ( a3 && !a1 )
  {
    v13 = v19;
    if ( v19 > (unsigned int)KiClockLatencyMaxDynamicTickDuration )
      v13 = (unsigned int)KiClockLatencyMaxDynamicTickDuration;
    v19 = v13;
  }
  if ( ((int (__fastcall *)(__int64, unsigned __int64, __int64 *))off_14033B5A0[0])(1LL, v13, &v17) < 0 )
  {
    ((void (__fastcall *)(_QWORD, _QWORD, __int64 *))off_14033B5A0[0])(
      0LL,
      (unsigned int)KiLastRequestedTimeIncrement,
      &v17);
    LOBYTE(v16) = 1;
    KiSetPendingTick(v16);
    v3 = 5;
    KiDynamicTickDisableReason = 2;
    PoTraceDynamicTickDisabled();
    if ( (unsigned __int8)KeIsForceIdleEngaged() )
      KiResetForceIdle(4LL, 0LL);
  }
  else
  {
    LOBYTE(v14) = 1;
    KiSetPendingTick(v14);
    KiClockTimerOneShotStartTime = InterruptTimePrecise.QuadPart;
    KiEventClockStateChange(1LL, v8, &v17, &v19);
    if ( a3 )
      KiClockLatencyMeasurementEnabled = 1;
    if ( (unsigned __int8)KeIsForceIdleEngaged() )
      KiForceIdleReset = 1;
    ++qword_1403561D0;
    v8 = 1;
    v15 = v13 < qword_140356208;
    CurrentPrcb->ClockOwner = 0;
    if ( v15 )
      qword_140356208 = v13;
    if ( v13 > qword_140356200 )
      qword_140356200 = v13;
    if ( a1 )
      KiConsiderTimerRebasing = 1;
  }
  KiClockTimerNextTickTime = InterruptTimePrecise.QuadPart + v17;
LABEL_32:
  if ( v8 != 4 )
    _InterlockedExchange(&KiClockState, v8);
  if ( v3 )
    goto LABEL_4;
}
