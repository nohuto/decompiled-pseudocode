/*
 * XREFs of BuildQueryDirectoryIrp @ 0x1404CB2D0
 * Callers:
 *     NtQueryDirectoryFileEx @ 0x1404CB200 (NtQueryDirectoryFileEx.c)
 * Callees:
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x140024180 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     KeResetEvent @ 0x1400241B0 (KeResetEvent.c)
 *     IopAllocateIrpExReturn @ 0x1400821E0 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1400828F0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     IopAcquireFastLock_2 @ 0x14008AA84 (IopAcquireFastLock_2.c)
 *     IopFileObjectRevoked @ 0x14008AB40 (IopFileObjectRevoked.c)
 *     IoAllocateMdl @ 0x1400BBD50 (IoAllocateMdl.c)
 *     RtlRaiseStatus @ 0x1400D9BF0 (RtlRaiseStatus.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     IopProbeAndLockPages_0 @ 0x1401FBAA8 (IopProbeAndLockPages_0.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ProbeForWrite @ 0x1404A3950 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     IopAcquireFileObjectLock @ 0x14056053C (IopAcquireFileObjectLock.c)
 *     IopAllocateIrpCleanup @ 0x1406B4714 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x1406B4D78 (IopExceptionCleanup.c)
 */

__int64 __fastcall BuildQueryDirectoryIrp(
        void *a1,
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
        _BYTE *a12,
        PDEVICE_OBJECT *a13,
        __int64 *a14,
        struct _FILE_OBJECT **a15,
        KPROCESSOR_MODE *a16)
{
  void *v16; // rdi
  struct _KTHREAD *CurrentThread; // r9
  KPROCESSOR_MODE PreviousMode; // r12
  unsigned int v19; // edx
  __int64 v20; // rcx
  int v21; // r15d
  ULONG v22; // r13d
  unsigned __int64 v23; // rcx
  const void *v24; // r14
  __int16 v25; // si
  void *v26; // r14
  NTSTATUS v28; // ebx
  struct _FILE_OBJECT *v29; // rsi
  PVOID v30; // r14
  ULONG *p_Flags; // rdi
  PDEVICE_OBJECT RelatedDeviceObject; // r14
  __int64 Irp; // rax
  __int64 v34; // rcx
  IRP *v35; // rbx
  __int64 v36; // rdi
  ULONG Flags; // eax
  unsigned __int64 v38; // rax
  __int16 v39; // ax
  __int64 v40; // rcx
  struct _IRP *PoolWithQuota_0; // rax
  PMDL Mdl; // rcx
  __int64 v43; // r8
  char *P; // [rsp+38h] [rbp-70h]
  PVOID v45; // [rsp+40h] [rbp-68h]
  PVOID Object; // [rsp+48h] [rbp-60h] BYREF
  PVOID v47; // [rsp+50h] [rbp-58h] BYREF
  struct _KTHREAD *v48; // [rsp+58h] [rbp-50h]
  __int128 v49; // [rsp+60h] [rbp-48h]
  PVOID v54; // [rsp+128h] [rbp+80h]

  v16 = a2;
  v45 = 0LL;
  P = 0LL;
  CurrentThread = KeGetCurrentThread();
  v48 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  *a16 = PreviousMode;
  if ( PreviousMode )
  {
    v19 = 0;
    v20 = (__int64)a5;
    if ( (unsigned __int64)a5 >= 0x7FFFFFFF0000LL )
      v20 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v20 = *(_DWORD *)v20;
    v21 = a8;
    if ( a8 == 1 )
    {
      v19 = 72;
    }
    else if ( a8 == 3 )
    {
      v19 = 96;
    }
    else
    {
      switch ( a8 )
      {
        case 2:
        case 29:
          v19 = 72;
          goto LABEL_7;
        case 12:
        case 33:
          v19 = 16;
          goto LABEL_7;
        case 32:
          v19 = 56;
          goto LABEL_7;
        case 37:
          v19 = 112;
          goto LABEL_7;
        case 38:
          v19 = 88;
          goto LABEL_7;
        case 50:
        case 60:
          v19 = 96;
          goto LABEL_7;
        case 63:
          v19 = 120;
          break;
        default:
          break;
      }
      if ( !v19 )
        return 3221225475LL;
    }
LABEL_7:
    v22 = Length;
    if ( (unsigned int)Length < v19 )
      return 3221225476LL;
    if ( CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[7] )
      ProbeForWrite(Address, (unsigned int)Length, 4u);
    else
      ProbeForWrite(Address, (unsigned int)Length, *((unsigned __int8 *)IopQuerySetAlignmentRequirement + a8));
  }
  else
  {
    v21 = a8;
    v22 = Length;
  }
  v23 = (unsigned __int64)a10;
  if ( !a10 )
    goto LABEL_22;
  if ( PreviousMode )
  {
    if ( (unsigned __int64)a10 >= 0x7FFFFFFF0000LL )
      v23 = 0x7FFFFFFF0000LL;
    LODWORD(v49) = *(_DWORD *)v23;
    v24 = *(const void **)(v23 + 8);
    *((_QWORD *)&v49 + 1) = v24;
  }
  else
  {
    v49 = *a10;
    v24 = (const void *)*((_QWORD *)&v49 + 1);
  }
  if ( (v49 & 1) != 0 )
    return 3221225485LL;
  v25 = v49;
  if ( (_WORD)v49 )
  {
    if ( PreviousMode )
    {
      v23 = (unsigned __int64)v24 + (unsigned __int16)v49;
      if ( v23 > 0x7FFFFFFF0000LL || v23 < (unsigned __int64)v24 )
        MEMORY[0x7FFFFFFF0000] = 0;
      if ( (unsigned __int16)v49 >= 0x200u )
        RtlRaiseStatus(-1073741811);
    }
    P = (char *)IopVerifierExAllocatePoolWithQuota_0(v23, (unsigned __int16)v49 + 16LL);
    memmove(P + 16, v24, (unsigned __int16)v49);
    v26 = P;
    *(_WORD *)P = v49;
    *((_WORD *)P + 1) = v25;
    *((_QWORD *)P + 1) = P + 16;
    v16 = a2;
  }
  else
  {
LABEL_22:
    v26 = 0LL;
  }
  v28 = ObReferenceObjectByHandle(a1, 1u, (POBJECT_TYPE)IoFileObjectType, PreviousMode, &Object, 0LL);
  v29 = (struct _FILE_OBJECT *)Object;
  if ( v28 >= 0 && IopFileObjectRevoked((__int64)Object) )
  {
    ObfDereferenceObject(v29);
    v28 = -1073739504;
LABEL_58:
    if ( v26 )
      ExFreePoolWithTag(v26, 0);
    return (unsigned int)v28;
  }
  if ( v28 < 0 )
    goto LABEL_58;
  *a15 = v29;
  if ( v29->CompletionContext && (a3 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    ObfDereferenceObject(v29);
    if ( v26 )
      ExFreePoolWithTag(v26, 0);
    return 3221225485LL;
  }
  if ( v16 )
  {
    v28 = ObReferenceObjectByHandle(v16, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v47, 0LL);
    v30 = v47;
    v54 = v47;
    v45 = v47;
    if ( v28 < 0 )
    {
      if ( P )
        ExFreePoolWithTag(P, 0);
      goto LABEL_88;
    }
    KeResetEvent((PRKEVENT)v47);
  }
  else
  {
    v30 = 0LL;
    v54 = 0LL;
  }
  p_Flags = &v29->Flags;
  if ( (v29->Flags & 2) != 0 )
  {
    if ( !IopAcquireFastLock_2((__int64)v29) )
    {
      v28 = IopAcquireFileObjectLock(v29);
      if ( a11 )
      {
        if ( P )
          ExFreePoolWithTag(P, 0);
        if ( v30 )
          ObfDereferenceObject(v30);
LABEL_88:
        ObfDereferenceObject(v29);
        return (unsigned int)v28;
      }
    }
    *a12 = 1;
  }
  else
  {
    *a12 = 0;
    if ( PreviousMode )
    {
      v38 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
      if ( v38 )
      {
        v39 = *(_WORD *)(v38 + 8);
        if ( v39 == 332 || v39 == 452 )
        {
          a3 |= 1uLL;
          v40 = *a5;
          a5 = (unsigned int *)v40;
          *(_DWORD *)v40 = *(_DWORD *)v40;
        }
      }
      v54 = v45;
      v29 = (struct _FILE_OBJECT *)Object;
    }
  }
  if ( (*p_Flags & 0x4000000) == 0 )
    KeResetEvent(&v29->Event);
  RelatedDeviceObject = IoGetRelatedDeviceObject(v29);
  *a13 = RelatedDeviceObject;
  Irp = IopAllocateIrpExReturn();
  v35 = (IRP *)Irp;
  v47 = (PVOID)Irp;
  if ( Irp )
  {
    *a14 = Irp;
    *(_QWORD *)(Irp + 192) = v29;
    *(_QWORD *)(Irp + 152) = v48;
    *(_BYTE *)(Irp + 64) = PreviousMode;
    *(_QWORD *)(Irp + 80) = v54;
    *(_QWORD *)(Irp + 72) = a5;
    *(_QWORD *)(Irp + 88) = a3;
    *(_QWORD *)(Irp + 96) = a4;
    v36 = *(_QWORD *)(Irp + 184);
    *(_WORD *)(v36 - 72) = 268;
    *(_QWORD *)(v36 - 24) = v29;
    *(_QWORD *)(Irp + 160) = P;
    *(_QWORD *)(Irp + 24) = 0LL;
    *(_QWORD *)(Irp + 8) = 0LL;
    Flags = RelatedDeviceObject->Flags;
    if ( (Flags & 4) != 0 )
    {
      PoolWithQuota_0 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_0(v34, v22);
      v35->AssociatedIrp.MasterIrp = PoolWithQuota_0;
      if ( !IopDisableBufferedIoInit )
        memset(PoolWithQuota_0, 0, v22);
      v35->Flags = 112;
    }
    else if ( (Flags & 0x10) != 0 )
    {
      Mdl = IoAllocateMdl((PVOID)Address, v22, 0, 1u, v35);
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      IopProbeAndLockPages_0(Mdl, PreviousMode, v43, (__int64)RelatedDeviceObject, *(unsigned __int8 *)(v36 - 72));
      goto LABEL_56;
    }
    v35->UserBuffer = (PVOID)Address;
LABEL_56:
    *(_DWORD *)(v36 - 64) = v22;
    *(_DWORD *)(v36 - 48) = v21;
    *(_DWORD *)(v36 - 40) = 0;
    *(_QWORD *)(v36 - 56) = P;
    *(_BYTE *)(v36 - 70) = a9 & 0xB;
    v35->Flags |= 0x800u;
    return 0LL;
  }
  IopAllocateIrpCleanup(v29, v54);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return 3221225626LL;
}
