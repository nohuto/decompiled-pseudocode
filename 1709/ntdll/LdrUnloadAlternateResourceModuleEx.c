/*
 * XREFs of LdrUnloadAlternateResourceModuleEx @ 0x180011F70
 * Callers:
 *     LdrpUnloadNode @ 0x180010B14 (LdrpUnloadNode.c)
 *     LdrUnloadAlternateResourceModule @ 0x180011F60 (LdrUnloadAlternateResourceModule.c)
 *     LdrpGetFromMUIMemCache @ 0x180029A0C (LdrpGetFromMUIMemCache.c)
 *     LdrResRelease @ 0x180089B50 (LdrResRelease.c)
 * Callees:
 *     LdrpRemoveAlternateModuleCacheItem @ 0x1800144C8 (LdrpRemoveAlternateModuleCacheItem.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlReAllocateHeap @ 0x18003C6F0 (RtlReAllocateHeap.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     LdrpUnmapCMFSegmentIfUnreferenced @ 0x18008E9B4 (LdrpUnmapCMFSegmentIfUnreferenced.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x1800A0600 (NtUnmapViewOfSection.c)
 */

char __fastcall LdrUnloadAlternateResourceModuleEx(__int64 a1, __int16 a2)
{
  char v4; // bl
  unsigned int v5; // edi
  int v6; // r14d
  int v7; // r13d
  __int64 v8; // rsi
  _QWORD *v9; // rbx
  __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  void *v12; // rcx
  unsigned int v13; // ebx
  bool v14; // zf
  __int64 v15; // rax
  __int64 Heap; // rax
  __int64 v18; // [rsp+20h] [rbp-38h]
  unsigned int v19; // [rsp+60h] [rbp+8h]
  __int64 v20; // [rsp+70h] [rbp+18h]

  v4 = 0;
  if ( !a1 )
    return 0;
  RtlAcquireSRWLockExclusive(&MuiCacheSWRLock);
  v5 = AlternateResourceModuleCount;
  if ( AlternateResourceModuleCount )
  {
    v6 = AlternateResourceModuleCount;
    for ( HIDWORD(v18) = AlternateResourceModuleCount; ; HIDWORD(v18) = v7 )
    {
      if ( v6 <= 0 )
        goto LABEL_34;
      v7 = v6 - 1;
      v8 = AlternateResourceModules + 72LL * (v6 - 1);
      if ( *(_QWORD *)(v8 + 8) == a1 )
        break;
LABEL_6:
      v6 = v7;
    }
    v20 = AlternateResourceModules + 72LL * v7;
    v9 = (_QWORD *)(v8 + 32);
    v10 = *(_QWORD *)(v8 + 32);
    if ( v10 && (!a2 || a2 == *(_WORD *)v8) && v10 != -1 && *(_DWORD *)(v8 + 56) == -1 )
    {
      v11 = v10 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( *(_DWORD *)(v8 + 64) == -1073741799 )
      {
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v11);
        v6 = HIDWORD(v18);
        v8 = v20;
      }
      else
      {
        NtUnmapViewOfSection(-1LL, v11, 0LL);
      }
      v12 = *(void **)(v8 + 40);
      if ( v12 )
      {
        NtClose(v12);
        *(_QWORD *)(v8 + 40) = 0LL;
      }
      *v9 = 0LL;
      v5 = AlternateResourceModuleCount;
    }
    v13 = *(_DWORD *)(v8 + 56);
    v19 = v13;
    if ( v13 == -1 )
    {
      v13 = *(_DWORD *)(v8 + 60);
      v19 = v13;
    }
    if ( v6 != v5 )
      LdrpRemoveAlternateModuleCacheItem((unsigned int)(v6 - 1), v10, 0LL);
    v14 = v5-- == 1;
    AlternateResourceModuleCount = v5;
    if ( v14 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, AlternateResourceModules);
      AlternateResourceModules = 0LL;
      AltResMemBlockCount = 0;
    }
    else
    {
      v15 = (unsigned int)(AltResMemBlockCount - 32);
      if ( v5 >= (unsigned int)v15 )
        goto LABEL_22;
      Heap = RtlReAllocateHeap(NtCurrentPeb()->ProcessHeap, 0LL, AlternateResourceModules, 72 * v15, v18);
      if ( !Heap )
      {
        v4 = 0;
        goto LABEL_34;
      }
      AlternateResourceModules = Heap;
      AltResMemBlockCount -= 32;
    }
    v13 = v19;
    v5 = AlternateResourceModuleCount;
LABEL_22:
    if ( v13 == -1 )
    {
      v4 = 1;
      LOBYTE(v18) = 1;
    }
    else
    {
      v4 = LdrpUnmapCMFSegmentIfUnreferenced(v13, v10, 0LL);
      LOBYTE(v18) = v4;
      v5 = AlternateResourceModuleCount;
    }
    goto LABEL_6;
  }
  v4 = 1;
LABEL_34:
  RtlReleaseSRWLockExclusive(&MuiCacheSWRLock);
  return v4;
}
