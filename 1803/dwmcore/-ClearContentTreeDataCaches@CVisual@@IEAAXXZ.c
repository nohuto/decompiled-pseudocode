/*
 * XREFs of ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ @ 0x18004E754
 * Callers:
 *     ?ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z @ 0x18000ACD0 (-ProcessTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEBVCVisualTree@@_K_N@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18004AA70 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ComputeLayoutSize@CVisual@@QEAA_NXZ @ 0x18004D47C (-ComputeLayoutSize@CVisual@@QEAA_NXZ.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A0E20 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPRITEVISUAL_SETSHADOW@@@Z @ 0x1801A545C (-ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPRITEVISUAL_SETSHADOW@@@Z.c)
 * Callees:
 *     ?FreeContentCaches@CDrawListCacheSet@@CAXPEAURenderTargetEntry@1@@Z @ 0x1800C1DCC (-FreeContentCaches@CDrawListCacheSet@@CAXPEAURenderTargetEntry@1@@Z.c)
 */

void __fastcall CVisual::ClearContentTreeDataCaches(CVisual *this)
{
  __int64 i; // rbx
  __int64 v3; // rcx
  __int64 j; // rcx
  _QWORD *k; // rdi
  __int64 m; // rbx
  _QWORD *v7; // [rsp+30h] [rbp+8h]

  for ( i = *((_QWORD *)this + 52); i; i = *(_QWORD *)(i + 88) )
  {
    if ( *(_QWORD *)(i + 16) )
      CDrawListCacheSet::FreeContentCaches((struct CDrawListCacheSet::RenderTargetEntry *)i);
  }
  v3 = *((_QWORD *)this + 27);
  if ( (*(_DWORD *)(v3 + 4) & 0x80000) != 0 )
  {
    for ( j = v3 + 12; (*(_DWORD *)j & 0x7F000000) != 0xD000000; j += (*(_DWORD *)j & 0xFFFFFF) + 4LL )
      ;
    v7 = *(_QWORD **)(j + 4);
    if ( v7 )
    {
      for ( k = (_QWORD *)*v7; k != v7; k = (_QWORD *)*k )
      {
        for ( m = *(k - 12); m; m = *(_QWORD *)(m + 88) )
        {
          if ( *(_QWORD *)(m + 16) )
            CDrawListCacheSet::FreeContentCaches((struct CDrawListCacheSet::RenderTargetEntry *)m);
        }
      }
    }
  }
}
