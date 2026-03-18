/*
 * XREFs of ?Release@CVisual@@UEAAKXZ @ 0x18008AFE0
 * Callers:
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x1800339C0 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034728 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?DeleteHandle@CResourceTable@@QEAAJI@Z @ 0x18005B4EC (-DeleteHandle@CResourceTable@@QEAAJI@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?PostRender@CDesktopRenderTarget@@UEAAJXZ @ 0x180069620 (-PostRender@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?RemoveChild@CVisual@@IEAAJPEAV1@_N@Z @ 0x180084EB8 (-RemoveChild@CVisual@@IEAAJPEAV1@_N@Z.c)
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x1800889B4 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ??1CVisual@@MEAA@XZ @ 0x180089A30 (--1CVisual@@MEAA@XZ.c)
 *     ?ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ @ 0x1800CD928 (-ResetMoveOptimizationNodes@CHwndRenderTarget@@QEAAXXZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034728 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z @ 0x18004B67C (-SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z.c)
 *     ??_GCWindowNode@@MEAAPEAXI@Z @ 0x18004FE70 (--_GCWindowNode@@MEAAPEAXI@Z.c)
 *     ?SetInteractionInternal@CVisual@@QEAAXPEAVCInteraction@@@Z @ 0x180085680 (-SetInteractionInternal@CVisual@@QEAAXPEAVCInteraction@@@Z.c)
 *     ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x180086A4C (-NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z.c)
 *     ??_ECVisual@@MEAAPEAXI@Z @ 0x18008A2B0 (--_ECVisual@@MEAAPEAXI@Z.c)
 *     ??_GCSpriteVisual@@UEAAPEAXI@Z @ 0x18008C9C0 (--_GCSpriteVisual@@UEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::Release(CVisual *this)
{
  unsigned __int32 v2; // edi
  __int64 v4; // rcx
  __int64 i; // rcx
  CWindowNode *(__fastcall *v6)(CWindowNode *, char); // rax
  CInteraction *v7; // [rsp+30h] [rbp+8h]

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
        CResource::UnRegisterNotifierInternal(
          this,
          (struct CResource *)(((unsigned __int64)v7 + 8) & -(__int64)(v7 != 0LL)));
        CVisual::SetInteractionInternal(this, 0LL);
      }
    }
  }
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 )
  {
    --*((_DWORD *)this + 2);
    v6 = *(CWindowNode *(__fastcall **)(CWindowNode *, char))(*(_QWORD *)this + 24LL);
    if ( v6 == CVisual::`vector deleting destructor' )
    {
      CVisual::`vector deleting destructor'(this, 1);
    }
    else if ( (char *)v6 == (char *)CSpriteVisual::`scalar deleting destructor' )
    {
      CSpriteVisual::`scalar deleting destructor'(this, 1u);
    }
    else if ( v6 == CWindowNode::`scalar deleting destructor' )
    {
      CWindowNode::`scalar deleting destructor'(this, 1);
    }
    else
    {
      v6(this, 1);
    }
  }
  return v2;
}
