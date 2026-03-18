/*
 * XREFs of UsbhHubIsrWorker @ 0x1C0016A20
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     UsbhHubProcessIsr @ 0x1C0013F10 (UsbhHubProcessIsr.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 */

void __fastcall UsbhHubIsrWorker(PDEVICE_OBJECT DeviceObject, unsigned int a2, __int64 a3)
{
  __int64 v6; // r9
  KIRQL v7; // r10
  KIRQL v8; // r10
  __int64 v9; // rdx
  _QWORD *v10; // rax
  _DWORD *v11; // rax
  __int64 v12; // r11
  int v13; // r10d

  FdoExt((__int64)DeviceObject);
  KeAcquireSpinLockRaiseToDpc(&SpinLock);
  Log((__int64)DeviceObject, 4, 1230197367, (__int64)DeviceObject, a3);
  if ( *(_DWORD *)(a3 + 152) == 1 )
  {
    Log((__int64)DeviceObject, 4, 1230201969, v6, a3);
    v9 = *(_QWORD *)(a3 + 160);
    v10 = *(_QWORD **)(a3 + 168);
    if ( *(_QWORD *)(v9 + 8) != a3 + 160 || *v10 != a3 + 160 )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    *(_DWORD *)(a3 + 152) = 0;
    KeReleaseSpinLock(&SpinLock, v8);
    UsbhHubProcessIsr(DeviceObject, a2, a3);
  }
  else
  {
    KeReleaseSpinLock(&SpinLock, v7);
  }
  v11 = FdoExt((__int64)DeviceObject);
  _InterlockedExchangeAdd(v11 + 685, 0xFFFFFFFF);
  Log((__int64)DeviceObject, 4, 1212764717, (__int64)DeviceObject, (int)v11[685]);
  if ( v13 == 1 )
    KeSetEvent((PRKEVENT)(v12 + 2744), 0, 0);
}
