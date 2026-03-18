/*
 * XREFs of ?ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ @ 0x1800D7A8C
 * Callers:
 *     ??1CHwndRenderTarget@@MEAA@XZ @ 0x1800D7918 (--1CHwndRenderTarget@@MEAA@XZ.c)
 * Callees:
 *     ?GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x180050F60 (-GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?Release@CVisual@@UEAAKXZ @ 0x180050F80 (-Release@CVisual@@UEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ @ 0x180158600 (-ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ.c)
 *     ?PurgeOldRenderPassInfos@CVisual@@QEAAXXZ @ 0x1801A86BC (-PurgeOldRenderPassInfos@CVisual@@QEAAXXZ.c)
 */

void __fastcall CHwndRenderTarget::ResetMoveOptimizationNodes(CHwndRenderTarget *this)
{
  int v2; // eax
  __int64 i; // rsi
  int v4; // eax
  __int64 k; // rsi
  __int64 v6; // rbp
  struct _LIST_ENTRY *RenderPassInfoList; // rax
  struct _LIST_ENTRY *v8; // r14
  struct _LIST_ENTRY *j; // rbx
  CVisual *v10; // rbx

  v2 = *((_DWORD *)this + 180) - 1;
  for ( i = v2; i >= 0; --i )
  {
    v6 = *(_QWORD *)(*((_QWORD *)this + 87) + 8 * i);
    *(_WORD *)(v6 + 923) = 0;
    RenderPassInfoList = CVisual::GetRenderPassInfoList((CVisual *)v6);
    v8 = RenderPassInfoList;
    if ( RenderPassInfoList )
    {
      for ( j = RenderPassInfoList->Flink; j != v8; j = j->Flink )
        CMoveRenderPassInfo::ClearVisibleRegion((CMoveRenderPassInfo *)&j[-6].Blink);
    }
    CVisual::Release((CVisual *)v6);
  }
  v4 = *((_DWORD *)this + 198) - 1;
  for ( k = v4; k >= 0; --k )
  {
    v10 = *(CVisual **)(*((_QWORD *)this + 96) + 8 * k);
    CVisual::PurgeOldRenderPassInfos(v10);
    (*(void (__fastcall **)(CVisual *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  *((_DWORD *)this + 180) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 696, 8u);
  *((_DWORD *)this + 198) = 0;
}
