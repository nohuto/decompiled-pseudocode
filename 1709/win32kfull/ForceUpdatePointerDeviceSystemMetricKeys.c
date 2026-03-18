/*
 * XREFs of ForceUpdatePointerDeviceSystemMetricKeys @ 0x1C00D6BBC
 * Callers:
 *     RemoveInputDevices @ 0x1C00D6A40 (RemoveInputDevices.c)
 *     ?RealizePendingRecreateTouchInjectionDevices@@YAHPEAUtagPROCESSINFO@@H@Z @ 0x1C01BCB44 (-RealizePendingRecreateTouchInjectionDevices@@YAHPEAUtagPROCESSINFO@@H@Z.c)
 * Callees:
 *     AddRemovePointerDeviceSystemMetricKey @ 0x1C00D6D90 (AddRemovePointerDeviceSystemMetricKey.c)
 *     AddRemovePointerDevicePresence @ 0x1C00D6EB4 (AddRemovePointerDevicePresence.c)
 */

__int64 ForceUpdatePointerDeviceSystemMetricKeys()
{
  AddRemovePointerDeviceSystemMetricKey(*(unsigned int *)(&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL);
  AddRemovePointerDeviceSystemMetricKey(*(unsigned int *)(&WPP_MAIN_CB.DeviceQueue.Size + 1), 0LL);
  return AddRemovePointerDevicePresence(*(unsigned int *)&WPP_MAIN_CB.DeviceQueue.Type);
}
