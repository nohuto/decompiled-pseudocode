/*
 * XREFs of ViTargetFreeContiguousMemory @ 0x140775304
 * Callers:
 *     VerifierMmFreeContiguousMemory @ 0x140781EC0 (VerifierMmFreeContiguousMemory.c)
 *     VerifierMmFreeContiguousMemorySpecifyCache @ 0x140781F00 (VerifierMmFreeContiguousMemorySpecifyCache.c)
 *     VerifierMmFreeNonCachedMemory @ 0x140781F60 (VerifierMmFreeNonCachedMemory.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x14006E550 (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x140148A98 (VfAvlLookupTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x1402518BC (VfAvlInitializeLockContext.c)
 *     ViTargetFreeContiguousMemoryFromNode @ 0x1407753A8 (ViTargetFreeContiguousMemoryFromNode.c)
 *     ViTargetUpdateTreeAllowed @ 0x1407756BC (ViTargetUpdateTreeAllowed.c)
 *     VfAvlEnumerateNodes @ 0x14077BF5C (VfAvlEnumerateNodes.c)
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
