/*
 * XREFs of FsRtlKernelFsControlFile @ 0x14056C170
 * Callers:
 *     sub_140768280 @ 0x140768280 (sub_140768280.c)
 *     sub_14076883C @ 0x14076883C (sub_14076883C.c)
 *     sub_140768F7C @ 0x140768F7C (sub_140768F7C.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     IofCallDriver @ 0x140082560 (IofCallDriver.c)
 *     IoGetRelatedDeviceObject @ 0x1400828F0 (IoGetRelatedDeviceObject.c)
 *     IoFreeIrp @ 0x1400853A0 (IoFreeIrp.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     IoAllocateMdl @ 0x1400BBD50 (IoAllocateMdl.c)
 *     MmProbeAndLockPages @ 0x1400BDA30 (MmProbeAndLockPages.c)
 *     IoCancelIrp @ 0x140108640 (IoCancelIrp.c)
 *     IoAllocateIrpEx @ 0x1401108F0 (IoAllocateIrpEx.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x1404F4CA0 (FsRtlCancellableWaitForMultipleObjects.c)
 *     FsRtlpFreeMdlChain @ 0x1406B1134 (FsRtlpFreeMdlChain.c)
 */

__int64 __fastcall FsRtlKernelFsControlFile(
        PFILE_OBJECT FileObject,
        ULONG a2,
        struct _IRP *a3,
        unsigned int a4,
        struct _IRP *VirtualAddress,
        ULONG Length,
        ULONG *a7)
{
  size_t v7; // r12
  IRP *v11; // rbx
  unsigned int v12; // esi
  __int64 v13; // rdx
  IRP *v14; // rax
  __int64 *p_CurrentStackLocation; // rdx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  ULONG v17; // r14d
  __int64 v18; // rax
  int Status; // esi
  ULONG Information; // ecx
  struct _MDL *Mdl; // rax
  struct _MDL *MdlAddress; // rcx
  PIRP Irp; // [rsp+38h] [rbp-50h]
  PVOID ObjectArray; // [rsp+40h] [rbp-48h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+48h] [rbp-40h]
  struct _KEVENT Object; // [rsp+50h] [rbp-38h] BYREF

  v7 = a4;
  v11 = 0LL;
  KeInitializeEvent(&Object, NotificationEvent, 0);
  v12 = a2 & 3;
  if ( (FileObject->Flags & 0x800) != 0 )
  {
    Status = -1073741808;
    goto LABEL_33;
  }
  DeviceObject = IoGetRelatedDeviceObject(FileObject);
  LOBYTE(v13) = DeviceObject->StackSize;
  v14 = (IRP *)IoAllocateIrpEx((__int64)DeviceObject, v13, 0LL);
  v11 = v14;
  Irp = v14;
  if ( !v14 )
    goto LABEL_19;
  p_CurrentStackLocation = (__int64 *)&v14->Tail.Overlay.CurrentStackLocation;
  ObjectArray = &v14->Tail.CompletionKey + 8;
  CurrentStackLocation = v14->Tail.Overlay.CurrentStackLocation;
  *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 1037;
  CurrentStackLocation[-1].FileObject = FileObject;
  v17 = Length;
  CurrentStackLocation[-1].Parameters.Read.Length = Length;
  CurrentStackLocation[-1].Parameters.Create.Options = v7;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = a2;
  if ( (a2 & 3) == 0 )
  {
    if ( (_DWORD)v7 || Length )
    {
      if ( (unsigned int)v7 >= Length )
      {
        v14->AssociatedIrp.MasterIrp = a3;
      }
      else
      {
        v14->AssociatedIrp.MasterIrp = VirtualAddress;
        memmove(VirtualAddress, a3, v7);
        p_CurrentStackLocation = (__int64 *)ObjectArray;
      }
      v11->Flags = 16;
      v11->UserBuffer = VirtualAddress;
      if ( VirtualAddress )
        v11->Flags |= 0x40u;
    }
    else
    {
      v14->Flags = 0;
      v14->UserBuffer = 0LL;
    }
    goto LABEL_10;
  }
  if ( v12 > 2 )
  {
    if ( v12 == 3 )
    {
      v14->UserBuffer = VirtualAddress;
      CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = (PNAMED_PIPE_CREATE_PARAMETERS)a3;
    }
    goto LABEL_10;
  }
  if ( a3 )
  {
    v14->AssociatedIrp.MasterIrp = a3;
    v14->Flags = 16;
  }
  else
  {
    v14->Flags = 0;
  }
  if ( VirtualAddress )
  {
    Mdl = IoAllocateMdl(VirtualAddress, Length, 0, 0, 0LL);
    v11->MdlAddress = Mdl;
    if ( Mdl )
    {
      MmProbeAndLockPages(Mdl, 0, (LOCK_OPERATION)(v12 != 1));
      p_CurrentStackLocation = (__int64 *)ObjectArray;
      goto LABEL_10;
    }
LABEL_19:
    Status = -1073741670;
    goto LABEL_33;
  }
LABEL_10:
  v11 = Irp;
  Irp->Tail.Overlay.Thread = KeGetCurrentThread();
  Irp->Flags |= 4u;
  Irp->RequestorMode = 0;
  v18 = *p_CurrentStackLocation;
  *(_QWORD *)(v18 - 16) = SmKmGenericCompletion;
  *(_QWORD *)(v18 - 8) = &Object;
  *(_BYTE *)(v18 - 69) = 0;
  *(_BYTE *)(v18 - 69) = 64;
  *(_BYTE *)(v18 - 69) = -64;
  *(_BYTE *)(v18 - 69) = -32;
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
  Information = Irp->IoStatus.Information;
  *a7 = Information;
  if ( Status >= 0 && Information && (unsigned int)v7 >= Length )
  {
    if ( Information < Length )
      v17 = Information;
    memmove(VirtualAddress, a3, v17);
  }
LABEL_33:
  if ( v11 )
  {
    MdlAddress = v11->MdlAddress;
    if ( MdlAddress )
    {
      FsRtlpFreeMdlChain(MdlAddress);
      v11->MdlAddress = 0LL;
    }
    IoFreeIrp(v11);
  }
  return (unsigned int)Status;
}
