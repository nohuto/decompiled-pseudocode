/*
 * XREFs of NtNotifyChangeDirectoryFileEx @ 0x140582FC0
 * Callers:
 *     NtNotifyChangeDirectoryFile @ 0x140582F60 (NtNotifyChangeDirectoryFile.c)
 * Callees:
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x140024180 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     IopReferenceFileObject @ 0x140024E54 (IopReferenceFileObject.c)
 *     IopAllocateIrpExReturn @ 0x1400821E0 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1400828F0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     IopAcquireFastLock_2 @ 0x14008AA84 (IopAcquireFastLock_2.c)
 *     IoAllocateMdl @ 0x1400BBD50 (IoAllocateMdl.c)
 *     RtlRaiseStatus @ 0x1400D9BF0 (RtlRaiseStatus.c)
 *     memset @ 0x140192F40 (memset.c)
 *     IopProbeAndLockPages_0 @ 0x1401FBAA8 (IopProbeAndLockPages_0.c)
 *     ProbeForWrite @ 0x1404A3950 (ProbeForWrite.c)
 *     IopSynchronousServiceTail @ 0x1404AD220 (IopSynchronousServiceTail.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     IopAcquireFileObjectLock @ 0x14056053C (IopAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x1406B4714 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x1406B4D78 (IopExceptionCleanup.c)
 */

__int64 __fastcall NtNotifyChangeDirectoryFileEx(
        void *a1,
        void *a2,
        __int64 a3,
        __int64 a4,
        unsigned int *a5,
        volatile void *Address,
        ULONG Length,
        int a8,
        char a9,
        unsigned int a10)
{
  KPROCESSOR_MODE PreviousMode; // r13
  __int64 v13; // rcx
  ULONG v14; // r12d
  __int64 result; // rax
  PFILE_OBJECT v16; // rdi
  ULONG *p_Flags; // rsi
  unsigned __int64 v18; // rax
  __int16 v19; // ax
  unsigned int *v20; // rcx
  PDEVICE_OBJECT RelatedDeviceObject; // r15
  __int64 Irp; // rax
  IRP *v23; // rsi
  __int64 v24; // rbx
  unsigned int v25; // ecx
  ULONG Flags; // eax
  char v27; // al
  int v28; // ebx
  struct _IRP *PoolWithQuota_0; // rcx
  PMDL Mdl; // rcx
  __int64 v31; // r8
  char v32; // [rsp+40h] [rbp-58h]
  _BYTE v33[7]; // [rsp+41h] [rbp-57h] BYREF
  PVOID v34; // [rsp+48h] [rbp-50h]
  PFILE_OBJECT FileObject; // [rsp+50h] [rbp-48h] BYREF
  PVOID Object; // [rsp+58h] [rbp-40h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-38h]

  v34 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v13 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a5 < 0x7FFFFFFF0000LL )
      v13 = (__int64)a5;
    *(_DWORD *)v13 = *(_DWORD *)v13;
    v14 = Length;
    if ( Length )
      ProbeForWrite(Address, Length, 4u);
    if ( (a8 & 0xFFFFF000) != 0 || !a8 )
      return 3221225485LL;
  }
  else
  {
    v14 = Length;
  }
  result = IopReferenceFileObject(a1, 1u, PreviousMode, (PVOID *)&FileObject, 0LL);
  if ( (int)result >= 0 )
  {
    v16 = FileObject;
    if ( FileObject->CompletionContext && (a3 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      v28 = -1073741811;
      goto LABEL_43;
    }
    if ( a2 )
    {
      v28 = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
      v34 = Object;
      if ( v28 < 0 )
      {
LABEL_43:
        ObfDereferenceObject(v16);
        return (unsigned int)v28;
      }
      KeResetEvent((PRKEVENT)Object);
    }
    p_Flags = &v16->Flags;
    if ( (v16->Flags & 2) != 0 )
    {
      if ( !IopAcquireFastLock_2((__int64)v16) )
      {
        v28 = IopAcquireFileObjectLock((char *)v16, PreviousMode, (*p_Flags & 4) != 0, v33);
        if ( v33[0] )
        {
          if ( v34 )
            ObfDereferenceObject(v34);
          goto LABEL_43;
        }
      }
      v32 = 1;
    }
    else
    {
      v32 = 0;
      if ( PreviousMode )
      {
        v18 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
        if ( v18 )
        {
          v19 = *(_WORD *)(v18 + 8);
          if ( v19 == 332 || v19 == 452 )
          {
            a3 |= 1uLL;
            v20 = (unsigned int *)*a5;
            a5 = v20;
            *v20 = *v20;
          }
        }
        v16 = FileObject;
      }
    }
    if ( (*p_Flags & 0x4000000) == 0 )
      KeResetEvent(&v16->Event);
    RelatedDeviceObject = IoGetRelatedDeviceObject(v16);
    Irp = IopAllocateIrpExReturn();
    v23 = (IRP *)Irp;
    Object = (PVOID)Irp;
    if ( !Irp )
    {
      IopAllocateIrpCleanup(v16, v34);
      return 3221225626LL;
    }
    *(_QWORD *)(Irp + 192) = v16;
    *(_QWORD *)(Irp + 152) = CurrentThread;
    *(_BYTE *)(Irp + 64) = PreviousMode;
    *(_QWORD *)(Irp + 80) = v34;
    *(_QWORD *)(Irp + 72) = a5;
    *(_QWORD *)(Irp + 88) = a3;
    *(_QWORD *)(Irp + 96) = a4;
    v24 = *(_QWORD *)(Irp + 184);
    *(_BYTE *)(v24 - 72) = 12;
    v25 = a10;
    if ( a10 == 2 )
      *(_BYTE *)(v24 - 71) = 3;
    else
      *(_BYTE *)(v24 - 71) = 2;
    *(_QWORD *)(v24 - 24) = v16;
    if ( !v14 )
      goto LABEL_27;
    Flags = RelatedDeviceObject->Flags;
    if ( (Flags & 4) != 0 )
    {
      PoolWithQuota_0 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_0(a10, v14);
      v23->AssociatedIrp.MasterIrp = PoolWithQuota_0;
      if ( !IopDisableBufferedIoInit )
        memset(PoolWithQuota_0, 0, v14);
      v23->Flags = 112;
      v25 = a10;
    }
    else if ( (Flags & 0x10) != 0 )
    {
      Mdl = IoAllocateMdl((PVOID)Address, v14, 0, 1u, v23);
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      IopProbeAndLockPages_0(Mdl, PreviousMode, v31, (__int64)RelatedDeviceObject, *(unsigned __int8 *)(v24 - 72));
      v25 = a10;
      goto LABEL_27;
    }
    v23->UserBuffer = (PVOID)Address;
LABEL_27:
    *(_DWORD *)(v24 - 64) = v14;
    *(_DWORD *)(v24 - 56) = a8;
    if ( *(_BYTE *)(v24 - 71) == 3 )
      *(_DWORD *)(v24 - 48) = v25;
    *(_BYTE *)(v24 - 70) = 0;
    v27 = *(_BYTE *)(v24 - 70);
    if ( a9 )
      v27 = 1;
    *(_BYTE *)(v24 - 70) = v27;
    return IopSynchronousServiceTail(RelatedDeviceObject, v23, (__int64)v16, 0, PreviousMode, v32, 2u);
  }
  return result;
}
