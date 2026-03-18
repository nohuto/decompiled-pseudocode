/*
 * XREFs of FsRtlPrivateCheckForSharedLockAccess @ 0x140051998
 * Callers:
 *     FsRtlPrivateCheckWaitingLocks @ 0x14000CC5C (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlPrivateLock @ 0x14004F440 (FsRtlPrivateLock.c)
 * Callees:
 *     RtlRealSuccessor @ 0x14000CC10 (RtlRealSuccessor.c)
 *     FsRtlFindFirstOverlappingExclusiveNode @ 0x140028DAC (FsRtlFindFirstOverlappingExclusiveNode.c)
 *     RtlSplay @ 0x14004DCD0 (RtlSplay.c)
 */

char __fastcall FsRtlPrivateCheckForSharedLockAccess(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rcx
  char v5; // bl
  PRTL_SPLAY_LINKS FirstOverlappingExclusiveNode; // r9
  _RTL_SPLAY_LINKS *v8; // rsi
  PRTL_SPLAY_LINKS Links; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(_QWORD **)(a1 + 16);
  v5 = 1;
  if ( v4 )
  {
    FirstOverlappingExclusiveNode = (PRTL_SPLAY_LINKS)FsRtlFindFirstOverlappingExclusiveNode(
                                                        v4,
                                                        (unsigned __int64 *)a2,
                                                        (unsigned __int64 *)(a2 + 40),
                                                        &Links,
                                                        0LL);
    if ( FirstOverlappingExclusiveNode )
    {
      v8 = *(_RTL_SPLAY_LINKS **)(a2 + 40);
      while ( FirstOverlappingExclusiveNode[1].Parent <= v8 )
      {
        if ( (FirstOverlappingExclusiveNode[2].Parent != *(_RTL_SPLAY_LINKS **)(a2 + 24)
           || FirstOverlappingExclusiveNode[2].LeftChild != *(_RTL_SPLAY_LINKS **)(a2 + 32)
           || HIDWORD(FirstOverlappingExclusiveNode[1].RightChild) != *(_DWORD *)(a2 + 20))
          && (*(_QWORD *)(a2 + 8) || FirstOverlappingExclusiveNode[1].LeftChild) )
        {
          v5 = 0;
          break;
        }
        FirstOverlappingExclusiveNode = RtlRealSuccessor(FirstOverlappingExclusiveNode);
        if ( !FirstOverlappingExclusiveNode )
          break;
      }
    }
    if ( Links )
      *(_QWORD *)(a1 + 16) = RtlSplay(Links);
  }
  return v5;
}
