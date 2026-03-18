/*
 * XREFs of UsbhSet_Pdo_Dx @ 0x1C0018B68
 * Callers:
 *     UsbhSshPropagateResume @ 0x1C0001418 (UsbhSshPropagateResume.c)
 *     UsbhPdoSetD0 @ 0x1C0003620 (UsbhPdoSetD0.c)
 *     UsbhPdoDevicePowerState @ 0x1C0004108 (UsbhPdoDevicePowerState.c)
 *     UsbhPdoSetD0_Finish @ 0x1C0006568 (UsbhPdoSetD0_Finish.c)
 *     UsbhBusIf_SuspendChildHub @ 0x1C0019BC0 (UsbhBusIf_SuspendChildHub.c)
 *     UsbhSyncResumeDeviceInternal @ 0x1C0044168 (UsbhSyncResumeDeviceInternal.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1C00463C4 (UsbhPdoWaitForD3Reconnect.c)
 * Callees:
 *     UsbhSshSetPortsBusyState @ 0x1C00179C0 (UsbhSshSetPortsBusyState.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 */

LONG __fastcall UsbhSet_Pdo_Dx(PDEVICE_OBJECT DeviceObject, POWER_STATE State)
{
  LONG result; // eax
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
    result = State.SystemState - 2;
    if ( (unsigned int)(State.SystemState - 2) > 2 )
      return result;
    v5 = PdoExt(DeviceObject);
    v6 = PdoExt(DeviceObject);
    v7 = 1;
  }
  return UsbhSshSetPortsBusyState(*(_QWORD *)(v6 + 1176), *(_WORD *)(v5 + 1420), v7, 0);
}
