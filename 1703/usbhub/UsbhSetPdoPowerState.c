/*
 * XREFs of UsbhSetPdoPowerState @ 0x1C0006018
 * Callers:
 *     UsbhPdoSetDx @ 0x1C0001100 (UsbhPdoSetDx.c)
 *     UsbhSS_PdoWakeWorker @ 0x1C0001710 (UsbhSS_PdoWakeWorker.c)
 *     UsbhPdoSetD0 @ 0x1C0003620 (UsbhPdoSetD0.c)
 *     UsbhPdoSystemPowerState @ 0x1C0003FE8 (UsbhPdoSystemPowerState.c)
 *     UsbhPdoDevicePowerState @ 0x1C0004108 (UsbhPdoDevicePowerState.c)
 *     UsbhPdoSetD0_Finish @ 0x1C0006568 (UsbhPdoSetD0_Finish.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C0045170 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x1C0055D20 (UsbhPdoPnp_RemoveDevice.c)
 * Callees:
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
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
