/*
 * XREFs of VfCheckForLookaside @ 0x14082C0A8
 * Callers:
 *     ExpCheckForLookaside @ 0x1402BB130 (ExpCheckForLookaside.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1401609D8 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x140161524 (VfAvlCleanupLockContext.c)
 *     VfPoolIsInternalFree @ 0x1402AAE88 (VfPoolIsInternalFree.c)
 *     VfAvlInitializeLockContext @ 0x1402AB23C (VfAvlInitializeLockContext.c)
 *     VerifierBugCheckIfAppropriate @ 0x14081D3A4 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VfCheckForLookaside(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  ULONG_PTR *v5; // rax
  _BYTE v6[24]; // [rsp+30h] [rbp-18h] BYREF

  if ( !ViLookasideInitialized )
    return 0LL;
  if ( !(unsigned int)VfPoolIsInternalFree() )
  {
    VfAvlInitializeLockContext((__int64)v6, 1);
    v5 = (ULONG_PTR *)VfAvlLookupTreeNode(ViLookasideAvl, (__int64)v6, BugCheckParameter3, a2);
    if ( v5 )
    {
      if ( (MmVerifierData & 0x800) != 0 )
        VerifierBugCheckIfAppropriate(0xC4u, 0xCCuLL, *v5, BugCheckParameter3, a2);
    }
    VfAvlCleanupLockContext((__int64)v6);
  }
  return 1LL;
}
