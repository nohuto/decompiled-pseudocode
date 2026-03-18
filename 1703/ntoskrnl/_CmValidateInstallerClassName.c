/*
 * XREFs of _CmValidateInstallerClassName @ 0x1404E0E54
 * Callers:
 *     _CmGetCommonClassRegKeyPath @ 0x1404E290C (_CmGetCommonClassRegKeyPath.c)
 *     _PnpDispatchInterfaceClass @ 0x1404E2FF0 (_PnpDispatchInterfaceClass.c)
 *     _CmGetDeviceInterfaceName @ 0x1404E60A4 (_CmGetDeviceInterfaceName.c)
 *     _PnpDispatchInstallerClass @ 0x1405A9680 (_PnpDispatchInstallerClass.c)
 *     _CmClassSubkeyCallback @ 0x1405AB1A0 (_CmClassSubkeyCallback.c)
 * Callees:
 *     _PnpIsValidGuidString @ 0x1404E2A40 (_PnpIsValidGuidString.c)
 */

__int64 __fastcall CmValidateInstallerClassName(__int64 a1, const WCHAR *a2)
{
  return (unsigned __int8)PnpIsValidGuidString(a2) == 0 ? 0xC0000033 : 0;
}
