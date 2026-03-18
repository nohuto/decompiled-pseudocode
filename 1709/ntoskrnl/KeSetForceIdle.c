/*
 * XREFs of KeSetForceIdle @ 0x14020C2A0
 * Callers:
 *     PopDeepSleepClearDisengageReason @ 0x1400AEF7C (PopDeepSleepClearDisengageReason.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     RtlGetInterruptTimePrecise @ 0x1400E48D0 (RtlGetInterruptTimePrecise.c)
 *     KiSetForceIdleState @ 0x14020C768 (KiSetForceIdleState.c)
 */

void KeSetForceIdle()
{
  int v0; // edi
  __int64 v1; // rdx
  __int64 v2; // rbx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // [rsp+30h] [rbp+8h] BYREF
  LARGE_INTEGER v6; // [rsp+38h] [rbp+10h] BYREF

  _disable();
  v5 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&KiForceIdleLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v5);
    while ( KiForceIdleLock );
  }
  if ( !KiForceIdleDisabled )
  {
    v0 = KiForceIdleState;
    v2 = RtlGetInterruptTimePrecise(&v6) + 10000000LL * (unsigned int)KiForceIdleGracePeriodInSec;
    if ( !v0 )
    {
      KiSetForceIdleState(2LL, v1, v3, v4);
LABEL_10:
      KiForceIdleStartTime = v2;
      goto LABEL_11;
    }
    if ( v0 == 3 )
      goto LABEL_10;
  }
LABEL_11:
  _InterlockedAnd64(&KiForceIdleLock, 0LL);
  _enable();
}
