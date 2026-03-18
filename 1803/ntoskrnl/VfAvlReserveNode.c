/*
 * XREFs of VfAvlReserveNode @ 0x1401616BC
 * Callers:
 *     VfTargetDriversAdd @ 0x140161440 (VfTargetDriversAdd.c)
 *     ViDevObjAdd @ 0x140821610 (ViDevObjAdd.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x1408217F0 (VerifierIoInitializeRemoveLockEx.c)
 *     ViLookasideAdd @ 0x14082C13C (ViLookasideAdd.c)
 *     VerifierExInitializeResourceLite @ 0x14082CD70 (VerifierExInitializeResourceLite.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x1400631EC (ExAllocateFromNPagedLookasideList.c)
 *     ViAvlNodeInitializeSessionId @ 0x140161744 (ViAvlNodeInitializeSessionId.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

char *__fastcall VfAvlReserveNode(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // eax
  _QWORD *PoolWithTag; // rax
  char *v8; // rbx

  v3 = *((_DWORD *)a1 + 8);
  if ( v3 == 1 )
    PoolWithTag = ExAllocateFromNPagedLookasideList(&ViAvlNodeLookaside);
  else
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v3, 0x54416656u);
  if ( !PoolWithTag )
    return 0LL;
  v8 = (char *)(PoolWithTag + 4);
  PoolWithTag[4] = a2;
  if ( !a3 )
    a3 = *a1;
  PoolWithTag[5] = a3;
  if ( *((_BYTE *)a1 + 28) )
    ViAvlNodeInitializeSessionId(a1, PoolWithTag + 4);
  return v8;
}
