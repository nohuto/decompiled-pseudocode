/*
 * XREFs of _CmValidateDeviceContainerName @ 0x140586F0C
 * Callers:
 *     _PnpDispatchDeviceContainer @ 0x1405868F0 (_PnpDispatchDeviceContainer.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x140586E4C (_CmGetDeviceContainerRegKeyPath.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x1405D5544 (_CmGetDeviceContainerIdFromBase.c)
 *     _CmContainerListGenericObjectCallback @ 0x1406388C0 (_CmContainerListGenericObjectCallback.c)
 * Callees:
 *     wcscmp @ 0x14018A5F0 (wcscmp.c)
 *     _PnpIsValidGuidString @ 0x14050A93C (_PnpIsValidGuidString.c)
 */

__int64 __fastcall CmValidateDeviceContainerName(__int64 a1, const WCHAR *a2)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( !PnpIsValidGuidString(a2) || !wcscmp(L"{00000000-0000-0000-0000-000000000000}", a2) )
    return (unsigned int)-1073741773;
  return v3;
}
