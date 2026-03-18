/*
 * XREFs of CmpComputeKcbConvKey @ 0x14068F5CC
 * Callers:
 *     CmRenameKey @ 0x14068CE58 (CmRenameKey.c)
 *     CmpRehashKcbSubtree @ 0x14068FBAC (CmpRehashKcbSubtree.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpComputeKcbConvKey(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 64);
  if ( v1 )
    return (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 72) + 8LL) + 37 * *(_DWORD *)(v1 + 8));
  else
    return *(unsigned int *)(*(_QWORD *)(a1 + 72) + 8LL);
}
