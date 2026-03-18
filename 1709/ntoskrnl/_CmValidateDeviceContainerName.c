/*
 * XREFs of _CmValidateDeviceContainerName @ 0x140551048
 * Callers:
 *     _PnpDispatchDeviceContainer @ 0x14054E8F0 (_PnpDispatchDeviceContainer.c)
 *     _CmGetDeviceContainerIdFromBase @ 0x140550CA0 (_CmGetDeviceContainerIdFromBase.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x140550F88 (_CmGetDeviceContainerRegKeyPath.c)
 *     _CmContainerListGenericObjectCallback @ 0x1405E2840 (_CmContainerListGenericObjectCallback.c)
 * Callees:
 *     wcscmp @ 0x140160450 (wcscmp.c)
 *     _PnpIsValidGuidString @ 0x1405263AC (_PnpIsValidGuidString.c)
 */

__int64 __fastcall CmValidateDeviceContainerName(__int64 a1, const WCHAR *a2)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( !PnpIsValidGuidString(a2) || !wcscmp(L"{00000000-0000-0000-0000-000000000000}", a2) )
    return (unsigned int)-1073741773;
  return v3;
}
