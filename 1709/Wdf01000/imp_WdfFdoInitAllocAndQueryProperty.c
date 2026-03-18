/*
 * XREFs of imp_WdfFdoInitAllocAndQueryProperty @ 0x1C003AA60
 * Callers:
 *     <none>
 * Callees:
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00044B0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0017934 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?_AllocAndQueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVICE_OBJECT@@W4DEVICE_REGISTRY_PROPERTY@@W4_POOL_TYPE@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@@Z @ 0x1C00184B8 (-_AllocAndQueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVI.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00816D8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfFdoInitAllocAndQueryProperty(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        DEVICE_REGISTRY_PROPERTY DeviceProperty,
        _POOL_TYPE PoolType,
        _WDF_OBJECT_ATTRIBUTES *PropertyMemoryAttributes,
        WDFMEMORY__ **PropertyMemory)
{
  _FX_DRIVER_GLOBALS *v9; // rbx
  _FX_DRIVER_GLOBALS *v10; // rcx
  __int64 result; // rax
  unsigned __int16 v12; // r9
  void *retaddr; // [rsp+58h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, retaddr);
  v9 = DeviceInit->DriverGlobals;
  v10 = DeviceInit->DriverGlobals;
  if ( !PropertyMemory )
    FxVerifierNullBugCheck(v10, retaddr);
  *PropertyMemory = 0LL;
  result = FxVerifierCheckIrqlLevel(v10, 0);
  if ( (int)result >= 0 )
  {
    if ( v9->FxVerifierOn && FxLibraryGlobals.VfCheckNxPoolType )
      FxLibraryGlobals.VfCheckNxPoolType(PoolType, retaddr, v9->Tag);
    result = FxValidateObjectAttributes(v9, PropertyMemoryAttributes, 0, v12);
    if ( (int)result >= 0 )
    {
      if ( DeviceInit->InitType )
      {
        WPP_IFR_SF_d(v9, 2u, 0x12u, 0x2Au, WPP_FxDeviceInitApi_cpp_Traceguids, -1073741808);
        return 3221225488LL;
      }
      else
      {
        return FxDevice::_AllocAndQueryProperty(
                 v9,
                 DeviceInit,
                 0LL,
                 0LL,
                 DeviceProperty,
                 PoolType,
                 PropertyMemoryAttributes,
                 PropertyMemory);
      }
    }
  }
  return result;
}
