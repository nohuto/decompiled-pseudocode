/*
 * XREFs of _CmOpenInstallerClassRegKey @ 0x14056B408
 * Callers:
 *     _CmGetDeviceSoftwareKey @ 0x14056AA94 (_CmGetDeviceSoftwareKey.c)
 *     PiCMOpenClassKey @ 0x14056AD20 (PiCMOpenClassKey.c)
 *     _PnpDispatchInstallerClass @ 0x14056AEC0 (_PnpDispatchInstallerClass.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x14056B1FC (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     PpForEachDeviceInstanceDriver @ 0x1405CCEDC (PpForEachDeviceInstanceDriver.c)
 *     _CmGetInstallerClassRegPropWorker @ 0x1405CD6FC (_CmGetInstallerClassRegPropWorker.c)
 *     PipCallDriverAddDevice @ 0x1405CE418 (PipCallDriverAddDevice.c)
 *     _CmCreateInstallerClassWorker @ 0x1407E70DC (_CmCreateInstallerClassWorker.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x1407E943C (_CmSetInstallerClassRegPropWorker.c)
 *     _CmDeleteInstallerClassMappedPropertyFromRegValue @ 0x1407EDE60 (_CmDeleteInstallerClassMappedPropertyFromRegValue.c)
 *     _CmSetInstallerClassMappedPropertyFromRegValue @ 0x1407EFD6C (_CmSetInstallerClassMappedPropertyFromRegValue.c)
 * Callees:
 *     _CmOpenCommonClassRegKey @ 0x14050150C (_CmOpenCommonClassRegKey.c)
 */

__int64 __fastcall CmOpenInstallerClassRegKey(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        __int64 a7,
        _DWORD *a8)
{
  return CmOpenCommonClassRegKey(a1, a2, 0x20u, 0, a5, a6, a7, a8);
}
