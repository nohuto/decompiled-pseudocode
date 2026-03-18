/*
 * XREFs of ApiSetEditionInputExtensibilityCallout @ 0x1C00961F4
 * Callers:
 *     ?CallUserModeWithLock@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C0096010 (-CallUserModeWithLock@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 *     ?CallUserModeWithDeviceLock@InputExtensibilityCallout@@QEAAXPEAUDEVICEINFO@@PEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C00960A0 (-CallUserModeWithDeviceLock@InputExtensibilityCallout@@QEAAXPEAUDEVICEINFO@@PEAU_CLIENT_DEVICE_N.c)
 *     ?CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C00A5960 (-CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetEditionInputExtensibilityCallout(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = IsEditionInputExtensibilityCalloutSupported();
  if ( (int)result >= 0 )
    return EditionInputExtensibilityCallout(a1, a2);
  return result;
}
