/*
 * XREFs of FsRtlPrepareMdlWriteDev @ 0x140684F90
 * Callers:
 *     <none>
 * Callees:
 *     CcCanIWrite @ 0x14000D980 (CcCanIWrite.c)
 *     FsRtlIsNtstatusExpected @ 0x1400308D0 (FsRtlIsNtstatusExpected.c)
 *     CcPrepareMdlWrite @ 0x1400339A0 (CcPrepareMdlWrite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     IoSetTopLevelIrp @ 0x140096520 (IoSetTopLevelIrp.c)
 *     IoGetTopLevelIrp @ 0x140096540 (IoGetTopLevelIrp.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     CcZeroData @ 0x14044A710 (CcZeroData.c)
 */

BOOLEAN __stdcall FsRtlPrepareMdlWriteDev(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        ULONG LockKey,
        PMDL *MdlChain,
        PIO_STATUS_BLOCK IoStatus,
        PDEVICE_OBJECT DeviceObject)
{
  __int64 v7; // r12
  char v9; // r13
  bool v10; // di
  PVOID FsContext; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // r9
  char v15; // dl
  LONGLONG QuadPart; // rdi
  LONGLONG v17; // rbx
  char v18; // cl
  struct _ERESOURCE *v19; // rcx
  struct _ERESOURCE *v20; // rcx
  struct _ERESOURCE *v21; // rcx
  BOOLEAN v22; // [rsp+50h] [rbp-68h]
  bool v23; // [rsp+51h] [rbp-67h]
  LONGLONG v24; // [rsp+58h] [rbp-60h]
  LARGE_INTEGER EndOffset; // [rsp+60h] [rbp-58h] BYREF
  __int64 v26; // [rsp+68h] [rbp-50h]
  __int64 v27; // [rsp+70h] [rbp-48h]
  PVOID v28; // [rsp+78h] [rbp-40h]

  v7 = Length;
  v26 = 0LL;
  v27 = 0LL;
  v22 = 1;
  v9 = 0;
  v10 = FileOffset->QuadPart == -1;
  v23 = v10;
  if ( IoGetTopLevelIrp() || !CcCanIWrite(FileObject, v7, 1u, 0) || (FileObject->Flags & 0x10) != 0 )
    return 0;
  IoStatus->Status = 0;
  if ( !(_DWORD)v7 )
    return 1;
  FsContext = FileObject->FsContext;
  v28 = FsContext;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( v10 || FileOffset->QuadPart + v7 > *((_QWORD *)FsContext + 5) )
  {
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)FsContext + 1), 1u);
    v15 = 0;
  }
  else
  {
    ExAcquireResourceSharedLite(*((PERESOURCE *)FsContext + 1), 1u);
    v15 = 1;
  }
  if ( v10 )
    QuadPart = *((_QWORD *)FsContext + 4);
  else
    QuadPart = FileOffset->QuadPart;
  v17 = QuadPart + v7;
  v24 = QuadPart + v7;
  EndOffset.QuadPart = QuadPart;
  if ( !FileObject->PrivateCacheMap )
    goto LABEL_48;
  v18 = *((_BYTE *)FsContext + 5);
  if ( !v18 || 0x7FFFFFFFFFFFFFFFLL - QuadPart < v7 || v17 > *((_QWORD *)FsContext + 3) )
    goto LABEL_48;
  if ( v15 && v17 > *((_QWORD *)FsContext + 5) )
  {
    ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)FsContext + 1), 1u);
    if ( v23 )
    {
      QuadPart = *((_QWORD *)FsContext + 4);
      EndOffset.QuadPart = QuadPart;
      v17 = QuadPart + v7;
      v24 = QuadPart + v7;
    }
    if ( !FileObject->PrivateCacheMap )
      goto LABEL_48;
    v18 = *((_BYTE *)FsContext + 5);
    if ( !v18 || v17 > *((_QWORD *)FsContext + 3) )
      goto LABEL_48;
  }
  if ( v18 == 2 )
  {
    LOBYTE(v14) = 1;
    if ( !((unsigned __int8 (__fastcall *)(PFILE_OBJECT, PLARGE_INTEGER, _QWORD, __int64, ULONG, _BYTE, PIO_STATUS_BLOCK, PDEVICE_OBJECT))DeviceObject->DriverObject->FastIoDispatch->FastIoCheckIfPossible)(
            FileObject,
            FileOffset,
            Length,
            v14,
            LockKey,
            0,
            IoStatus,
            DeviceObject) )
    {
LABEL_48:
      ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      return 0;
    }
  }
  if ( v17 > *((_QWORD *)FsContext + 4) )
  {
    v9 = 1;
    v26 = *((_QWORD *)FsContext + 4);
    v27 = *((_QWORD *)FsContext + 5);
    if ( *((_DWORD *)FsContext + 9) == HIDWORD(v24) || (v19 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2)) == 0LL )
    {
      *((_QWORD *)FsContext + 4) = v17;
    }
    else
    {
      ExAcquireResourceExclusiveLite(v19, 1u);
      *((_QWORD *)FsContext + 4) = v17;
      ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
    }
  }
  IoSetTopLevelIrp((PIRP)4);
  if ( QuadPart > *((_QWORD *)FsContext + 5) )
    v22 = CcZeroData(FileObject, (PLARGE_INTEGER)FsContext + 5, &EndOffset, 1u);
  if ( v22 )
    CcPrepareMdlWrite(FileObject, &EndOffset, Length, MdlChain, IoStatus);
  IoSetTopLevelIrp(0LL);
  if ( v22 )
  {
    if ( v17 > *((_QWORD *)FsContext + 5) )
    {
      if ( *((_DWORD *)FsContext + 11) == HIDWORD(v24) || (v20 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2)) == 0LL )
      {
        *((_QWORD *)FsContext + 5) = v17;
      }
      else
      {
        ExAcquireResourceExclusiveLite(v20, 1u);
        *((_QWORD *)FsContext + 5) = v17;
        ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
      }
    }
    FileObject->Flags |= 0x1000u;
    if ( v9 )
    {
      *((_QWORD *)FileObject->SectionObjectPointer->SharedCacheMap + 1) = v17;
      FileObject->Flags |= 0x2000u;
    }
  }
  else if ( v9 )
  {
    v21 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
    if ( v21 )
    {
      ExAcquireResourceExclusiveLite(v21, 1u);
      *((_QWORD *)FsContext + 4) = v26;
      *((_QWORD *)FsContext + 5) = v27;
      ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
    }
    else
    {
      *((_QWORD *)FsContext + 4) = v26;
      *((_QWORD *)FsContext + 5) = v27;
    }
  }
  ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v22;
}
