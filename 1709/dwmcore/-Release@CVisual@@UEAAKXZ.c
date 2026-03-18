/*
 * XREFs of ?Release@CVisual@@UEAAKXZ @ 0x180054D00
 * Callers:
 *     ?PostRender@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x180015C90 (-PostRender@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x180050310 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ?RemoveChild@CVisual@@IEAAJPEAV1@_N@Z @ 0x180050854 (-RemoveChild@CVisual@@IEAAJPEAV1@_N@Z.c)
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x1800A8AE0 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 *     ?DeleteHandle@CResourceTable@@QEAAJI@Z @ 0x1800AA4CC (-DeleteHandle@CResourceTable@@QEAAJI@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ @ 0x18011A048 (-ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ.c)
 * Callees:
 *     ??_GCSpriteVisual@@UEAAPEAXI@Z @ 0x180022210 (--_GCSpriteVisual@@UEAAPEAXI@Z.c)
 *     ??_ECVisual@@MEAAPEAXI@Z @ 0x18004DD40 (--_ECVisual@@MEAAPEAXI@Z.c)
 *     ?ClearInteraction@CVisual@@QEAAXXZ @ 0x18004F630 (-ClearInteraction@CVisual@@QEAAXXZ.c)
 *     ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x18004F664 (-NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z.c)
 *     ?SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z @ 0x180091874 (-SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::Release(CVisual *this)
{
  unsigned __int32 v2; // edi
  __int64 v4; // rcx
  __int64 i; // rcx
  CSpriteVisual *(__fastcall *v6)(CSpriteVisual *, char); // rax
  CInteraction *v7; // rcx

  if ( *((_DWORD *)this + 2) == 1 )
  {
    v4 = *((_QWORD *)this + 26);
    if ( (*(_DWORD *)(v4 + 4) & 0x2000000) != 0 )
    {
      for ( i = v4 + 12; (*(_DWORD *)i & 0x7F000000) != 0x7000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
        ;
      v7 = *(CInteraction **)(i + 4);
      if ( v7 )
      {
        CInteraction::SetVisual(v7, 0LL);
        CVisual::NotifyMidManipulationUpdate((__int64)this, 1u, (__int64)this);
        CVisual::ClearInteraction(this);
      }
    }
  }
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 )
  {
    --*((_DWORD *)this + 2);
    v6 = *(CSpriteVisual *(__fastcall **)(CSpriteVisual *, char))(*(_QWORD *)this + 24LL);
    if ( v6 == CVisual::`vector deleting destructor' )
    {
      CVisual::`vector deleting destructor'(this, 1);
    }
    else if ( v6 == CSpriteVisual::`scalar deleting destructor' )
    {
      CSpriteVisual::`scalar deleting destructor'(this, 1);
    }
    else
    {
      v6(this, 1);
    }
  }
  return v2;
}
