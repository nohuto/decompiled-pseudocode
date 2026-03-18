/*
 * XREFs of IoVerifyVolume @ 0x14071C9D0
 * Callers:
 *     <none>
 * Callees:
 *     IopDereferenceVpbAndFree @ 0x140088C00 (IopDereferenceVpbAndFree.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     IofCallDriver @ 0x1400FD990 (IofCallDriver.c)
 *     IopQueueThreadIrp @ 0x1400FDC10 (IopQueueThreadIrp.c)
 *     IopAllocateIrpExReturn @ 0x1400FDE40 (IopAllocateIrpExReturn.c)
 *     IopDecrementVpbRefCount @ 0x1401069A0 (IopDecrementVpbRefCount.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 *     IopReferenceVerifyVpb @ 0x140232B58 (IopReferenceVerifyVpb.c)
 *     IopMountVolume @ 0x140493C24 (IopMountVolume.c)
 *     PoVolumeDevice @ 0x1406048A8 (PoVolumeDevice.c)
 *     IopCreateVpb @ 0x1406052D8 (IopCreateVpb.c)
 */

NTSTATUS __stdcall IoVerifyVolume(PDEVICE_OBJECT DeviceObject, BOOLEAN AllowRawMount)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KEVENT *p_DeviceLock; // r15
  NTSTATUS v6; // edi
  __int64 v7; // rdx
  PDEVICE_OBJECT v8; // rdi
  struct _DEVICE_OBJECT *i; // rax
  __int64 Irp; // rax
  IRP *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r14
  _QWORD v15[2]; // [rsp+30h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-20h] BYREF
  __int64 retaddr; // [rsp+98h] [rbp+38h]
  PDEVICE_OBJECT DeviceObjecta; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v19; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v20; // [rsp+B8h] [rbp+58h] BYREF

  v15[0] = 0LL;
  v15[1] = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  p_DeviceLock = &DeviceObject->DeviceLock;
  KeWaitForSingleObject(&DeviceObject->DeviceLock, Executive, 0, 0, 0LL);
  if ( !IopReferenceVerifyVpb((__int64)DeviceObject, (ULONG_PTR *)&v20, &DeviceObjecta) )
  {
    v6 = 0;
LABEL_11:
    if ( (int)IopCreateVpb((__int64)DeviceObject) < 0
      || (PoVolumeDevice((__int64)DeviceObject),
          v19 = 0LL,
          (int)IopMountVolume((ULONG_PTR)DeviceObject, AllowRawMount, 1, 0, (ULONG_PTR *)&v19) < 0) )
    {
      DeviceObject->Flags &= ~2u;
    }
    else if ( v19 )
    {
      IopDecrementVpbRefCount(v19, 1);
    }
    goto LABEL_16;
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v8 = DeviceObjecta;
  for ( i = DeviceObjecta->AttachedDevice; i; i = i->AttachedDevice )
    v8 = i;
  LOBYTE(v7) = v8->StackSize;
  Irp = IopAllocateIrpExReturn((__int64)v8, v7, 0LL, retaddr);
  v11 = (IRP *)Irp;
  if ( !Irp )
  {
    v6 = -1073741670;
    goto LABEL_16;
  }
  *(_DWORD *)(Irp + 16) = 66;
  *(_BYTE *)(Irp + 64) = 0;
  *(_QWORD *)(Irp + 80) = &Event;
  *(_QWORD *)(Irp + 72) = v15;
  v12 = *(_QWORD *)(Irp + 184);
  v13 = v20;
  *(_QWORD *)(Irp + 152) = KeGetCurrentThread();
  *(_BYTE *)(v12 - 70) = AllowRawMount != 0;
  *(_QWORD *)(v12 - 56) = DeviceObjecta;
  *(_WORD *)(v12 - 72) = 525;
  *(_QWORD *)(v12 - 64) = v13;
  IopQueueThreadIrp(Irp);
  v6 = IofCallDriver(v8, v11);
  if ( v6 == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v6 = v15[0];
  }
  IopDereferenceVpbAndFree(v13);
  if ( v6 == -1073741806 )
    goto LABEL_11;
LABEL_16:
  KeSetEvent(p_DeviceLock, 0, 0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v6;
}
