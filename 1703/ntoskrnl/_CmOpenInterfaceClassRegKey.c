/*
 * XREFs of _CmOpenInterfaceClassRegKey @ 0x1404E09A8
 * Callers:
 *     PiCMOpenClassKey @ 0x14043DC08 (PiCMOpenClassKey.c)
 *     IopGetDeviceInterfaces @ 0x1404E0548 (IopGetDeviceInterfaces.c)
 *     _PnpDispatchInterfaceClass @ 0x1404E2FF0 (_PnpDispatchInterfaceClass.c)
 *     _CmGetInterfaceClassMappedPropertyFromRegValue @ 0x1404E31E8 (_CmGetInterfaceClassMappedPropertyFromRegValue.c)
 *     _CmCreateInterfaceClassWorker @ 0x14059664C (_CmCreateInterfaceClassWorker.c)
 *     _CmDeleteInterfaceClassMappedPropertyFromRegValue @ 0x14073F3E4 (_CmDeleteInterfaceClassMappedPropertyFromRegValue.c)
 *     _CmSetInterfaceClassMappedPropertyFromRegValue @ 0x14074158C (_CmSetInterfaceClassMappedPropertyFromRegValue.c)
 * Callees:
 *     _CmOpenCommonClassRegKey @ 0x1404E25D8 (_CmOpenCommonClassRegKey.c)
 */

__int64 __fastcall CmOpenInterfaceClassRegKey(
        int a1,
        int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        __int64 a7,
        __int64 a8)
{
  return CmOpenCommonClassRegKey(a1, a2, 64, 0, a5, a6, a7, a8);
}
