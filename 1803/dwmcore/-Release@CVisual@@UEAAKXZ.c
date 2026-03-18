/*
 * XREFs of ?Release@CVisual@@UEAAKXZ @ 0x180050F80
 * Callers:
 *     ?DeleteHandle@CResourceTable@@QEAAJI@Z @ 0x18002D440 (-DeleteHandle@CResourceTable@@QEAAJI@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 *     ?PostRender@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x1800440D0 (-PostRender@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x18004BFF0 (--1CVisual@@MEAA@XZ.c)
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x18004E20C (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ?RemoveChild@CVisual@@IEAAJPEAV1@_N@Z @ 0x18004F9E8 (-RemoveChild@CVisual@@IEAAJPEAV1@_N@Z.c)
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x180051B80 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 *     ?ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ @ 0x1800D7A8C (-ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ.c)
 * Callees:
 *     ?SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z @ 0x180028438 (-SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z.c)
 *     ??_ECVisual@@MEAAPEAXI@Z @ 0x180049A60 (--_ECVisual@@MEAAPEAXI@Z.c)
 *     ?ClearInteraction@CVisual@@QEAAXXZ @ 0x18004D604 (-ClearInteraction@CVisual@@QEAAXXZ.c)
 *     ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x18004D638 (-NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z.c)
 *     ??_GCSpriteVisual@@UEAAPEAXI@Z @ 0x18009D8E0 (--_GCSpriteVisual@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::Release(CVisual *this)
{
  unsigned __int32 v2; // edi
  __int64 v4; // rcx
  __int64 i; // rcx
  CVisual *(__fastcall *v6)(CVisual *, char); // rax
  CInteraction *v7; // rcx

  if ( *((_DWORD *)this + 2) == 1 )
  {
    v4 = *((_QWORD *)this + 27);
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
    v6 = *(CVisual *(__fastcall **)(CVisual *, char))(*(_QWORD *)this + 24LL);
    if ( v6 == CVisual::`vector deleting destructor' )
    {
      CVisual::`vector deleting destructor'(this, 1);
    }
    else if ( (char *)v6 == (char *)CSpriteVisual::`scalar deleting destructor' )
    {
      CSpriteVisual::`scalar deleting destructor'(this, 1u);
    }
    else
    {
      v6(this, 1);
    }
  }
  return v2;
}
