/*
 * XREFs of ACPIInitDereferenceDeviceExtensionLocked @ 0x1C004F9D8
 * Callers:
 *     ACPIBuildDevicePowerNodes @ 0x1C0028DBC (ACPIBuildDevicePowerNodes.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C0044AE8 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIInitResetDeviceExtension @ 0x1C004FC10 (ACPIInitResetDeviceExtension.c)
 *     ACPITableNotifyFreeObject @ 0x1C0057A80 (ACPITableNotifyFreeObject.c)
 * Callees:
 *     ACPIInitDeleteDeviceExtension @ 0x1C004F6A4 (ACPIInitDeleteDeviceExtension.c)
 */

char __fastcall ACPIInitDereferenceDeviceExtensionLocked(volatile signed __int32 *a1)
{
  if ( _InterlockedDecrement(a1 + 171) )
    return 0;
  ACPIInitDeleteDeviceExtension(a1);
  return 1;
}
