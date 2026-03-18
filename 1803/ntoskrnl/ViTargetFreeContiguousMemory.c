/*
 * XREFs of ViTargetFreeContiguousMemory @ 0x140822230
 * Callers:
 *     VerifierMmFreeContiguousMemory @ 0x140831770 (VerifierMmFreeContiguousMemory.c)
 *     VerifierMmFreeContiguousMemorySpecifyCache @ 0x1408317B0 (VerifierMmFreeContiguousMemorySpecifyCache.c)
 *     VerifierMmFreeNonCachedMemory @ 0x140831810 (VerifierMmFreeNonCachedMemory.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1401609D8 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x140161524 (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x1402AB23C (VfAvlInitializeLockContext.c)
 *     ViTargetFreeContiguousMemoryFromNode @ 0x1408222D8 (ViTargetFreeContiguousMemoryFromNode.c)
 *     ViTargetUpdateTreeAllowed @ 0x1408225F8 (ViTargetUpdateTreeAllowed.c)
 *     VfAvlEnumerateNodes @ 0x14082B250 (VfAvlEnumerateNodes.c)
 */

char __fastcall ViTargetFreeContiguousMemory(__int64 a1, __int64 a2)
{
  int updated; // eax
  int v4; // edx
  unsigned __int64 v5; // r8
  PVOID v6; // rax
  __int64 v7; // rcx
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  updated = ViTargetUpdateTreeAllowed(a1, a2, a1);
  if ( updated )
  {
    VfAvlInitializeLockContext((__int64)v9, 0);
    v6 = VfAvlLookupTreeNode((__int64 *)&ViTargetDriversAvl, (__int64)v9, v5, (unsigned int)(v4 + 1));
    if ( !v6 || !(unsigned int)ViTargetFreeContiguousMemoryFromNode(a2, v6) )
      VfAvlEnumerateNodes(v7, v9, ViTargetFreeContiguousMemoryCallback, a2);
    LOBYTE(updated) = VfAvlCleanupLockContext((__int64)v9);
  }
  return updated;
}
