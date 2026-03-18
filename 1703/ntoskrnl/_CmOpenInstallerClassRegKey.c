/*
 * XREFs of _CmOpenInstallerClassRegKey @ 0x1404E2590
 * Callers:
 *     PiCMOpenClassKey @ 0x14043DC08 (PiCMOpenClassKey.c)
 *     PpForEachDeviceInstanceDriver @ 0x1404DE560 (PpForEachDeviceInstanceDriver.c)
 *     _CmGetInstallerClassRegPropWorker @ 0x1404E0B68 (_CmGetInstallerClassRegPropWorker.c)
 *     PipCallDriverAddDevice @ 0x1404E1D64 (PipCallDriverAddDevice.c)
 *     _CmGetDeviceSoftwareKey @ 0x1404E2AA8 (_CmGetDeviceSoftwareKey.c)
 *     _PnpDispatchInstallerClass @ 0x1405A9680 (_PnpDispatchInstallerClass.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x1405A99BC (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmCreateInstallerClassWorker @ 0x140739E70 (_CmCreateInstallerClassWorker.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x14073BF60 (_CmSetInstallerClassRegPropWorker.c)
 *     _CmDeleteInstallerClassMappedPropertyFromRegValue @ 0x14073F224 (_CmDeleteInstallerClassMappedPropertyFromRegValue.c)
 *     _CmSetInstallerClassMappedPropertyFromRegValue @ 0x140741130 (_CmSetInstallerClassMappedPropertyFromRegValue.c)
 * Callees:
 *     _CmOpenCommonClassRegKey @ 0x1404E25D8 (_CmOpenCommonClassRegKey.c)
 */

__int64 __fastcall CmOpenInstallerClassRegKey(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        __int64 a7,
        __int64 a8)
{
  return CmOpenCommonClassRegKey(a1, a2, 32, 0, a5, a6, a7, a8);
}
