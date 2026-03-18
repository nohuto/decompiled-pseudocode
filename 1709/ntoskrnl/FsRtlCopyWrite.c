/*
 * XREFs of FsRtlCopyWrite @ 0x1406AF960
 * Callers:
 *     <none>
 * Callees:
 *     IoSetTopLevelIrp @ 0x140067110 (IoSetTopLevelIrp.c)
 *     IoGetTopLevelIrp @ 0x140067130 (IoGetTopLevelIrp.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     CcCanIWrite @ 0x1400F4620 (CcCanIWrite.c)
 *     CcCopyWriteWontFlush @ 0x14010A520 (CcCopyWriteWontFlush.c)
 *     CcZeroData @ 0x14011E9B0 (CcZeroData.c)
 *     FsRtlIsNtstatusExpected @ 0x140126700 (FsRtlIsNtstatusExpected.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     CcCopyWrite @ 0x1401E0870 (CcCopyWrite.c)
 */

BOOLEAN __stdcall FsRtlCopyWrite(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        BOOLEAN Wait,
        ULONG LockKey,
        PVOID Buffer,
        PIO_STATUS_BLOCK IoStatus,
        PDEVICE_OBJECT DeviceObject)
{
  ULONG_PTR v9; // rbx
  LARGE_INTEGER *v10; // r12
  BOOLEAN v12; // r14
  char v13; // di
  char *FsContext; // rsi
  signed __int64 v15; // r13
  struct _KTHREAD *CurrentThread; // rax
  __int64 v17; // r9
  char v18; // r8
  LARGE_INTEGER v19; // rdi
  signed __int64 v20; // rbx
  char v21; // cl
  signed __int64 v22; // rdx
  ULONG v23; // r13d
  char v24; // r12
  struct _ERESOURCE *v25; // rcx
  struct _ERESOURCE *v26; // rcx
  struct _ERESOURCE *v27; // rcx
  BOOLEAN v29; // [rsp+50h] [rbp-78h]
  char v30; // [rsp+51h] [rbp-77h]
  LARGE_INTEGER EndOffset; // [rsp+58h] [rbp-70h] BYREF
  signed __int64 v32; // [rsp+60h] [rbp-68h]
  __int64 v33; // [rsp+68h] [rbp-60h]
  __int64 v34; // [rsp+70h] [rbp-58h]
  char *v35; // [rsp+78h] [rbp-50h]
  char v36[72]; // [rsp+80h] [rbp-48h] BYREF

  v9 = Length;
  v10 = FileOffset;
  v12 = 0;
  v29 = 1;
  if ( FileOffset->QuadPart == -1 )
  {
    v13 = 1;
    v30 = 1;
  }
  else
  {
    v13 = 0;
    v30 = 0;
  }
  if ( IoGetTopLevelIrp() )
    return 0;
  FsContext = (char *)FileObject->FsContext;
  v35 = FsContext;
  if ( !CcCanIWrite(FileObject, v9, Wait, 0)
    || (FileObject->Flags & 0x10) != 0
    || !CcCopyWriteWontFlush(FileObject, v10, v9) )
  {
    return 0;
  }
  IoStatus->Status = 0;
  v15 = v9;
  IoStatus->Information = v9;
  if ( !(_DWORD)v9 )
    return 1;
  v33 = 0LL;
  v34 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( v13 || (signed __int64)(v9 + v10->QuadPart) > *((_QWORD *)FsContext + 5) )
  {
    if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)FsContext + 1), Wait) )
      goto LABEL_12;
    v18 = 0;
