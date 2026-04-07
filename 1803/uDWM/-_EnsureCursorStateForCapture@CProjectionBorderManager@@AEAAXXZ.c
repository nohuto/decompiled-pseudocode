/*
 * XREFs of ?_EnsureCursorStateForCapture@CProjectionBorderManager@@AEAAXXZ @ 0x18007E408
 * Callers:
 *     ?StopDisplayCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x18007D510 (-StopDisplayCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?StopWindowCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x18007D670 (-StopWindowCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 *     ?_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@IAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x18007DE2C (-_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@IAEBUDWM_CAPTURE_TOKEN@@.c)
 *     ?_AddTabGroupCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowSWRVisual@@IAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x18007E2C0 (-_AddTabGroupCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowSWRVisual.c)
 * Callees:
 *     <none>
 */

void __fastcall CProjectionBorderManager::_EnsureCursorStateForCapture(CProjectionBorderManager *this)
{
  if ( RtlIsGenericTableEmpty((PRTL_GENERIC_TABLE)((char *)this + 512))
    && RtlIsGenericTableEmpty((PRTL_GENERIC_TABLE)((char *)this + 440)) )
  {
    if ( *((_BYTE *)this + 584) )
    {
      EnableSoftwareCursorForScreenCapture(0LL);
      *((_BYTE *)this + 584) = 0;
    }
  }
  else if ( !*((_BYTE *)this + 584) )
  {
    EnableSoftwareCursorForScreenCapture(1LL);
    *((_BYTE *)this + 584) = 1;
  }
}
