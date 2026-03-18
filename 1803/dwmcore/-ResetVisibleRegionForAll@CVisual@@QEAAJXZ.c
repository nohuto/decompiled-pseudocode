/*
 * XREFs of ?ResetVisibleRegionForAll@CVisual@@QEAAJXZ @ 0x18013C74C
 * Callers:
 *     ?ResetVisibleRegionForAllInSubtree@CVisual@@QEAAXXZ @ 0x1801A8BCC (-ResetVisibleRegionForAllInSubtree@CVisual@@QEAAXXZ.c)
 * Callees:
 *     ?GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x180050F60 (-GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ @ 0x180158600 (-ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ.c)
 *     ?ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ @ 0x180177BB0 (-ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ.c)
 */

__int64 __fastcall CVisual::ResetVisibleRegionForAll(CVisual *this)
{
  unsigned int v1; // edi
  struct _LIST_ENTRY *RenderPassInfoList; // rax
  struct _LIST_ENTRY *v3; // rsi
  struct _LIST_ENTRY *i; // rbx
  int v5; // eax

  v1 = 0;
  RenderPassInfoList = CVisual::GetRenderPassInfoList(this);
  v3 = RenderPassInfoList;
  if ( RenderPassInfoList )
  {
    for ( i = RenderPassInfoList->Flink; i != v3; i = i->Flink )
    {
      v5 = CMoveRenderPassInfo::ResetVisibleRegion((CMoveRenderPassInfo *)&i[-6].Blink);
      v1 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x1134u);
        return v1;
      }
      CMoveRenderPassInfo::ClearVisibleRegion((CMoveRenderPassInfo *)&i[-6].Blink);
    }
  }
  return v1;
}
