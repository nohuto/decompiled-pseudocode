/*
 * XREFs of UsbhSet_Pdo_Dx @ 0x1C0019A34
 * Callers:
 *     UsbhPdoSetD0_Finish @ 0x1C00015A0 (UsbhPdoSetD0_Finish.c)
 *     UsbhPdoSetD0 @ 0x1C0003260 (UsbhPdoSetD0.c)
 *     UsbhPdoDevicePowerState @ 0x1C0003C98 (UsbhPdoDevicePowerState.c)
 *     UsbhSshPropagateResume @ 0x1C0006014 (UsbhSshPropagateResume.c)
 *     UsbhBusIf_SuspendChildHub @ 0x1C00247E0 (UsbhBusIf_SuspendChildHub.c)
 *     UsbhSyncResumeDeviceInternal @ 0x1C0044F98 (UsbhSyncResumeDeviceInternal.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1C0047184 (UsbhPdoWaitForD3Reconnect.c)
 * Callees:
 *     UsbhSshSetPortsBusyState @ 0x1C0019684 (UsbhSshSetPortsBusyState.c)
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 */

__int16 __fastcall UsbhSet_Pdo_Dx(PDEVICE_OBJECT DeviceObject, POWER_STATE State)
{
  __int16 result; // ax
  __int64 v5; // rbx
  __int64 v6; // rax
  int v7; // r8d

  *(POWER_STATE *)(PdoExt(DeviceObject) + 788) = State;
  PoSetPowerState(DeviceObject, DevicePowerState, State);
  if ( State.SystemState == PowerSystemWorking )
  {
    v5 = PdoExt(DeviceObject);
    v6 = PdoExt(DeviceObject);
    v7 = 2;
  }
  else
  {
    result = LOWORD(State.SystemState) - 2;
    if ( (unsigned int)(State.SystemState - 2) > 2 )
      return result;
    v5 = PdoExt(DeviceObject);
    v6 = PdoExt(DeviceObject);
    v7 = 1;
  }
  return UsbhSshSetPortsBusyState(*(_QWORD *)(v6 + 1176), *(_WORD *)(v5 + 1420), v7, 0);
}
