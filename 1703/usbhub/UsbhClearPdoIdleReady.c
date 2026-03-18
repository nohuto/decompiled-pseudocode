/*
 * XREFs of UsbhClearPdoIdleReady @ 0x1C0006900
 * Callers:
 *     UsbhPdoSetD0 @ 0x1C0003620 (UsbhPdoSetD0.c)
 *     UsbhPdoDevicePowerState @ 0x1C0004108 (UsbhPdoDevicePowerState.c)
 *     UsbhBusIf_ResumeChildHub @ 0x1C00067F0 (UsbhBusIf_ResumeChildHub.c)
 *     UsbhIdleIrp_ReleaseIrp @ 0x1C00573BC (UsbhIdleIrp_ReleaseIrp.c)
 * Callees:
 *     Usbh_HubSetDeviceHandleIdleReadyState @ 0x1C00069A8 (Usbh_HubSetDeviceHandleIdleReadyState.c)
 *     Log @ 0x1C0013A00 (Log.c)
 *     UsbhDerefPdoDeviceHandle @ 0x1C0017678 (UsbhDerefPdoDeviceHandle.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     UsbhRefPdoDeviceHandle @ 0x1C0024E70 (UsbhRefPdoDeviceHandle.c)
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
