/*
 * XREFs of IopDeleteFile @ 0x1404BB010
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     IopQueueThreadIrp @ 0x140082130 (IopQueueThreadIrp.c)
 *     IofCallDriver @ 0x140082560 (IofCallDriver.c)
 *     IoGetRelatedDeviceObject @ 0x1400828F0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     IoFreeIrp @ 0x1400853A0 (IoFreeIrp.c)
 *     IoGetAttachedDevice @ 0x1400855C0 (IoGetAttachedDevice.c)
 *     IopDequeueIrpFromThread @ 0x1400857A0 (IopDequeueIrpFromThread.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     IopAllocateIrpMustSucceed @ 0x140085890 (IopAllocateIrpMustSucceed.c)
 *     IopDecrementDeviceObjectRef @ 0x1400858D0 (IopDecrementDeviceObjectRef.c)
 *     IopDecrementVpbRefCount @ 0x140085A10 (IopDecrementVpbRefCount.c)
 *     IopIncrementDeviceObjectRefCount @ 0x140085AF0 (IopIncrementDeviceObjectRefCount.c)
 *     IopDeleteFileObjectExtension @ 0x1400E5250 (IopDeleteFileObjectExtension.c)
 *     IopDecrementDeviceObjectRefCount @ 0x1400FA764 (IopDecrementDeviceObjectRefCount.c)
 *     IoChangeFileObjectFilterContext @ 0x140110F4C (IoChangeFileObjectFilterContext.c)
 *     IoGetFileObjectFilterContext @ 0x140110FA0 (IoGetFileObjectFilterContext.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     IopCloseFile @ 0x1404BAD60 (IopCloseFile.c)
 */

void __fastcall IopDeleteFile(PFILE_OBJECT FileObject)
{
  struct _DEVICE_OBJECT *DeviceObject; // rcx
  ULONG_PTR v3; // rsi
  PDEVICE_OBJECT AttachedDevice; // rax
  struct _DEVICE_OBJECT *v5; // r14
  IRP *MustSucceed; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  PVPB Vpb; // r15
  PDEVICE_OBJECT v9; // rcx
  char v10; // bp
  PIO_COMPLETION_CONTEXT CompletionContext; // rcx
  PVOID v12; // r10
  char v13; // [rsp+30h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-38h] BYREF
  signed __int64 v15; // [rsp+80h] [rbp+8h] BYREF

  DeviceObject = FileObject->DeviceObject;
  v3 = 0LL;
  if ( DeviceObject )
  {
    if ( (FileObject->Flags & 0x800) != 0 )
      AttachedDevice = IoGetAttachedDevice(DeviceObject);
    else
      AttachedDevice = IoGetRelatedDeviceObject(FileObject);
    v5 = AttachedDevice;
    if ( (FileObject->Flags & 0x240000) == 0 )
      IopCloseFile(0LL, FileObject, 1LL, 1LL);
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    if ( (FileObject->Flags & 0x4000000) == 0 )
      KeResetEvent(&FileObject->Event);
    MustSucceed = (IRP *)IopAllocateIrpMustSucceed((__int64)v5, v5->StackSize);
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
    v9 = FileObject->DeviceObject;
    if ( (v9->Flags & 0x400) != 0 )
    {
      IopDecrementDeviceObjectRefCount((ULONG_PTR)v9, 1);
      v10 = 1;
    }
    else
    {
      v10 = 0;
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
    {
      IoGetFileObjectFilterContext((__int64)FileObject, &v15, 0);
      if ( v15 )
      {
        IoChangeFileObjectFilterContext((__int64)FileObject, v15, 0);
        ExFreePoolWithTag(v12, 0);
      }
    }
    if ( !v10 )
      IopDecrementDeviceObjectRef((ULONG_PTR)FileObject->DeviceObject, 0);
    if ( v3 && Vpb )
      IopDecrementDeviceObjectRef(v3, 0);
  }
  if ( FileObject->FileObjectExtension )
    IopDeleteFileObjectExtension(FileObject);
}
