/*
 * XREFs of BuildQueryDirectoryIrp @ 0x140596100
 * Callers:
 *     NtQueryDirectoryFileEx @ 0x140596030 (NtQueryDirectoryFileEx.c)
 * Callees:
 *     KeResetEvent @ 0x140060F40 (KeResetEvent.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x140060FB0 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     IoAllocateMdl @ 0x140098CD0 (IoAllocateMdl.c)
 *     IopFileObjectRevoked @ 0x1400EB844 (IopFileObjectRevoked.c)
 *     IopAcquireFastLock_2 @ 0x1400EB86C (IopAcquireFastLock_2.c)
 *     IopAllocateIrpExReturn @ 0x1400FDE40 (IopAllocateIrpExReturn.c)
 *     IoGetRelatedDeviceObject @ 0x1400FE1C0 (IoGetRelatedDeviceObject.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     IopProbeAndLockPages_1 @ 0x1402387E8 (IopProbeAndLockPages_1.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     IopAcquireFileObjectLock @ 0x1404941E4 (IopAcquireFileObjectLock.c)
 *     ProbeForWrite @ 0x14059C6A0 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 *     IopAllocateIrpCleanup @ 0x140719344 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x140719A28 (IopExceptionCleanup.c)
 */

__int64 BuildQueryDirectoryIrp(
        void *a1,
        void *a2,
        __int64 a3,
        __int64 a4,
        unsigned int *a5,
        volatile void *Address,
        ULONG Length,
        int a8,
        char a9,
        __int128 *a10,
        ...)
{
  void *v10; // rdi
  struct _KTHREAD *CurrentThread; // r9
  KPROCESSOR_MODE PreviousMode; // r12
  unsigned int v13; // edx
  __int64 v14; // rcx
  int v15; // r15d
  ULONG v16; // r13d
  unsigned __int64 v17; // rcx
  void *v18; // r14
  const void *v19; // r14
  __int16 v20; // si
  int v22; // ebx
  struct _FILE_OBJECT *v23; // rsi
  PVOID v24; // r14
  ULONG *p_Flags; // rdi
  _BYTE *v26; // rbx
  PDEVICE_OBJECT RelatedDeviceObject; // r14
  __int64 v28; // r8
  __int64 Irp; // rax
  __int64 v30; // rcx
  IRP *v31; // rbx
  __int64 v32; // rdi
  ULONG Flags; // eax
  unsigned __int64 v34; // rax
  __int16 v35; // ax
  unsigned int *v36; // rcx
  struct _IRP *PoolWithQuota_0; // rax
  PMDL Mdl; // rcx
  __int64 v39; // r8
  char *P; // [rsp+38h] [rbp-70h]
  PVOID v41; // [rsp+40h] [rbp-68h]
  PVOID Object; // [rsp+48h] [rbp-60h] BYREF
  PVOID v43; // [rsp+50h] [rbp-58h] BYREF
  struct _KTHREAD *v44; // [rsp+58h] [rbp-50h]
  __int128 v45; // [rsp+60h] [rbp-48h]
  __int64 retaddr; // [rsp+A8h] [rbp+0h]
  __int64 v51; // [rsp+100h] [rbp+58h] BYREF
  va_list va; // [rsp+100h] [rbp+58h]
  _BYTE *v53; // [rsp+108h] [rbp+60h]
  PDEVICE_OBJECT *v54; // [rsp+110h] [rbp+68h]
  __int64 *v55; // [rsp+118h] [rbp+70h]
  struct _FILE_OBJECT **v56; // [rsp+120h] [rbp+78h]
  PVOID v57; // [rsp+128h] [rbp+80h]
  va_list va1; // [rsp+130h] [rbp+88h] BYREF

  va_start(va1, a10);
  va_start(va, a10);
  v51 = va_arg(va1, _QWORD);
  v53 = va_arg(va1, _BYTE *);
  v54 = va_arg(va1, PDEVICE_OBJECT *);
  v55 = va_arg(va1, __int64 *);
  v56 = va_arg(va1, struct _FILE_OBJECT **);
  v57 = va_arg(va1, PVOID);
  v10 = a2;
  v41 = 0LL;
  P = 0LL;
  CurrentThread = KeGetCurrentThread();
  v44 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  *(_BYTE *)v57 = PreviousMode;
  if ( PreviousMode )
  {
    v13 = 0;
    v14 = (__int64)a5;
    if ( (unsigned __int64)a5 >= 0x7FFFFFFF0000LL )
      v14 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v14 = *(_DWORD *)v14;
    v15 = a8;
    if ( a8 == 1 )
    {
      v13 = 72;
    }
    else if ( a8 == 3 )
    {
      v13 = 96;
    }
    else
    {
      switch ( a8 )
      {
        case 2:
        case 29:
          v13 = 72;
          goto LABEL_7;
        case 12:
        case 33:
          v13 = 16;
          goto LABEL_7;
        case 32:
          v13 = 56;
          goto LABEL_7;
        case 37:
          v13 = 112;
          goto LABEL_7;
        case 38:
          v13 = 88;
          goto LABEL_7;
        case 50:
        case 60:
          v13 = 96;
          goto LABEL_7;
        case 63:
          v13 = 120;
          break;
        default:
          break;
      }
      if ( !v13 )
        return 3221225475LL;
    }
LABEL_7:
    v16 = Length;
    if ( Length < v13 )
      return 3221225476LL;
    if ( CurrentThread->ApcState.Process[1].ActiveProcessors.Bitmap[7] )
      ProbeForWrite(Address, Length, 4u);
    else
      ProbeForWrite(Address, Length, *((unsigned __int8 *)IopQuerySetAlignmentRequirement + a8));
  }
  else
  {
    v15 = a8;
    v16 = Length;
  }
  v17 = (unsigned __int64)a10;
  if ( !a10 )
    goto LABEL_11;
  if ( PreviousMode )
  {
    if ( (unsigned __int64)a10 >= 0x7FFFFFFF0000LL )
      v17 = 0x7FFFFFFF0000LL;
    LODWORD(v45) = *(_DWORD *)v17;
    v19 = *(const void **)(v17 + 8);
    *((_QWORD *)&v45 + 1) = v19;
  }
  else
  {
    v45 = *a10;
    v19 = (const void *)*((_QWORD *)&v45 + 1);
  }
  if ( (v45 & 1) != 0 )
    return 3221225485LL;
  v20 = v45;
  if ( (_WORD)v45 )
  {
    if ( PreviousMode )
    {
      v17 = (unsigned __int64)v19 + (unsigned __int16)v45;
      if ( v17 > 0x7FFFFFFF0000LL || v17 < (unsigned __int64)v19 )
        MEMORY[0x7FFFFFFF0000] = 0;
      if ( (unsigned __int16)v45 >= 0x200u )
        RtlRaiseStatus(-1073741811);
    }
    P = (char *)IopVerifierExAllocatePoolWithQuota_0(v17, (unsigned __int16)v45 + 16LL);
    memmove(P + 16, v19, (unsigned __int16)v45);
    v18 = P;
    *(_WORD *)P = v45;
    *((_WORD *)P + 1) = v20;
    *((_QWORD *)P + 1) = P + 16;
    v10 = a2;
  }
  else
  {
LABEL_11:
    v18 = 0LL;
  }
  v22 = ObReferenceObjectByHandle(a1, 1u, (POBJECT_TYPE)IoFileObjectType, PreviousMode, &Object, 0LL);
  v23 = (struct _FILE_OBJECT *)Object;
  if ( v22 >= 0 && IopFileObjectRevoked((__int64)Object) )
  {
    ObfDereferenceObject(v23);
    v22 = -1073739504;
LABEL_58:
    if ( v18 )
      ExFreePoolWithTag(v18, 0);
    return (unsigned int)v22;
  }
  if ( v22 < 0 )
    goto LABEL_58;
  *v56 = v23;
  if ( v23->CompletionContext && (a3 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    ObfDereferenceObject(v23);
    if ( v18 )
      ExFreePoolWithTag(v18, 0);
    return 3221225485LL;
  }
  if ( v10 )
  {
    v22 = ObReferenceObjectByHandle(v10, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v43, 0LL);
    v24 = v43;
    v57 = v43;
    v41 = v43;
    if ( v22 < 0 )
    {
      if ( P )
        ExFreePoolWithTag(P, 0);
      goto LABEL_88;
    }
    KeResetEvent((PRKEVENT)v43);
  }
  else
  {
    v24 = 0LL;
    v57 = 0LL;
  }
  p_Flags = &v23->Flags;
  if ( (v23->Flags & 2) != 0 )
  {
    if ( !IopAcquireFastLock_2((__int64)v23) )
    {
      v22 = IopAcquireFileObjectLock((char *)v23, PreviousMode, (*p_Flags & 4) != 0, (__int64 *)va);
      if ( (_BYTE)v51 )
      {
        if ( P )
          ExFreePoolWithTag(P, 0);
        if ( v24 )
          ObfDereferenceObject(v24);
LABEL_88:
        ObfDereferenceObject(v23);
        return (unsigned int)v22;
      }
    }
    v26 = v53;
    *v53 = 1;
  }
  else
  {
    v26 = v53;
    *v53 = 0;
    if ( PreviousMode )
    {
      v34 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
      if ( v34 )
      {
        v35 = *(_WORD *)(v34 + 8);
        if ( v35 == 332 || v35 == 452 )
        {
          a3 |= 1uLL;
          v36 = (unsigned int *)*a5;
          a5 = v36;
          *v36 = *v36;
        }
      }
      v57 = v41;
      v23 = (struct _FILE_OBJECT *)Object;
    }
  }
  if ( (*p_Flags & 0x4000000) == 0 )
    KeResetEvent(&v23->Event);
  RelatedDeviceObject = IoGetRelatedDeviceObject(v23);
  *v54 = RelatedDeviceObject;
  LOBYTE(v28) = *v26 == 0;
  Irp = IopAllocateIrpExReturn(
          (__int64)RelatedDeviceObject,
          (unsigned __int8)RelatedDeviceObject->StackSize,
          v28,
          retaddr);
  v31 = (IRP *)Irp;
  v43 = (PVOID)Irp;
  if ( Irp )
  {
    *v55 = Irp;
    *(_QWORD *)(Irp + 192) = v23;
    *(_QWORD *)(Irp + 152) = v44;
    *(_BYTE *)(Irp + 64) = PreviousMode;
    *(_QWORD *)(Irp + 80) = v57;
    *(_QWORD *)(Irp + 72) = a5;
    *(_QWORD *)(Irp + 88) = a3;
    *(_QWORD *)(Irp + 96) = a4;
    v32 = *(_QWORD *)(Irp + 184);
    *(_WORD *)(v32 - 72) = 268;
    *(_QWORD *)(v32 - 24) = v23;
    *(_QWORD *)(Irp + 160) = P;
    *(_QWORD *)(Irp + 24) = 0LL;
    *(_QWORD *)(Irp + 8) = 0LL;
    Flags = RelatedDeviceObject->Flags;
    if ( (Flags & 4) != 0 )
    {
      PoolWithQuota_0 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_0(v30, v16);
      v31->AssociatedIrp.MasterIrp = PoolWithQuota_0;
      if ( !IopDisableBufferedIoInit )
        memset(PoolWithQuota_0, 0, v16);
      v31->Flags = 112;
    }
    else if ( (Flags & 0x10) != 0 )
    {
      Mdl = IoAllocateMdl((PVOID)Address, v16, 0, 1u, v31);
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      IopProbeAndLockPages_1(Mdl, PreviousMode, v39, (__int64)RelatedDeviceObject, *(unsigned __int8 *)(v32 - 72));
      goto LABEL_56;
    }
    v31->UserBuffer = (PVOID)Address;
LABEL_56:
    *(_DWORD *)(v32 - 64) = v16;
    *(_DWORD *)(v32 - 48) = v15;
    *(_DWORD *)(v32 - 40) = 0;
    *(_QWORD *)(v32 - 56) = P;
    *(_BYTE *)(v32 - 70) = a9 & 0xB;
    v31->Flags |= 0x800u;
    return 0LL;
  }
  IopAllocateIrpCleanup(v23, v57);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return 3221225626LL;
}
