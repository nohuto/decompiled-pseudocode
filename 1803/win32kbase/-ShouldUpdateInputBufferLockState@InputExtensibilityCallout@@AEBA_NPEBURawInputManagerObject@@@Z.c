/*
 * XREFs of ?ShouldUpdateInputBufferLockState@InputExtensibilityCallout@@AEBA_NPEBURawInputManagerObject@@@Z @ 0x1C0120FAC
 * Callers:
 *     ?PrepareForUserModeCallout@InputExtensibilityCallout@@AEAA_NPEAURawInputManagerDeviceObject@@_N@Z @ 0x1C0120DB8 (-PrepareForUserModeCallout@InputExtensibilityCallout@@AEAA_NPEAURawInputManagerDeviceObject@@_N@.c)
 *     ?UserModeCalloutCompleted@InputExtensibilityCallout@@AEAAXPEAURawInputManagerDeviceObject@@_N@Z @ 0x1C0121034 (-UserModeCalloutCompleted@InputExtensibilityCallout@@AEAAXPEAURawInputManagerDeviceObject@@_N@Z.c)
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
