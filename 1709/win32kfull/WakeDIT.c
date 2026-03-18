/*
 * XREFs of WakeDIT @ 0x1C00FDA3C
 * Callers:
 *     RequestInputSinkInfoFromPoint @ 0x1C0009200 (RequestInputSinkInfoFromPoint.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1C00A3440 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     WaitForRitDisEngagement @ 0x1C00FD760 (WaitForRitDisEngagement.c)
 *     EditionInitiateMouseEventProcessing @ 0x1C00FD9E0 (EditionInitiateMouseEventProcessing.c)
 *     EditionWakeInputThreadForPnp @ 0x1C01424E0 (EditionWakeInputThreadForPnp.c)
 *     EditionExtensibility_WakeMITForInterceptCallout @ 0x1C01BAC20 (EditionExtensibility_WakeMITForInterceptCallout.c)
 *     ?_PalmRejectTimerProc@PalmRejection@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E0610 (-_PalmRejectTimerProc@PalmRejection@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxRouteSyntheticTouchpadToMT@@YAHIUtagPOINT@@0_K@Z @ 0x1C020D430 (-xxxRouteSyntheticTouchpadToMT@@YAHIUtagPOINT@@0_K@Z.c)
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
      ZwSetEvent(*(&WPP_MAIN_CB.Reserved + 1), 0LL);
    return 1LL;
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)&gdwDitIgnoredWakeReasons, a1);
  }
  return result;
}
