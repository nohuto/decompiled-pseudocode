/*
 * XREFs of _CmOpenInstallerClassRegKey @ 0x14051D7B8
 * Callers:
 *     _PnpDispatchInstallerClass @ 0x14045A300 (_PnpDispatchInstallerClass.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x14045A670 (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmGetInstallerClassRegPropWorker @ 0x14051D0E8 (_CmGetInstallerClassRegPropWorker.c)
 *     PipCallDriverAddDevice @ 0x14051DC78 (PipCallDriverAddDevice.c)
 *     PpForEachDeviceInstanceDriver @ 0x140555688 (PpForEachDeviceInstanceDriver.c)
 *     PiCMOpenClassKey @ 0x140573DB4 (PiCMOpenClassKey.c)
 *     _CmGetDeviceSoftwareKey @ 0x14058188C (_CmGetDeviceSoftwareKey.c)
 *     _CmCreateInstallerClassWorker @ 0x14077E558 (_CmCreateInstallerClassWorker.c)
 *     _CmSetInstallerClassRegPropWorker @ 0x140780680 (_CmSetInstallerClassRegPropWorker.c)
 *     _CmDeleteInstallerClassMappedPropertyFromRegValue @ 0x140783624 (_CmDeleteInstallerClassMappedPropertyFromRegValue.c)
 *     _CmSetInstallerClassMappedPropertyFromRegValue @ 0x1407850A4 (_CmSetInstallerClassMappedPropertyFromRegValue.c)
 * Callees:
 *     _CmOpenCommonClassRegKey @ 0x14051DB28 (_CmOpenCommonClassRegKey.c)
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
