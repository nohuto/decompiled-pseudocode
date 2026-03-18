/*
 * XREFs of _CmValidateInstallerClassName @ 0x14051AE48
 * Callers:
 *     _PnpDispatchInstallerClass @ 0x14045A300 (_PnpDispatchInstallerClass.c)
 *     _PnpDispatchInterfaceClass @ 0x1405197B0 (_PnpDispatchInterfaceClass.c)
 *     _CmGetCommonClassRegKeyPath @ 0x14051D9E4 (_CmGetCommonClassRegKeyPath.c)
 *     _CmGetDeviceInterfaceName @ 0x14057FAF4 (_CmGetDeviceInterfaceName.c)
 *     _CmClassSubkeyCallback @ 0x1405D9A70 (_CmClassSubkeyCallback.c)
 * Callees:
 *     _PnpIsValidGuidString @ 0x1405263AC (_PnpIsValidGuidString.c)
 */

__int64 __fastcall CmValidateInstallerClassName(__int64 a1, const WCHAR *a2)
{
  return (unsigned __int8)PnpIsValidGuidString(a2) == 0 ? 0xC0000033 : 0;
}
