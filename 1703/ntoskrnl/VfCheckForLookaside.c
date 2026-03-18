/*
 * XREFs of VfCheckForLookaside @ 0x14077CD08
 * Callers:
 *     ExpCheckForLookaside @ 0x14025D348 (ExpCheckForLookaside.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x14006E550 (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x140148A98 (VfAvlLookupTreeNode.c)
 *     VfPoolIsInternalFree @ 0x140251508 (VfPoolIsInternalFree.c)
 *     VfAvlInitializeLockContext @ 0x1402518BC (VfAvlInitializeLockContext.c)
 *     VerifierBugCheckIfAppropriate @ 0x14076EF94 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VfCheckForLookaside(unsigned __int64 a1, __int64 a2)
{
  ULONG_PTR *v5; // rax
  _BYTE v6[24]; // [rsp+30h] [rbp-18h] BYREF

  if ( !ViLookasideInitialized )
    return 0LL;
  if ( !(unsigned int)VfPoolIsInternalFree() )
  {
    VfAvlInitializeLockContext((__int64)v6, 1);
    v5 = (ULONG_PTR *)VfAvlLookupTreeNode(ViLookasideAvl, (__int64)v6, a1, a2);
    if ( v5 )
      VerifierBugCheckIfAppropriate(0xC4u, 0xCCuLL, *v5, a1, a2);
    VfAvlCleanupLockContext((__int64)v6);
  }
  return 1LL;
}
