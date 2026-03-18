/*
 * XREFs of imp_WdfFdoInitSetDefaultChildListConfig @ 0x1C00145C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00044B0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?_ValidateConfig@FxChildList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_CHILD_LIST_CONFIG@@PEA_K@Z @ 0x1C001468C (-_ValidateConfig@FxChildList@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_CHILD_LIST_CONFIG@@PEA_K@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0015D18 (WPP_IFR_SF_.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0017934 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00816D8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfFdoInitSetDefaultChildListConfig(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_CHILD_LIST_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *DefaultDeviceListAttributes)
{
  _FX_DRIVER_GLOBALS *v7; // rbx
  _FX_DRIVER_GLOBALS *v8; // rcx
  unsigned __int16 v9; // r9
  void *retaddr; // [rsp+38h] [rbp+0h]
  unsigned __int64 totalDescriptionSize; // [rsp+48h] [rbp+10h] BYREF

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, retaddr);
  totalDescriptionSize = 0LL;
  v7 = DeviceInit->DriverGlobals;
  v8 = DeviceInit->DriverGlobals;
  if ( !Config )
    FxVerifierNullBugCheck(v8, retaddr);
  if ( FxVerifierCheckIrqlLevel(v8, 0) >= 0 )
  {
    if ( DeviceInit->InitType )
    {
      WPP_IFR_SF_(v7, 2u, 0x12u, 0x2Eu, WPP_FxDeviceInitApi_cpp_Traceguids);
    }
    else if ( FxChildList::_ValidateConfig(v7, Config, &totalDescriptionSize) >= 0 )
    {
      if ( !DefaultDeviceListAttributes )
      {
LABEL_7:
        *(_OWORD *)&DeviceInit->Fdo.ListConfig.Size = *(_OWORD *)&Config->Size;
        *(_OWORD *)&DeviceInit->Fdo.ListConfig.EvtChildListCreateDevice = *(_OWORD *)&Config->EvtChildListCreateDevice;
        *(_OWORD *)&DeviceInit->Fdo.ListConfig.EvtChildListIdentificationDescriptionCopy = *(_OWORD *)&Config->EvtChildListIdentificationDescriptionCopy;
        *(_OWORD *)&DeviceInit->Fdo.ListConfig.EvtChildListIdentificationDescriptionCleanup = *(_OWORD *)&Config->EvtChildListIdentificationDescriptionCleanup;
        *(_OWORD *)&DeviceInit->Fdo.ListConfig.EvtChildListAddressDescriptionCopy = *(_OWORD *)&Config->EvtChildListAddressDescriptionCopy;
        *(_OWORD *)&DeviceInit->Fdo.ListConfig.EvtChildListAddressDescriptionCleanup = *(_OWORD *)&Config->EvtChildListAddressDescriptionCleanup;
        return;
      }
      if ( (int)FxValidateObjectAttributes(v7, DefaultDeviceListAttributes, 1, v9) >= 0 )
      {
        *(_OWORD *)&DeviceInit->Fdo.ListConfigAttributes.Size = *(_OWORD *)&DefaultDeviceListAttributes->Size;
        *(_OWORD *)&DeviceInit->Fdo.ListConfigAttributes.EvtDestroyCallback = *(_OWORD *)&DefaultDeviceListAttributes->EvtDestroyCallback;
        *(_OWORD *)&DeviceInit->Fdo.ListConfigAttributes.ParentObject = *(_OWORD *)&DefaultDeviceListAttributes->ParentObject;
        DeviceInit->Fdo.ListConfigAttributes.ContextTypeInfo = DefaultDeviceListAttributes->ContextTypeInfo;
        goto LABEL_7;
      }
    }
    FxVerifierDbgBreakPoint(v7);
  }
}
