/*
 * XREFs of imp_WdfPdoGetParent @ 0x1C00387E0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0003A40 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?IsPdo@FxDevice@@QEAAEXZ @ 0x1C001D578 (-IsPdo@FxDevice@@QEAAEXZ.c)
 *     WPP_IFR_SF_d @ 0x1C0025BA0 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_sq @ 0x1C00397D4 (WPP_IFR_SF_sq.c)
 */

WDFDEVICE__ *__fastcall imp_WdfPdoGetParent(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  _FX_DRIVER_GLOBALS *v3; // rdi
  __int64 v4; // r8
  __int64 v5; // rax
  __int16 v6; // cx
  WDFDEVICE__ *result; // rax
  void *PPObject; // [rsp+50h] [rbp+8h] BYREF

  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, (unsigned __int64)Device, 0x1002u, &PPObject);
  v3 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)PPObject + 2);
  if ( FxDevice::IsPdo((FxDevice *)PPObject) )
  {
    v5 = *(_QWORD *)(v4 + 224);
    v6 = *(_WORD *)(v5 + 10);
    result = (WDFDEVICE__ *)(v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v6 )
      return 0LL;
  }
  else
  {
    WPP_IFR_SF_sq(v3, 2u, 0x12u, 0xAu, WPP_FxDevicePdoAPI_cpp_Traceguids, "imp_WdfPdoGetParent", Device);
    WPP_IFR_SF_d(v3, 2u, 0x12u, 0xDu, WPP_FxDevicePdoAPI_cpp_Traceguids, -1073741811);
    return 0LL;
  }
  return result;
}
