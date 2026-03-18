/*
 * XREFs of HvFoldBackDirtyData @ 0x140696CC0
 * Callers:
 *     CmpFlushHive @ 0x1404DD950 (CmpFlushHive.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140016B40 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140016CF0 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     HvpMarkDirty @ 0x14047D1F0 (HvpMarkDirty.c)
 *     CmpLockRegistry @ 0x14047E6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     HvFreeDirtyData @ 0x1404E6528 (HvFreeDirtyData.c)
 */

void __fastcall HvFoldBackDirtyData(ULONG_PTR BugCheckParameter2)
{
  unsigned __int64 v1; // rdi
  __int64 v3; // rbp
  int v4; // esi

  v1 = 0LL;
  if ( *(_QWORD *)(BugCheckParameter2 + 2864) )
  {
    v3 = *(unsigned int *)(BugCheckParameter2 + 2856);
    CmpLockRegistry();
    ExAcquireResourceSharedLite(*(PERESOURCE *)(BugCheckParameter2 + 2848), 1u);
    ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(BugCheckParameter2 + 2840));
    if ( (_DWORD)v3 )
    {
      v4 = 8;
      do
      {
        if ( _bittest64(*(const signed __int64 **)(BugCheckParameter2 + 2864), v1) == 1 )
          HvpMarkDirty(BugCheckParameter2, v4, 1u, 0);
        ++v1;
        v4 += 512;
        --v3;
      }
      while ( v3 );
    }
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(BugCheckParameter2 + 2840));
    ExReleaseResourceLite(*(PERESOURCE *)(BugCheckParameter2 + 2848));
    CmpUnlockRegistry();
  }
  HvFreeDirtyData(BugCheckParameter2);
}
