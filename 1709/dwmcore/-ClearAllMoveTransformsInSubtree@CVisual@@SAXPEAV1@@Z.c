/*
 * XREFs of ?ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z @ 0x180176DBC
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180037630 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x18003BD30 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?RemoveChild@CVisual@@IEAAJPEAV1@_N@Z @ 0x180050854 (-RemoveChild@CVisual@@IEAAJPEAV1@_N@Z.c)
 *     ?ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z @ 0x180176DBC (-ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x180054DEC (-GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800B2164 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z @ 0x180176DBC (-ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z.c)
 */

void __fastcall CVisual::ClearAllMoveTransformsInSubtree(struct CVisual *a1)
{
  __int64 *v1; // rcx
  __int64 v2; // rax
  unsigned __int64 v3; // rsi
  __int64 v4; // rbp
  struct CVisual *v5; // rax
  CVisual *v6; // rbx
  struct _LIST_ENTRY *RenderPassInfoList; // rax
  struct _LIST_ENTRY *v8; // rdi
  struct _LIST_ENTRY *i; // rbx
  struct _LIST_ENTRY *Flink; // rcx
  __int64 *v11; // [rsp+30h] [rbp+8h]

  v1 = (__int64 *)((char *)a1 + 72);
  v11 = v1;
  v2 = *v1;
  if ( (*v1 & 2) != 0 )
    v2 = *(_QWORD *)(v2 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v2) = v2 & 1;
  if ( (_DWORD)v2 )
  {
    v3 = 0LL;
    v4 = (unsigned int)v2;
    do
    {
      v5 = (struct CVisual *)CPtrArrayBase::operator[](v1, v3);
      v6 = v5;
      if ( v5 )
      {
        CVisual::ClearAllMoveTransformsInSubtree(v5);
        if ( (*(unsigned __int8 (__fastcall **)(CVisual *))(*(_QWORD *)v6 + 264LL))(v6) )
        {
          RenderPassInfoList = CVisual::GetRenderPassInfoList(v6);
          v8 = RenderPassInfoList;
          if ( RenderPassInfoList )
          {
            for ( i = RenderPassInfoList->Flink; i != v8; i = i->Flink )
            {
              Flink = i[-3].Flink;
              if ( Flink )
              {
                WPF::ProcessHeapImpl::Free(Flink);
                i[-3].Flink = 0LL;
              }
            }
          }
        }
      }
      v1 = v11;
      ++v3;
      --v4;
    }
    while ( v4 );
  }
}
