/*
 * XREFs of ViTargetFreeContiguousMemory @ 0x1407B70C4
 * Callers:
 *     VerifierMmFreeContiguousMemory @ 0x1407C4250 (VerifierMmFreeContiguousMemory.c)
 *     VerifierMmFreeContiguousMemorySpecifyCache @ 0x1407C4290 (VerifierMmFreeContiguousMemorySpecifyCache.c)
 *     VerifierMmFreeNonCachedMemory @ 0x1407C42F0 (VerifierMmFreeNonCachedMemory.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1400F90E8 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1400F9A6C (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x14027812C (VfAvlInitializeLockContext.c)
 *     ViTargetFreeContiguousMemoryFromNode @ 0x1407B7168 (ViTargetFreeContiguousMemoryFromNode.c)
 *     ViTargetUpdateTreeAllowed @ 0x1407B7488 (ViTargetUpdateTreeAllowed.c)
 *     VfAvlEnumerateNodes @ 0x1407BDE78 (VfAvlEnumerateNodes.c)
 */

unsigned __int64 __fastcall ViTargetFreeContiguousMemory(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  int v4; // edx
  unsigned __int64 v5; // r8
  PVOID v6; // rax
  __int64 v7; // rcx
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  result = ViTargetUpdateTreeAllowed(a1, a2, a1);
  if ( (_DWORD)result )
  {
    VfAvlInitializeLockContext((__int64)v8, 0);
    v6 = VfAvlLookupTreeNode((__int64 *)&ViTargetDriversAvl, (__int64)v8, v5, (unsigned int)(v4 + 1));
    if ( !v6 || !(unsigned int)ViTargetFreeContiguousMemoryFromNode(a2, v6) )
      VfAvlEnumerateNodes(v7, v8, ViTargetFreeContiguousMemoryCallback, a2);
    return VfAvlCleanupLockContext((__int64)v8);
  }
  return result;
}
