/*
 * XREFs of CmpComputeKcbConvKey @ 0x1406F3494
 * Callers:
 *     CmRenameKey @ 0x1406F1120 (CmRenameKey.c)
 *     CmpRehashKcbSubtree @ 0x1406F37D8 (CmpRehashKcbSubtree.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpComputeKcbConvKey(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx

  v1 = *(_QWORD *)(a1 + 64);
  v2 = *(_QWORD *)(a1 + 72);
  if ( v1 )
    return (unsigned int)(*(_DWORD *)(v2 + 8) + 37 * *(_DWORD *)(v1 + 8));
  else
    return *(unsigned int *)(v2 + 8);
}
