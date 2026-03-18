/*
 * XREFs of UsbDevice_EvtUsbDeviceCleanupCallback @ 0x1C0034900
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     Controller_RemoveDeviceFromControllerDeviceList @ 0x1C0012180 (Controller_RemoveDeviceFromControllerDeviceList.c)
 *     XilUsbDevice_DestroySecureObject @ 0x1C003331C (XilUsbDevice_DestroySecureObject.c)
 *     XilUsbDevice_FreeResources @ 0x1C00333B0 (XilUsbDevice_FreeResources.c)
 *     WPP_RECORDER_SF_dqqq @ 0x1C003815C (WPP_RECORDER_SF_dqqq.c)
 *     Etw_DeviceDelete @ 0x1C003869C (Etw_DeviceDelete.c)
 */

__int64 __fastcall UsbDevice_EvtUsbDeviceCleanupCallback(__int64 a1)
{
  __int64 result; // rax
  int v3; // r8d
  int v4; // r9d
  __int64 *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rcx

  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
             WdfDriverGlobals,
             a1,
             off_1C004E2F0);
  v5 = (__int64 *)result;
  if ( *(_QWORD *)result == a1 )
  {
    v6 = result + 560;
    WPP_RECORDER_SF_dqqq(*(_QWORD *)(*(_QWORD *)(result + 8) + 72LL), *(unsigned __int8 *)(result + 135), v3, v4);
    if ( *(_BYTE *)(v6 + 48) )
      XilUsbDevice_DestroySecureObject((__int64 *)v6);
    XilUsbDevice_FreeResources(v6);
    if ( v5[9] || v5[10] )
      Controller_RemoveDeviceFromControllerDeviceList(v5[1], *v5, v5 + 9);
    return Etw_DeviceDelete(v7, v5);
  }
  return result;
}
