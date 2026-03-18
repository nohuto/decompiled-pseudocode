/*
 * XREFs of _CmValidateInstallerClassName @ 0x1404930D8
 * Callers:
 *     _PnpDispatchInterfaceClass @ 0x140490670 (_PnpDispatchInterfaceClass.c)
 *     _CmGetCommonClassRegKeyPath @ 0x14050A9A4 (_CmGetCommonClassRegKeyPath.c)
 *     _PnpDispatchInstallerClass @ 0x14056AEC0 (_PnpDispatchInstallerClass.c)
 *     _CmGetDeviceInterfaceName @ 0x1405DEBB0 (_CmGetDeviceInterfaceName.c)
 *     _CmClassSubkeyCallback @ 0x140638750 (_CmClassSubkeyCallback.c)
 * Callees:
 *     _PnpIsValidGuidString @ 0x14050A93C (_PnpIsValidGuidString.c)
 */

__int64 __fastcall CmValidateInstallerClassName(__int64 a1, const WCHAR *a2)
{
  return (unsigned __int8)PnpIsValidGuidString(a2) == 0 ? 0xC0000033 : 0;
}
