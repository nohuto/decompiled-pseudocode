/*
 * XREFs of ViTargetWMIDeregister @ 0x140822618
 * Callers:
 *     VerifierIoWMIRegistrationControl @ 0x140832E00 (VerifierIoWMIRegistrationControl.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x1401609D8 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x140161524 (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x1402AB23C (VfAvlInitializeLockContext.c)
 *     VfAvlEnumerateNodes @ 0x14082B250 (VfAvlEnumerateNodes.c)
 */

char __fastcall ViTargetWMIDeregister(__int64 a1)
{
  int v2; // edx
  unsigned __int64 v3; // r8
  _QWORD *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  VfAvlInitializeLockContext((__int64)v8, 0);
  v4 = VfAvlLookupTreeNode((__int64 *)&ViTargetDriversAvl, (__int64)v8, v3, (unsigned int)(v2 + 1));
  if ( v4 && (v6 = v4[7]) != 0 && *(_QWORD *)(v6 + 8) == a1 )
  {
    *(_QWORD *)(v6 + 8) = 0LL;
  }
  else
  {
    ++ViTargetWMIRegistrationMismatches;
    VfAvlEnumerateNodes(v5, v8, ViTargetWMIDeregisterCallback, a1);
  }
  return VfAvlCleanupLockContext((__int64)v8);
}
