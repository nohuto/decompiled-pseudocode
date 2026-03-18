/*
 * XREFs of VfDevObjIsDeviceRemoved @ 0x1407B40E8
 * Callers:
 *     VfWmiVerifyIrpStackUpward @ 0x1407C0C90 (VfWmiVerifyIrpStackUpward.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1400F90E8 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1400F9A6C (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x14027812C (VfAvlInitializeLockContext.c)
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
