/*
 * XREFs of ViDevObjAdd @ 0x1407726AC
 * Callers:
 *     VerifierIoCreateDevice @ 0x140772240 (VerifierIoCreateDevice.c)
 * Callees:
 *     VfAvlReserveNode @ 0x14006E078 (VfAvlReserveNode.c)
 *     VfAvlCleanupLockContext @ 0x14006E550 (VfAvlCleanupLockContext.c)
 *     VfAvlInsertReservedTreeNode @ 0x14006E620 (VfAvlInsertReservedTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x1402518BC (VfAvlInitializeLockContext.c)
 */

char __fastcall ViDevObjAdd(__int64 a1)
{
  char v1; // bl
  char *v2; // rax
  unsigned __int64 *v3; // r8
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  v1 = 1;
  if ( ViDevObjInitialized )
  {
    v2 = VfAvlReserveNode(ViDevObjAvl, a1, 336LL);
    if ( v2 )
    {
      *((_DWORD *)v2 + 4) = 0;
      VfAvlInitializeLockContext((__int64)v5, 0);
      VfAvlInsertReservedTreeNode((__int64)ViDevObjAvl, (__int64)v5, v3);
      VfAvlCleanupLockContext((__int64)v5);
      return v1;
    }
    _InterlockedExchange(&ViDevObjAllocationFailures, 1);
  }
  return 0;
}
