/*
 * XREFs of ?ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ @ 0x1800CD928
 * Callers:
 *     ??1CHwndRenderTarget@@MEAA@XZ @ 0x1800CD9A0 (--1CHwndRenderTarget@@MEAA@XZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?Release@CVisual@@UEAAKXZ @ 0x18008AFE0 (-Release@CVisual@@UEAAKXZ.c)
 *     ?GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x1800CF70C (-GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ @ 0x180145CF8 (-ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ.c)
 *     ?PurgeOldRenderPassInfos@CVisual@@QEAAXXZ @ 0x180160C54 (-PurgeOldRenderPassInfos@CVisual@@QEAAXXZ.c)
 */

void __fastcall CHwndRenderTarget::ResetMoveOptimizationNodes(CHwndRenderTarget *this)
{
  int v2; // eax
  __int64 i; // rsi
  int v4; // eax
  __int64 k; // rsi
  CVisual *v6; // rbp
  struct _LIST_ENTRY *RenderPassInfoList; // rax
  struct _LIST_ENTRY *v8; // r14
  struct _LIST_ENTRY *j; // rbx
  CVisual *v10; // rbx

  v2 = *((_DWORD *)this + 164) - 1;
  for ( i = v2; i >= 0; --i )
  {
    v6 = *(CVisual **)(*((_QWORD *)this + 79) + 8 * i);
    *((_WORD *)v6 + 497) = 0;
    RenderPassInfoList = CVisual::GetRenderPassInfoList(v6);
    v8 = RenderPassInfoList;
    if ( RenderPassInfoList )
    {
      for ( j = RenderPassInfoList->Flink; j != v8; j = j->Flink )
        CMoveRenderPassInfo::ClearVisibleRegion((CMoveRenderPassInfo *)&j[-6].Blink);
    }
    CVisual::Release(v6);
  }
  v4 = *((_DWORD *)this + 182) - 1;
  for ( k = v4; k >= 0; --k )
  {
    v10 = *(CVisual **)(*((_QWORD *)this + 88) + 8 * k);
    CVisual::PurgeOldRenderPassInfos(v10);
    (*(void (__fastcall **)(CVisual *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  *((_DWORD *)this + 164) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 632, 8u);
  *((_DWORD *)this + 182) = 0;
}
