/*
 * XREFs of imp_WdfDeviceCreate @ 0x1C0019230
 * Callers:
 *     <none>
 * Callees:
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00044B0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C0019320 (-_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     WPP_IFR_SF_q @ 0x1C001A480 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003C594 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_dd @ 0x1C0065BD8 (WPP_IFR_SF_dd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C00816D8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfDeviceCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE_INIT **DeviceInit,
        _WDF_OBJECT_ATTRIBUTES *DeviceAttributes,
        WDFDEVICE__ **Device)
{
  _FX_DRIVER_GLOBALS *DriverName; // rcx
  _FX_DRIVER_GLOBALS *v8; // rbx
  int result; // eax
  WDFDEVICE_INIT *v10; // rcx
  WDFDEVICE__ *v11; // rcx
  unsigned __int8 CurrentIrql; // al
  void *retaddr; // [rsp+58h] [rbp+0h]
  FxDevice *pDevice; // [rsp+60h] [rbp+8h] BYREF

  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  if ( !DeviceInit )
    FxVerifierNullBugCheck(DriverName, retaddr);
  if ( !*DeviceInit )
    FxVerifierNullBugCheck(DriverName, retaddr);
  if ( !Device )
    FxVerifierNullBugCheck(DriverName, retaddr);
  v8 = (*DeviceInit)->DriverGlobals;
  *Device = 0LL;
  if ( v8->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(v8, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      FxVerifierDbgBreakPoint(v8);
      return -1073741808;
    }
  }
  result = FxValidateObjectAttributes(v8, DeviceAttributes, 7, (unsigned __int16)Device);
  if ( result >= 0 )
  {
    v10 = *DeviceInit;
    if ( (*DeviceInit)->CreatedDevice )
    {
      WPP_IFR_SF_q(v8, 2u, 0x12u, 0x19u, WPP_FxDeviceApi_cpp_Traceguids, Device);
      return -1073741436;
    }
    else
    {
      if ( (v10->Security.Sddl || v10->Security.DeviceClassSet)
        && !v10->DeviceName
        && (v10->Characteristics & 0x80u) == 0 )
      {
        WPP_IFR_SF_d(v8, 2u, 0x12u, 0x1Au, WPP_FxDeviceApi_cpp_Traceguids, -1073741703);
        return -1073741703;
      }
      if ( v10->RequiresSelfIoTarget && v10->InitType )
      {
        WPP_IFR_SF_d(v8, 2u, 0x12u, 0x1Bu, WPP_FxDeviceApi_cpp_Traceguids, -1073741808);
        return -1073741808;
      }
      result = FxDevice::_Create(v8, DeviceInit, DeviceAttributes, &pDevice);
      if ( result >= 0 )
      {
        if ( pDevice->m_ObjectSize )
          v11 = (WDFDEVICE__ *)((unsigned __int64)pDevice ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v11 = 0LL;
        *Device = v11;
      }
    }
  }
  return result;
}
