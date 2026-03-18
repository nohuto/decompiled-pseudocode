/*
 * XREFs of ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034728
 * Callers:
 *     ?EmptyFilterInputMap@CFilterEffect@@AEAAXXZ @ 0x1800033B0 (-EmptyFilterInputMap@CFilterEffect@@AEAAXXZ.c)
 *     ?ProcessAddColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDCOLORRESOURCES@@PEBXI@Z @ 0x18000CA84 (-ProcessAddColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_AD.c)
 *     ?ReleaseResources@CEffectBrush@@AEAAXXZ @ 0x180010D14 (-ReleaseResources@CEffectBrush@@AEAAXXZ.c)
 *     ?ProcessSetInput@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETINPUT@@@Z @ 0x18001107C (-ProcessSetInput@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETINPUT@@@Z.c)
 *     ?ClearTreeEffect@CLayerVisual@@AEAAXXZ @ 0x180013ECC (-ClearTreeEffect@CLayerVisual@@AEAAXXZ.c)
 *     ?ProcessSetEffect@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LAYERVISUAL_SETEFFECT@@@Z @ 0x1800140B0 (-ProcessSetEffect@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LAYERVISUAL_SETEFFECT@@@Z.c)
 *     ??1CHwndBitmap@@MEAA@XZ @ 0x180020210 (--1CHwndBitmap@@MEAA@XZ.c)
 *     ?SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z @ 0x1800202E4 (-SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z.c)
 *     ?ProcessSetTransform@CGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRY_SETTRANSFORM@@@Z @ 0x180023610 (-ProcessSetTransform@CGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRY_SETTRANSFORM@@@Z.c)
 *     ?UnRegisterNotifiers@CVisualCapture@@UEAAXXZ @ 0x180027380 (-UnRegisterNotifiers@CVisualCapture@@UEAAXXZ.c)
 *     ??1COffScreenRenderTarget@@MEAA@XZ @ 0x180027524 (--1COffScreenRenderTarget@@MEAA@XZ.c)
 *     ??1CGeometry@@MEAA@XZ @ 0x180029940 (--1CGeometry@@MEAA@XZ.c)
 *     ??$UnRegisterNotifier@PEAVCHoverPointerSource@@@CResource@@QEAAXAEAPEAVCHoverPointerSource@@@Z @ 0x180034524 (--$UnRegisterNotifier@PEAVCHoverPointerSource@@@CResource@@QEAAXAEAPEAVCHoverPointerSource@@@Z.c)
 *     ??$UnRegisterNotifier@PEAVCImageSource@@@CResource@@QEAAXAEAPEAVCImageSource@@@Z @ 0x18003454C (--$UnRegisterNotifier@PEAVCImageSource@@@CResource@@QEAAXAEAPEAVCImageSource@@@Z.c)
 *     ??$AddHandleToArrayAndReplace@VCResource@@@CResource@@IEAAJPEFAIW4MIL_RESOURCE_TYPE@@PEAV?$DynArray@PEAVCResource@@$00@@PEAVCResourceTable@@@Z @ 0x1800348C0 (--$AddHandleToArrayAndReplace@VCResource@@@CResource@@IEAAJPEFAIW4MIL_RESOURCE_TYPE@@PEAV-$DynAr.c)
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z @ 0x180034E50 (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z.c)
 *     ??1CSurfaceBrush@@UEAA@XZ @ 0x180037F8C (--1CSurfaceBrush@@UEAA@XZ.c)
 *     ?SetSurface@CSurfaceBrush@@IEAAJPEAVCResource@@@Z @ 0x180038004 (-SetSurface@CSurfaceBrush@@IEAAJPEAVCResource@@@Z.c)
 *     ?ProcessSetTransform@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SURFACEBRUSH_SETTRANSFORM@@@Z @ 0x1800392D8 (-ProcessSetTransform@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SURFACEBRUSH_SETTRANSFOR.c)
 *     ??1CMaskBrush@@MEAA@XZ @ 0x180039A54 (--1CMaskBrush@@MEAA@XZ.c)
 *     ?ProcessSetMask@CMaskBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MASKBRUSH_SETMASK@@@Z @ 0x180039AA8 (-ProcessSetMask@CMaskBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MASKBRUSH_SETMASK@@@Z.c)
 *     ?ProcessSetSource@CMaskBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MASKBRUSH_SETSOURCE@@@Z @ 0x180039B60 (-ProcessSetSource@CMaskBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MASKBRUSH_SETSOURCE@@@Z.c)
 *     ?UnRegisterNotifiers@CCachedVisualImage@@UEAAXXZ @ 0x180048230 (-UnRegisterNotifiers@CCachedVisualImage@@UEAAXXZ.c)
 *     ?UnRegisterNotifiers@CSolidColorLegacyMilBrush@@UEAAXXZ @ 0x18004BC90 (-UnRegisterNotifiers@CSolidColorLegacyMilBrush@@UEAAXXZ.c)
 *     ?ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ @ 0x18004C3E0 (-ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ @ 0x180050074 (-ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ.c)
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800528C0 (-GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAn.c)
 *     ?SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z @ 0x180052CE8 (-SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z.c)
 *     ??1CWindowNode@@MEAA@XZ @ 0x1800538D0 (--1CWindowNode@@MEAA@XZ.c)
 *     ?ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXCLIP@@@Z @ 0x180053E58 (-ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXCLIP@@@Z.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?ProcessSetDcompRenderTargetGroup@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPRENDERTARGET_SETDCOMPRENDERTARGETGROUP@@@Z @ 0x18006942C (-ProcessSetDcompRenderTargetGroup@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESK.c)
 *     ?UnRegisterNotifiers@CImageLegacyMilBrush@@UEAAXXZ @ 0x18007B9E0 (-UnRegisterNotifiers@CImageLegacyMilBrush@@UEAAXXZ.c)
 *     ?DestroyRenderData@CRenderData@@AEAAXXZ @ 0x1800849B8 (-DestroyRenderData@CRenderData@@AEAAXXZ.c)
 *     ?SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z @ 0x180085068 (-SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z.c)
 *     ?SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z @ 0x18008524C (-SetClip@CVisual@@QEAAJPEAVCGeometry@@@Z.c)
 *     ?SetTransform@CVisual@@QEAAJPEAVCTransform3D@@@Z @ 0x18008533C (-SetTransform@CVisual@@QEAAJPEAVCTransform3D@@@Z.c)
 *     ?SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z @ 0x180087E0C (-SetInteraction@CVisual@@IEAAJPEAVCInteraction@@@Z.c)
 *     ?Release@CVisual@@UEAAKXZ @ 0x18008AFE0 (-Release@CVisual@@UEAAKXZ.c)
 *     ??1CSpriteVisual@@UEAA@XZ @ 0x18008C984 (--1CSpriteVisual@@UEAA@XZ.c)
 *     ??1CEffectGroup@@MEAA@XZ @ 0x1800931F8 (--1CEffectGroup@@MEAA@XZ.c)
 *     ?ProcessUpdate@CEffectGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTGROUP@@@Z @ 0x180093230 (-ProcessUpdate@CEffectGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTGROUP@@@Z.c)
 *     ??1CRenderTarget@@MEAA@XZ @ 0x1800B4C74 (--1CRenderTarget@@MEAA@XZ.c)
 *     ??1CNineGridBrush@@MEAA@XZ @ 0x1800BFDE0 (--1CNineGridBrush@@MEAA@XZ.c)
 *     ?ProcessSetSource@CNineGridBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NINEGRIDBRUSH_SETSOURCE@@@Z @ 0x1800BFE24 (-ProcessSetSource@CNineGridBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NINEGRIDBRUSH_SETSOURCE@@@.c)
 *     ??1CLayerVisual@@UEAA@XZ @ 0x1800C1ADC (--1CLayerVisual@@UEAA@XZ.c)
 *     ?ProcessSetTransform@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET_SETTRANSFORM@@@Z @ 0x180129060 (-ProcessSetTransform@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDE.c)
 *     ?ProcessSetColorTransform@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAPRENDERTARGET_SETCOLORTRANSFORM@@@Z @ 0x180129228 (-ProcessSetColorTransform@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_METABITMAP.c)
 *     ?ProcessSetFilterList@CRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TARGET_SETFILTERLIST@@@Z @ 0x180129838 (-ProcessSetFilterList@CRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TARGET_SETFILTERLIST@@@.c)
 *     ?ProcessUpdateInputs@CFilterEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FILTEREFFECT_UPDATEINPUTS@@PEBXI@Z @ 0x180129F70 (-ProcessUpdateInputs@CFilterEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FILTEREFFECT_UPDATEINPUT.c)
 *     ?ProcessReadyFlipExImages@CWindowNode@@AEAA_NXZ @ 0x18012A338 (-ProcessReadyFlipExImages@CWindowNode@@AEAA_NXZ.c)
 *     ?ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPRITEVISUAL_SETSHADOW@@@Z @ 0x18012AE68 (-ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPRITEVISUAL_SETSHADOW@@@Z.c)
 *     ?ProcessSetShadow@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LAYERVISUAL_SETSHADOW@@@Z @ 0x18012AF44 (-ProcessSetShadow@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LAYERVISUAL_SETSHADOW@@@Z.c)
 *     ?ProcessSetColorTransform@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETCOLORTRANSFORM@@@Z @ 0x18012B0C8 (-ProcessSetColorTransform@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETCOLORTRANSFORM@.c)
 *     ?ProcessSetCoordinateSpace@CCompositionDistantLight@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONDISTANTLIGHT_SETCOORDINATESPACE@@@Z @ 0x18012B780 (-ProcessSetCoordinateSpace@CCompositionDistantLight@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSI.c)
 *     ?ProcessSetCoordinateSpace@CCompositionPointLight@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONPOINTLIGHT_SETCOORDINATESPACE@@@Z @ 0x18012B830 (-ProcessSetCoordinateSpace@CCompositionPointLight@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITI.c)
 *     ?ProcessSetCoordinateSpace@CCompositionSpotLight@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONSPOTLIGHT_SETCOORDINATESPACE@@@Z @ 0x18012B8E0 (-ProcessSetCoordinateSpace@CCompositionSpotLight@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIO.c)
 *     ?ProcessSetRequestedPositionAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITIONANIMATION@@@Z @ 0x18012C6CC (-ProcessSetRequestedPositionAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_I.c)
 *     ?ProcessSetManipulations@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETMANIPULATIONS@@PEBXI@Z @ 0x18012C7B4 (-ProcessSetManipulations@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRA.c)
 *     ?ProcessSetRequestedScaleAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALEANIMATION@@@Z @ 0x18012CA58 (-ProcessSetRequestedScaleAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTE.c)
 *     ?ProcessUpdate@CYCbCrSurface@@UEAAJPEBVCResourceTable@@PEBUMILCMD_YCBCRSURFACE@@@Z @ 0x18012DCD0 (-ProcessUpdate@CYCbCrSurface@@UEAAJPEBVCResourceTable@@PEBUMILCMD_YCBCRSURFACE@@@Z.c)
 *     ?ProcessSetMask@CDropShadow@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DROPSHADOW_SETMASK@@@Z @ 0x18012E8A0 (-ProcessSetMask@CDropShadow@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DROPSHADOW_SETMASK@@@Z.c)
 *     ??1CDesktopRenderTarget@@EEAA@XZ @ 0x18014673C (--1CDesktopRenderTarget@@EEAA@XZ.c)
 *     ??1CPencil@@UEAA@XZ @ 0x18015359C (--1CPencil@@UEAA@XZ.c)
 *     ?SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z @ 0x180162CDC (-SetFlipExBitmap@CWindowNode@@AEAAJPEAVCCompositionSurfaceBitmap@@@Z.c)
 *     ?SetRootVisual@CCachedVisualImage@@AEAAJPEAVCVisual@@@Z @ 0x180165BAC (-SetRootVisual@CCachedVisualImage@@AEAAJPEAVCVisual@@@Z.c)
 *     ??1CYCbCrSurface@@MEAA@XZ @ 0x180166570 (--1CYCbCrSurface@@MEAA@XZ.c)
 *     ?ReleaseManipulations@CInteractionTracker@@AEAAXXZ @ 0x18016D548 (-ReleaseManipulations@CInteractionTracker@@AEAAXXZ.c)
 *     ?StopCustomAnimation@CInteractionTracker@@AEAAXH@Z @ 0x18016E91C (-StopCustomAnimation@CInteractionTracker@@AEAAXH@Z.c)
 *     ?SetPaperTextureBitmap@CPencil@@AEAAJPEAVCResource@@PEAPEAVCCompositionSurfaceBitmap@@@Z @ 0x18016FFBC (-SetPaperTextureBitmap@CPencil@@AEAAJPEAVCResource@@PEAPEAVCCompositionSurfaceBitmap@@@Z.c)
 *     ??1CDropShadow@@UEAA@XZ @ 0x180170970 (--1CDropShadow@@UEAA@XZ.c)
 *     ??_GCCompositionDistantLight@@UEAAPEAXI@Z @ 0x180173370 (--_GCCompositionDistantLight@@UEAAPEAXI@Z.c)
 *     ??_ECCompositionPointLight@@UEAAPEAXI@Z @ 0x180173710 (--_ECCompositionPointLight@@UEAAPEAXI@Z.c)
 *     ??_GCCompositionSpotLight@@UEAAPEAXI@Z @ 0x180173C00 (--_GCCompositionSpotLight@@UEAAPEAXI@Z.c)
 *     ?UnRegisterNotifiers@CCombinedGeometry@@UEAAXXZ @ 0x180174E50 (-UnRegisterNotifiers@CCombinedGeometry@@UEAAXXZ.c)
 *     ?UnRegisterNotifiers@CLinearGradientLegacyMilBrush@@UEAAXXZ @ 0x180174F20 (-UnRegisterNotifiers@CLinearGradientLegacyMilBrush@@UEAAXXZ.c)
 *     ?ReleaseSwapChain@CHolographicExclusiveView@@AEAAXXZ @ 0x1801A4CFC (-ReleaseSwapChain@CHolographicExclusiveView@@AEAAXXZ.c)
 *     ?ProcessReleaseExclusiveSwapChain@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1801A84D0 (-ProcessReleaseExclusiveSwapChain@CHolographicClient@@AEAAXPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?Release@CResource@@UEAAKXZ @ 0x180034460 (-Release@CResource@@UEAAKXZ.c)
 *     ?Release@CCompositionSurfaceBitmap@@UEAAKXZ @ 0x180037610 (-Release@CCompositionSurfaceBitmap@@UEAAKXZ.c)
 *     ?Release@CVisual@@UEAAKXZ @ 0x18008AFE0 (-Release@CVisual@@UEAAKXZ.c)
 *     ?RemoveAt@CPtrArrayBase@@IEAAX_K@Z @ 0x1800BBCE8 (-RemoveAt@CPtrArrayBase@@IEAAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CResource::UnRegisterNotifierInternal(CResource *this, struct CResource *a2)
{
  CPtrArrayBase *v2; // r10
  __int64 v4; // rdx
  char v6; // di
  unsigned __int64 v7; // rcx
  CResource *v8; // rdx
  bool v9; // zf
  __int64 (__fastcall *v10)(CResource *); // rax
  unsigned int v11; // eax
  __int64 v12; // r8

  if ( a2 )
  {
    v2 = (struct CResource *)((char *)a2 + 24);
    v4 = *((_QWORD *)a2 + 3);
    v6 = 1;
    v7 = (v4 & 2) != 0 ? *(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFFCuLL) : v4 & 1;
    if ( v7 )
    {
      v8 = (CResource *)(v4 & 0xFFFFFFFFFFFFFFFCuLL);
      if ( v7 == 1 )
      {
        v9 = this == v8;
        if ( this == v8 )
        {
          *(_QWORD *)v2 = 0LL;
          v9 = this == v8;
        }
        v6 = v9;
        goto LABEL_9;
      }
      v11 = 0;
      v12 = 0LL;
      do
      {
        if ( this == *((CResource **)v8 + v12 + 2) )
          break;
        v12 = ++v11;
      }
      while ( v11 < v7 );
      if ( v11 < v7 )
      {
        CPtrArrayBase::RemoveAt(v2, v11);
LABEL_9:
        if ( v6 )
        {
          v10 = *(__int64 (__fastcall **)(CResource *))(*(_QWORD *)a2 + 16LL);
          if ( v10 == CResource::Release )
          {
            CResource::Release(a2);
          }
          else if ( (char *)v10 == (char *)CCompositionSurfaceBitmap::Release )
          {
            CCompositionSurfaceBitmap::Release(a2);
          }
          else if ( (char *)v10 == (char *)CVisual::Release )
          {
            CVisual::Release(a2);
          }
          else
          {
            v10(a2);
          }
        }
      }
    }
  }
}
