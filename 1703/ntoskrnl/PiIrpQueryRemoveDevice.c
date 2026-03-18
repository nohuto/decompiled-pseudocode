/*
 * XREFs of PiIrpQueryRemoveDevice @ 0x14059AA20
 * Callers:
 *     PnpQueryRemoveLockedDeviceNode @ 0x14059A934 (PnpQueryRemoveLockedDeviceNode.c)
 *     PnpDisableDevice @ 0x14059AF18 (PnpDisableDevice.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 *     PnpFindMountableDevice @ 0x140132630 (PnpFindMountableDevice.c)
 *     memset @ 0x140192D80 (memset.c)
 *     IopDecrementDeviceObjectHandleCount @ 0x1401EF730 (IopDecrementDeviceObjectHandleCount.c)
 *     PnpLockMountableDevice @ 0x1401F8A9C (PnpLockMountableDevice.c)
 *     PnpMarkDeviceForRemove @ 0x1401F8AF8 (PnpMarkDeviceForRemove.c)
 *     PnpUnlockMountableDevice @ 0x1401F8BE4 (PnpUnlockMountableDevice.c)
 *     PnpAsynchronousCall @ 0x1404DB8E0 (PnpAsynchronousCall.c)
 *     IopInvalidateVolumesForDevice @ 0x1406894B8 (IopInvalidateVolumesForDevice.c)
 */

__int64 __fastcall PiIrpQueryRemoveDevice(PDEVICE_OBJECT DeviceObject, _QWORD *a2)
{
  void *v2; // rsi
  int v5; // r15d
  struct _DEVICE_OBJECT *v6; // rdi
  int v7; // edi
  ULONG_PTR v9; // [rsp+38h] [rbp-39h] BYREF
  void *v10; // [rsp+40h] [rbp-31h]
  __int64 v11; // [rsp+48h] [rbp-29h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-21h] BYREF
  int v13; // [rsp+68h] [rbp-9h]
  _BYTE v14[72]; // [rsp+70h] [rbp-1h] BYREF

  v2 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v5 = 0;
  memset(v14, 0, sizeof(v14));
  *(_WORD *)v14 = 283;
  if ( PnpFindMountableDevice((__int64)DeviceObject) )
  {
    v5 = 1;
    PnpLockMountableDevice(DeviceObject);
    v6 = (struct _DEVICE_OBJECT *)PnpMarkDeviceForRemove((ULONG_PTR)DeviceObject, 1, &v9);
    PnpUnlockMountableDevice((__int64)DeviceObject);
    v2 = v10;
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
