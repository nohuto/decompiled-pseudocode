/*
 * XREFs of ForceUpdatePointerDeviceSystemMetricKeys @ 0x1C00FE98C
 * Callers:
 *     RemoveInputDevices @ 0x1C00FE810 (RemoveInputDevices.c)
 *     ?RealizePendingRecreateTouchInjectionDevices@@YAHPEAUtagPROCESSINFO@@H@Z @ 0x1C01B77C0 (-RealizePendingRecreateTouchInjectionDevices@@YAHPEAUtagPROCESSINFO@@H@Z.c)
 * Callees:
 *     AddRemovePointerDeviceSystemMetricKey @ 0x1C00FEB60 (AddRemovePointerDeviceSystemMetricKey.c)
 */

__int64 ForceUpdatePointerDeviceSystemMetricKeys()
{
  AddRemovePointerDeviceSystemMetricKey(gdwSystemMetrics, 1LL);
  AddRemovePointerDeviceSystemMetricKey(gdwSystemMetrics, 0LL);
  return AddRemovePointerDevicePresence(gdwHardwareTypes);
}
