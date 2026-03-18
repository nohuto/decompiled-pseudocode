/*
 * XREFs of GET_FDO_POWER_STATE @ 0x1C0004FA4
 * Callers:
 *     UsbhPdoSetDx @ 0x1C0001100 (UsbhPdoSetDx.c)
 *     UsbhSS_PdoWakeWorker @ 0x1C00017C0 (UsbhSS_PdoWakeWorker.c)
 *     UsbhPdoSetD0 @ 0x1C0003260 (UsbhPdoSetD0.c)
 *     UsbhPdoDevicePowerState @ 0x1C0003C98 (UsbhPdoDevicePowerState.c)
 *     UsbhFdoWakePoComplete_Action @ 0x1C0003FC0 (UsbhFdoWakePoComplete_Action.c)
 *     UsbhFdoSystemPowerState @ 0x1C00041F4 (UsbhFdoSystemPowerState.c)
 * Callees:
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 */

__int64 __fastcall GET_FDO_POWER_STATE(__int64 a1)
{
  FdoExt(*(_QWORD *)(a1 + 8));
  return *(unsigned int *)(FdoExt(*(_QWORD *)(a1 + 8)) + 4172);
}
