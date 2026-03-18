/*
 * XREFs of KeClearForceIdle @ 0x140205C10
 * Callers:
 *     PopDeepSleepSetDisengageReason @ 0x14006F418 (PopDeepSleepSetDisengageReason.c)
 * Callees:
 *     KeRemoveQueueDpcEx @ 0x14001B6F0 (KeRemoveQueueDpcEx.c)
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiResetForceIdle @ 0x140206078 (KiResetForceIdle.c)
 *     KiSetForceIdleState @ 0x140206178 (KiSetForceIdleState.c)
 */

char __fastcall KeClearForceIdle(__int64 a1, __int64 a2)
{
  char result; // al
  int v3; // [rsp+30h] [rbp+8h] BYREF

  _disable();
  v3 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
  {
    do
    {
      KeYieldProcessorEx(&v3);
      result = KiForceIdleLock;
    }
    while ( KiForceIdleLock );
  }
  if ( KiForceIdleDisabled )
    goto LABEL_16;
  switch ( KiForceIdleState )
  {
    case 1:
      KiSetForceIdleState(0LL);
      result = KeRemoveQueueDpcEx((int *)&KiForceIdleStartDpc, 0);
      goto LABEL_15;
    case 2:
      result = KiSetForceIdleState(0LL);
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
