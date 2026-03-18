/*
 * XREFs of CcDeleteSharedCacheMap @ 0x14001FD84
 * Callers:
 *     CcInitializeCacheMapEx @ 0x1400636F0 (CcInitializeCacheMapEx.c)
 *     CcUninitializeCacheMap @ 0x140066BF0 (CcUninitializeCacheMap.c)
 *     CcWriteBehindInternal @ 0x14008A070 (CcWriteBehindInternal.c)
 *     CcDeleteSectionsForPartition @ 0x1401E22D8 (CcDeleteSectionsForPartition.c)
 * Callees:
 *     CcDeleteMbcb @ 0x14001EBD0 (CcDeleteMbcb.c)
 *     ObFastReplaceObject @ 0x14001FFA8 (ObFastReplaceObject.c)
 *     CcUninitializeVolumeCacheMap @ 0x140020048 (CcUninitializeVolumeCacheMap.c)
 *     CcUnmapAndPurge @ 0x1400202D4 (CcUnmapAndPurge.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x14002034C (CcDereferenceSharedCacheMapFileObject.c)
 *     CcGetPartition @ 0x1400644A0 (CcGetPartition.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcDereferencePartition @ 0x1400670D4 (CcDereferencePartition.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     CcDeleteBcbs @ 0x14012F610 (CcDeleteBcbs.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     FsRtlReleaseFile @ 0x14049C430 (FsRtlReleaseFile.c)
 */

void __fastcall CcDeleteSharedCacheMap(
        char *P,
        PKLOCK_QUEUE_HANDLE LockHandle,
        PKLOCK_QUEUE_HANDLE a3,
        int a4,
        PFILE_OBJECT FileObject)
{
  __int64 Partition; // r14
  char **v10; // rdx
  PVOID *v11; // rax
  char **v12; // rcx
  PVOID *v13; // rdx
  __int64 v14; // rdx
  void *v15; // rcx
  void *v16; // rax
  __int64 v17; // rcx
  char *v18; // rcx
  char *v19; // rcx
  char *v20; // rcx
  unsigned __int64 v21; // rcx
  __int64 v22; // rbx

  Partition = CcGetPartition(P);
  if ( _InterlockedIncrement64((volatile signed __int64 *)(Partition + 904)) <= 1 )
    __fastfail(0xEu);
  v10 = (char **)*((_QWORD *)P + 17);
  if ( v10[1] != P + 136 || (v11 = (PVOID *)*((_QWORD *)P + 18), *v11 != P + 136) )
    __fastfail(3u);
  *v11 = v10;
  v10[1] = (char *)v11;
  if ( (*((_DWORD *)P + 38) & 0x3000000) != 0 )
  {
    v12 = (char **)*((_QWORD *)P + 15);
    if ( v12[1] != P + 120 || (v13 = (PVOID *)*((_QWORD *)P + 16), *v13 != P + 120) )
      __fastfail(3u);
    *v13 = v12;
    v12[1] = (char *)v13;
  }
  *(_QWORD *)(*(_QWORD *)((*((_QWORD *)P + 12) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28) + 8LL) = 0LL;
  *((_DWORD *)P + 38) |= 0x80020u;
  if ( !LockHandle && !*(_BYTE *)(Partition + 901) )
    KeBugCheckEx(0x34u, 0xD8BuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(a3);
  __writecr8(a3->OldIrql);
  if ( LockHandle )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(LockHandle);
    __writecr8(LockHandle->OldIrql);
  }
  if ( *((char **)P + 2) != P + 16 )
    CcDeleteBcbs(P);
  LOBYTE(v14) = *((_QWORD *)P + 1) >= 0x100000LL;
  CcUnmapAndPurge(P, v14);
  if ( a4 )
  {
    FsRtlReleaseFile(FileObject);
    CcDereferenceSharedCacheMapFileObject(P, FileObject);
  }
  v15 = (void *)*((_QWORD *)P + 21);
  if ( v15 )
  {
    ObfDereferenceObject(v15);
    *((_QWORD *)P + 21) = 0LL;
  }
  if ( *((_QWORD *)P + 20) )
    CcDeleteMbcb((__int64)P);
  CcUninitializeVolumeCacheMap(*((PVOID *)P + 63));
  v16 = (void *)ObFastReplaceObject(P + 96, 0LL);
  ObfDereferenceObject(v16);
  v17 = *((_QWORD *)P + 34);
  if ( v17 )
  {
    do
    {
      v21 = v17 & 0xFFFFFFFFFFFFFFFEuLL;
      v22 = *(_QWORD *)v21;
      KeSetEvent((PRKEVENT)(v21 + 8), 0, 0);
      v17 = v22;
    }
    while ( v22 );
  }
  v18 = (char *)*((_QWORD *)P + 11);
  if ( v18 != P + 56 && v18 )
    ExFreePoolWithTag(v18, 0);
  v19 = (char *)*((_QWORD *)P + 22);
  if ( v19 && v19 != P + 344 )
    ExFreePoolWithTag(v19, 0);
  v20 = (char *)*((_QWORD *)P + 23);
  if ( v20 && v20 != P + 344 )
    ExFreePoolWithTag(v20, 0);
  CcDereferencePartition(Partition);
  ExFreePoolWithTag(P, 0);
}
