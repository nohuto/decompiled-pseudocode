/*
 * XREFs of KeClearForceIdle @ 0x14020C1F4
 * Callers:
 *     PopDeepSleepSetDisengageReason @ 0x1400AF04C (PopDeepSleepSetDisengageReason.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     KeRemoveQueueDpcEx @ 0x140129650 (KeRemoveQueueDpcEx.c)
 *     KiResetForceIdle @ 0x14020C668 (KiResetForceIdle.c)
 *     KiSetForceIdleState @ 0x14020C768 (KiSetForceIdleState.c)
 */

char __fastcall KeClearForceIdle(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char result; // al
  int v5; // [rsp+30h] [rbp+8h] BYREF

  _disable();
  v5 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
  {
    do
    {
      KeYieldProcessorEx(&v5);
      result = KiForceIdleLock;
    }
    while ( KiForceIdleLock );
  }
  if ( KiForceIdleDisabled )
    goto LABEL_16;
  switch ( KiForceIdleState )
  {
    case 1:
      KiSetForceIdleState(0LL, a2, a3, a4);
      result = KeRemoveQueueDpcEx((int *)&KiForceIdleStartDpc, 0);
      goto LABEL_15;
    case 2:
      result = KiSetForceIdleState(0LL, a2, a3, a4);
      goto LABEL_15;
    case 3:
      result = KiForceIdleStartTime;
      if ( !KiForceIdleStartTime )
        break;
LABEL_15:
      KiForceIdleStartTime = 0LL;
      break;
    case 4:
      LOBYTE(a2) = 1;
      result = KiResetForceIdle(3LL, a2);
      break;
  }
LABEL_16:
  _InterlockedAnd64(&KiForceIdleLock, 0LL);
  _enable();
  return result;
}
