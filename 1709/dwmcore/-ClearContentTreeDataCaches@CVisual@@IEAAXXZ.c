/*
 * XREFs of ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ @ 0x180050644
 * Callers:
 *     ?ComputeLayoutSize@CVisual@@QEAA_NXZ @ 0x18004F460 (-ComputeLayoutSize@CVisual@@QEAA_NXZ.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180055B70 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x1800B0A10 (-ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z.c)
 *     ?ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPRITEVISUAL_SETSHADOW@@@Z @ 0x180176128 (-ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPRITEVISUAL_SETSHADOW@@@Z.c)
 * Callees:
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18004EC04 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?FreeContentCaches@CDrawListCacheSet@@CAXPEAURenderTargetEntry@1@@Z @ 0x1800B2BA4 (-FreeContentCaches@CDrawListCacheSet@@CAXPEAURenderTargetEntry@1@@Z.c)
 */

void __fastcall CVisual::ClearContentTreeDataCaches(CVisual *this)
{
  __int64 i; // rbx
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *v4; // rsi
  struct _LIST_ENTRY *j; // rdi
  struct _LIST_ENTRY *k; // rbx

  for ( i = *((_QWORD *)this + 51); i; i = *(_QWORD *)(i + 88) )
  {
    if ( *(_QWORD *)(i + 16) )
      CDrawListCacheSet::FreeContentCaches((struct CDrawListCacheSet::RenderTargetEntry *)i);
  }
  TreeDataListHead = CVisual::GetTreeDataListHead(this);
  v4 = TreeDataListHead;
  if ( TreeDataListHead )
  {
    for ( j = TreeDataListHead->Flink; j != v4; j = j->Flink )
    {
      for ( k = j[-6].Flink; k; k = k[5].Blink )
      {
        if ( k[1].Flink )
          CDrawListCacheSet::FreeContentCaches((struct CDrawListCacheSet::RenderTargetEntry *)k);
      }
    }
  }
}
