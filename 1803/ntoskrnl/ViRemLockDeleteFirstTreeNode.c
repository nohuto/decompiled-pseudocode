/*
 * XREFs of ViRemLockDeleteFirstTreeNode @ 0x140821B24
 * Callers:
 *     VerifierIoInitializeRemoveLockEx @ 0x1408217F0 (VerifierIoInitializeRemoveLockEx.c)
 *     VfRemLockDeleteMemoryRange @ 0x140821A38 (VfRemLockDeleteMemoryRange.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140060D7C (ExFreeToNPagedLookasideList.c)
 *     VfUtilFreePoolCheckIRQL @ 0x140160970 (VfUtilFreePoolCheckIRQL.c)
 *     VfAvlLookupTreeNode @ 0x1401609D8 (VfAvlLookupTreeNode.c)
 *     VfAvlDeleteTreeNode @ 0x140160AE8 (VfAvlDeleteTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x140161524 (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x1402AB23C (VfAvlInitializeLockContext.c)
 */

__int64 ViRemLockDeleteFirstTreeNode()
{
  _SLIST_ENTRY *v0; // rbx
  unsigned __int64 v1; // r8
  __int64 v2; // r9
  __int64 *v3; // rax
  __int64 *v4; // rdi
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  v0 = 0LL;
  VfAvlInitializeLockContext((__int64)v6, 0);
  v3 = (__int64 *)VfAvlLookupTreeNode(&ViRemLockAvl, (__int64)v6, v1, v2);
  v4 = v3;
  if ( v3 )
    v0 = (_SLIST_ENTRY *)VfAvlDeleteTreeNode(&ViRemLockAvl, (__int64)v6, *v3, 0LL);
  VfAvlCleanupLockContext((__int64)v6);
  if ( !v4 )
    return 0LL;
  if ( v0 )
  {
    if ( dword_140842348 == 1 )
      ExFreeToNPagedLookasideList(&ViAvlNodeLookaside, v0);
    else
      VfUtilFreePoolCheckIRQL(v0);
  }
  return 1LL;
}
