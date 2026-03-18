/*
 * XREFs of UsbhClearPdoIdleReady @ 0x1C0005F00
 * Callers:
 *     UsbhPdoSetD0 @ 0x1C0003260 (UsbhPdoSetD0.c)
 *     UsbhPdoDevicePowerState @ 0x1C0003C98 (UsbhPdoDevicePowerState.c)
 *     UsbhBusIf_ResumeChildHub @ 0x1C0005DF0 (UsbhBusIf_ResumeChildHub.c)
 *     UsbhIdleIrp_ReleaseIrp @ 0x1C00572C0 (UsbhIdleIrp_ReleaseIrp.c)
 * Callees:
 *     Usbh_HubSetDeviceHandleIdleReadyState @ 0x1C0005FA8 (Usbh_HubSetDeviceHandleIdleReadyState.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     UsbhDerefPdoDeviceHandle @ 0x1C0024C40 (UsbhDerefPdoDeviceHandle.c)
 *     UsbhRefPdoDeviceHandle @ 0x1C0024DB0 (UsbhRefPdoDeviceHandle.c)
 */

__int64 __fastcall UsbhClearPdoIdleReady(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbp
  __int64 result; // rax
  __int64 v8; // rbx
  int v9; // r9d
  char v10; // [rsp+58h] [rbp+20h] BYREF

  v6 = PdoExt(a2);
  result = UsbhRefPdoDeviceHandle(a1, a2, a3, 1232235619LL);
  v8 = result;
  if ( result )
  {
    Log(a1, 32, 1919306033, 0, result);
    *(_DWORD *)(v6 + 1776) &= v9;
    Usbh_HubSetDeviceHandleIdleReadyState(a1, v8, 0LL, &v10);
    return UsbhDerefPdoDeviceHandle(a1, v8, a3, 1232235619LL);
  }
  return result;
}
