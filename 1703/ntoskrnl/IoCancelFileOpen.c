/*
 * XREFs of IoCancelFileOpen @ 0x14068B2F0
 * Callers:
 *     IopParseDevice @ 0x1405385E0 (IopParseDevice.c)
 * Callees:
 *     IopCloseFileObjectExtension @ 0x140025EE8 (IopCloseFileObjectExtension.c)
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     IopDequeueIrpFromThread @ 0x1400ED860 (IopDequeueIrpFromThread.c)
 *     IopAllocateIrpMustSucceed @ 0x1400ED940 (IopAllocateIrpMustSucceed.c)
 *     IoFreeIrp @ 0x1400F1190 (IoFreeIrp.c)
 *     IopQueueThreadIrp @ 0x1400F1410 (IopQueueThreadIrp.c)
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 *     PoCallDriver @ 0x14014A0B0 (PoCallDriver.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

void __stdcall IoCancelFileOpen(PDEVICE_OBJECT DeviceObject, PFILE_OBJECT FileObject)
{
  __int64 v4; // rdx
  IRP *MustSucceed; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  if ( (FileObject->Flags & 0x40000) != 0 )
    KeBugCheckEx(0xE8u, (ULONG_PTR)FileObject, (ULONG_PTR)DeviceObject, 0LL, 0LL);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  if ( (FileObject->Flags & 0x4000000) == 0 )
    KeResetEvent(&FileObject->Event);
  LOBYTE(v4) = DeviceObject->StackSize;
  MustSucceed = (IRP *)IopAllocateIrpMustSucceed((__int64)DeviceObject, v4);
  MustSucceed->Tail.Overlay.OriginalFileObject = FileObject;
  CurrentThread = KeGetCurrentThread();
  MustSucceed->Overlay.AllocationSize.QuadPart = 0LL;
  MustSucceed->Tail.Overlay.Thread = CurrentThread;
  MustSucceed->UserIosb = &MustSucceed->IoStatus;
  CurrentStackLocation = MustSucceed->Tail.Overlay.CurrentStackLocation;
  MustSucceed->RequestorMode = 0;
  MustSucceed->UserEvent = &Event;
  MustSucceed->Flags = 1028;
  CurrentStackLocation[-1].MajorFunction = 18;
  CurrentStackLocation[-1].FileObject = FileObject;
  IopQueueThreadIrp((__int64)MustSucceed);
  if ( PoCallDriver(DeviceObject, MustSucceed) == 259 )
    KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
  IopDequeueIrpFromThread(MustSucceed);
  IoFreeIrp(MustSucceed);
  KeResetEvent(&FileObject->Event);
  FileObject->Flags |= 0x200000u;
  if ( FileObject->FileObjectExtension )
    IopCloseFileObjectExtension((__int64)FileObject);
}
