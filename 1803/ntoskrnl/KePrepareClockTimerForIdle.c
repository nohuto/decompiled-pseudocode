/*
 * XREFs of KePrepareClockTimerForIdle @ 0x1400396A0
 * Callers:
 *     PpmIdleExecuteTransition @ 0x14010BC10 (PpmIdleExecuteTransition.c)
 * Callees:
 *     KiEventClockStateChange @ 0x140005D9C (KiEventClockStateChange.c)
 *     KiSetPendingTick @ 0x140005DDC (KiSetPendingTick.c)
 *     KiGetNextTimerExpirationDueTime @ 0x140035180 (KiGetNextTimerExpirationDueTime.c)
 *     RtlGetInterruptTimePrecise @ 0x140035880 (RtlGetInterruptTimePrecise.c)
 *     KeIsForceIdleEngaged @ 0x1400382EC (KeIsForceIdleEngaged.c)
 *     PoAllProcessorsDeepIdle @ 0x14003AF40 (PoAllProcessorsDeepIdle.c)
 *     EtwTraceKernelEvent @ 0x1400C1C38 (EtwTraceKernelEvent.c)
 *     KiClockTimerOneShotReady @ 0x1400C6224 (KiClockTimerOneShotReady.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

void __fastcall KePrepareClockTimerForIdle(char a1, unsigned __int64 a2, char a3)
{
  int v3; // ebx
  struct _KPRCB *CurrentPrcb; // r14
  unsigned __int64 v6; // rdi
  __int32 v8; // r13d
  __int64 v9; // r15
  unsigned __int64 v10; // r12
  LARGE_INTEGER InterruptTimePrecise; // rdx
  unsigned __int64 v12; // r15
  LARGE_INTEGER v13; // rdi
  bool v14; // cf
  char v15; // r9
  __int64 *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  unsigned __int64 v19; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int64 v20; // [rsp+38h] [rbp-70h] BYREF
  int v21; // [rsp+40h] [rbp-68h] BYREF
  __int64 v22; // [rsp+48h] [rbp-60h] BYREF
  LARGE_INTEGER v23; // [rsp+50h] [rbp-58h]
  int v24; // [rsp+58h] [rbp-50h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+60h] [rbp-48h] BYREF
  _QWORD v26[2]; // [rsp+68h] [rbp-40h] BYREF

  v22 = 0LL;
  v3 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = a2;
  if ( KiDynamicTickInitialized && !(_BYTE)KiDynamicTickDisableReason )
  {
    if ( a2 <= (unsigned int)KiLastRequestedTimeIncrement )
    {
      v3 = 2;
LABEL_5:
      v21 = v3;
      if ( (DWORD2(PerfGlobalGroupMask) & 0x100000) != 0 )
      {
        v26[1] = 1LL;
        v26[0] = &v21;
        EtwTraceKernelEvent((unsigned int)v26, 1, 1074790400, 3929, 1538);
      }
      return;
    }
    if ( a2 > KiMaxDynamicTickDuration )
    {
      ++dword_1403B3DCC;
      v6 = KiMaxDynamicTickDuration;
    }
    v8 = _InterlockedExchange(&KiClockState, 3);
    if ( !(unsigned __int8)PoAllProcessorsDeepIdle() )
    {
      v3 = 1;
      goto LABEL_40;
    }
    if ( !a1 && KeIsForceIdleEngaged() )
    {
      v3 = 6;
    }
    else
    {
      v9 = MEMORY[0xFFFFF78000000008];
      KiGetNextTimerExpirationDueTime((__int64)CurrentPrcb, 1u, MEMORY[0xFFFFF78000000008], a1, &v19, &v24);
      v10 = v19;
      if ( a3 )
      {
        InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
        v23 = InterruptTimePrecise;
        goto LABEL_17;
      }
      if ( v19 <= v9 + (unsigned __int64)(unsigned int)KiLastRequestedTimeIncrement )
      {
        v3 = 2;
      }
      else
      {
        if ( a1 || (unsigned __int8)KiClockTimerOneShotReady(v9) )
        {
          InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
          v23 = InterruptTimePrecise;
          if ( v10 <= InterruptTimePrecise.QuadPart + (unsigned __int64)(unsigned int)KiLastRequestedTimeIncrement )
          {
LABEL_42:
            v3 = 4;
            goto LABEL_40;
          }
LABEL_17:
          if ( v10 > InterruptTimePrecise.QuadPart + (unsigned __int64)(unsigned int)KiMinDynamicTickDuration )
          {
            v12 = v10 - InterruptTimePrecise.QuadPart;
            v20 = v10 - InterruptTimePrecise.QuadPart;
            if ( v10 - InterruptTimePrecise.QuadPart > v6 )
            {
              v20 = v6;
              v12 = v6;
              v19 = v6 + InterruptTimePrecise.QuadPart;
            }
            if ( a3 )
            {
              if ( !a1 )
              {
                v12 = v20;
                if ( v20 > (unsigned int)KiClockLatencyMaxDynamicTickDuration )
                {
                  v12 = (unsigned int)KiClockLatencyMaxDynamicTickDuration;
                  v19 -= v20 - (unsigned int)KiClockLatencyMaxDynamicTickDuration;
                  v20 = (unsigned int)KiClockLatencyMaxDynamicTickDuration;
                }
              }
            }
            ((void (__fastcall *)(__int64, unsigned __int64, __int64 *))off_140398970[0])(1LL, v12, &v22);
            KiSetPendingTick(1);
            v13 = v23;
            KiClockTimerOneShotStartTime = v23.QuadPart;
            KiEventClockStateChange(1, v8, &v22, (__int64 *)&v20);
            if ( a3 )
              KiClockLatencyMeasurementEnabled = 1;
            if ( KeIsForceIdleEngaged() )
              KiForceIdleReset = 1;
            ++qword_1403B3DD0;
            v8 = 1;
            v14 = v12 < qword_1403B3E08;
            CurrentPrcb->ClockOwner = 0;
            if ( v14 )
              qword_1403B3E08 = v12;
            if ( v12 > qword_1403B3E00 )
              qword_1403B3E00 = v12;
            if ( a1 )
              KiConsiderTimerRebasing = 1;
            v15 = KiHrTimerActiveCount > 0;
            if ( (_DWORD)KeNumberProcessors_0 )
            {
              v16 = KiProcessorBlock;
              v17 = (unsigned int)KeNumberProcessors_0;
              do
              {
                v18 = *(_QWORD *)(*v16 + 25016);
                if ( v18 && (KiVelocityFlags & 0x40) != 0 && *(_BYTE *)(v18 + 27) != v15 )
                  *(_BYTE *)(v18 + 27) = v15;
                ++v16;
                --v17;
              }
              while ( v17 );
            }
            KiClockTimerNextTickTime = v13.QuadPart + v22;
            goto LABEL_36;
          }
          goto LABEL_42;
        }
        v3 = 3;
      }
    }
LABEL_40:
    if ( v8 == 4 )
    {
LABEL_37:
      if ( !v3 )
        return;
      goto LABEL_5;
    }
LABEL_36:
    _InterlockedExchange(&KiClockState, v8);
    goto LABEL_37;
  }
}
