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
  LARGE_INTEGER v1; // rdx
  LARGE_INTEGER v2; // rbx
  LARGE_INTEGER v3; // r8
  LARGE_INTEGER v4; // r9
  int v5; // [rsp+30h] [rbp+8h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+38h] [rbp+10h] BYREF

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
    v2.QuadPart = *(_QWORD *)&RtlGetInterruptTimePrecise(&PerformanceCounter)
                + 10000000LL * (unsigned int)KiForceIdleGracePeriodInSec;
    if ( !v0 )
    {
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))KiSetForceIdleState)(
        2LL,
        (LARGE_INTEGER)v1.QuadPart,
        (LARGE_INTEGER)v3.QuadPart,
        (LARGE_INTEGER)v4.QuadPart);
LABEL_10:
      KiForceIdleStartTime = v2.QuadPart;
      goto LABEL_11;
    }
    if ( v0 == 3 )
      goto LABEL_10;
  }
LABEL_11:
  _InterlockedAnd64(&KiForceIdleLock, 0LL);
  _enable();
}
