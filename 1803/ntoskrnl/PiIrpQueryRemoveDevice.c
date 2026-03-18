/*
 * XREFs of PiIrpQueryRemoveDevice @ 0x14073A3B0
 * Callers:
 *     PnpDisableDevice @ 0x140727528 (PnpDisableDevice.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x140727C3C (PnpQueryRemoveLockedDeviceNode.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 *     PnpFindMountableDevice @ 0x14014523C (PnpFindMountableDevice.c)
 *     PnpMarkDeviceForRemove @ 0x14015E1A4 (PnpMarkDeviceForRemove.c)
 *     PnpLockMountableDevice @ 0x14015E398 (PnpLockMountableDevice.c)
 *     PnpUnlockMountableDevice @ 0x14015E4C8 (PnpUnlockMountableDevice.c)
 *     IopDecrementDeviceObjectHandleCount @ 0x14015F460 (IopDecrementDeviceObjectHandleCount.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PnpAsynchronousCall @ 0x1405E2C94 (PnpAsynchronousCall.c)
 *     IopInvalidateVolumesForDevice @ 0x1405F212C (IopInvalidateVolumesForDevice.c)
 */

__int64 __fastcall PiIrpQueryRemoveDevice(PDEVICE_OBJECT DeviceObject, _QWORD *a2)
{
  PVOID v2; // rsi
  int v5; // r15d
  struct _DEVICE_OBJECT *v6; // rdi
  int v7; // edi
  ULONG_PTR v9; // [rsp+38h] [rbp-39h] BYREF
  PVOID Object; // [rsp+40h] [rbp-31h]
  __int64 v11; // [rsp+48h] [rbp-29h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-21h] BYREF
  int v13; // [rsp+68h] [rbp-9h]
  _BYTE v14[72]; // [rsp+70h] [rbp-1h] BYREF

  v2 = 0LL;
  v9 = 0LL;
  Object = 0LL;
  v5 = 0;
  memset(v14, 0, sizeof(v14));
  *(_WORD *)v14 = 283;
  if ( PnpFindMountableDevice((__int64)DeviceObject) )
  {
    v5 = 1;
    PnpLockMountableDevice(DeviceObject);
    v6 = (struct _DEVICE_OBJECT *)PnpMarkDeviceForRemove((ULONG_PTR)DeviceObject, 1, &v9);
    PnpUnlockMountableDevice((__int64)DeviceObject);
    v2 = Object;
  }
  else
  {
    v6 = DeviceObject;
  }
  v11 = 0LL;
  v13 = -1073741823;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v7 = PnpAsynchronousCall(v6, (__int128 *)v14, (IO_COMPLETION_ROUTINE *)PnpDiagnosticCompletionRoutine, &v11);
  if ( v7 == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v7 = v13;
  }
  if ( a2 )
    *a2 = v11;
  if ( v5 )
  {
    PnpLockMountableDevice(DeviceObject);
    if ( v2 )
    {
      IopDecrementDeviceObjectHandleCount((ULONG_PTR)v2);
      ObfDereferenceObject(v2);
    }
    PnpUnlockMountableDevice((__int64)DeviceObject);
    if ( v7 >= 0 )
      return (unsigned int)IopInvalidateVolumesForDevice(DeviceObject);
  }
  return (unsigned int)v7;
}
