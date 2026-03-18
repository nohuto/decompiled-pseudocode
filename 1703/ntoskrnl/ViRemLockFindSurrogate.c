/*
 * XREFs of ViRemLockFindSurrogate @ 0x140772C38
 * Callers:
 *     VerifierIoAcquireRemoveLockEx @ 0x1407727F0 (VerifierIoAcquireRemoveLockEx.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x140772880 (VerifierIoInitializeRemoveLockEx.c)
 *     VerifierIoReleaseRemoveLockAndWaitEx @ 0x1407729D0 (VerifierIoReleaseRemoveLockAndWaitEx.c)
 *     VerifierIoReleaseRemoveLockEx @ 0x140772A40 (VerifierIoReleaseRemoveLockEx.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x14006E550 (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x140148A98 (VfAvlLookupTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x1402518BC (VfAvlInitializeLockContext.c)
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
