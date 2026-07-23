/*
 * XREFs of VfCheckForResource @ 0x14077DB38
 * Callers:
 *     ExpCheckForResource @ 0x14025C2B4 (ExpCheckForResource.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x14006E550 (VfAvlCleanupLockContext.c)
 *     ExFreeToNPagedLookasideList @ 0x140114B0C (ExFreeToNPagedLookasideList.c)
 *     VfUtilFreePoolCheckIRQL @ 0x140148980 (VfUtilFreePoolCheckIRQL.c)
 *     VfAvlDeleteTreeNode @ 0x1401489E0 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x140148A98 (VfAvlLookupTreeNode.c)
 *     VfPoolIsInternalFree @ 0x140251508 (VfPoolIsInternalFree.c)
 *     VfAvlInitializeLockContext @ 0x1402518BC (VfAvlInitializeLockContext.c)
 *     VerifierBugCheckIfAppropriate @ 0x14076EF94 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VfCheckForResource(unsigned __int64 a1, __int64 a2)
{
  ULONG_PTR *v5; // rax
  ULONG_PTR *v6; // rbx
  _SLIST_ENTRY *v7; // rbx
  _BYTE v8[24]; // [rsp+30h] [rbp-18h] BYREF
  ULONG_PTR v9; // [rsp+60h] [rbp+18h] BYREF

  if ( !ViResourceInitialized )
    return 0LL;
  if ( !(unsigned int)VfPoolIsInternalFree() && qword_1407901E8 )
  {
    v9 = 0LL;
    VfAvlInitializeLockContext((__int64)v8, 1);
    v5 = (ULONG_PTR *)VfAvlLookupTreeNode(&ViResourceAvl, (__int64)v8, a1, a2);
    v6 = v5;
    if ( v5 )
    {
      if ( !ViResourcesAlreadyLoadedDrivers )
        VerifierBugCheckIfAppropriate(0xC4u, 0xD2uLL, *v5, a1, a2);
      v9 = *v6;
    }
    VfAvlCleanupLockContext((__int64)v8);
    if ( v9 )
    {
      _InterlockedIncrement(&ViResourceStaleNodes);
      VfAvlInitializeLockContext((__int64)v8, 0);
      v7 = (_SLIST_ENTRY *)VfAvlDeleteTreeNode((__int64)&ViResourceAvl, (__int64)v8, (unsigned __int64)&v9, 0LL);
      VfAvlCleanupLockContext((__int64)v8);
      if ( v7 )
      {
        if ( dword_140790200 == 1 )
          ExFreeToNPagedLookasideList(&ViAvlNodeLookaside, v7);
        else
          VfUtilFreePoolCheckIRQL(v7);
      }
      return 0LL;
    }
  }
  return 1LL;
}
