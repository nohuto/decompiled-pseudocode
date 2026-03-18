/*
 * XREFs of ACPIRegisterForDeviceNotifications @ 0x1C0022CB0
 * Callers:
 *     ACPICMButtonStartWorker @ 0x1C0023720 (ACPICMButtonStartWorker.c)
 *     ACPIThermalStartDevice @ 0x1C00919A0 (ACPIThermalStartDevice.c)
 *     ACPIFanStartDevice @ 0x1C009EDC0 (ACPIFanStartDevice.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001600 (ACPIInternalGetDeviceExtension.c)
 *     ACPIRegisterForDeviceNotificationsByPowerInfo @ 0x1C0022CF4 (ACPIRegisterForDeviceNotificationsByPowerInfo.c)
 */

__int64 __fastcall ACPIRegisterForDeviceNotifications(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax

  v5 = ACPIInternalGetDeviceExtension(a1) + 328;
  if ( v5 )
    return ACPIRegisterForDeviceNotificationsByPowerInfo(v5, a2, a3);
  else
    return 3221225486LL;
}
