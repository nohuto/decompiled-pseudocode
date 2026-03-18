/*
 * XREFs of CcDeleteSharedCacheMap @ 0x14011AC34
 * Callers:
 *     CcWriteBehindInternal @ 0x1400AACD0 (CcWriteBehindInternal.c)
 *     CcInitializeCacheMapEx @ 0x1400AD640 (CcInitializeCacheMapEx.c)
 *     CcUninitializeCacheMap @ 0x140119B80 (CcUninitializeCacheMap.c)
 *     CcDeleteSectionsForPartition @ 0x1401DE4E4 (CcDeleteSectionsForPartition.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcUnmapVacbArray @ 0x1400AB540 (CcUnmapVacbArray.c)
 *     KeSetEvent @ 0x1400DFDD0 (KeSetEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     CcPurgeCacheSection @ 0x14010BF00 (CcPurgeCacheSection.c)
 *     CcDeleteMbcb @ 0x14011992C (CcDeleteMbcb.c)
 *     ObFastReplaceObject @ 0x14011AE74 (ObFastReplaceObject.c)
 *     CcUninitializeVolumeCacheMap @ 0x14011AF14 (CcUninitializeVolumeCacheMap.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x14011AFC4 (CcDereferenceSharedCacheMapFileObject.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x14011B004 (CcReferenceSharedCacheMapFileObject.c)
 *     CcDeleteBcbs @ 0x140136248 (CcDeleteBcbs.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     FsRtlReleaseFile @ 0x140510170 (FsRtlReleaseFile.c)
 */

void __fastcall CcDeleteSharedCacheMap(__int64 a1, struct _KLOCK_QUEUE_HANDLE *a2, int a3, struct _FILE_OBJECT *a4)
{
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // r10
  _QWORD *v8; // rcx
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rbx
  __int64 v17; // rsi
  void *v18; // rcx
  void *v19; // rax
  __int64 v20; // rcx
  void *v21; // rcx
  void *v22; // rcx
  void *v23; // rcx
  unsigned __int64 v24; // rcx
  __int64 v25; // rbx

  v4 = *(_QWORD *)(a1 + 528);
  v5 = a1 + 136;
  v6 = *(_QWORD *)(a1 + 136);
  v8 = *(_QWORD **)(a1 + 144);
  if ( *(_QWORD *)(v6 + 8) != v5 || *v8 != v5 )
    __fastfail(3u);
  *v8 = v6;
  *(_QWORD *)(v6 + 8) = v8;
  if ( (*(_DWORD *)(a1 + 152) & 0x3000000) != 0 )
  {
    v12 = *(_QWORD *)(a1 + 120);
    v13 = *(_QWORD **)(a1 + 128);
    if ( *(_QWORD *)(v12 + 8) != a1 + 120 || *v13 != a1 + 120 )
      __fastfail(3u);
    *v13 = v12;
    *(_QWORD *)(v12 + 8) = v13;
  }
  *(_QWORD *)(*(_QWORD *)((*(_QWORD *)(a1 + 96) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28) + 8LL) = 0LL;
  *(_DWORD *)(a1 + 152) |= 0x80020u;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(a2);
  __writecr8(a2->OldIrql);
  if ( *(_QWORD *)(a1 + 16) != a1 + 16 )
    CcDeleteBcbs(a1);
  v16 = *(_QWORD *)(a1 + 8);
  v17 = CcReferenceSharedCacheMapFileObject(a1, v14, v15);
  CcUnmapVacbArray(a1, 0LL, 0, v16 >= 0x100000, 1, 0);
  if ( (*(_DWORD *)(a1 + 152) & 0x10) != 0 )
    CcPurgeCacheSection(*(PSECTION_OBJECT_POINTERS *)(v17 + 40), 0LL, 0, 2u);
  CcDereferenceSharedCacheMapFileObject(a1, v17);
  if ( a3 )
  {
    FsRtlReleaseFile(a4);
    CcDereferenceSharedCacheMapFileObject(a1, a4);
  }
  v18 = *(void **)(a1 + 168);
  if ( v18 )
    ObfDereferenceObjectWithTag(v18, 0x746C6644u);
  if ( *(_QWORD *)(a1 + 160) )
    CcDeleteMbcb(a1);
  CcUninitializeVolumeCacheMap(v4, *(_QWORD *)(a1 + 504));
  v19 = (void *)ObFastReplaceObject(a1 + 96, 0LL);
  ObfDereferenceObjectWithTag(v19, 0x746C6644u);
  v20 = *(_QWORD *)(a1 + 272);
  if ( v20 )
  {
    do
    {
      v24 = v20 & 0xFFFFFFFFFFFFFFFEuLL;
      v25 = *(_QWORD *)v24;
      KeSetEvent((PRKEVENT)(v24 + 8), 0, 0);
      v20 = v25;
    }
    while ( v25 );
  }
  v21 = *(void **)(a1 + 88);
  if ( v21 != (void *)(a1 + 56) && v21 )
    ExFreePoolWithTag(v21, 0);
  v22 = *(void **)(a1 + 176);
  if ( v22 && v22 != (void *)(a1 + 344) )
    ExFreePoolWithTag(v22, 0);
  v23 = *(void **)(a1 + 184);
  if ( v23 && v23 != (void *)(a1 + 344) )
    ExFreePoolWithTag(v23, 0);
  ExFreePoolWithTag((PVOID)a1, 0);
}
