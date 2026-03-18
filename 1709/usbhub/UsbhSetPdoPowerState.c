/*
 * XREFs of UsbhSetPdoPowerState @ 0x1C000577C
 * Callers:
 *     UsbhPdoSetDx @ 0x1C0001100 (UsbhPdoSetDx.c)
 *     UsbhPdoSetD0_Finish @ 0x1C00015A0 (UsbhPdoSetD0_Finish.c)
 *     UsbhSS_PdoWakeWorker @ 0x1C00017C0 (UsbhSS_PdoWakeWorker.c)
 *     UsbhPdoSetD0 @ 0x1C0003260 (UsbhPdoSetD0.c)
 *     UsbhPdoSystemPowerState @ 0x1C0003B78 (UsbhPdoSystemPowerState.c)
 *     UsbhPdoDevicePowerState @ 0x1C0003C98 (UsbhPdoDevicePowerState.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C0046020 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x1C0055BD0 (UsbhPdoPnp_RemoveDevice.c)
 * Callees:
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 */

__int64 __fastcall UsbhSetPdoPowerState(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 result; // rax

  v7 = PdoExt(a2);
  FdoExt(*(_QWORD *)(a1 + 8));
  v8 = ((unsigned __int8)*(_DWORD *)(v7 + 8) + 1) & 7;
  *(_DWORD *)(v7 + 8) = v8;
  v8 *= 32LL;
  *(_DWORD *)(v8 + v7 + 272) = a5;
  result = *(unsigned int *)(v7 + 1128);
  *(_DWORD *)(v8 + v7 + 280) = a4;
  *(_DWORD *)(v8 + v7 + 276) = result;
  *(_DWORD *)(v7 + 1128) = a4;
  return result;
}
