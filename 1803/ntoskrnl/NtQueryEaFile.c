/*
 * XREFs of NtQueryEaFile @ 0x140564750
 * Callers:
 *     <none>
 * Callees:
 *     IopAcquireFastLock @ 0x140002094 (IopAcquireFastLock.c)
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x140060FB0 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     IopReferenceFileObject @ 0x1400697A4 (IopReferenceFileObject.c)
 *     IoAllocateMdl @ 0x140098CD0 (IoAllocateMdl.c)
 *     IopAllocateIrpExReturn @ 0x1400FDE40 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1400FE1C0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     IopProbeAndLockPages_0 @ 0x140232AF0 (IopProbeAndLockPages_0.c)
 *     IopVerifierExAllocatePool_2 @ 0x140238848 (IopVerifierExAllocatePool_2.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     IopAcquireFileObjectLock @ 0x1404941E4 (IopAcquireFileObjectLock.c)
 *     IopSynchronousApiServiceTail @ 0x1405610F8 (IopSynchronousApiServiceTail.c)
 *     ProbeForWrite @ 0x14059C6A0 (ProbeForWrite.c)
 *     IopSynchronousServiceTail @ 0x14059D990 (IopSynchronousServiceTail.c)
 *     IopAllocateIrpCleanup @ 0x140719344 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x140719A28 (IopExceptionCleanup.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryEaFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        BOOLEAN ReturnSingleEntry,
        PVOID EaList,
        ULONG EaListLength,
        PULONG EaIndex,
        BOOLEAN RestartScan)
{
  PVOID v11; // r14
  KPROCESSOR_MODE PreviousMode; // r13
  __int64 v13; // rcx
  __int64 v14; // rcx
  char *v15; // rax
  UNICODE_STRING *PoolWithQuota_0; // rdi
  UNICODE_STRING *v17; // rbx
  signed int v18; // ecx
  unsigned int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rax
  NTSTATUS result; // eax
  signed int v23; // ebx
  NTSTATUS v24; // ebx
  char v25; // r12
  PFILE_OBJECT v26; // rsi
  PDEVICE_OBJECT RelatedDeviceObject; // r13
  __int64 v28; // rdx
  __int64 v29; // rax
  IRP *Irp; // rbx
  PIO_STATUS_BLOCK v31; // rax
  __int64 v32; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  ULONG Flags; // eax
  char v35; // di
  char v36; // al
  struct _KEVENT *Pool_2; // rax
  struct _IRP *v38; // rcx
  PMDL Mdl; // rcx
  char v40; // [rsp+40h] [rbp-78h]
  char v41; // [rsp+41h] [rbp-77h]
  char v42[2]; // [rsp+42h] [rbp-76h] BYREF
  ULONG v43; // [rsp+44h] [rbp-74h]
  PVOID P; // [rsp+48h] [rbp-70h]
  ULONG v45; // [rsp+50h] [rbp-68h]
  PVOID v46; // [rsp+58h] [rbp-60h]
  PFILE_OBJECT FileObject[2]; // [rsp+60h] [rbp-58h] BYREF
  UNICODE_STRING *v48; // [rsp+70h] [rbp-48h]
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp-40h]
  _QWORD v50[2]; // [rsp+80h] [rbp-38h] BYREF
  __int64 retaddr; // [rsp+B8h] [rbp+0h]

  v11 = 0LL;
  v46 = 0LL;
  P = 0LL;
  v40 = 0;
  v45 = 0;
  v50[0] = 0LL;
  v50[1] = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v41 = PreviousMode;
  if ( !PreviousMode )
  {
    if ( EaList && EaListLength )
    {
      v40 = 1;
      PoolWithQuota_0 = (UNICODE_STRING *)IopVerifierExAllocatePoolWithQuota_0((__int64)FileHandle, EaListLength);
      P = PoolWithQuota_0;
      memmove(PoolWithQuota_0, EaList, EaListLength);
    }
    else
    {
      PoolWithQuota_0 = (UNICODE_STRING *)P;
    }
    if ( EaIndex )
      v45 = *EaIndex;
LABEL_31:
    v24 = IopReferenceFileObject(FileHandle, 8u, PreviousMode, (PVOID *)FileObject, 0LL);
    v25 = 0;
    if ( v24 < 0 )
    {
      if ( v40 )
        ExFreePoolWithTag(PoolWithQuota_0, 0);
      return v24;
    }
    v26 = FileObject[0];
    if ( (FileObject[0]->Flags & 2) != 0 )
    {
      if ( !IopAcquireFastLock((volatile __int32 *)&FileObject[0]->Type) )
      {
        v24 = IopAcquireFileObjectLock((char *)v26, PreviousMode, (v26->Flags & 4) != 0, v42);
        if ( v42[0] )
        {
          if ( v40 )
            ExFreePoolWithTag(PoolWithQuota_0, 0);
LABEL_63:
          ObfDereferenceObject(v26);
          return v24;
        }
      }
      v25 = 1;
    }
    else
    {
      Pool_2 = (struct _KEVENT *)IopVerifierExAllocatePool_2();
      v11 = Pool_2;
      v46 = Pool_2;
      if ( !Pool_2 )
      {
        if ( v40 )
          ExFreePoolWithTag(PoolWithQuota_0, 0);
        v24 = -1073741670;
        goto LABEL_63;
      }
      KeInitializeEvent(Pool_2, SynchronizationEvent, 0);
    }
    if ( (v26->Flags & 0x4000000) == 0 )
      KeResetEvent(&v26->Event);
    RelatedDeviceObject = IoGetRelatedDeviceObject(v26);
    LOBYTE(v28) = RelatedDeviceObject->StackSize;
    v29 = IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v28, 0LL, retaddr);
    Irp = (IRP *)v29;
    FileObject[1] = (PFILE_OBJECT)v29;
    if ( !v29 )
    {
      if ( (v26->Flags & 2) == 0 )
        ExFreePoolWithTag(v11, 0);
      IopAllocateIrpCleanup(v26, 0LL);
      if ( v40 )
        ExFreePoolWithTag(PoolWithQuota_0, 0);
      return -1073741670;
    }
    *(_QWORD *)(v29 + 192) = v26;
    *(_QWORD *)(v29 + 152) = CurrentThread;
    *(_BYTE *)(v29 + 64) = v41;
    if ( v25 )
    {
      v31 = IoStatusBlock;
      v32 = 0LL;
    }
    else
    {
      *(_DWORD *)(v29 + 16) = 4;
      v31 = (PIO_STATUS_BLOCK)v50;
      v32 = (__int64)v11;
    }
    Irp->UserEvent = (PKEVENT)v32;
    Irp->UserIosb = v31;
    Irp->Overlay.AllocationSize.QuadPart = 0LL;
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].MajorFunction = 7;
    CurrentStackLocation[-1].FileObject = v26;
    if ( v40 )
    {
      Irp->Tail.Overlay.AuxiliaryBuffer = (PCHAR)PoolWithQuota_0;
      CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = PoolWithQuota_0;
      CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = EaListLength;
    }
    Flags = RelatedDeviceObject->Flags;
    if ( (Flags & 4) != 0 )
    {
      if ( !Length )
      {
        Irp->AssociatedIrp.MasterIrp = 0LL;
        Irp->Flags |= 0x50u;
        goto LABEL_45;
      }
      v38 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_0(v32, Length);
      Irp->AssociatedIrp.MasterIrp = v38;
      if ( !IopDisableBufferedIoInit )
        memset(v38, 0, Length);
      Irp->Flags |= 0x70u;
    }
    else if ( (Flags & 0x10) != 0 )
    {
      if ( Length )
      {
        Mdl = IoAllocateMdl(Buffer, Length, 0, 1u, Irp);
        if ( !Mdl )
          RtlRaiseStatus(-1073741670);
        v35 = v41;
        IopProbeAndLockPages_0(Mdl, v41, 1, (__int64)RelatedDeviceObject, CurrentStackLocation[-1].MajorFunction);
        goto LABEL_46;
      }
LABEL_45:
      v35 = v41;
LABEL_46:
      CurrentStackLocation[-1].Parameters.Read.Length = Length;
      CurrentStackLocation[-1].Parameters.Create.EaLength = v45;
      CurrentStackLocation[-1].Flags = 0;
      v36 = 0;
      if ( RestartScan )
      {
        CurrentStackLocation[-1].Flags = 1;
        v36 = 1;
      }
      if ( ReturnSingleEntry )
      {
        v36 |= 2u;
        CurrentStackLocation[-1].Flags = v36;
      }
      if ( EaIndex )
        CurrentStackLocation[-1].Flags = v36 | 4;
      result = IopSynchronousServiceTail(RelatedDeviceObject, Irp, v35, v25, 2);
      if ( !v25 )
        return IopSynchronousApiServiceTail(result, v46, Irp, v35, (unsigned int *)v50, IoStatusBlock);
      return result;
    }
    Irp->UserBuffer = Buffer;
    goto LABEL_45;
  }
  v13 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
    v13 = (__int64)IoStatusBlock;
  *(_DWORD *)v13 = *(_DWORD *)v13;
  ProbeForWrite(Buffer, Length, 4u);
  if ( EaIndex )
  {
    v21 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)EaIndex < 0x7FFFFFFF0000LL )
      v21 = (__int64)EaIndex;
    v45 = *(_DWORD *)v21;
  }
  if ( !EaList || !EaListLength )
  {
    PoolWithQuota_0 = (UNICODE_STRING *)P;
    goto LABEL_31;
  }
  v40 = 1;
  if ( ((unsigned __int8)EaList & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v15 = (char *)EaList + EaListLength;
  if ( (unsigned __int64)v15 > 0x7FFFFFFF0000LL || v15 < EaList )
    MEMORY[0x7FFFFFFF0000] = 0;
  PoolWithQuota_0 = (UNICODE_STRING *)IopVerifierExAllocatePoolWithQuota_0(v14, EaListLength);
  P = PoolWithQuota_0;
  memmove(PoolWithQuota_0, EaList, EaListLength);
  v17 = PoolWithQuota_0;
  v48 = PoolWithQuota_0;
  v18 = EaListLength;
  v43 = EaListLength;
  while ( 1 )
  {
    if ( v18 < 5 )
    {
      v43 = 0;
      ExFreePoolWithTag(PoolWithQuota_0, 0);
      P = 0LL;
      IoStatusBlock->Status = -2147483628;
      IoStatusBlock->Information = 0LL;
      return -2147483628;
    }
    v19 = *((unsigned __int8 *)&v17->MaximumLength + 2) + 6;
    if ( v18 < v19 )
      break;
    v20 = *(unsigned int *)&v17->Length;
    if ( !(_DWORD)v20 )
    {
      v43 = v18 - v19;
      if ( (int)(v18 - v19) >= 0 )
      {
        v11 = v46;
        goto LABEL_31;
      }
      break;
    }
    if ( ((*((unsigned __int8 *)&v17->MaximumLength + 2) + 9) & 0xFFFFFFFC) != (_DWORD)v20 )
      break;
    if ( (int)v20 < 0 )
      break;
    v18 -= v20;
    v43 = v18;
    if ( v18 < 0 )
      break;
    v17 = (UNICODE_STRING *)((char *)v17 + v20);
    v48 = v17;
  }
  v23 = (_DWORD)v17 - (_DWORD)PoolWithQuota_0;
  v43 = v23;
  ExFreePoolWithTag(PoolWithQuota_0, 0);
  P = 0LL;
  IoStatusBlock->Status = -2147483628;
  IoStatusBlock->Information = v23;
  return -2147483628;
}
