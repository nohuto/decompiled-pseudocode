/*
 * XREFs of KiGetNextTimerExpirationDueTime @ 0x14010F698
 * Callers:
 *     PpmIdlePrepare @ 0x140099130 (PpmIdlePrepare.c)
 *     KePrepareClockTimerForIdle @ 0x14010F380 (KePrepareClockTimerForIdle.c)
 *     PpmIdleSelectStates @ 0x14013A6A0 (PpmIdleSelectStates.c)
 *     KeEstimateClockTickDuration @ 0x140203110 (KeEstimateClockTickDuration.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x140090600 (KeIsEmptyAffinityEx.c)
 *     KiFindNextTimerDueTime @ 0x14009A4F0 (KiFindNextTimerDueTime.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExGetNextWakeTimeForDeepSleep @ 0x14028649C (ExGetNextWakeTimeForDeepSleep.c)
 */

int *__fastcall KiGetNextTimerExpirationDueTime(
        __int64 a1,
        char a2,
        unsigned __int64 a3,
        char a4,
        unsigned __int64 *a5,
        int *a6)
{
  unsigned __int64 v6; // rbx
  int v11; // edi
  unsigned __int64 NextWakeTimeForDeepSleep; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // r8
  char v15; // dl
  unsigned __int64 v16; // rax
  int *result; // rax
  unsigned __int64 v18; // rax

  v6 = 0LL;
  if ( *(_QWORD *)(a1 + 16) )
  {
    v11 = 1;
    goto LABEL_19;
  }
  if ( !*(_BYTE *)(a1 + 33) && !KiSerializeTimerExpiration && PoSkipTickMode == 2 )
  {
    v11 = 2;
    goto LABEL_19;
  }
  v11 = 4;
  if ( a4 )
    NextWakeTimeForDeepSleep = ExGetNextWakeTimeForDeepSleep(a1);
  else
    NextWakeTimeForDeepSleep = KiFindNextTimerDueTime(a1, a3, a2);
  v13 = 0x140000000uLL;
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
      v13 = v18 & 0x3F;
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
    v14 = -1LL;
    v15 = 0;
    v13 = (a4 != 0) + 2LL;
    do
    {
      if ( qword_140371250[3 * v13] < v14 )
      {
        v14 = qword_140371250[3 * v13];
        if ( v13 == 3 )
          v15 = 1;
      }
      ++v13;
    }
    while ( v13 <= 3 );
    if ( v14 < v6 )
    {
      v11 = 6;
      v6 = v14;
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
          v13 = (unsigned int)(10000 * KiDebugPollInterval);
          if ( v6 - a3 > v13 )
          {
            v6 = v13 + a3;
            v11 = 8;
          }
        }
      }
    }
  }
  if ( *(_BYTE *)(a1 + 33) )
  {
    v16 = ((__int64 (__fastcall *)(__int64))off_1403536A8[0])(v13);
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
LABEL_19:
  *a5 = v6;
  result = a6;
  *a6 = v11;
  return result;
}
