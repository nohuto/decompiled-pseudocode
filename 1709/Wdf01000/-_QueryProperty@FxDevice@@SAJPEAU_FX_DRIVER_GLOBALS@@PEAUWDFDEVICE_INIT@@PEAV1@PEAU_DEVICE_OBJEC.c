/*
 * XREFs of ?_QueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVICE_OBJECT@@W4DEVICE_REGISTRY_PROPERTY@@KPEAXPEAK@Z @ 0x1C00185EC
 * Callers:
 *     ?_AllocAndQueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVICE_OBJECT@@W4DEVICE_REGISTRY_PROPERTY@@W4_POOL_TYPE@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@@Z @ 0x1C00184B8 (-_AllocAndQueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVI.c)
 *     imp_WdfDeviceQueryProperty @ 0x1C0039940 (imp_WdfDeviceQueryProperty.c)
 *     imp_WdfFdoInitQueryProperty @ 0x1C0075B70 (imp_WdfFdoInitQueryProperty.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0012F30 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

NTSTATUS __fastcall FxDevice::_QueryProperty(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        WDFDEVICE_INIT *DeviceInit,
        unsigned __int64 Device,
        _DEVICE_OBJECT *RemotePdo,
        DEVICE_REGISTRY_PROPERTY DeviceProperty,
        ULONG BufferLength,
        PVOID PropertyBuffer,
        unsigned int *ResultLength)
{
  _DEVICE_OBJECT *PhysicalDevice; // r10
  unsigned __int16 v11; // ax
  const void *_a1; // r8

  PhysicalDevice = RemotePdo;
  if ( RemotePdo )
    return IoGetDeviceProperty(PhysicalDevice, DeviceProperty, BufferLength, PropertyBuffer, ResultLength);
  if ( DeviceInit )
  {
    if ( !Device )
    {
      PhysicalDevice = DeviceInit->Fdo.PhysicalDevice;
      return IoGetDeviceProperty(PhysicalDevice, DeviceProperty, BufferLength, PropertyBuffer, ResultLength);
    }
    goto LABEL_12;
  }
  if ( !Device )
  {
LABEL_12:
    WPP_IFR_SF_d(FxDriverGlobals, 2u, 0x12u, 0x17u, WPP_FxDevice_cpp_Traceguids, -1073741811);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
    return -1073741811;
  }
  if ( *(_BYTE *)(Device + 280) )
  {
    PhysicalDevice = *(_DEVICE_OBJECT **)(Device + 160);
    if ( PhysicalDevice )
      return IoGetDeviceProperty(PhysicalDevice, DeviceProperty, BufferLength, PropertyBuffer, ResultLength);
  }
  v11 = *(_WORD *)(Device + 10);
  _a1 = (const void *)(Device ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v11 )
    _a1 = 0LL;
  WPP_IFR_SF_qd(FxDriverGlobals, 2u, 0x12u, 0x1Au, WPP_FxDeviceKm_cpp_Traceguids, _a1, -1073741436);
  return -1073741436;
}
