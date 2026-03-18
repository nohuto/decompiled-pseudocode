/*
 * XREFs of CcDeleteSharedCacheMap @ 0x1400DAF00
 * Callers:
 *     CcUninitializeCacheMap @ 0x1400DCA00 (CcUninitializeCacheMap.c)
 *     CcWriteBehindInternal @ 0x1400DE8B0 (CcWriteBehindInternal.c)
 *     CcInitializeCacheMapEx @ 0x1400DF8F0 (CcInitializeCacheMapEx.c)
 *     CcDeleteSectionsForPartition @ 0x140220EE8 (CcDeleteSectionsForPartition.c)
 * Callees:
 *     ObpTraceObjectDereferenceIfActive @ 0x14005BAA0 (ObpTraceObjectDereferenceIfActive.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObpDeferObjectDeletion @ 0x1400BD920 (ObpDeferObjectDeletion.c)
 *     CcDeleteMbcb @ 0x1400BE080 (CcDeleteMbcb.c)
 *     CcUninitializeVolumeCacheMap @ 0x1400DB18C (CcUninitializeVolumeCacheMap.c)
 *     CcUnmapAndPurge @ 0x1400DB23C (CcUnmapAndPurge.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x1400DB2B4 (CcDereferenceSharedCacheMapFileObject.c)
 *     CcGetPartition @ 0x1400E0200 (CcGetPartition.c)
 *     CcDereferencePartition @ 0x1400E07B8 (CcDereferencePartition.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     CcDeleteBcbs @ 0x14014C85C (CcDeleteBcbs.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     FsRtlReleaseFile @ 0x1404C1550 (FsRtlReleaseFile.c)
 */

void __fastcall CcDeleteSharedCacheMap(
        char *P,
        PKLOCK_QUEUE_HANDLE LockHandle,
        PKLOCK_QUEUE_HANDLE a3,
        int a4,
        PFILE_OBJECT FileObject)
{
  __int64 Partition; // r14
  char **v10; // rcx
  PVOID *v11; // rax
  char **v12; // rcx
  PVOID *v13; // rdx
  __int64 v14; // rdx
  void *v15; // rcx
  __int64 v16; // rbx
  volatile signed __int64 *v17; // rsi
  unsigned int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // r9
  signed __int64 BugCheckParameter4; // rcx
  __int64 v22; // rcx
  char *v23; // rcx
  char *v24; // rcx
  char *v25; // rcx
  unsigned __int64 v26; // rcx
  __int64 v27; // rbx

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
  if ( !LockHandle && !*(_BYTE *)(Partition + 902) )
    KeBugCheckEx(0x34u, 0xD97uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
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
  v16 = _InterlockedExchange64((volatile __int64 *)P + 12, 0LL);
  v17 = (volatile signed __int64 *)(v16 & 0xFFFFFFFFFFFFFFF0uLL);
  if ( (v16 & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
  {
    v18 = v16 & 0xF;
    if ( v18 )
    {
      ObpTraceObjectDereferenceIfActive((_DWORD)v17 - 48);
      BugCheckParameter4 = _InterlockedExchangeAdd64(v17 - 6, -v18) - v18;
      if ( BugCheckParameter4 <= 0 )
      {
        if ( *((_QWORD *)v17 - 5) )
          KeBugCheckEx(
            0x18u,
            ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)v17 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v17 - 48) >> 8)],
            (ULONG_PTR)v17,
            6uLL,
            *((_QWORD *)v17 - 5));
        if ( BugCheckParameter4 < 0 )
          KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)v17, 5uLL, BugCheckParameter4);
        ObpDeferObjectDeletion((signed __int64)(v17 - 6), v19, 0LL, v20);
      }
    }
  }
  ObfDereferenceObject((PVOID)v17);
  v22 = *((_QWORD *)P + 34);
  if ( v22 )
  {
    do
    {
      v26 = v22 & 0xFFFFFFFFFFFFFFFEuLL;
      v27 = *(_QWORD *)v26;
      KeSetEvent((PRKEVENT)(v26 + 8), 0, 0);
      v22 = v27;
    }
    while ( v27 );
  }
  v23 = (char *)*((_QWORD *)P + 11);
  if ( v23 != P + 56 && v23 )
    ExFreePoolWithTag(v23, 0);
  v24 = (char *)*((_QWORD *)P + 22);
  if ( v24 && v24 != P + 344 )
    ExFreePoolWithTag(v24, 0);
  v25 = (char *)*((_QWORD *)P + 23);
  if ( v25 && v25 != P + 344 )
    ExFreePoolWithTag(v25, 0);
  CcDereferencePartition(Partition);
  ExFreePoolWithTag(P, 0);
}
