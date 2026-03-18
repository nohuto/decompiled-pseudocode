/*
 * XREFs of WakeRIT @ 0x1C00FDA94
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C004CB14 (xxxUpdatePerUserSystemParameters.c)
 *     RawInputThread @ 0x1C0087D60 (RawInputThread.c)
 *     EditionDeactivateMitInput @ 0x1C00FD450 (EditionDeactivateMitInput.c)
 *     WakeRITForShutdown @ 0x1C00FD640 (WakeRITForShutdown.c)
 *     WaitForRitDisEngagement @ 0x1C00FD760 (WaitForRitDisEngagement.c)
 *     _EnableSessionForMMCSS @ 0x1C00FD970 (_EnableSessionForMMCSS.c)
 *     EditionInitiateMouseEventProcessing @ 0x1C00FD9E0 (EditionInitiateMouseEventProcessing.c)
 *     WakeRITForConfigSwitch @ 0x1C0142650 (WakeRITForConfigSwitch.c)
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
