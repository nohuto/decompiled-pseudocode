/*
 * XREFs of RtlRealSuccessor @ 0x140105680
 * Callers:
 *     RtlEnumerateGenericTable @ 0x14000F330 (RtlEnumerateGenericTable.c)
 *     FsRtlPrivateFastUnlockAll @ 0x1401053A4 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateInsertExclusiveLock @ 0x1401056CC (FsRtlPrivateInsertExclusiveLock.c)
 *     FsRtlPrivateCheckForSharedLockAccess @ 0x140105D68 (FsRtlPrivateCheckForSharedLockAccess.c)
 *     FsRtlPrivateInsertSharedLock @ 0x140105DE4 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x140106010 (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlSplitLocks @ 0x140106C78 (FsRtlSplitLocks.c)
 *     RtlEnumerateGenericTableWithoutSplaying @ 0x140129AE0 (RtlEnumerateGenericTableWithoutSplaying.c)
 *     FsRtlGetNextFileLock @ 0x14015B2D0 (FsRtlGetNextFileLock.c)
 *     FsRtlCheckNoExclusiveConflict @ 0x1401E75E0 (FsRtlCheckNoExclusiveConflict.c)
 *     RtlNextUnicodePrefix @ 0x140565950 (RtlNextUnicodePrefix.c)
 *     FsRtlDeleteKeyFromTunnelCache @ 0x140565A70 (FsRtlDeleteKeyFromTunnelCache.c)
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
