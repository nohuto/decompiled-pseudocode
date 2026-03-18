/*
 * XREFs of ?ShouldUpdateInputBufferLockState@InputExtensibilityCallout@@AEBA_NPEBURawInputManagerObject@@@Z @ 0x1C0095FEC
 * Callers:
 *     ?PrepareForUserModeCallout@InputExtensibilityCallout@@AEAA_NPEAURawInputManagerDeviceObject@@_N@Z @ 0x1C0095F48 (-PrepareForUserModeCallout@InputExtensibilityCallout@@AEAA_NPEAURawInputManagerDeviceObject@@_N@.c)
 *     ?CallUserModeWithDeviceLock@InputExtensibilityCallout@@QEAAXPEAUDEVICEINFO@@PEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C00960A0 (-CallUserModeWithDeviceLock@InputExtensibilityCallout@@QEAAXPEAUDEVICEINFO@@PEAU_CLIENT_DEVICE_N.c)
 * Callees:
 *     <none>
 */

char __fastcall InputExtensibilityCallout::ShouldUpdateInputBufferLockState(
        InputExtensibilityCallout *this,
        const struct RawInputManagerObject *a2)
{
  char result; // al

  result = 0;
  if ( *((_BYTE *)a2 + 72) && !*((_BYTE *)a2 + 73) || *((_BYTE *)a2 + 74) )
    return 1;
  return result;
}
