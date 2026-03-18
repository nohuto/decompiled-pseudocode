/*
 * XREFs of PoSetPowerState @ 0x14012BB60
 * Callers:
 *     IopPowerDispatch @ 0x14000F210 (IopPowerDispatch.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 */

POWER_STATE __stdcall PoSetPowerState(PDEVICE_OBJECT DeviceObject, POWER_STATE_TYPE Type, POWER_STATE State)
{
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rbp
  int v6; // ebx
  KIRQL v7; // r14
  unsigned int v8; // edi

  DeviceObjectExtension = DeviceObject->DeviceObjectExtension;
  v6 = 0;
  v7 = KeAcquireSpinLockRaiseToDpc(&PopIrpSerialLock);
  if ( Type == SystemPowerState )
  {
    v6 = DeviceObjectExtension->PowerFlags & 0xF;
    if ( v6 == State.SystemState )
      goto LABEL_6;
    v8 = DeviceObjectExtension->PowerFlags & 0xFFFFFFF0 | State.SystemState & 0xF;
    goto LABEL_5;
  }
  if ( Type == DevicePowerState )
  {
    v6 = (DeviceObjectExtension->PowerFlags >> 4) & 0xF;
    if ( v6 != State.SystemState )
    {
      v8 = DeviceObjectExtension->PowerFlags & 0xFFFFFF0F | (16 * (State.SystemState & 0xF));
LABEL_5:
      DeviceObjectExtension->PowerFlags = v8;
    }
  }
LABEL_6:
  KxReleaseSpinLock(&PopIrpSerialLock);
  __writecr8(v7);
  return (POWER_STATE)v6;
}
