/*
 * XREFs of VfAvlDeleteTreeNode @ 0x1401489E0
 * Callers:
 *     VfTargetDriversRemove @ 0x14014885C (VfTargetDriversRemove.c)
 *     ViDevObjRemove @ 0x140772724 (ViDevObjRemove.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x140772B94 (ViRemLockDeleteFirstTreeNode.c)
 *     ViLookasideAdd @ 0x14077CD90 (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x14077CEA4 (ViLookasideDelete.c)
 *     VerifierExDeleteResourceLite @ 0x14077D5C0 (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x14077D900 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x14077DB38 (VfCheckForResource.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x14004C8D0 (RtlDeleteElementGenericTableAvl.c)
 *     ViAvlNodeInitializeSessionId @ 0x14006E100 (ViAvlNodeInitializeSessionId.c)
 *     ViAvlTableIndex @ 0x14006E588 (ViAvlTableIndex.c)
 *     ViAvlRaiseIrqlSafe @ 0x14006E5A0 (ViAvlRaiseIrqlSafe.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x14006E5C4 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x14006E6B8 (ViAvlReleaseTableLockFromDpcLevel.c)
 */

__int64 __fastcall VfAvlDeleteTreeNode(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v6; // r8
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rbx
  unsigned __int64 Buffer; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+28h] [rbp-20h]

  Buffer = a3;
  if ( a4 )
    v12 = a4;
  else
    v12 = *(_QWORD *)a1;
  ViAvlNodeInitializeSessionId(a1, (__int64)&Buffer);
  ViAvlTableIndex(a1, Buffer);
  ViAvlRaiseIrqlSafe(a2);
  v7 = 192 * v6;
  ViAvlAcquireTableLockAtDpcLevelSafe(192 * v6 + *(_QWORD *)(a1 + 16), a2);
  RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(v7 + *(_QWORD *)(a1 + 16)), &Buffer);
  _InterlockedDecrement64((volatile signed __int64 *)(a1 + 8));
  v8 = *(_QWORD *)(a1 + 16);
  v9 = *(_QWORD *)(v8 + v7 + 112);
  *(_QWORD *)(v8 + v7 + 112) = 0LL;
  ViAvlReleaseTableLockFromDpcLevel(v7 + *(_QWORD *)(a1 + 16), a2);
  return v9;
}
