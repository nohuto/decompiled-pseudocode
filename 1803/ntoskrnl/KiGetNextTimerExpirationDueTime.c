/*
 * XREFs of KiGetNextTimerExpirationDueTime @ 0x140035180
 * Callers:
 *     KePrepareClockTimerForIdle @ 0x1400396A0 (KePrepareClockTimerForIdle.c)
 *     PpmIdlePrepare @ 0x14010DF60 (PpmIdlePrepare.c)
 *     PpmIdleSelectStates @ 0x14015F520 (PpmIdleSelectStates.c)
 *     KeEstimateClockTickDuration @ 0x140240790 (KeEstimateClockTickDuration.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x1400352E0 (KeIsEmptyAffinityEx.c)
 *     KiFindNextTimerDueTime @ 0x14010F360 (KiFindNextTimerDueTime.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExGetNextWakeTimeForDeepSleep @ 0x1402BAB9C (ExGetNextWakeTimeForDeepSleep.c)
 */

int *__fastcall KiGetNextTimerExpirationDueTime(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int64 a3,
        char a4,
        unsigned __int64 *a5,
        int *a6)
{
  unsigned __int64 v6; // rdi
  int v11; // r14d
  __int64 NextWakeTimeForDeepSleep; // rax
  unsigned __int64 v13; // r8
  __int64 v14; // rax
  char v15; // r9
  unsigned __int64 v16; // rax
  int *result; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rcx

  v6 = 0LL;
  if ( *(_QWORD *)(a1 + 16) )
  {
    v11 = 1;
    goto LABEL_21;
  }
  if ( !*(_BYTE *)(a1 + 33) && !KiSerializeTimerExpiration && PoSkipTickMode == 2 )
  {
    v11 = 2;
    goto LABEL_21;
  }
  v11 = 4;
  if ( a4 )
    NextWakeTimeForDeepSleep = ExGetNextWakeTimeForDeepSleep();
  else
    NextWakeTimeForDeepSleep = KiFindNextTimerDueTime(a1, a3, a2);
  v6 = NextWakeTimeForDeepSleep;
  if ( KiGroupSchedulingEnabled )
  {
    if ( a2 )
    {
      if ( (unsigned int)KeIsEmptyAffinityEx(&KiGroupSchedulingOverQuotaMask) )
        goto LABEL_8;
    }
    else
    {
      v18 = (unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a1 + 36)];
      if ( ((*((_QWORD *)&KiGroupSchedulingOverQuotaMask + (v18 >> 6) + 1) >> (v18 & 0x3F)) & 1) == 0 )
        goto LABEL_8;
    }
    if ( KiGenerationEndTick * (unsigned __int64)KeMaximumIncrement < v6 )
    {
      v6 = KiGenerationEndTick * KeMaximumIncrement;
      v11 = 5;
    }
  }
LABEL_8:
  if ( *(_BYTE *)(a1 + 33) )
  {
    v13 = -1LL;
    v14 = 3LL;
    if ( !a4 )
      v14 = 2LL;
    v15 = 0;
    do
    {
      if ( qword_1403B44B0[3 * v14] < v13 )
      {
        v13 = qword_1403B44B0[3 * v14];
        if ( v14 == 3 )
          v15 = 1;
      }
      ++v14;
    }
    while ( v14 <= 3 );
    if ( v13 < v6 )
    {
      v6 = v13;
      v11 = 6;
      if ( v15 )
        v11 = 7;
    }
  }
  if ( a2 )
  {
    if ( !(_BYTE)KdDebuggerNotPresent )
    {
      if ( (_BYTE)KdDebuggerEnabled )
      {
        if ( a3 < v6 )
        {
          v19 = (unsigned int)(10000 * KiDebugPollInterval);
          if ( v6 - a3 > v19 )
          {
            v6 = v19 + a3;
            v11 = 8;
          }
        }
      }
    }
  }
  if ( *(_BYTE *)(a1 + 33) )
  {
    v16 = off_140398A48[0]();
    if ( v16 )
    {
      if ( v6 > v16 )
      {
        v6 = v16;
        v11 = 9;
        if ( a3 > v16 )
          v6 = a3;
      }
    }
  }
LABEL_21:
  *a5 = v6;
  result = a6;
  *a6 = v11;
  return result;
}
