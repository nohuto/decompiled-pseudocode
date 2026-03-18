/*
 * XREFs of ?ShouldUpdateInputBufferLockState@InputExtensibilityCallout@@AEBA_NPEBURawInputManagerObject@@@Z @ 0x1C009A6A0
 * Callers:
 *     ?UserModeCalloutCompleted@InputExtensibilityCallout@@AEAAXPEAURawInputManagerDeviceObject@@_N@Z @ 0x1C009A6C0 (-UserModeCalloutCompleted@InputExtensibilityCallout@@AEAAXPEAURawInputManagerDeviceObject@@_N@Z.c)
 *     ?PrepareForUserModeCallout@InputExtensibilityCallout@@AEAA_NPEAURawInputManagerDeviceObject@@_N@Z @ 0x1C009A738 (-PrepareForUserModeCallout@InputExtensibilityCallout@@AEAA_NPEAURawInputManagerDeviceObject@@_N@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InputExtensibilityCallout::ShouldUpdateInputBufferLockState(
        InputExtensibilityCallout *this,
        const struct RawInputManagerObject *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( *((_BYTE *)a2 + 72) && !*((_BYTE *)a2 + 73) || *((_BYTE *)a2 + 74) )
    return 1LL;
  return result;
}
