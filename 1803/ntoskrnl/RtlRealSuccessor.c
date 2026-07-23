/*
 * XREFs of RtlRealSuccessor @ 0x1400B0BF0
 * Callers:
 *     FsRtlPrivateInsertSharedLock @ 0x140068340 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x140068B20 (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlPrivateCheckForSharedLockAccess @ 0x1400699C4 (FsRtlPrivateCheckForSharedLockAccess.c)
 *     FsRtlPrivateFastUnlockAll @ 0x1400B0904 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlSplitLocks @ 0x1400B1024 (FsRtlSplitLocks.c)
 *     FsRtlPrivateInsertExclusiveLock @ 0x1400BA934 (FsRtlPrivateInsertExclusiveLock.c)
 *     RtlEnumerateGenericTableWithoutSplaying @ 0x1400CB6E0 (RtlEnumerateGenericTableWithoutSplaying.c)
 *     RtlEnumerateGenericTable @ 0x14016E4E0 (RtlEnumerateGenericTable.c)
 *     FsRtlCheckNoExclusiveConflict @ 0x140224C1C (FsRtlCheckNoExclusiveConflict.c)
 *     FsRtlGetNextFileLock @ 0x140224DE0 (FsRtlGetNextFileLock.c)
 *     FsRtlDeleteKeyFromTunnelCache @ 0x140554C00 (FsRtlDeleteKeyFromTunnelCache.c)
 *     RtlNextUnicodePrefix @ 0x1406141C0 (RtlNextUnicodePrefix.c)
 * Callees:
 *     <none>
 */

PRTL_SPLAY_LINKS __stdcall RtlRealSuccessor(PRTL_SPLAY_LINKS Links)
{
  PRTL_SPLAY_LINKS result; // rax
  _RTL_SPLAY_LINKS *v2; // rdx
  _RTL_SPLAY_LINKS *v3; // r8
  _RTL_SPLAY_LINKS *i; // rcx

  result = Links->RightChild;
  v2 = 0LL;
  v3 = Links;
  if ( result )
  {
    for ( i = result->LeftChild; i; i = i->LeftChild )
      result = i;
  }
  else
  {
    while ( 1 )
    {
      Links = Links->Parent;
      if ( Links->RightChild != v3 )
        break;
      v3 = Links;
    }
    if ( Links->LeftChild == v3 )
      return Links;
    return v2;
  }
  return result;
}
