/*
 * XREFs of ?PostRender@CDesktopRenderTarget@@UEAAJXZ @ 0x180069620
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800666B0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?Release@CVisual@@UEAAKXZ @ 0x18008AFE0 (-Release@CVisual@@UEAAKXZ.c)
 *     ?GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x1800CF70C (-GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ @ 0x180145CF8 (-ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ.c)
 *     ?PurgeOldRenderPassInfos@CVisual@@QEAAXXZ @ 0x180160C54 (-PurgeOldRenderPassInfos@CVisual@@QEAAXXZ.c)
 */

__int64 __fastcall CDesktopRenderTarget::PostRender(CDesktopRenderTarget *this)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 i; // r15
  __int64 v5; // rsi
  int v6; // eax
  __int64 j; // rbp
  int v8; // eax
  __int64 m; // rbp
  void (__fastcall ***v11)(_QWORD, __int64); // rcx
  CVisual *v12; // r13
  struct _LIST_ENTRY *RenderPassInfoList; // rax
  struct _LIST_ENTRY *v14; // r14
  struct _LIST_ENTRY *k; // rbx
  CVisual *v16; // rbx

  v2 = 0LL;
  if ( *((_DWORD *)this + 8) )
  {
    while ( !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 1) + 8 * v2) + 790LL) )
    {
      v2 = (unsigned int)(v2 + 1);
      if ( (unsigned int)v2 >= *((_DWORD *)this + 8) )
        goto LABEL_4;
    }
    *((_BYTE *)this + 254) = 1;
  }
LABEL_4:
  v3 = *((_QWORD *)this + 32);
  if ( v3 )
  {
    v11 = *(void (__fastcall ****)(_QWORD, __int64))(v3 + 8);
    if ( v11 )
    {
      (**v11)(v11, 1LL);
      *(_QWORD *)(v3 + 8) = 0LL;
    }
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 8); i = (unsigned int)(i + 1) )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 1) + 8 * i);
    v6 = *(_DWORD *)(v5 + 656) - 1;
    for ( j = v6; j >= 0; --j )
    {
      v12 = *(CVisual **)(*(_QWORD *)(v5 + 632) + 8 * j);
      *((_WORD *)v12 + 497) = 0;
      RenderPassInfoList = CVisual::GetRenderPassInfoList(v12);
      v14 = RenderPassInfoList;
      if ( RenderPassInfoList )
      {
        for ( k = RenderPassInfoList->Flink; k != v14; k = k->Flink )
          CMoveRenderPassInfo::ClearVisibleRegion((CMoveRenderPassInfo *)&k[-6].Blink);
      }
      CVisual::Release(v12);
    }
    v8 = *(_DWORD *)(v5 + 728) - 1;
    for ( m = v8; m >= 0; --m )
    {
      v16 = *(CVisual **)(*(_QWORD *)(v5 + 704) + 8 * m);
      CVisual::PurgeOldRenderPassInfos(v16);
      (*(void (__fastcall **)(CVisual *))(*(_QWORD *)v16 + 16LL))(v16);
    }
    *(_DWORD *)(v5 + 656) = 0;
    DynArrayImpl<0>::ShrinkToSize(v5 + 632, 8LL);
    *(_DWORD *)(v5 + 728) = 0;
  }
  return 0LL;
}
