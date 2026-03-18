/*
 * XREFs of VfAvlDeleteTreeNode @ 0x140160AE8
 * Callers:
 *     VfTargetDriversRemove @ 0x140160844 (VfTargetDriversRemove.c)
 *     ViDevObjRemove @ 0x140821688 (ViDevObjRemove.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x140821B24 (ViRemLockDeleteFirstTreeNode.c)
 *     ViLookasideAdd @ 0x14082C13C (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x14082C25C (ViLookasideDelete.c)
 *     VerifierExDeleteResourceLite @ 0x14082C990 (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x14082CD70 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x14082CFFC (VfCheckForResource.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x14006D290 (RtlDeleteElementGenericTableAvl.c)
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x1401615F4 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     ViAvlAcquireTableLockAtDpcLevelSafe @ 0x140161628 (ViAvlAcquireTableLockAtDpcLevelSafe.c)
 *     ViAvlRaiseIrqlSafe @ 0x140161680 (ViAvlRaiseIrqlSafe.c)
 *     ViAvlTableIndex @ 0x1401616A4 (ViAvlTableIndex.c)
 *     ViAvlNodeInitializeSessionId @ 0x140161744 (ViAvlNodeInitializeSessionId.c)
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
