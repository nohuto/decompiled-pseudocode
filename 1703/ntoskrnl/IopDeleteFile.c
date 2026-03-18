/*
 * XREFs of IopDeleteFile @ 0x14051E790
 * Callers:
 *     <none>
 * Callees:
 *     IopDecrementDeviceObjectRefCount @ 0x140005BB8 (IopDecrementDeviceObjectRefCount.c)
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     IoGetAttachedDevice @ 0x1400815B0 (IoGetAttachedDevice.c)
 *     IopDecrementVpbRefCount @ 0x1400DB890 (IopDecrementVpbRefCount.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1400DB970 (IopIncrementDeviceObjectRefCount.c)
 *     IopDecrementDeviceObjectRef @ 0x1400DBA60 (IopDecrementDeviceObjectRef.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     IopDequeueIrpFromThread @ 0x1400ED860 (IopDequeueIrpFromThread.c)
 *     IopAllocateIrpMustSucceed @ 0x1400ED940 (IopAllocateIrpMustSucceed.c)
 *     IoGetRelatedDeviceObject @ 0x1400EDDF0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     IoFreeIrp @ 0x1400F1190 (IoFreeIrp.c)
 *     IofCallDriver @ 0x1400F1390 (IofCallDriver.c)
 *     IopQueueThreadIrp @ 0x1400F1410 (IopQueueThreadIrp.c)
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 *     IopDeleteFileObjectExtension @ 0x140114990 (IopDeleteFileObjectExtension.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     FsRtlPTeardownPerFileObjectContexts @ 0x14048C05C (FsRtlPTeardownPerFileObjectContexts.c)
 *     IopCloseFile @ 0x140527CA0 (IopCloseFile.c)
 */

void __fastcall IopDeleteFile(PFILE_OBJECT FileObject)
{
  struct _DEVICE_OBJECT *DeviceObject; // rcx
  ULONG_PTR v3; // rdi
  PDEVICE_OBJECT AttachedDevice; // rax
  struct _DEVICE_OBJECT *v5; // r15
  unsigned __int8 v6; // bp
  IRP *MustSucceed; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  PVPB Vpb; // r14
  PDEVICE_OBJECT v10; // rcx
  char v11; // r12
  PIO_COMPLETION_CONTEXT CompletionContext; // rcx
  char v13; // [rsp+30h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-38h] BYREF

  DeviceObject = FileObject->DeviceObject;
  v3 = 0LL;
  if ( DeviceObject )
  {
    if ( (FileObject->Flags & 0x800) != 0 )
      AttachedDevice = IoGetAttachedDevice(DeviceObject);
    else
      AttachedDevice = IoGetRelatedDeviceObject(FileObject);
    v5 = AttachedDevice;
    v6 = 1;
    if ( (FileObject->Flags & 0x240000) == 0 )
      IopCloseFile(0LL, FileObject, 1LL, 1LL);
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    if ( (FileObject->Flags & 0x4000000) == 0 )
      KeResetEvent(&FileObject->Event);
    MustSucceed = (IRP *)IopAllocateIrpMustSucceed((__int64)v5, (unsigned __int8)v5->StackSize);
    CurrentStackLocation = MustSucceed->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].MajorFunction = 2;
    CurrentStackLocation[-1].FileObject = FileObject;
    MustSucceed->UserIosb = (PIO_STATUS_BLOCK)&v13;
    MustSucceed->UserEvent = &Event;
    MustSucceed->Tail.Overlay.OriginalFileObject = FileObject;
    MustSucceed->Tail.Overlay.Thread = KeGetCurrentThread();
    MustSucceed->AssociatedIrp.MasterIrp = 0LL;
    MustSucceed->Flags = 1028;
    IopQueueThreadIrp((__int64)MustSucceed);
    Vpb = FileObject->Vpb;
    if ( Vpb )
    {
      if ( (FileObject->Flags & 0x800) == 0 )
      {
        IopDecrementVpbRefCount((__int64)FileObject->Vpb, 1);
        v3 = (ULONG_PTR)Vpb->DeviceObject;
        if ( v3 )
          IopIncrementDeviceObjectRefCount((ULONG_PTR)Vpb->DeviceObject, 1);
      }
    }
    v10 = FileObject->DeviceObject;
    if ( (v10->Flags & 0x400) != 0 )
    {
      IopDecrementDeviceObjectRefCount((ULONG_PTR)v10, 1);
      v11 = 1;
    }
    else
    {
      v11 = 0;
    }
    if ( IofCallDriver(v5, MustSucceed) == 259 )
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    MustSucceed->Tail.Overlay.Thread = KeGetCurrentThread();
    IopDequeueIrpFromThread(MustSucceed);
    IoFreeIrp(MustSucceed);
    if ( FileObject->FileName.Length )
      ExFreePoolWithTag(FileObject->FileName.Buffer, 0);
    CompletionContext = FileObject->CompletionContext;
    if ( CompletionContext )
    {
      ObfDereferenceObject(CompletionContext->Port);
      ExFreePoolWithTag(FileObject->CompletionContext, 0);
    }
    if ( FileObject->FileObjectExtension )
      FsRtlPTeardownPerFileObjectContexts((__int64)FileObject);
    if ( !v11 )
      IopDecrementDeviceObjectRef((ULONG_PTR)FileObject->DeviceObject, 0, SBYTE3(FileObject[-1].IrpList.Flink) >= 0);
    if ( v3 && Vpb )
    {
      if ( SBYTE3(FileObject[-1].IrpList.Flink) < 0 )
        v6 = 0;
      IopDecrementDeviceObjectRef(v3, 0, v6);
    }
  }
  if ( FileObject->FileObjectExtension )
    IopDeleteFileObjectExtension((__int64)FileObject);
}
