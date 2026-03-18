/*
 * XREFs of ?FxValidateUnicodeString@@YAJPEAU_FX_DRIVER_GLOBALS@@PEBU_UNICODE_STRING@@@Z @ 0x1C00178E8
 * Callers:
 *     imp_WdfRegistryQueryMultiString @ 0x1C0011810 (imp_WdfRegistryQueryMultiString.c)
 *     imp_WdfPdoInitAddHardwareID @ 0x1C0011D50 (imp_WdfPdoInitAddHardwareID.c)
 *     FxIoTargetValidateOpenParams @ 0x1C001422C (FxIoTargetValidateOpenParams.c)
 *     imp_WdfDeviceAssignMofResourceName @ 0x1C0014510 (imp_WdfDeviceAssignMofResourceName.c)
 *     imp_WdfRegistryQueryULong @ 0x1C0014820 (imp_WdfRegistryQueryULong.c)
 *     imp_WdfDeviceCreateDeviceInterface @ 0x1C0014A30 (imp_WdfDeviceCreateDeviceInterface.c)
 *     imp_WdfDriverCreate @ 0x1C0014F60 (imp_WdfDriverCreate.c)
 *     imp_WdfPdoInitAddCompatibleID @ 0x1C0017490 (imp_WdfPdoInitAddCompatibleID.c)
 *     imp_WdfDeviceRetrieveDeviceInterfaceString @ 0x1C0030100 (imp_WdfDeviceRetrieveDeviceInterfaceString.c)
 *     imp_WdfRegistryQueryString @ 0x1C0038260 (imp_WdfRegistryQueryString.c)
 *     imp_WdfControlDeviceInitAllocate @ 0x1C0038650 (imp_WdfControlDeviceInitAllocate.c)
 *     imp_WdfStringCreate @ 0x1C0038850 (imp_WdfStringCreate.c)
 *     imp_WdfPdoInitAssignInstanceID @ 0x1C0038990 (imp_WdfPdoInitAssignInstanceID.c)
 *     imp_WdfPdoInitAssignDeviceID @ 0x1C0038A80 (imp_WdfPdoInitAssignDeviceID.c)
 *     imp_WdfDeviceCreateSymbolicLink @ 0x1C0038B70 (imp_WdfDeviceCreateSymbolicLink.c)
 *     imp_WdfRegistryAssignValue @ 0x1C0038C60 (imp_WdfRegistryAssignValue.c)
 *     imp_WdfPdoInitAddDeviceText @ 0x1C0039140 (imp_WdfPdoInitAddDeviceText.c)
 *     imp_WdfDeviceInitAssignSDDLString @ 0x1C00394A0 (imp_WdfDeviceInitAssignSDDLString.c)
 *     imp_WdfDeviceInitAssignName @ 0x1C0039B80 (imp_WdfDeviceInitAssignName.c)
 *     imp_WdfPdoInitAssignContainerID @ 0x1C0075DD0 (imp_WdfPdoInitAssignContainerID.c)
 *     imp_WdfDeviceOpenDevicemapKey @ 0x1C0076DB0 (imp_WdfDeviceOpenDevicemapKey.c)
 *     imp_WdfDeviceSetDeviceInterfaceState @ 0x1C0083CA0 (imp_WdfDeviceSetDeviceInterfaceState.c)
 *     imp_WdfRegistryAssignMemory @ 0x1C0083FD0 (imp_WdfRegistryAssignMemory.c)
 *     imp_WdfRegistryAssignMultiString @ 0x1C00841F0 (imp_WdfRegistryAssignMultiString.c)
 *     imp_WdfRegistryAssignString @ 0x1C0084440 (imp_WdfRegistryAssignString.c)
 *     imp_WdfRegistryAssignULong @ 0x1C0084550 (imp_WdfRegistryAssignULong.c)
 *     imp_WdfRegistryAssignUnicodeString @ 0x1C0084630 (imp_WdfRegistryAssignUnicodeString.c)
 *     imp_WdfRegistryCreateKey @ 0x1C00847B0 (imp_WdfRegistryCreateKey.c)
 *     imp_WdfRegistryQueryMemory @ 0x1C00849D0 (imp_WdfRegistryQueryMemory.c)
 *     imp_WdfRegistryQueryUnicodeString @ 0x1C0084CA0 (imp_WdfRegistryQueryUnicodeString.c)
 *     imp_WdfRegistryRemoveValue @ 0x1C0084F10 (imp_WdfRegistryRemoveValue.c)
 * Callees:
 *     WPP_IFR_SF_qddd @ 0x1C0066444 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_qdd @ 0x1C00701C4 (WPP_IFR_SF_qdd.c)
 */

__int64 __fastcall FxValidateUnicodeString(_FX_DRIVER_GLOBALS *FxDriverGlobals, const _UNICODE_STRING *String)
{
  unsigned __int16 Length; // r8
  unsigned __int16 MaximumLength; // ax

  Length = String->Length;
  if ( (String->Length & 1) != 0 )
  {
    WPP_IFR_SF_qdd(FxDriverGlobals, 2u, 6u, 0xDu, WPP_FxValidateFunctions_hpp_Traceguids_0, String, Length, -1073741811);
  }
  else
  {
    MaximumLength = String->MaximumLength;
    if ( (MaximumLength & 1) != 0 )
    {
      WPP_IFR_SF_qdd(
        FxDriverGlobals,
        2u,
        6u,
        0xEu,
        WPP_FxValidateFunctions_hpp_Traceguids_0,
        String,
        MaximumLength,
        -1073741811);
    }
    else if ( MaximumLength && !String->Buffer )
    {
      WPP_IFR_SF_qdd(
        FxDriverGlobals,
        2u,
        6u,
        0xFu,
        WPP_FxValidateFunctions_hpp_Traceguids_0,
        String,
        MaximumLength,
        -1073741811);
    }
    else
    {
      if ( Length <= MaximumLength )
        return 0LL;
      WPP_IFR_SF_qddd(
        FxDriverGlobals,
        (unsigned __int8)String,
        6u,
        0x10u,
        WPP_FxValidateFunctions_hpp_Traceguids_0,
        String,
        Length,
        MaximumLength,
        -1073741811);
    }
  }
  return 3221225485LL;
}
