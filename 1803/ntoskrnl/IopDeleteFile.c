/*
 * XREFs of IopDeleteFile @ 0x1405B15A0
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     IopDeleteFileObjectExtension @ 0x140062248 (IopDeleteFileObjectExtension.c)
 *     IopDecrementDeviceObjectRefCount @ 0x14009F534 (IopDecrementDeviceObjectRefCount.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     IofCallDriver @ 0x1400FD990 (IofCallDriver.c)
 *     IopQueueThreadIrp @ 0x1400FDC10 (IopQueueThreadIrp.c)
 *     IoGetRelatedDeviceObject @ 0x1400FE1C0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     IopIncrementDeviceObjectRefCount @ 0x140106870 (IopIncrementDeviceObjectRefCount.c)
 *     IopDecrementVpbRefCount @ 0x1401069A0 (IopDecrementVpbRefCount.c)
 *     IopAllocateIrpMustSucceed @ 0x140106AA0 (IopAllocateIrpMustSucceed.c)
 *     IopDecrementDeviceObjectRef @ 0x140106AE0 (IopDecrementDeviceObjectRef.c)
 *     IoFreeIrp @ 0x140106E30 (IoFreeIrp.c)
 *     IoGetAttachedDevice @ 0x140107050 (IoGetAttachedDevice.c)
 *     IopDequeueIrpFromThread @ 0x140107260 (IopDequeueIrpFromThread.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     FsRtlPTeardownPerFileObjectContexts @ 0x1404E394C (FsRtlPTeardownPerFileObjectContexts.c)
 *     IopCloseFile @ 0x1405B12E0 (IopCloseFile.c)
 */

void __fastcall IopDeleteFile(PFILE_OBJECT FileObject)
{
  struct _DEVICE_OBJECT *DeviceObject; // rcx
  ULONG_PTR v3; // rdi
  ULONG Flags; // esi
  PDEVICE_OBJECT AttachedDevice; // rax
  struct _DEVICE_OBJECT *v6; // r15
  IRP *MustSucceed; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  PVPB Vpb; // rbp
  PDEVICE_OBJECT v10; // rcx
  char v11; // r14
  PIO_COMPLETION_CONTEXT CompletionContext; // rcx
  char v13; // [rsp+30h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-38h] BYREF

  DeviceObject = FileObject->DeviceObject;
  v3 = 0LL;
  if ( DeviceObject )
  {
    Flags = FileObject->Flags;
    if ( (Flags & 0x800) != 0 )
    {
      AttachedDevice = IoGetAttachedDevice(DeviceObject);
    }
    else
    {
      AttachedDevice = IoGetRelatedDeviceObject(FileObject);
      Flags = FileObject->Flags;
    }
    v6 = AttachedDevice;
    if ( (Flags & 0x240000) == 0 )
      IopCloseFile(0LL, FileObject, 1LL, 1LL);
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    if ( (FileObject->Flags & 0x4000000) == 0 )
      KeResetEvent(&FileObject->Event);
    MustSucceed = (IRP *)IopAllocateIrpMustSucceed((__int64)v6, (unsigned __int8)v6->StackSize);
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
    if ( IofCallDriver(v6, MustSucceed) == 259 )
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
      IopDecrementDeviceObjectRef(
        (ULONG_PTR)FileObject->DeviceObject,
        0,
        (unsigned __int8)~BYTE3(FileObject[-1].IrpList.Flink) >> 7);
    if ( v3 && Vpb )
      IopDecrementDeviceObjectRef(v3, 0, (unsigned __int8)~BYTE3(FileObject[-1].IrpList.Flink) >> 7);
  }
  if ( FileObject->FileObjectExtension )
    IopDeleteFileObjectExtension((__int64)FileObject);
}
