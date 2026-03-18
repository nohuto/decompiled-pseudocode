/*
 * XREFs of FsRtlCheckNoSharedConflict @ 0x1401E33E0
 * Callers:
 *     FsRtlFastCheckLockForWrite @ 0x14002F200 (FsRtlFastCheckLockForWrite.c)
 * Callees:
 *     RtlSplay @ 0x14004DCD0 (RtlSplay.c)
 *     FsRtlFindFirstOverlappingSharedNode @ 0x140051B5C (FsRtlFindFirstOverlappingSharedNode.c)
 *     FsRtlFindFirstOverlapInNode @ 0x1401E3494 (FsRtlFindFirstOverlapInNode.c)
 */

bool __fastcall FsRtlCheckNoSharedConflict(__int64 a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  __int64 FirstOverlappingSharedNode; // rbx
  PRTL_SPLAY_LINKS Links; // [rsp+40h] [rbp+8h] BYREF

  FirstOverlappingSharedNode = FsRtlFindFirstOverlappingSharedNode(*(_QWORD *)(a1 + 8), a2, a3, &Links, 0LL);
  if ( Links )
    *(_QWORD *)(a1 + 8) = RtlSplay(Links);
  if ( !FirstOverlappingSharedNode )
    return 1;
  if ( *(_BYTE *)(FirstOverlappingSharedNode - 24 + 8) )
    return FsRtlFindFirstOverlapInNode(FirstOverlappingSharedNode - 24, a2, a3) == 0;
  return 0;
}
