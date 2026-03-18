/*
 * XREFs of VfDevObjIsDeviceRemoved @ 0x140772338
 * Callers:
 *     VfWmiVerifyIrpStackUpward @ 0x14077ECC0 (VfWmiVerifyIrpStackUpward.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x14006E550 (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x140148A98 (VfAvlLookupTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x1402518BC (VfAvlInitializeLockContext.c)
 */

char VfDevObjIsDeviceRemoved()
{
  bool v1; // bl
  unsigned __int64 v2; // r8
  _BYTE *v3; // rax
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( (MmVerifierData & 0x10) == 0 )
    return 1;
  v1 = 1;
  VfAvlInitializeLockContext((__int64)v4, 1);
  v3 = VfAvlLookupTreeNode(ViDevObjAvl, (__int64)v4, v2, 0LL);
  if ( v3 )
    v1 = (v3[16] & 2) != 0;
  VfAvlCleanupLockContext((__int64)v4);
  return v1;
}
