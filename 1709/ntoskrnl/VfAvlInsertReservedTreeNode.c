/*
 * XREFs of VfAvlInsertReservedTreeNode @ 0x1400F9AA4
 * Callers:
 *     VfTargetDriversAdd @ 0x1400F9990 (VfTargetDriversAdd.c)
 *     ViDevObjAdd @ 0x1407B445C (ViDevObjAdd.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x1407B4630 (VerifierIoInitializeRemoveLockEx.c)
 *     ViLookasideAdd @ 0x1407BECDC (ViLookasideAdd.c)
 *     VerifierExInitializeResourceLite @ 0x1407BF870 (VerifierExInitializeResourceLite.c)
 * Callees:
 *     RtlInsertElementGenericTableAvl @ 0x1400DFCC0 (RtlInsertElementGenericTableAvl.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x1400F9B40 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x1400F9B74 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     ViAvlRaiseIrqlSafe @ 0x1400F9BD0 (ViAvlRaiseIrqlSafe.c)
 *     ViAvlTableIndex @ 0x1400F9BF4 (ViAvlTableIndex.c)
 */

__int64 __fastcall VfAvlInsertReservedTreeNode(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  BOOLEAN NewElement; // [rsp+30h] [rbp+8h] BYREF

  ViAvlTableIndex(a1, *a3);
  ViAvlRaiseIrqlSafe(a2, v6, v7);
  v9 = 192 * v8;
  ViAvlAcquireTableLockAtDpcLevelSafe(192 * v8 + *(_QWORD *)(a1 + 16), a2);
  *(_QWORD *)(v9 + *(_QWORD *)(a1 + 16) + 104) = a3;
  RtlInsertElementGenericTableAvl((PRTL_AVL_TABLE)(v9 + *(_QWORD *)(a1 + 16)), a3, 8u, &NewElement);
  _InterlockedIncrement64((volatile signed __int64 *)(a1 + 8));
  return ViAvlReleaseTableLockFromDpcLevel(v9 + *(_QWORD *)(a1 + 16), a2);
}
