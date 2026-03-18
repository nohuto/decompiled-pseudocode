/*
 * XREFs of VfAvlInsertReservedTreeNode @ 0x140161558
 * Callers:
 *     VfTargetDriversAdd @ 0x140161440 (VfTargetDriversAdd.c)
 *     ViDevObjAdd @ 0x140821610 (ViDevObjAdd.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x1408217F0 (VerifierIoInitializeRemoveLockEx.c)
 *     ViLookasideAdd @ 0x14082C13C (ViLookasideAdd.c)
 *     VerifierExInitializeResourceLite @ 0x14082CD70 (VerifierExInitializeResourceLite.c)
 * Callees:
 *     RtlInsertElementGenericTableAvl @ 0x14006D500 (RtlInsertElementGenericTableAvl.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x1401615F4 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x140161628 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     ViAvlRaiseIrqlSafe @ 0x140161680 (ViAvlRaiseIrqlSafe.c)
 *     ViAvlTableIndex @ 0x1401616A4 (ViAvlTableIndex.c)
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
  *(_QWORD *)(*(_QWORD *)(a1 + 16) + v9 + 104) = a3;
  RtlInsertElementGenericTableAvl((PRTL_AVL_TABLE)(v9 + *(_QWORD *)(a1 + 16)), a3, 8u, &NewElement);
  _InterlockedIncrement64((volatile signed __int64 *)(a1 + 8));
  return ViAvlReleaseTableLockFromDpcLevel(v9 + *(_QWORD *)(a1 + 16), a2);
}
