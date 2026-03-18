/*
 * XREFs of ?ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ @ 0x18011A048
 * Callers:
 *     ??1CHwndRenderTarget@@MEAA@XZ @ 0x180135A60 (--1CHwndRenderTarget@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CVisual@@UEAAKXZ @ 0x180054D00 (-Release@CVisual@@UEAAKXZ.c)
 *     ?GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x180054DEC (-GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ @ 0x180135D38 (-ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ.c)
 *     ?PurgeOldRenderPassInfos@CVisual@@QEAAXXZ @ 0x180177B00 (-PurgeOldRenderPassInfos@CVisual@@QEAAXXZ.c)
 */

void __fastcall CHwndRenderTarget::ResetMoveOptimizationNodes(CHwndRenderTarget *this)
{
  int v2; // eax
  __int64 i; // rsi
  __int64 v4; // rbp
  struct _LIST_ENTRY *RenderPassInfoList; // rax
  struct _LIST_ENTRY *v6; // r14
  struct _LIST_ENTRY *j; // rbx
  int v8; // eax
  __int64 k; // rsi
  CVisual *v10; // rbx

  v2 = *((_DWORD *)this + 168) - 1;
  for ( i = v2; i >= 0; --i )
  {
    v4 = *(_QWORD *)(*((_QWORD *)this + 81) + 8 * i);
    *(_WORD *)(v4 + 1019) = 0;
    RenderPassInfoList = CVisual::GetRenderPassInfoList((CVisual *)v4);
    v6 = RenderPassInfoList;
    if ( RenderPassInfoList )
    {
      for ( j = RenderPassInfoList->Flink; j != v6; j = j->Flink )
        CMoveRenderPassInfo::ClearVisibleRegion((CMoveRenderPassInfo *)&j[-6].Blink);
    }
    CVisual::Release((CVisual *)v4);
  }
  v8 = *((_DWORD *)this + 186) - 1;
  for ( k = v8; k >= 0; --k )
  {
    v10 = *(CVisual **)(*((_QWORD *)this + 90) + 8 * k);
    CVisual::PurgeOldRenderPassInfos(v10);
    (*(void (__fastcall **)(CVisual *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  *((_DWORD *)this + 168) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 648, 8u);
  *((_DWORD *)this + 186) = 0;
}
