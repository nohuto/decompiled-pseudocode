/*
 * XREFs of ?VidMmCompareForInsertAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C0071350
 * Callers:
 *     ?SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z @ 0x1C006F4E8 (-SplitAt@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K@Z.c)
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0070330 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0070970 (-IntegrateMultirangeIntoTrees@VIDMM_RECYCLE_HEAP@@QEAAEPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00AD54C (-AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidMmCompareForInsertAlignedRange(ULONG_PTR *a1, struct _RTL_BALANCED_NODE *a2)
{
  ULONG_PTR v3; // r8
  struct _RTL_BALANCED_NODE *v5; // rcx
  unsigned __int64 v6; // rdx

  v3 = a2[1].ParentValue - (unsigned __int64)a2[1].Children[1];
  if ( v3 < *a1 )
    return 0xFFFFFFFFLL;
  if ( v3 > *a1 )
    return 1LL;
  v5 = a2[2].Children[1];
  v6 = a1[1];
  if ( (unsigned __int64)v5 < v6 )
    return 0xFFFFFFFFLL;
  else
    return (unsigned __int64)v5 > v6;
}
