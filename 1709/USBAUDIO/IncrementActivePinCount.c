/*
 * XREFs of IncrementActivePinCount @ 0x1C0014A70
 * Callers:
 *     PinSetDeviceState @ 0x1C0014BC0 (PinSetDeviceState.c)
 * Callees:
 *     DeviceRequestPowerUp @ 0x1C0013798 (DeviceRequestPowerUp.c)
 */

__int64 __fastcall IncrementActivePinCount(PKSPIN Pin)
{
  PKSDEVICE Device; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  PKSDEVICE v6; // rsi
  char *Context; // rdi
  NTSTATUS v8; // edx
  PKSFILTER ParentFilter; // rbx
  void *v10; // rcx

  Device = KsGetDevice(Pin);
  v6 = Device;
  Context = (char *)Device->Context;
  if ( *((_DWORD *)Context + 128) != 1 )
  {
    v8 = DeviceRequestPowerUp((PIRP *)Device, v3, v4, v5);
    if ( v8 < 0 )
      return (unsigned int)v8;
    ParentFilter = KsPinGetParentFilter(Pin);
    KsReleaseControl(ParentFilter);
    KeWaitForSingleObject(Context + 528, Executive, 0, 0, 0LL);
    KsAcquireControl(ParentFilter);
  }
  v8 = 0;
  if ( _InterlockedIncrement((volatile signed __int32 *)Context + 171) == 1 )
  {
    v10 = (void *)*((_QWORD *)Context + 62);
    if ( v10 )
      PoSetPowerRequest(v10, PowerRequestSystemRequired);
    *((_QWORD *)Context + 63) = PoRegisterDeviceForIdleDetection(
                                  v6->PhysicalDeviceObject,
                                  0,
                                  0,
                                  (DEVICE_POWER_STATE)*((_DWORD *)Context + 129));
    return 0;
  }
  return (unsigned int)v8;
}
