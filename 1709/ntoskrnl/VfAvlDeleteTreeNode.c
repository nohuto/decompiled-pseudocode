/*
 * XREFs of VfAvlDeleteTreeNode @ 0x1400F91F8
 * Callers:
 *     VfTargetDriversRemove @ 0x1400F8F58 (VfTargetDriversRemove.c)
 *     ViDevObjRemove @ 0x1407B44D4 (ViDevObjRemove.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x1407B4954 (ViRemLockDeleteFirstTreeNode.c)
 *     ViLookasideAdd @ 0x1407BECDC (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x1407BEDFC (ViLookasideDelete.c)
 *     VerifierExDeleteResourceLite @ 0x1407BF520 (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x1407BF870 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x1407BFABC (VfCheckForResource.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x1400DFA50 (RtlDeleteElementGenericTableAvl.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x1400F9B40 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x1400F9B74 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     ViAvlRaiseIrqlSafe @ 0x1400F9BD0 (ViAvlRaiseIrqlSafe.c)
 *     ViAvlTableIndex @ 0x1400F9BF4 (ViAvlTableIndex.c)
 *     ViAvlNodeInitializeSessionId @ 0x1400F9C94 (ViAvlNodeInitializeSessionId.c)
 */

__int64 __fastcall VfAvlDeleteTreeNode(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 Buffer; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+28h] [rbp-20h]

  Buffer = a3;
  if ( a4 )
    v14 = a4;
  else
    v14 = *a1;
  ViAvlNodeInitializeSessionId(a1, &Buffer);
  v6 = ViAvlTableIndex(a1, Buffer);
  ViAvlRaiseIrqlSafe(a2, v7, v6);
  v9 = 192 * v8;
  ViAvlAcquireTableLockAtDpcLevelSafe(192 * v8 + a1[2], a2);
  RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(v9 + a1[2]), &Buffer);
  _InterlockedDecrement64(a1 + 1);
  v10 = a1[2];
  v11 = *(_QWORD *)(v10 + v9 + 112);
  *(_QWORD *)(v10 + v9 + 112) = 0LL;
  ViAvlReleaseTableLockFromDpcLevel(v9 + a1[2], a2);
  return v11;
}
