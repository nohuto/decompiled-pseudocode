/*
 * XREFs of KiGetNextTimerExpirationDueTime @ 0x1400F96E0
 * Callers:
 *     KePrepareClockTimerForIdle @ 0x140067B60 (KePrepareClockTimerForIdle.c)
 *     PpmIdlePrepare @ 0x1400F60C0 (PpmIdlePrepare.c)
 *     KeEstimateClockTickDuration @ 0x14015BF20 (KeEstimateClockTickDuration.c)
 * Callees:
 *     KiFindNextTimerDueTime @ 0x1400F70A0 (KiFindNextTimerDueTime.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExGetNextWakeTimeForDeepSleep @ 0x14025CB60 (ExGetNextWakeTimeForDeepSleep.c)
 */

int *__fastcall KiGetNextTimerExpirationDueTime(
        __int64 a1,
        char a2,
        unsigned __int64 a3,
        char a4,
        unsigned __int64 *a5,
        int *a6)
{
  unsigned __int16 v6; // bx
  unsigned __int64 v11; // rsi
  int v12; // r14d
  unsigned __int64 NextWakeTimeForDeepSleep; // rax
  unsigned __int64 v14; // r8
  unsigned int v15; // eax
  char v16; // r9
  __int64 i; // rcx
  unsigned __int64 v18; // rax
  int *result; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx

  v6 = 0;
  v11 = 0LL;
  if ( *(_QWORD *)(a1 + 16) )
  {
    v12 = 1;
    goto LABEL_23;
  }
  if ( !*(_BYTE *)(a1 + 33) && PoSkipTickMode == 2 && !KiSerializeTimerExpiration )
  {
    v12 = 2;
    goto LABEL_23;
  }
  v12 = 4;
  if ( a4 )
    NextWakeTimeForDeepSleep = ExGetNextWakeTimeForDeepSleep(a1);
  else
    NextWakeTimeForDeepSleep = KiFindNextTimerDueTime(a1, a3, a2);
  v11 = NextWakeTimeForDeepSleep;
  if ( KiGroupSchedulingEnabled )
  {
    if ( a2 )
    {
      if ( KiGroupSchedulingOverQuotaMask[0] )
      {
        while ( !qword_14033FEC8[v6] )
        {
          if ( ++v6 >= KiGroupSchedulingOverQuotaMask[0] )
            goto LABEL_10;
        }
        goto LABEL_32;
      }
    }
    else
    {
      v20 = (unsigned int)KiProcessorIndexToNumberMappingTable[*(unsigned int *)(a1 + 36)];
      if ( (((unsigned __int64)qword_14033FEC8[v20 >> 6] >> (v20 & 0x3F)) & 1) != 0 )
      {
LABEL_32:
        if ( KiGenerationEndTick * (unsigned __int64)KeMaximumIncrement < v11 )
        {
          v11 = KiGenerationEndTick * KeMaximumIncrement;
          v12 = 5;
        }
      }
    }
  }
LABEL_10:
  if ( *(_BYTE *)(a1 + 33) )
  {
    v14 = -1LL;
    v15 = 3;
    if ( !a4 )
      v15 = 2;
    v16 = 0;
    for ( i = v15; i <= 3; ++i )
    {
      if ( qword_140356750[3 * i] < v14 )
      {
        v14 = qword_140356750[3 * i];
        if ( i == 3 )
          v16 = 1;
      }
    }
    if ( v14 < v11 )
    {
      v11 = v14;
      v12 = 6;
      if ( v16 )
        v12 = 7;
    }
  }
  if ( a2 )
  {
    if ( !(_BYTE)KdDebuggerNotPresent )
    {
      if ( (_BYTE)KdDebuggerEnabled )
      {
        if ( a3 < v11 )
        {
          v21 = (unsigned int)(10000 * KiDebugPollInterval);
          if ( v11 - a3 > v21 )
          {
            v11 = v21 + a3;
            v12 = 8;
          }
        }
      }
    }
  }
  if ( *(_BYTE *)(a1 + 33) )
  {
    v18 = off_14033B678[0]();
    if ( v18 )
    {
      if ( v11 > v18 )
      {
        v11 = v18;
        v12 = 9;
        if ( a3 > v18 )
          v11 = a3;
      }
    }
  }
LABEL_23:
  *a5 = v11;
  result = a6;
  *a6 = v12;
  return result;
}
