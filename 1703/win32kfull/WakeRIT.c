/*
 * XREFs of WakeRIT @ 0x1C0109844
 * Callers:
 *     _EnableSessionForMMCSS @ 0x1C00079B0 (_EnableSessionForMMCSS.c)
 *     RawInputThread @ 0x1C004A5F0 (RawInputThread.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C00BDAE0 (xxxUpdatePerUserSystemParameters.c)
 *     EditionInitiateMouseEventProcessing @ 0x1C01042E0 (EditionInitiateMouseEventProcessing.c)
 *     EditionDeactivateMitInput @ 0x1C0108D50 (EditionDeactivateMitInput.c)
 *     WakeRITForShutdown @ 0x1C0108ED0 (WakeRITForShutdown.c)
 *     WaitForRitDisEngagement @ 0x1C0109034 (WaitForRitDisEngagement.c)
 *     WakeRITForConfigSwitch @ 0x1C013B8A0 (WakeRITForConfigSwitch.c)
 *     QueueMouseEvent @ 0x1C01A0984 (QueueMouseEvent.c)
 *     UserDeactivateDwmInputProcessing @ 0x1C01A1080 (UserDeactivateDwmInputProcessing.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WakeRIT(unsigned int a1)
{
  if ( gpkeRITEvent )
  {
    _m_prefetchw(&gdwRITWakeReason);
    if ( (_InterlockedOr(&gdwRITWakeReason, a1) & a1) == 0 )
      KeSetEvent(gpkeRITEvent, 1, 0);
    return 1LL;
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)&gdwRitIgnoredWakeReasons, a1);
    return 0LL;
  }
}
