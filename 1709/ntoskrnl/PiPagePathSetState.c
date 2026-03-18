/*
 * XREFs of PiPagePathSetState @ 0x1405F037C
 * Callers:
 *     MiCreatePagingFile @ 0x1405D3FF0 (MiCreatePagingFile.c)
 *     CmpSendBootDeviceUsageNotification @ 0x140694FC4 (CmpSendBootDeviceUsageNotification.c)
 *     PpPagePathAssign @ 0x1406C0AD8 (PpPagePathAssign.c)
 *     MiDeletePagefile @ 0x1406E4538 (MiDeletePagefile.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     IofCallDriver @ 0x140082560 (IofCallDriver.c)
 *     IoGetRelatedDeviceObject @ 0x1400828F0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     IoAllocateIrp @ 0x1400DEBD0 (IoAllocateIrp.c)
 *     IoQueueThreadIrp @ 0x140131A50 (IoQueueThreadIrp.c)
 *     PpDevNodeUnlockTree @ 0x1405270EC (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14052717C (PpDevNodeLockTree.c)
 */

__int64 __fastcall PiPagePathSetState(struct _FILE_OBJECT *Object, BOOLEAN a2)
{
  PDEVICE_OBJECT RelatedDeviceObject; // rsi
  PIRP Irp; // rax
  IRP *v6; // rbx
  IRP *v7; // rcx
  struct _KTHREAD *CurrentThread; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v10; // ebx
  _QWORD v12[2]; // [rsp+30h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-28h] BYREF

  v12[0] = 0LL;
  v12[1] = 0LL;
  ObfReferenceObject(Object);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  RelatedDeviceObject = IoGetRelatedDeviceObject(Object);
  Irp = IoAllocateIrp(RelatedDeviceObject->StackSize, 0);
  v6 = Irp;
  if ( Irp )
  {
    Irp->Tail.Overlay.OriginalFileObject = Object;
    v7 = Irp;
    CurrentThread = KeGetCurrentThread();
    v6->Overlay.AllocationSize.QuadPart = 0LL;
    v6->Tail.Overlay.Thread = CurrentThread;
    v6->UserEvent = &Event;
    v6->UserIosb = (PIO_STATUS_BLOCK)v12;
    CurrentStackLocation = v6->Tail.Overlay.CurrentStackLocation;
    v6->RequestorMode = 0;
    v6->Flags = 4;
    CurrentStackLocation[-1].FileObject = Object;
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 5659;
    v6->AssociatedIrp.MasterIrp = 0LL;
    v6->IoStatus.Status = -1073741637;
    CurrentStackLocation[-1].Parameters.Create.Options = 1;
    CurrentStackLocation[-1].Parameters.SetLock.Lock = a2;
    IoQueueThreadIrp(v7);
    PpDevNodeLockTree(1);
    v10 = IofCallDriver(RelatedDeviceObject, v6);
    if ( v10 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v10 = v12[0];
    }
    PpDevNodeUnlockTree(1);
    return v10;
  }
  else
  {
    ObfDereferenceObject(Object);
    return 3221225495LL;
  }
}
