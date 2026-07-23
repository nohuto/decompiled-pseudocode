/*
 * XREFs of KePrepareClockTimerForIdle @ 0x14010F380
 * Callers:
 *     PpmIdleExecuteTransition @ 0x140096C70 (PpmIdleExecuteTransition.c)
 * Callees:
 *     KeIsForceIdleEngaged @ 0x14006238C (KeIsForceIdleEngaged.c)
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     RtlGetInterruptTimePrecise @ 0x1400E48D0 (RtlGetInterruptTimePrecise.c)
 *     PoAllProcessorsDeepIdle @ 0x14010F5D4 (PoAllProcessorsDeepIdle.c)
 *     KiGetNextTimerExpirationDueTime @ 0x14010F698 (KiGetNextTimerExpirationDueTime.c)
 *     KiEventClockStateChange @ 0x14010F7E8 (KiEventClockStateChange.c)
 *     KiSetPendingTick @ 0x14010F828 (KiSetPendingTick.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     KiResetForceIdle @ 0x14020C668 (KiResetForceIdle.c)
 *     PoTraceDynamicTickDisabled @ 0x1402442E0 (PoTraceDynamicTickDisabled.c)
 */

void __fastcall KePrepareClockTimerForIdle(char a1, unsigned __int64 a2, char a3)
{
  int v3; // edi
  unsigned __int64 v5; // r15
  unsigned __int32 v7; // esi
  int v8; // edx
  int v9; // r9d
  int v10; // r11d
  __int64 v11; // r14
  unsigned __int64 v12; // rbx
  LARGE_INTEGER InterruptTimePrecise; // r14
  unsigned __int64 v14; // rbx
  __int64 v15; // rcx
  bool v16; // cf
  __int64 v17; // rcx
  __int64 v18; // [rsp+30h] [rbp-50h] BYREF
  int v19; // [rsp+38h] [rbp-48h] BYREF
  unsigned __int64 v20; // [rsp+40h] [rbp-40h] BYREF
  char v21[8]; // [rsp+48h] [rbp-38h] BYREF
  unsigned __int64 v22; // [rsp+50h] [rbp-30h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+58h] [rbp-28h] BYREF
  struct _KPRCB *CurrentPrcb; // [rsp+60h] [rbp-20h]
  int *v25; // [rsp+68h] [rbp-18h] BYREF
  int v26; // [rsp+70h] [rbp-10h]
  int v27; // [rsp+74h] [rbp-Ch]

  v18 = 0LL;
  v3 = 0;
  v5 = a2;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( (_BYTE)KiDynamicTickDisableReason )
    return;
  if ( a2 <= (unsigned int)KiLastRequestedTimeIncrement )
  {
    v3 = 2;
LABEL_4:
    v19 = v3;
    if ( (DWORD2(PerfGlobalGroupMask) & 0x100000) != 0 )
    {
      v27 = 0;
      v25 = &v19;
      v26 = 1;
      EtwTraceKernelEvent((__int64)&v25, 1u, 0x40100000u, 0xF59u, 0x602u);
    }
    return;
  }
  if ( a2 > KiMaxDynamicTickDuration )
  {
    ++dword_140370CEC;
    v5 = KiMaxDynamicTickDuration;
  }
  v7 = _InterlockedExchange(&KiClockState, 3);
  if ( !(unsigned __int8)PoAllProcessorsDeepIdle() )
  {
    v3 = 1;
    goto LABEL_32;
  }
  if ( !a1 && KeIsForceIdleEngaged() )
  {
    v3 = 6;
    goto LABEL_32;
  }
  LOBYTE(v9) = a1;
  LOBYTE(v8) = 1;
  v11 = MEMORY[0xFFFFF78000000008];
  KiGetNextTimerExpirationDueTime(v10, v8, MEMORY[0xFFFFF78000000008], v9, (__int64)&v22, (__int64)v21);
  v12 = v22;
  if ( a3 )
  {
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  }
  else
  {
    if ( v22 <= v11 + (unsigned __int64)(unsigned int)KiLastRequestedTimeIncrement )
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
      if ( v11 - KiClockTimerOneShotEndTime >= (unsigned __int64)KeMaximumIncrement )
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
    if ( v12 <= InterruptTimePrecise.QuadPart + (unsigned __int64)(unsigned int)KiLastRequestedTimeIncrement )
    {
LABEL_37:
      v3 = 4;
      goto LABEL_32;
    }
  }
  if ( v12 <= InterruptTimePrecise.QuadPart + (unsigned __int64)(unsigned int)KiMinDynamicTickDuration )
    goto LABEL_37;
  v14 = v12 - InterruptTimePrecise.QuadPart;
  if ( v14 > v5 )
    v14 = v5;
  v20 = v14;
  if ( a3 && !a1 )
  {
    v14 = v20;
    if ( v20 > (unsigned int)KiClockLatencyMaxDynamicTickDuration )
      v14 = (unsigned int)KiClockLatencyMaxDynamicTickDuration;
    v20 = v14;
  }
  if ( ((int (__fastcall *)(__int64, unsigned __int64, __int64 *))off_1403535D0[0])(1LL, v14, &v18) < 0 )
  {
    ((void (__fastcall *)(_QWORD, _QWORD, __int64 *))off_1403535D0[0])(
      0LL,
      (unsigned int)KiLastRequestedTimeIncrement,
      &v18);
    LOBYTE(v17) = 1;
    KiSetPendingTick(v17);
    v3 = 5;
    KiDynamicTickDisableReason = 2;
    PoTraceDynamicTickDisabled();
    if ( KeIsForceIdleEngaged() )
      KiResetForceIdle(4LL, 0LL);
  }
  else
  {
    LOBYTE(v15) = 1;
    KiSetPendingTick(v15);
    KiClockTimerOneShotStartTime = InterruptTimePrecise.QuadPart;
    KiEventClockStateChange(1LL, v7, &v18, &v20);
    if ( a3 )
      KiClockLatencyMeasurementEnabled = 1;
    if ( KeIsForceIdleEngaged() )
      KiForceIdleReset = 1;
    v7 = 1;
    ++qword_140370CF0;
    v16 = v14 < qword_140370D28;
    CurrentPrcb->ClockOwner = 0;
    if ( v16 )
      qword_140370D28 = v14;
    if ( v14 > qword_140370D20 )
      qword_140370D20 = v14;
    if ( a1 )
      KiConsiderTimerRebasing = 1;
  }
  KiClockTimerNextTickTime = InterruptTimePrecise.QuadPart + v18;
LABEL_32:
  if ( v7 != 4 )
    _InterlockedExchange(&KiClockState, v7);
  if ( v3 )
    goto LABEL_4;
}
