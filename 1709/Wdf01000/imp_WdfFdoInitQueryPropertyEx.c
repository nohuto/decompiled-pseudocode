/*
 * XREFs of imp_WdfFdoInitQueryPropertyEx @ 0x1C0075C70
 * Callers:
 *     <none>
 * Callees:
 *     ?_QueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4FxPropertyType@@K3PEAK5@Z @ 0x1C0011504 (-_QueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4FxPropert.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0017934 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_DDd @ 0x1C0068380 (WPP_IFR_SF_DDd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00816D8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

NTSTATUS __fastcall imp_WdfFdoInitQueryPropertyEx(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        _WDF_DEVICE_PROPERTY_DATA *DeviceProperty,
        ULONG BufferLength,
        void *PropertyBuffer,
        unsigned int *ResultLength,
        unsigned int *Type)
{
  _FX_DRIVER_GLOBALS *v10; // rbx
  int v11; // edi
  NTSTATUS result; // eax
  unsigned int _a1; // [rsp+20h] [rbp-48h]
  void *retaddr; // [rsp+68h] [rbp+0h]

  if ( !DeviceInit )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, retaddr);
  v10 = DeviceInit->DriverGlobals;
  if ( !DeviceProperty )
    FxVerifierNullBugCheck(v10, retaddr);
  if ( DeviceProperty->Size != 24 )
  {
    v11 = -1073741820;
    WPP_IFR_SF_DDd(
      v10,
      (unsigned __int8)DeviceInit,
      0xCu,
      0x2Fu,
      WPP_FxDeviceInitApi_cpp_Traceguids,
      DeviceProperty->Size,
      24,
      -1073741820);
    return v11;
  }
  if ( !ResultLength )
    FxVerifierNullBugCheck(v10, retaddr);
  if ( BufferLength )
  {
    if ( !PropertyBuffer )
      FxVerifierNullBugCheck(v10, retaddr);
  }
  result = FxVerifierCheckIrqlLevel(v10, 0);
  if ( result >= 0 )
  {
    if ( DeviceInit->InitType )
    {
      v11 = -1073741808;
      WPP_IFR_SF_d(v10, 2u, 0x12u, 0x30u, WPP_FxDeviceInitApi_cpp_Traceguids, -1073741808);
      return v11;
    }
    return FxDevice::_QueryPropertyEx(
             v10,
             DeviceInit,
             0LL,
             DeviceProperty,
             _a1,
             BufferLength,
             PropertyBuffer,
             ResultLength,
             Type);
  }
  return result;
}
