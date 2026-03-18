/*
 * XREFs of VfDevObjMarkDeviceRemoved @ 0x1407723A4
 * Callers:
 *     IovpCallDriver1 @ 0x14076D490 (IovpCallDriver1.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x14006E550 (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x140148A98 (VfAvlLookupTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x1402518BC (VfAvlInitializeLockContext.c)
 */

unsigned __int64 VfDevObjMarkDeviceRemoved()
{
  unsigned __int64 result; // rax
  unsigned __int64 v1; // r8
  volatile signed __int32 *v2; // rax
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  result = (unsigned int)MmVerifierData;
  if ( (MmVerifierData & 0x10) != 0 )
  {
    VfAvlInitializeLockContext((__int64)v3, 1);
    v2 = (volatile signed __int32 *)VfAvlLookupTreeNode(ViDevObjAvl, (__int64)v3, v1, 0LL);
    if ( v2 )
      _InterlockedOr(v2 + 4, 2u);
    return VfAvlCleanupLockContext((__int64)v3);
  }
  return result;
}
