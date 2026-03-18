/*
 * XREFs of FsRtlQueryInformationFile @ 0x1406B0F60
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     IofCallDriver @ 0x140082560 (IofCallDriver.c)
 *     IoGetRelatedDeviceObject @ 0x1400828F0 (IoGetRelatedDeviceObject.c)
 *     IoFreeIrp @ 0x1400853A0 (IoFreeIrp.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     IoCancelIrp @ 0x140108640 (IoCancelIrp.c)
 *     IoAllocateIrpEx @ 0x1401108F0 (IoAllocateIrpEx.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x1404F4CA0 (FsRtlCancellableWaitForMultipleObjects.c)
 *     FsRtlpFreeMdlChain @ 0x1406B1134 (FsRtlpFreeMdlChain.c)
 */

NTSTATUS __stdcall FsRtlQueryInformationFile(
        PFILE_OBJECT FileObject,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass,
        PULONG RetFileInformationSize)
{
  IRP *v9; // rbx
  NTSTATUS Status; // edi
  __int64 v11; // rdx
  IRP *v12; // rax
  union _IRP::$::$::$665C8370128C04AB892B069E6FB086E8::$8B5CD6CDFBAAB114E6B0B83ED2C2A4E9 *p_CurrentStackLocation; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v15; // rax
  struct _MDL *MdlAddress; // rcx
  PIRP Irp; // [rsp+30h] [rbp-38h]
  PDEVICE_OBJECT DeviceObject; // [rsp+38h] [rbp-30h]
  PVOID ObjectArray; // [rsp+40h] [rbp-28h] BYREF
  struct _KEVENT Object; // [rsp+48h] [rbp-20h] BYREF

  v9 = 0LL;
  KeInitializeEvent(&Object, NotificationEvent, 0);
  if ( (FileObject->Flags & 0x800) != 0 )
  {
    Status = -1073741808;
  }
  else
  {
    DeviceObject = IoGetRelatedDeviceObject(FileObject);
    LOBYTE(v11) = DeviceObject->StackSize;
    v12 = (IRP *)IoAllocateIrpEx((__int64)DeviceObject, v11, 0LL);
    v9 = v12;
    Irp = v12;
    if ( v12 )
    {
      p_CurrentStackLocation = (union _IRP::$::$::$665C8370128C04AB892B069E6FB086E8::$8B5CD6CDFBAAB114E6B0B83ED2C2A4E9 *)&v12->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation = v12->Tail.Overlay.CurrentStackLocation;
      *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 1029;
      CurrentStackLocation[-1].FileObject = FileObject;
      v9->AssociatedIrp.MasterIrp = (struct _IRP *)FileInformation;
      CurrentStackLocation[-1].Parameters.Read.Length = Length;
      CurrentStackLocation[-1].Parameters.Create.Options = FileInformationClass;
      v9 = Irp;
      Irp->Tail.Overlay.Thread = KeGetCurrentThread();
      Irp->Flags |= 4u;
      Irp->RequestorMode = 0;
      v15 = p_CurrentStackLocation->CurrentStackLocation;
      v15[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)SmKmGenericCompletion;
      v15[-1].Context = &Object;
      v15[-1].Control = 0;
      v15[-1].Control = 64;
      v15[-1].Control = -64;
      v15[-1].Control = -32;
      if ( IofCallDriver(DeviceObject, Irp) == 259 )
      {
        ObjectArray = &Object;
        if ( FsRtlCancellableWaitForMultipleObjects(1u, &ObjectArray, WaitAll, 0LL, 0LL, 0LL) == -1073741749 )
        {
          IoCancelIrp(Irp);
          KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        }
      }
      Status = Irp->IoStatus.Status;
      *RetFileInformationSize = Irp->IoStatus.Information;
    }
    else
    {
      Status = -1073741670;
    }
  }
  if ( v9 )
  {
    MdlAddress = v9->MdlAddress;
    if ( MdlAddress )
    {
      FsRtlpFreeMdlChain(MdlAddress);
      v9->MdlAddress = 0LL;
    }
    IoFreeIrp(v9);
  }
  return Status;
}
