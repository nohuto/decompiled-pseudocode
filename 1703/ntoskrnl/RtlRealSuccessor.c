/*
 * XREFs of RtlRealSuccessor @ 0x14000CC10
 * Callers:
 *     FsRtlPrivateFastUnlockAll @ 0x14000C934 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlSplitLocks @ 0x14000CF00 (FsRtlSplitLocks.c)
 *     FsRtlPrivateInsertExclusiveLock @ 0x140028D30 (FsRtlPrivateInsertExclusiveLock.c)
 *     RtlEnumerateGenericTableWithoutSplaying @ 0x1400342E0 (RtlEnumerateGenericTableWithoutSplaying.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x14004F150 (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlPrivateCheckForSharedLockAccess @ 0x140051998 (FsRtlPrivateCheckForSharedLockAccess.c)
 *     FsRtlPrivateInsertSharedLock @ 0x140051A14 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlCheckNoExclusiveConflict @ 0x140131024 (FsRtlCheckNoExclusiveConflict.c)
 *     RtlEnumerateGenericTable @ 0x14013DDC0 (RtlEnumerateGenericTable.c)
 *     FsRtlGetNextFileLock @ 0x14014B5A0 (FsRtlGetNextFileLock.c)
 *     FsRtlDeleteKeyFromTunnelCache @ 0x140426DA0 (FsRtlDeleteKeyFromTunnelCache.c)
 *     RtlNextUnicodePrefix @ 0x140586590 (RtlNextUnicodePrefix.c)
 * Callees:
 *     <none>
 */

PRTL_SPLAY_LINKS __stdcall RtlRealSuccessor(PRTL_SPLAY_LINKS Links)
{
  PRTL_SPLAY_LINKS v1; // rax
  _RTL_SPLAY_LINKS *v2; // rdx
  _RTL_SPLAY_LINKS *RightChild; // rcx
  PRTL_SPLAY_LINKS j; // rcx
  _RTL_SPLAY_LINKS *i; // rax

  v1 = Links;
  v2 = 0LL;
  RightChild = Links->RightChild;
  if ( RightChild )
  {
    for ( i = RightChild->LeftChild; i; i = i->LeftChild )
      RightChild = i;
    return RightChild;
  }
  else
  {
    for ( j = v1->Parent; j->RightChild == v1; j = j->Parent )
      v1 = j;
    if ( v1->Parent->LeftChild == v1 )
      return v1->Parent;
    return v2;
  }
}
