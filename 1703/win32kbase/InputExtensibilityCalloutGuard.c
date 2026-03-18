/*
 * XREFs of InputExtensibilityCalloutGuard @ 0x1C012A500
 * Callers:
 *     NtUserInitializeGenericHidInjection @ 0x1C00E17E0 (NtUserInitializeGenericHidInjection.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1C00E1C70 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInitializePointerDeviceInjectionEx @ 0x1C00E1FD0 (NtUserInitializePointerDeviceInjectionEx.c)
 *     NtUserInjectDeviceInput @ 0x1C00E2230 (NtUserInjectDeviceInput.c)
 *     NtUserInjectGenericHidInput @ 0x1C00E24C0 (NtUserInjectGenericHidInput.c)
 *     NtUserInjectKeyboardInput @ 0x1C00E2680 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C00E2940 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C00E2C00 (NtUserInjectPointerInput.c)
 *     NtUserRemoveInjectionDevice @ 0x1C00E3270 (NtUserRemoveInjectionDevice.c)
 *     NtUserSetFeatureReportResponse @ 0x1C00E3D80 (NtUserSetFeatureReportResponse.c)
 * Callees:
 *     ?WaitForMITPnpUserModeCallbacksToComplete@InputExtensibilityCallout@@QEAAXXZ @ 0x1C012A310 (-WaitForMITPnpUserModeCallbacksToComplete@InputExtensibilityCallout@@QEAAXXZ.c)
 */

void InputExtensibilityCalloutGuard()
{
  if ( (gdwMitConfig & 7) != 0 )
  {
    if ( WPP_MAIN_CB.Queue.Wcb.DeviceContext )
      InputExtensibilityCallout::WaitForMITPnpUserModeCallbacksToComplete((InputExtensibilityCallout *)WPP_MAIN_CB.Queue.Wcb.DeviceContext);
  }
}
