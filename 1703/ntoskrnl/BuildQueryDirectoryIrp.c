/*
 * XREFs of BuildQueryDirectoryIrp @ 0x14047F470
 * Callers:
 *     NtQueryDirectoryFile @ 0x14047F390 (NtQueryDirectoryFile.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     IopVerifierExAllocatePoolWithQuota @ 0x140022E90 (IopVerifierExAllocatePoolWithQuota.c)
 *     IopFileObjectRevoked @ 0x14004B8D4 (IopFileObjectRevoked.c)
 *     KeResetEvent @ 0x14004BD20 (KeResetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     IopAllocateIrpExReturn @ 0x1400ED980 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1400EDDF0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     IoAllocateMdl @ 0x1401176F0 (IoAllocateMdl.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     IopProbeAndLockPages_1 @ 0x1401F5CD4 (IopProbeAndLockPages_1.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ProbeForWrite @ 0x140527A00 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     IopAcquireFileObjectLock @ 0x140561408 (IopAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x140688728 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x140688D98 (IopExceptionCleanup.c)
 */

__int64 __fastcall BuildQueryDirectoryIrp(
        unsigned __int64 a1,
        void *a2,
        __int64 a3,
        __int64 a4,
        unsigned int *a5,
        volatile void *Address,
        SIZE_T Length,
        int a8,
        char a9,
        __int128 *a10,
        char a11,
        char a12,
        _BYTE *a13,
        PDEVICE_OBJECT *a14,
        __int64 *a15,
        struct _FILE_OBJECT **a16,
        PIRP Irp)
{
  void *v17; // rbx
  struct _KTHREAD *CurrentThread; // r10
  KPROCESSOR_MODE PreviousMode; // r12
  __int64 v20; // rcx
  unsigned int v21; // eax
  __int64 result; // rax
  SIZE_T v23; // rdx
  ULONG v24; // r8d
  const void *v25; // r15
  __int16 v26; // r14
  char *PoolWithQuota; // rsi
  NTSTATUS v28; // edi
  struct _FILE_OBJECT *v29; // rbx
  ULONG *p_Flags; // r14
  struct _KTHREAD *v31; // rax
  _BYTE *v32; // rdi
  unsigned __int64 v33; // rax
  __int16 v34; // ax
  __int64 v35; // rcx
  PDEVICE_OBJECT RelatedDeviceObject; // r15
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // rcx
  IRP *v40; // r14
  __int64 v41; // rdi
  ULONG Flags; // eax
  int v43; // r13d
  struct _IRP *v44; // rax
  PMDL Mdl; // rcx
  __int64 v46; // r8
  char v47; // al
  char v48; // [rsp+34h] [rbp-84h]
  char *P; // [rsp+38h] [rbp-80h]
  PVOID Object; // [rsp+40h] [rbp-78h] BYREF
  char v51; // [rsp+48h] [rbp-70h]
  PVOID v52; // [rsp+50h] [rbp-68h]
  __int128 v53; // [rsp+58h] [rbp-60h]
  PVOID v54; // [rsp+68h] [rbp-50h] BYREF
  struct _KTHREAD *v55; // [rsp+70h] [rbp-48h]
  PVOID v56; // [rsp+78h] [rbp-40h]
  __int64 retaddr; // [rsp+B8h] [rbp+0h]
  HANDLE Handle; // [rsp+C0h] [rbp+8h]

  Handle = (HANDLE)a1;
  v17 = (void *)a1;
  v52 = 0LL;
  P = 0LL;
  CurrentThread = KeGetCurrentThread();
  v55 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  LOBYTE(Irp->Type) = PreviousMode;
  if ( !PreviousMode )
  {
LABEL_21:
    if ( !a10 )
      goto LABEL_37;
    if ( PreviousMode )
    {
      a1 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a10 < 0x7FFFFFFF0000LL )
        a1 = (unsigned __int64)a10;
      LODWORD(v53) = *(_DWORD *)a1;
      v25 = *(const void **)(a1 + 8);
      *((_QWORD *)&v53 + 1) = v25;
    }
    else
    {
      v53 = *a10;
      v25 = (const void *)*((_QWORD *)&v53 + 1);
    }
    if ( (v53 & 1) != 0 )
      return 3221225485LL;
    v26 = v53;
    if ( (_WORD)v53 )
    {
      if ( PreviousMode )
      {
        a1 = (unsigned __int64)v25 + (unsigned __int16)v53;
        if ( a1 > 0x7FFFFFFF0000LL || a1 < (unsigned __int64)v25 )
          MEMORY[0x7FFFFFFF0000] = 0;
        if ( (unsigned __int16)v53 >= 0x200u )
          RtlRaiseStatus(-1073741811);
      }
      PoolWithQuota = (char *)IopVerifierExAllocatePoolWithQuota(a1, (unsigned __int16)v53 + 16LL);
      P = PoolWithQuota;
      memmove(PoolWithQuota + 16, v25, (unsigned __int16)v53);
      *(_WORD *)PoolWithQuota = v53;
      *((_WORD *)PoolWithQuota + 1) = v26;
      *((_QWORD *)PoolWithQuota + 1) = PoolWithQuota + 16;
      v17 = Handle;
    }
    else
    {
LABEL_37:
      PoolWithQuota = 0LL;
    }
    v28 = ObReferenceObjectByHandle(v17, 1u, (POBJECT_TYPE)IoFileObjectType, PreviousMode, &Object, 0LL);
    v29 = (struct _FILE_OBJECT *)Object;
    v56 = Object;
    if ( v28 >= 0 && IopFileObjectRevoked((__int64)Object) )
    {
      ObfDereferenceObject(v29);
      v28 = -1073739504;
      goto LABEL_42;
    }
    if ( v28 < 0 )
    {
LABEL_42:
      if ( PoolWithQuota )
        ExFreePoolWithTag(PoolWithQuota, 0);
      return (unsigned int)v28;
    }
    *a16 = v29;
    if ( v29->CompletionContext && (a3 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      ObfDereferenceObject(v29);
      if ( PoolWithQuota )
        ExFreePoolWithTag(PoolWithQuota, 0);
      return 3221225485LL;
    }
    if ( a2 )
    {
      v28 = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v54, 0LL);
      v52 = v54;
      if ( v28 < 0 )
      {
        if ( PoolWithQuota )
          ExFreePoolWithTag(PoolWithQuota, 0);
LABEL_90:
        ObfDereferenceObject(v29);
        return (unsigned int)v28;
      }
      KeResetEvent((PRKEVENT)v54);
    }
    p_Flags = &v29->Flags;
    if ( (v29->Flags & 2) != 0 )
    {
      v31 = KeGetCurrentThread();
      --v31->KernelApcDisable;
      if ( _InterlockedExchange((volatile __int32 *)Object + 29, 1) )
      {
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        v29 = (struct _FILE_OBJECT *)Object;
        v28 = IopAcquireFileObjectLock(Object);
        if ( v48 )
        {
          if ( P )
            ExFreePoolWithTag(P, 0);
          if ( v52 )
            ObfDereferenceObject(v52);
          goto LABEL_90;
        }
      }
      else
      {
        v29 = (struct _FILE_OBJECT *)Object;
        ObfReferenceObject(Object);
      }
      v32 = a13;
      *a13 = 1;
      PoolWithQuota = P;
    }
    else
    {
      v32 = a13;
      *a13 = 0;
      if ( PreviousMode )
      {
        v33 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
        if ( v33 )
        {
          v34 = *(_WORD *)(v33 + 8);
          if ( v34 == 332 || v34 == 452 )
          {
            v51 = 1;
            a3 |= 1uLL;
            v35 = *a5;
            a5 = (unsigned int *)v35;
            *(_DWORD *)v35 = *(_DWORD *)v35;
          }
        }
        PoolWithQuota = P;
        v29 = (struct _FILE_OBJECT *)Object;
      }
    }
    if ( (*p_Flags & 0x4000000) == 0 )
      KeResetEvent(&v29->Event);
    RelatedDeviceObject = IoGetRelatedDeviceObject(v29);
    *a14 = RelatedDeviceObject;
    LOBYTE(v37) = *v32 == 0;
    v38 = IopAllocateIrpExReturn(
            (__int64)RelatedDeviceObject,
            (unsigned __int8)RelatedDeviceObject->StackSize,
            v37,
            retaddr);
    v40 = (IRP *)v38;
    if ( !v38 )
    {
      IopAllocateIrpCleanup(v29, v52);
      if ( PoolWithQuota )
        ExFreePoolWithTag(PoolWithQuota, 0);
      return 3221225626LL;
    }
    *a15 = v38;
    *(_QWORD *)(v38 + 192) = v29;
    *(_QWORD *)(v38 + 152) = v55;
    *(_BYTE *)(v38 + 64) = PreviousMode;
    *(_QWORD *)(v38 + 80) = v52;
    *(_QWORD *)(v38 + 72) = a5;
    *(_QWORD *)(v38 + 88) = a3;
    *(_QWORD *)(v38 + 96) = a4;
    v41 = *(_QWORD *)(v38 + 184);
    *(_WORD *)(v41 - 72) = 268;
    *(_QWORD *)(v41 - 24) = v29;
    *(_QWORD *)(v38 + 160) = PoolWithQuota;
    *(_QWORD *)(v38 + 24) = 0LL;
    *(_QWORD *)(v38 + 8) = 0LL;
    Flags = RelatedDeviceObject->Flags;
    if ( (Flags & 4) != 0 )
    {
      v43 = Length;
      v44 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota(v39, (unsigned int)Length);
      v40->AssociatedIrp.MasterIrp = v44;
      if ( !IopDisableBufferedIoInit )
        memset(v44, 0, (unsigned int)Length);
      v40->Flags = 112;
    }
    else
    {
      if ( (Flags & 0x10) != 0 )
      {
        v43 = Length;
        Mdl = IoAllocateMdl((PVOID)Address, Length, 0, 1u, v40);
        if ( !Mdl )
          RtlRaiseStatus(-1073741670);
        IopProbeAndLockPages_1(Mdl, PreviousMode, v46, (__int64)RelatedDeviceObject, *(unsigned __int8 *)(v41 - 72));
        goto LABEL_85;
      }
      v43 = Length;
    }
    v40->UserBuffer = (PVOID)Address;
LABEL_85:
    *(_DWORD *)(v41 - 64) = v43;
    *(_DWORD *)(v41 - 48) = a8;
    *(_DWORD *)(v41 - 40) = 0;
    *(_QWORD *)(v41 - 56) = PoolWithQuota;
    *(_BYTE *)(v41 - 70) = 0;
    v47 = *(_BYTE *)(v41 - 70);
    if ( a11 )
      v47 = 1;
    *(_BYTE *)(v41 - 70) = v47;
    if ( a9 )
      *(_BYTE *)(v41 - 70) |= 2u;
    v40->Flags |= 0x800u;
    return 0LL;
  }
  v20 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a5 < 0x7FFFFFFF0000LL )
    v20 = (__int64)a5;
  *(_DWORD *)v20 = *(_DWORD *)v20;
  if ( a8 == 1 )
  {
    v21 = 72;
LABEL_14:
    if ( (unsigned int)Length < v21 )
      return 3221225476LL;
    if ( CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[7] )
    {
      v23 = (unsigned int)Length;
      v24 = 4;
    }
    else
    {
      v24 = *((unsigned __int8 *)IopQuerySetAlignmentRequirement + a8);
      v23 = (unsigned int)Length;
    }
    ProbeForWrite(Address, v23, v24);
    goto LABEL_21;
  }
  switch ( a8 )
  {
    case 2:
    case 29:
      v21 = 72;
      goto LABEL_14;
    case 3:
    case 50:
    case 60:
      v21 = 96;
      goto LABEL_14;
    case 12:
    case 33:
      v21 = 16;
      goto LABEL_14;
    case 32:
      v21 = 56;
      goto LABEL_14;
    case 37:
      v21 = 112;
      goto LABEL_14;
    case 38:
      v21 = 88;
      goto LABEL_14;
    case 63:
      v21 = 120;
      goto LABEL_14;
    default:
      result = 3221225475LL;
      break;
  }
  return result;
}
