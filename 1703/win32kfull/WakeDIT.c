/*
 * XREFs of WakeDIT @ 0x1C0104328
 * Callers:
 *     RequestInputSinkInfoFromPoint @ 0x1C0004650 (RequestInputSinkInfoFromPoint.c)
 *     EditionInitiateMouseEventProcessing @ 0x1C01042E0 (EditionInitiateMouseEventProcessing.c)
 *     WaitForRitDisEngagement @ 0x1C0109034 (WaitForRitDisEngagement.c)
 *     EditionWakeInputThreadForPnp @ 0x1C013B7B0 (EditionWakeInputThreadForPnp.c)
 *     EditionExtensibility_WakeMITForInterceptCallout @ 0x1C019FFD0 (EditionExtensibility_WakeMITForInterceptCallout.c)
 *     QueueMouseEvent @ 0x1C01A0984 (QueueMouseEvent.c)
 *     ?RitWakeDITAndWaitForResponse@@YAXK@Z @ 0x1C01B94F8 (-RitWakeDITAndWaitForResponse@@YAXK@Z.c)
 *     ?_PalmRejectTimerProc@PalmRejection@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01D41A0 (-_PalmRejectTimerProc@PalmRejection@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxRouteSyntheticTouchpadToMT@@YAHIUtagPOINT@@0_K@Z @ 0x1C020A28C (-xxxRouteSyntheticTouchpadToMT@@YAHIUtagPOINT@@0_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WakeDIT(unsigned int a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( gbDIT )
  {
    _m_prefetchw(&gdwDITWakeReason);
    if ( (_InterlockedOr(&gdwDITWakeReason, a1) & a1) == 0 )
      ZwSetEvent(ghDITEvent, 0LL);
    return 1LL;
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)&gdwDitIgnoredWakeReasons, a1);
  }
  return result;
}
