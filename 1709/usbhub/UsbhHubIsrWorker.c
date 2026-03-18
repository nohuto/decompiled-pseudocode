/*
 * XREFs of UsbhHubIsrWorker @ 0x1C0015960
 * Callers:
 *     <none>
 * Callees:
 *     UsbhHubProcessIsr @ 0x1C0014D30 (UsbhHubProcessIsr.c)
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 *     UsbhTrapFatal_Dbg @ 0x1C002935C (UsbhTrapFatal_Dbg.c)
 */

void __fastcall UsbhHubIsrWorker(PDEVICE_OBJECT DeviceObject, unsigned int a2, __int64 a3)
{
  _DWORD *DeviceExtension; // rdx
  __int64 v7; // r9
  KIRQL v8; // r10
  KIRQL v9; // r10
  __int64 v10; // rdx
  _QWORD *v11; // rax
  _DWORD *v12; // rax
  __int64 v13; // r11
  int v14; // r10d

  if ( !DeviceObject )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  DeviceExtension = DeviceObject->DeviceExtension;
  if ( !DeviceExtension )
    UsbhTrapFatal_Dbg(DeviceObject, 0LL);
  if ( *DeviceExtension != 541218120 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceExtension);
  KeAcquireSpinLockRaiseToDpc(&SpinLock);
  Log((__int64)DeviceObject, 4, 1230197367, (__int64)DeviceObject, a3);
  if ( *(_DWORD *)(a3 + 152) == 1 )
  {
    Log((__int64)DeviceObject, 4, 1230201969, v7, a3);
    v10 = *(_QWORD *)(a3 + 160);
    if ( *(_QWORD *)(v10 + 8) != a3 + 160 || (v11 = *(_QWORD **)(a3 + 168), *v11 != a3 + 160) )
      __fastfail(3u);
    *v11 = v10;
    *(_QWORD *)(v10 + 8) = v11;
    *(_DWORD *)(a3 + 152) = 0;
    KeReleaseSpinLock(&SpinLock, v9);
    UsbhHubProcessIsr(DeviceObject, a2, a3);
  }
  else
  {
    KeReleaseSpinLock(&SpinLock, v8);
  }
  v12 = FdoExt((__int64)DeviceObject);
  _InterlockedExchangeAdd(v12 + 685, 0xFFFFFFFF);
  Log((__int64)DeviceObject, 4, 1212764717, (__int64)DeviceObject, (int)v12[685]);
  if ( v14 == 1 )
    KeSetEvent((PRKEVENT)(v13 + 2744), 0, 0);
}
