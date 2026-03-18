/*
 * XREFs of IopGetFileInformation @ 0x14048FE14
 * Callers:
 *     IopQueryNameInternal @ 0x14048F970 (IopQueryNameInternal.c)
 *     IopGetBasicInformationFile @ 0x140587C5C (IopGetBasicInformationFile.c)
 *     IopGraftName @ 0x1405CDB54 (IopGraftName.c)
 *     IopGetRelatedFileName @ 0x1406B4E5C (IopGetRelatedFileName.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     IopQueueThreadIrp @ 0x140082130 (IopQueueThreadIrp.c)
 *     IopAllocateIrpExReturn @ 0x1400821E0 (IopAllocateIrpExReturn.c)
 *     IofCallDriver @ 0x140082560 (IofCallDriver.c)
 *     IoGetRelatedDeviceObject @ 0x1400828F0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 */

__int64 __fastcall IopGetFileInformation(struct _FILE_OBJECT *Object, ULONG a2, ULONG a3, struct _IRP *a4, _DWORD *a5)
{
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rsi
  __int64 Irp; // rax
  IRP *v11; // rbx
  __int64 v12; // rcx
  struct _KTHREAD *CurrentThread; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v15; // edx
  __int64 v17; // [rsp+30h] [rbp-48h] BYREF
  __int64 v18; // [rsp+38h] [rbp-40h]
  struct _KEVENT Event; // [rsp+40h] [rbp-38h] BYREF

  v17 = 0LL;
  v18 = 0LL;
  ObfReferenceObject(Object);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  RelatedDeviceObject = IoGetRelatedDeviceObject(Object);
  Irp = IopAllocateIrpExReturn();
  v11 = (IRP *)Irp;
  if ( Irp )
  {
    *(_QWORD *)(Irp + 192) = Object;
    v12 = Irp;
    CurrentThread = KeGetCurrentThread();
    v11->Overlay.AllocationSize.QuadPart = 0LL;
    v11->Tail.Overlay.Thread = CurrentThread;
    v11->UserEvent = &Event;
    v11->UserIosb = (PIO_STATUS_BLOCK)&v17;
    CurrentStackLocation = v11->Tail.Overlay.CurrentStackLocation;
    v11->Flags = 4100;
    v11->RequestorMode = 0;
    CurrentStackLocation[-1].MajorFunction = 5;
    CurrentStackLocation[-1].FileObject = Object;
    v11->Flags |= 0x10u;
    v11->AssociatedIrp.MasterIrp = a4;
    CurrentStackLocation[-1].Parameters.Read.Length = a2;
    CurrentStackLocation[-1].Parameters.Create.Options = a3;
    IopQueueThreadIrp(v12);
    v15 = IofCallDriver(RelatedDeviceObject, v11);
    if ( v15 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v15 = v17;
    }
    *a5 = v18;
    return v15;
  }
  else
  {
    ObfDereferenceObject(Object);
    return 3221225626LL;
  }
}
