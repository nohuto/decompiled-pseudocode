/*
 * XREFs of VfAvlInsertReservedTreeNode @ 0x14006E620
 * Callers:
 *     VfTargetDriversAdd @ 0x14006E474 (VfTargetDriversAdd.c)
 *     ViDevObjAdd @ 0x1407726AC (ViDevObjAdd.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x140772880 (VerifierIoInitializeRemoveLockEx.c)
 *     ViLookasideAdd @ 0x14077CD90 (ViLookasideAdd.c)
 *     VerifierExInitializeResourceLite @ 0x14077D900 (VerifierExInitializeResourceLite.c)
 * Callees:
 *     ViAvlTableIndex @ 0x14006E588 (ViAvlTableIndex.c)
 *     ViAvlRaiseIrqlSafe @ 0x14006E5A0 (ViAvlRaiseIrqlSafe.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x14006E5C4 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     RtlInsertElementGenericTableAvl @ 0x14006E6F0 (RtlInsertElementGenericTableAvl.c)
 */

__int64 __fastcall VfAvlInsertReservedTreeNode(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 v6; // r9
  __int64 v7; // rbx
  BOOLEAN NewElement; // [rsp+30h] [rbp+8h] BYREF

  ViAvlTableIndex(a1, *a3);
  ViAvlRaiseIrqlSafe(a2);
  v7 = 192 * v6;
  ViAvlAcquireTableLockAtDpcLevelSafe(192 * v6 + *(_QWORD *)(a1 + 16), a2);
  *(_QWORD *)(v7 + *(_QWORD *)(a1 + 16) + 104) = a3;
  RtlInsertElementGenericTableAvl((PRTL_AVL_TABLE)(v7 + *(_QWORD *)(a1 + 16)), a3, 8u, &NewElement);
  _InterlockedIncrement64((volatile signed __int64 *)(a1 + 8));
  return ViAvlReleaseTableLockFromDpcLevel(v7 + *(_QWORD *)(a1 + 16), a2);
}
