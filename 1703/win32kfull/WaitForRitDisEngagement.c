/*
 * XREFs of WaitForRitDisEngagement @ 0x1C0109034
 * Callers:
 *     EditionActivateMitInput @ 0x1C0108F20 (EditionActivateMitInput.c)
 *     UserActivateDwmInputProcessing @ 0x1C01A0F20 (UserActivateDwmInputProcessing.c)
 * Callees:
 *     WakeDIT @ 0x1C0104328 (WakeDIT.c)
 *     WaitForRitToCompleteLastCommand @ 0x1C0109144 (WaitForRitToCompleteLastCommand.c)
 *     WakeRIT @ 0x1C0109844 (WakeRIT.c)
 *     DitTakeOver @ 0x1C010989C (DitTakeOver.c)
 */

__int64 __fastcall WaitForRitDisEngagement(int a1)
{
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
    return 1LL;
  EtwTraceDitWaitForRitDisEngagement();
  WakeRIT(64LL);
  v2 = 0;
  WaitForRitToCompleteLastCommand(1LL, 0LL, &v2);
  if ( !gbDIT )
    return 0LL;
  if ( !(unsigned int)DitTakeOver(0LL) )
  {
    gbDIT = 0;
    WakeRIT(32LL);
    WaitForRitToCompleteLastCommand(1LL, 0LL, &v2);
    return 0LL;
  }
  WakeRIT(512LL);
  WaitForRitToCompleteLastCommand(1LL, 1LL, &v2);
  if ( gbEnableDwmMouseProcessing )
  {
    _InterlockedAnd(&gdwDITWakeReason, 0xFFFFFFBF);
    _InterlockedExchange(&glDitMouseHandling, 1);
  }
  if ( v2 )
  {
    EtwTraceWakeDIT(v2);
    WakeDIT(v2);
  }
  return 1LL;
}
