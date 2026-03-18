/*
 * XREFs of ?_ValidateOpenKeyParams@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@@Z @ 0x1C0011618
 * Callers:
 *     ?_QueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4FxPropertyType@@K3PEAK5@Z @ 0x1C0011504 (-_QueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4FxPropert.c)
 * Callees:
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxDevice::_ValidateOpenKeyParams(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        FxDevice *Device)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( DeviceInit )
  {
    if ( !Device )
      return v3;
LABEL_5:
    v3 = -1073741811;
    WPP_IFR_SF_d(FxDriverGlobals, 2u, 0x12u, 0x17u, WPP_FxDevice_cpp_Traceguids, -1073741811);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
    return v3;
  }
  if ( !Device )
    goto LABEL_5;
  return v3;
}
