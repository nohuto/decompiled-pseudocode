/*
 * XREFs of ViRemLockFindSurrogate @ 0x140821BC8
 * Callers:
 *     VerifierIoAcquireRemoveLockEx @ 0x140821760 (VerifierIoAcquireRemoveLockEx.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x1408217F0 (VerifierIoInitializeRemoveLockEx.c)
 *     VerifierIoReleaseRemoveLockAndWaitEx @ 0x140821960 (VerifierIoReleaseRemoveLockAndWaitEx.c)
 *     VerifierIoReleaseRemoveLockEx @ 0x1408219D0 (VerifierIoReleaseRemoveLockEx.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1401609D8 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x140161524 (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x1402AB23C (VfAvlInitializeLockContext.c)
 */

PVOID ViRemLockFindSurrogate()
{
  int v0; // edx
  unsigned __int64 v1; // r8
  PVOID v2; // rbx
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  VfAvlInitializeLockContext((__int64)v4, 1);
  v2 = VfAvlLookupTreeNode(&ViRemLockAvl, (__int64)v4, v1, (unsigned int)(v0 + 31));
  VfAvlCleanupLockContext((__int64)v4);
  return v2;
}
