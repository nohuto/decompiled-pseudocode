/*
 * XREFs of ViLookasideAdd @ 0x14077CD90
 * Callers:
 *     VerifierExInitializeLookasideListEx @ 0x14077C990 (VerifierExInitializeLookasideListEx.c)
 *     ViLookasideTrackList @ 0x14077CF70 (ViLookasideTrackList.c)
 * Callees:
 *     VfAvlReserveNode @ 0x14006E078 (VfAvlReserveNode.c)
 *     VfAvlCleanupLockContext @ 0x14006E550 (VfAvlCleanupLockContext.c)
 *     VfAvlInsertReservedTreeNode @ 0x14006E620 (VfAvlInsertReservedTreeNode.c)
 *     ExFreeToNPagedLookasideList @ 0x140114B0C (ExFreeToNPagedLookasideList.c)
 *     VfUtilFreePoolCheckIRQL @ 0x140148980 (VfUtilFreePoolCheckIRQL.c)
 *     VfAvlDeleteTreeNode @ 0x1401489E0 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x140148A98 (VfAvlLookupTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x1402518BC (VfAvlInitializeLockContext.c)
 *     VerifierBugCheckIfAppropriate @ 0x14076EF94 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall ViLookasideAdd(ULONG_PTR a1)
{
  unsigned __int64 *v2; // rsi
  _SLIST_ENTRY *v3; // rbx
  _BYTE v4[24]; // [rsp+30h] [rbp-18h] BYREF

  if ( ViLookasideInitialized )
  {
    v2 = (unsigned __int64 *)VfAvlReserveNode(ViLookasideAvl, a1, 0LL);
    if ( v2 )
    {
      v3 = 0LL;
      VfAvlInitializeLockContext((__int64)v4, 0);
      if ( VfAvlLookupTreeNode(ViLookasideAvl, (__int64)v4, a1, 0LL) )
      {
        if ( !ViLookasideAllocationFailures && !ViLookasideAlreadyLoadedDrivers )
          VerifierBugCheckIfAppropriate(0xC4u, 0xCAuLL, a1, 0LL, 0LL);
        v3 = (_SLIST_ENTRY *)VfAvlDeleteTreeNode((__int64)ViLookasideAvl, (__int64)v4, a1, 0LL);
      }
      VfAvlInsertReservedTreeNode((__int64)ViLookasideAvl, (__int64)v4, v2);
      VfAvlCleanupLockContext((__int64)v4);
      if ( v3 )
      {
        if ( dword_1407902F8 == 1 )
          ExFreeToNPagedLookasideList(&ViAvlNodeLookaside, v3);
        else
          VfUtilFreePoolCheckIRQL(v3);
      }
    }
    else
    {
      _InterlockedExchange(&ViLookasideAllocationFailures, 1);
    }
  }
}
