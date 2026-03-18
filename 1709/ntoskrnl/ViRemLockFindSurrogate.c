/*
 * XREFs of ViRemLockFindSurrogate @ 0x1407B49F8
 * Callers:
 *     VerifierIoAcquireRemoveLockEx @ 0x1407B45A0 (VerifierIoAcquireRemoveLockEx.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x1407B4630 (VerifierIoInitializeRemoveLockEx.c)
 *     VerifierIoReleaseRemoveLockAndWaitEx @ 0x1407B4790 (VerifierIoReleaseRemoveLockAndWaitEx.c)
 *     VerifierIoReleaseRemoveLockEx @ 0x1407B4800 (VerifierIoReleaseRemoveLockEx.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1400F90E8 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1400F9A6C (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x14027812C (VfAvlInitializeLockContext.c)
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