LABEL_16:
    if ( v13 )
      v19 = *(LARGE_INTEGER *)(FsContext + 32);
    else
      v19 = *v10;
    v20 = v19.QuadPart + v9;
    v32 = v20;
    EndOffset = v19;
    if ( !FileObject->PrivateCacheMap )
      goto LABEL_32;
    v21 = FsContext[5];
    if ( !v21 )
      goto LABEL_32;
    v22 = *((_QWORD *)FsContext + 5);
    if ( v19.QuadPart >= v22 + 0x2000 || 0x7FFFFFFFFFFFFFFFLL - v19.QuadPart < v15 || v20 > *((_QWORD *)FsContext + 3) )
      goto LABEL_32;
    if ( v18 && v20 > v22 )
    {
      ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
      if ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)FsContext + 1), Wait) )
        goto LABEL_12;
      if ( v30 )
      {
        v19 = *(LARGE_INTEGER *)(FsContext + 32);
        EndOffset = v19;
        v20 = v19.QuadPart + v15;
        v32 = v19.QuadPart + v15;
      }
      if ( !FileObject->PrivateCacheMap || (v21 = FsContext[5]) == 0 || v20 > *((_QWORD *)FsContext + 3) )
      {
LABEL_32:
        ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
        goto LABEL_12;
      }
    }
    if ( v21 == 2 )
    {
      if ( v10->QuadPart == -1 )
        v10 = (LARGE_INTEGER *)(FsContext + 32);
      LOBYTE(v17) = Wait;
      v23 = Length;
      if ( !((unsigned __int8 (__fastcall *)(PFILE_OBJECT, LARGE_INTEGER *, _QWORD, __int64, ULONG, _BYTE, char *, PDEVICE_OBJECT))DeviceObject->DriverObject->FastIoDispatch->FastIoCheckIfPossible)(
              FileObject,
              v10,
              Length,
              v17,
              LockKey,
              0,
              v36,
              DeviceObject) )
      {
        ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
LABEL_63:
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        return v12;
      }
    }
    else
    {
      v23 = Length;
    }
    if ( v20 <= *((_QWORD *)FsContext + 4) )
    {
      v24 = 0;
    }
    else
    {
      v24 = 1;
      v33 = *((_QWORD *)FsContext + 4);
      v34 = *((_QWORD *)FsContext + 5);
      if ( *((_DWORD *)FsContext + 9) == HIDWORD(v32) || (v25 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2)) == 0LL )
      {
        *((_QWORD *)FsContext + 4) = v20;
      }
      else
      {
        ExAcquireResourceExclusiveLite(v25, 1u);
        *((_QWORD *)FsContext + 4) = v20;
        ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
      }
    }
    IoSetTopLevelIrp((PIRP)4);
    if ( v19.QuadPart > *((_QWORD *)FsContext + 5) )
      v29 = CcZeroData(FileObject, (PLARGE_INTEGER)FsContext + 5, &EndOffset, Wait);
    if ( v29 )
      v29 = CcCopyWrite(FileObject, &EndOffset, v23, Wait, Buffer);
    IoSetTopLevelIrp(0LL);
    if ( v29 )
    {
      if ( v20 > *((_QWORD *)FsContext + 5) )
      {
        if ( *((_DWORD *)FsContext + 11) == HIDWORD(v32)
          || (v26 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2)) == 0LL )
        {
          *((_QWORD *)FsContext + 5) = v20;
        }
        else
        {
          ExAcquireResourceExclusiveLite(v26, 1u);
          *((_QWORD *)FsContext + 5) = v20;
          ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
        }
      }
      FileObject->Flags |= 0x1000u;
      if ( v24 )
      {
        *((_QWORD *)FileObject->SectionObjectPointer->SharedCacheMap + 1) = v20;
        FileObject->Flags |= 0x2000u;
      }
      FileObject->CurrentByteOffset.QuadPart = v19.QuadPart + v23;
    }
    else if ( v24 )
    {
      v27 = (struct _ERESOURCE *)*((_QWORD *)FsContext + 2);
      if ( v27 )
      {
        ExAcquireResourceExclusiveLite(v27, 1u);
        *((_QWORD *)FsContext + 4) = v33;
        *((_QWORD *)FsContext + 5) = v34;
        ExReleaseResourceLite(*((PERESOURCE *)FsContext + 2));
      }
      else
      {
        *((_QWORD *)FsContext + 4) = v33;
        *((_QWORD *)FsContext + 5) = v34;
      }
    }
    ExReleaseResourceLite(*((PERESOURCE *)FsContext + 1));
    v12 = v29;
    goto LABEL_63;
  }
  if ( ExAcquireResourceSharedLite(*((PERESOURCE *)FsContext + 1), Wait) )
  {
    v18 = 1;
    goto LABEL_16;
  }
LABEL_12:
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return 0;
}
