/*
 * XREFs of IoVerifyVolume @ 0x1406B7D20
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     IopQueueThreadIrp @ 0x140082130 (IopQueueThreadIrp.c)
 *     IopAllocateIrpExReturn @ 0x1400821E0 (IopAllocateIrpExReturn.c)
 *     IofCallDriver @ 0x140082560 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     IopDecrementVpbRefCount @ 0x140085A10 (IopDecrementVpbRefCount.c)
 *     IopDereferenceVpbAndFree @ 0x1400F1CE0 (IopDereferenceVpbAndFree.c)
 *     IopReferenceVerifyVpb @ 0x1401F55D0 (IopReferenceVerifyVpb.c)
 *     IopMountVolume @ 0x14055FFAC (IopMountVolume.c)
 *     PoVolumeDevice @ 0x140598584 (PoVolumeDevice.c)
 *     IopCreateVpb @ 0x14059CC3C (IopCreateVpb.c)
 */

NTSTATUS __stdcall IoVerifyVolume(PDEVICE_OBJECT DeviceObject, BOOLEAN AllowRawMount)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KEVENT *p_DeviceLock; // r15
  NTSTATUS v6; // edi
  struct _DEVICE_OBJECT *v7; // rdi
  struct _DEVICE_OBJECT *i; // rax
  __int64 Irp; // rax
  IRP *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // r14
  _QWORD v14[2]; // [rsp+30h] [rbp-30h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-20h] BYREF
  PDEVICE_OBJECT DeviceObjecta; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v17; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v18; // [rsp+B8h] [rbp+58h] BYREF

  v14[0] = 0LL;
  v14[1] = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  p_DeviceLock = &DeviceObject->DeviceLock;
  KeWaitForSingleObject(&DeviceObject->DeviceLock, Executive, 0, 0, 0LL);
  if ( !IopReferenceVerifyVpb((__int64)DeviceObject, (ULONG_PTR *)&v18, &DeviceObjecta) )
  {
    v6 = 0;
LABEL_11:
    if ( (int)IopCreateVpb((__int64)DeviceObject) < 0
      || (PoVolumeDevice((__int64)DeviceObject),
          v17 = 0LL,
          (int)IopMountVolume((ULONG_PTR)DeviceObject, AllowRawMount, 1, 0, (ULONG_PTR *)&v17) < 0) )
    {
      DeviceObject->Flags &= ~2u;
    }
    else if ( v17 )
    {
      IopDecrementVpbRefCount(v17, 1);
    }
    goto LABEL_16;
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v7 = DeviceObjecta;
  for ( i = DeviceObjecta->AttachedDevice; i; i = i->AttachedDevice )
    v7 = i;
  Irp = IopAllocateIrpExReturn();
  v10 = (IRP *)Irp;
  if ( !Irp )
  {
    v6 = -1073741670;
    goto LABEL_16;
  }
  *(_DWORD *)(Irp + 16) = 66;
  *(_BYTE *)(Irp + 64) = 0;
  *(_QWORD *)(Irp + 80) = &Event;
  *(_QWORD *)(Irp + 72) = v14;
  v11 = *(_QWORD *)(Irp + 184);
  v12 = v18;
  *(_QWORD *)(Irp + 152) = KeGetCurrentThread();
  *(_BYTE *)(v11 - 70) = AllowRawMount != 0;
  *(_QWORD *)(v11 - 56) = DeviceObjecta;
  *(_WORD *)(v11 - 72) = 525;
  *(_QWORD *)(v11 - 64) = v12;
  IopQueueThreadIrp(Irp);
  v6 = IofCallDriver(v7, v10);
  if ( v6 == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v6 = v14[0];
  }
  IopDereferenceVpbAndFree(v12);
  if ( v6 == -1073741806 )
    goto LABEL_11;
LABEL_16:
  KeSetEvent(p_DeviceLock, 0, 0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v6;
}
