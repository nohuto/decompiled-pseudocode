/*
 * XREFs of KeSetForceIdle @ 0x140205CBC
 * Callers:
 *     PopDeepSleepClearDisengageReason @ 0x14006F310 (PopDeepSleepClearDisengageReason.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     KiSetForceIdleState @ 0x140206178 (KiSetForceIdleState.c)
 */

__int64 KeSetForceIdle()
{
  __int64 result; // rax
  __int64 v1; // rbx
  int v2; // [rsp+30h] [rbp+8h] BYREF

  _disable();
  v2 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
  {
    do
    {
      KeYieldProcessorEx(&v2);
      result = KiForceIdleLock;
    }
    while ( KiForceIdleLock );
  }
  if ( !KiForceIdleDisabled )
  {
    result = (unsigned int)KiForceIdleGracePeriodInSec;
    v1 = 10000000LL * (unsigned int)KiForceIdleGracePeriodInSec + MEMORY[0xFFFFF78000000008];
    if ( !KiForceIdleState )
    {
      result = KiSetForceIdleState(2LL);
LABEL_10:
      KiForceIdleStartTime = v1;
      goto LABEL_11;
    }
    if ( KiForceIdleState == 3 )
      goto LABEL_10;
  }
LABEL_11:
  _InterlockedAnd64(&KiForceIdleLock, 0LL);
  _enable();
  return result;
}
