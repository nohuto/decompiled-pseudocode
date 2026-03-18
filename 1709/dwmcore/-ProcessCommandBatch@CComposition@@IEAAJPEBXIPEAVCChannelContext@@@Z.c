/*
 * XREFs of ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40
 * Callers:
 *     ?ProcessPartitionCommand@CComposition@@QEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x1800AA580 (-ProcessPartitionCommand@CComposition@@QEAAJPEBUUCE_RDP_HEADER@@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x18000B600 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x180010228 (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
 *     ?ResizeToFit@HANDLE_TABLE@@QEAAJI@Z @ 0x1800103BC (-ResizeToFit@HANDLE_TABLE@@QEAAJI@Z.c)
 *     ?ProcessCaptureBits@CDesktopRenderTarget@@QEAAJPEAVCChannelContext@@PEBUMILCMD_DESKTOPRENDERTARGET_CAPTUREBITS@@@Z @ 0x180016EA8 (-ProcessCaptureBits@CDesktopRenderTarget@@QEAAJPEAVCChannelContext@@PEBUMILCMD_DESKTOPRENDERTARG.c)
 *     ?ProcessSetDcompRenderTargetGroup@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPRENDERTARGET_SETDCOMPRENDERTARGETGROUP@@@Z @ 0x180016FD8 (-ProcessSetDcompRenderTargetGroup@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESK.c)
 *     ?ForceFullRender@CRenderTargetManager@@QEAAXXZ @ 0x18001BA38 (-ForceFullRender@CRenderTargetManager@@QEAAXXZ.c)
 *     ?ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERDATA@@PEBXI@Z @ 0x18001EF50 (-ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERDATA@@PEBXI@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?IsOfType@CSpriteVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180022240 (-IsOfType@CSpriteVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?ProcessSetBrush@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPRITEVISUAL_SETBRUSH@@@Z @ 0x1800225FC (-ProcessSetBrush@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPRITEVISUAL_SETBRUSH@@@Z.c)
 *     ?ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ @ 0x180022644 (-ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ.c)
 *     ?ProcessSetSource@CMaskBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MASKBRUSH_SETSOURCE@@@Z @ 0x180024560 (-ProcessSetSource@CMaskBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MASKBRUSH_SETSOURCE@@@Z.c)
 *     ?ProcessSetMask@CMaskBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MASKBRUSH_SETMASK@@@Z @ 0x1800246D0 (-ProcessSetMask@CMaskBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MASKBRUSH_SETMASK@@@Z.c)
 *     ?IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180024FA0 (-IsOfType@CSurfaceBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SetSurface@CSurfaceBrush@@IEAAJPEAVCResource@@@Z @ 0x180025030 (-SetSurface@CSurfaceBrush@@IEAAJPEAVCResource@@@Z.c)
 *     ?ProcessSetTransform@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SURFACEBRUSH_SETTRANSFORM@@@Z @ 0x180025DE0 (-ProcessSetTransform@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SURFACEBRUSH_SETTRANSFOR.c)
 *     ?ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ @ 0x1800269F8 (-ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ @ 0x180026A68 (-ReleaseSurfaceResources@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x180026AD4 (-ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z.c)
 *     ?ProcessAddColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDCOLORRESOURCES@@PEBXI@Z @ 0x18002759C (-ProcessAddColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_AD.c)
 *     ?ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDPRIMITIVES@@@Z @ 0x1800276E0 (-ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDPRI.c)
 *     ?ProcessSetBoundsRect@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_SETBOUNDSRECT@@@Z @ 0x1800278E4 (-ProcessSetBoundsRect@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_SETBOU.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x180027A60 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x180027AA0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?IsOfType@CPrimitiveGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180028230 (-IsOfType@CPrimitiveGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_COMPOSITIONSURFACEBITMAP@@@Z @ 0x180028800 (-ProcessUpdate@CCompositionSurfaceBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_COMPOSITIONSURFACE.c)
 *     ?IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800298A0 (-IsOfType@CCompositionSurfaceBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?ProcessAddTimeEvents@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_ADDTIMEEVENTS@@PEBXI@Z @ 0x18002CAF4 (-ProcessAddTimeEvents@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_ADDTIMEEVENTS@@P.c)
 *     ?ProcessSetCallbackId@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETCALLBACKID@@@Z @ 0x18002CB70 (-ProcessSetCallbackId@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETCALLBACKID@@@.c)
 *     ?ProcessSetPaused@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETPAUSED@@@Z @ 0x18002CBEC (-ProcessSetPaused@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETPAUSED@@@Z.c)
 *     ?ProcessSetSeek@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETSEEK@@@Z @ 0x18002CC48 (-ProcessSetSeek@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETSEEK@@@Z.c)
 *     ?ProcessSetPrimitives@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETPRIMITIVES@@@Z @ 0x18002CC84 (-ProcessSetPrimitives@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETPRIMITIVES@@@.c)
 *     ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x18002FCCC (-Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036770 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036B0C (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??8?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@IEBA_NAEBUMilRectF@@@Z @ 0x180036B40 (--8-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@IEBA_NAEBUMilRectF@@@Z.c)
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x180046690 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x18004F728 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?SetOpacity@CVisual@@QEAAXM@Z @ 0x18004F95C (-SetOpacity@CVisual@@QEAAXM@Z.c)
 *     ?SetRelativeSize@CVisual@@QEAAXMM@Z @ 0x18004FA64 (-SetRelativeSize@CVisual@@QEAAXMM@Z.c)
 *     ?SetRelativeOffset@CVisual@@QEAAXMMM@Z @ 0x18004FB00 (-SetRelativeOffset@CVisual@@QEAAXMMM@Z.c)
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x180050310 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180051190 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?ProcessMoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_MOVECHILD@@@Z @ 0x1800514F0 (-ProcessMoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_MOVECHILD@@@Z.c)
 *     ?ProcessInsertChildAt@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_INSERTCHILDAT@@@Z @ 0x180051578 (-ProcessInsertChildAt@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_INSERTCHILDAT@@@Z.c)
 *     ?ProcessRemoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_REMOVECHILD@@@Z @ 0x180051668 (-ProcessRemoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_REMOVECHILD@@@Z.c)
 *     ?ProcessSetClip@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETCLIP@@@Z @ 0x1800516B4 (-ProcessSetClip@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETCLIP@@@Z.c)
 *     ?ProcessSetContent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETCONTENT@@@Z @ 0x1800516FC (-ProcessSetContent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETCONTENT@@@Z.c)
 *     ?ProcessSetExcludeSubtree@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETEXCLUDESUBTREE@@@Z @ 0x1800517CC (-ProcessSetExcludeSubtree@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETEXCLUDESUBTREE@.c)
 *     ?ProcessSetEffect@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETEFFECT@@@Z @ 0x180051810 (-ProcessSetEffect@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETEFFECT@@@Z.c)
 *     ?ProcessSetInteraction@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETINTERACTION@@@Z @ 0x180051858 (-ProcessSetInteraction@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETINTERACTION@@@Z.c)
 *     ?ProcessSetModesToDefault@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETMODESTODEFAULT@@@Z @ 0x1800518A4 (-ProcessSetModesToDefault@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETMODESTODEFAULT@.c)
 *     ?ProcessSetOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETOPTIONS@@@Z @ 0x1800518E4 (-ProcessSetOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETOPTIONS@@@Z.c)
 *     ?ProcessSetRenderOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETRENDEROPTIONS@@@Z @ 0x18005199C (-ProcessSetRenderOptions@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETRENDEROPTIONS@@@.c)
 *     ?ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORMPARENT@@@Z @ 0x180051AC0 (-ProcessSetTransformParent@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORMPAREN.c)
 *     ?ProcessSetTransform@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORM@@@Z @ 0x180051D14 (-ProcessSetTransform@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORM@@@Z.c)
 *     ?ProcessTopLevelNode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_TOPLEVELNODE@@@Z @ 0x180051D60 (-ProcessTopLevelNode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_TOPLEVELNODE@@@Z.c)
 *     ?ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETWINDOWBACKGROUNDTREATMENT@@@Z @ 0x180051D88 (-ProcessSetWindowBackgroundTreatment@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETWIND.c)
 *     ?IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180052870 (-IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?Release@CVisual@@UEAAKXZ @ 0x180054D00 (-Release@CVisual@@UEAAKXZ.c)
 *     ?ProcessSetBottomInset@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RECTANGLEGEOMETRY_SETBOTTOMINSET@@@Z @ 0x180058E10 (-ProcessSetBottomInset@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RECTANGLEGEOMETRY.c)
 *     ?ProcessSetRectangle@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RECTANGLEGEOMETRY_SETRECTANGLE@@@Z @ 0x180058E34 (-ProcessSetRectangle@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RECTANGLEGEOMETRY_S.c)
 *     ?ProcessSetLeftInset@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RECTANGLEGEOMETRY_SETLEFTINSET@@@Z @ 0x180058F1C (-ProcessSetLeftInset@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RECTANGLEGEOMETRY_S.c)
 *     ?ProcessSetTopInset@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RECTANGLEGEOMETRY_SETTOPINSET@@@Z @ 0x180058F40 (-ProcessSetTopInset@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RECTANGLEGEOMETRY_SE.c)
 *     ?ProcessSetRightInset@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RECTANGLEGEOMETRY_SETRIGHTINSET@@@Z @ 0x180058F64 (-ProcessSetRightInset@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RECTANGLEGEOMETRY_.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?ProcessUpdate@CAtlasedRectsGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSGROUP@@PEBXI@Z @ 0x18006A540 (-ProcessUpdate@CAtlasedRectsGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSGROUP@@PEBXI@.c)
 *     ?ProcessSetIsCenterHollow@CNineGridBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NINEGRIDBRUSH_SETISCENTERHOLLOW@@@Z @ 0x180070974 (-ProcessSetIsCenterHollow@CNineGridBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NINEGRIDBRUSH_SETI.c)
 *     ?ProcessSetInsetProperty@CNineGridBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NINEGRIDBRUSH_SETINSETPROPERTY@@@Z @ 0x180070994 (-ProcessSetInsetProperty@CNineGridBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NINEGRIDBRUSH_SETIN.c)
 *     ?ProcessSetSource@CNineGridBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NINEGRIDBRUSH_SETSOURCE@@@Z @ 0x180070A00 (-ProcessSetSource@CNineGridBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NINEGRIDBRUSH_SETSOURCE@@@.c)
 *     ?SetColor@CColorBrush@@AEAAXMMMM@Z @ 0x180070AC0 (-SetColor@CColorBrush@@AEAAXMMMM@Z.c)
 *     ?ProcessSetColorStops@CGradientBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GRADIENTBRUSH_SETCOLORSTOPS@@PEBXI@Z @ 0x18007148C (-ProcessSetColorStops@CGradientBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GRADIENTBRUSH_SETCOLOR.c)
 *     ?ProcessSetTransform@CGradientBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GRADIENTBRUSH_SETTRANSFORM@@@Z @ 0x18007164C (-ProcessSetTransform@CGradientBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GRADIENTBRUSH_SETTRANSF.c)
 *     ?SetColor@CColorGradientStop@@IEAAXAEBU_D3DCOLORVALUE@@@Z @ 0x1800721C8 (-SetColor@CColorGradientStop@@IEAAXAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?SetOffset@CColorGradientStop@@IEAAXM@Z @ 0x180072230 (-SetOffset@CColorGradientStop@@IEAAXM@Z.c)
 *     ?ProcessUpdateVisual@CHwndBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_HWNDBITMAP_UPDATEVISUAL@@@Z @ 0x180074310 (-ProcessUpdateVisual@CHwndBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_HWNDBITMAP_UPDATEVISUAL@@@.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x180074A8C (-IsOOM@@YA_NJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ProcessUpdate@CVisualCapture@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALCAPTURE@@@Z @ 0x180079084 (-ProcessUpdate@CVisualCapture@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALCAPTURE@@@Z.c)
 *     ?ProcessUpdate@CImageLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_IMAGELEGACYMILBRUSH@@@Z @ 0x18007C3DC (-ProcessUpdate@CImageLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_IMAGELEGACYMILBRUSH@@@Z.c)
 *     ?ProcessUpdate@CSolidColorLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SOLIDCOLORLEGACYMILBRUSH@@@Z @ 0x18007D4E8 (-ProcessUpdate@CSolidColorLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SOLIDCOLORLEGACYMI.c)
 *     ?AddAsyncFlushResponse@CLegacySurfaceManager@@QEAAJPEAVCChannelContext@@II@Z @ 0x18007F7D0 (-AddAsyncFlushResponse@CLegacySurfaceManager@@QEAAJPEAVCChannelContext@@II@Z.c)
 *     ?ProcessSetPropertyBag@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETPROPERTYBAG@@@Z @ 0x180082EC8 (-ProcessSetPropertyBag@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETPROPERTY.c)
 *     ?ProcessSetInput@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETINPUT@@@Z @ 0x180082F64 (-ProcessSetInput@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETINPUT@@@Z.c)
 *     ?ProcessSetTemplate@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETTEMPLATE@@@Z @ 0x18008308C (-ProcessSetTemplate@CEffectBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTBRUSH_SETTEMPLATE@@@.c)
 *     ?ProcessSetEffect@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LAYERVISUAL_SETEFFECT@@@Z @ 0x180083320 (-ProcessSetEffect@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LAYERVISUAL_SETEFFECT@@@Z.c)
 *     ?ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECTTEMPLATE@@@Z @ 0x180084658 (-ProcessUpdate@CCompiledEffectTemplate@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPILEDEFFECTTEMPLA.c)
 *     ?ProcessUpdate@CSharedSection@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SHAREDSECTION@@@Z @ 0x180084B80 (-ProcessUpdate@CSharedSection@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SHAREDSECTION@@@Z.c)
 *     ?DetachFromChannel@CNotificationResource@@UEAAXPEAVCChannelContext@@_N@Z @ 0x180084C90 (-DetachFromChannel@CNotificationResource@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?ProcessSetCallbackId@CNotificationResource@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NOTIFICATIONRESOURCE_SETCALLBACKID@@@Z @ 0x180084D14 (-ProcessSetCallbackId@CNotificationResource@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NOTIFICATIONRES.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180089680 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z @ 0x1800897D8 (-SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z.c)
 *     ?SetupBuffer@CWorkBuffer@Internal@FastRegion@@QEAAJH@Z @ 0x180089AD4 (-SetupBuffer@CWorkBuffer@Internal@FastRegion@@QEAAJH@Z.c)
 *     ?EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x180089B2C (-EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z @ 0x18008DCCC (-Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?ProcessUpdate@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUALIMAGE@@@Z @ 0x18008EB90 (-ProcessUpdate@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUALIMAGE@@@Z.c)
 *     ?ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_SETINPUTSINK@@@Z @ 0x1800912CC (-ProcessSetInputSink@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_SETINPUTSINK@.c)
 *     ?ProcessSetHoverSource@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_SETHOVERSOURCE@@@Z @ 0x180091330 (-ProcessSetHoverSource@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_SETHOVERSOU.c)
 *     ?ProcessUpdateConfiguration@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_UPDATECONFIGURATION@@PEBXI@Z @ 0x1800913BC (-ProcessUpdateConfiguration@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_UPDATE.c)
 *     ?ProcessUpdateFlags@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_UPDATEFLAGS@@@Z @ 0x18009150C (-ProcessUpdateFlags@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_UPDATEFLAGS@@@.c)
 *     ?ProcessUpdateRails@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_UPDATERAILS@@@Z @ 0x1800915B8 (-ProcessUpdateRails@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_UPDATERAILS@@@.c)
 *     ?ProcessUpdate@CEffectGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTGROUP@@@Z @ 0x180092ADC (-ProcessUpdate@CEffectGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EFFECTGROUP@@@Z.c)
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800930B8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?IsOfType@CComponentTransform2D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180095160 (-IsOfType@CComponentTransform2D@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?ProcessSetAnchorPoint@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM2D_SETANCHORPOINT@@@Z @ 0x180095660 (-ProcessSetAnchorPoint@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANS.c)
 *     ?ProcessSetOffset@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM2D_SETOFFSET@@@Z @ 0x18009568C (-ProcessSetOffset@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM2.c)
 *     ?ProcessSetCenterPoint@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM2D_SETCENTERPOINT@@@Z @ 0x1800956B8 (-ProcessSetCenterPoint@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANS.c)
 *     ?ProcessSetScale@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM2D_SETSCALE@@@Z @ 0x1800956E4 (-ProcessSetScale@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM2D.c)
 *     ?ProcessSetRotationAngle@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM2D_SETROTATIONANGLE@@@Z @ 0x180095710 (-ProcessSetRotationAngle@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRA.c)
 *     ?ProcessSetTransformMatrix@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM2D_SETTRANSFORMMATRIX@@@Z @ 0x180095734 (-ProcessSetTransformMatrix@CComponentTransform2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTT.c)
 *     ?ProcessSetAnchorPoint@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM3D_SETANCHORPOINT@@@Z @ 0x180095FE0 (-ProcessSetAnchorPoint@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANS.c)
 *     ?ProcessSetOrientation@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM3D_SETORIENTATION@@@Z @ 0x18009600C (-ProcessSetOrientation@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANS.c)
 *     ?ProcessSetCenterPoint@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM3D_SETCENTERPOINT@@@Z @ 0x180096048 (-ProcessSetCenterPoint@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANS.c)
 *     ?ProcessSetRotationAxis@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM3D_SETROTATIONAXIS@@@Z @ 0x180096078 (-ProcessSetRotationAxis@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRAN.c)
 *     ?ProcessSetRotationAngle@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM3D_SETROTATIONANGLE@@@Z @ 0x1800960A8 (-ProcessSetRotationAngle@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRA.c)
 *     ?ProcessSetTransformMatrix@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM3D_SETTRANSFORMMATRIX@@@Z @ 0x1800960CC (-ProcessSetTransformMatrix@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTT.c)
 *     ?ProcessSetScale@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM3D_SETSCALE@@@Z @ 0x180096138 (-ProcessSetScale@CComponentTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPONENTTRANSFORM3D.c)
 *     ?NotifyVector3PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector3@@@Z @ 0x180096264 (-NotifyVector3PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector3@@@Z.c)
 *     ?NotifyVector2PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector2@@@Z @ 0x180096408 (-NotifyVector2PropertyChanged@CPropertyChangeResource@@QEAAJIAEBUD2DVector2@@@Z.c)
 *     ?ProcessUpdate@CRgnGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RGNGEOMETRY@@PEBXI@Z @ 0x180096934 (-ProcessUpdate@CRgnGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RGNGEOMETRY@@PEBXI@Z.c)
 *     ?IsOfType@CRgnGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180096BB0 (-IsOfType@CRgnGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?ProcessSetTransform@CGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRY_SETTRANSFORM@@@Z @ 0x180096E00 (-ProcessSetTransform@CGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRY_SETTRANSFORM@@@Z.c)
 *     ?IsOfType@CWindowNode@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180098CC0 (-IsOfType@CWindowNode@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?DetachFromChannel@CWindowNode@@UEAAXPEAVCChannelContext@@_N@Z @ 0x180098CF0 (-DetachFromChannel@CWindowNode@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?Detach@CWindowNode@@QEAAJXZ @ 0x1800993DC (-Detach@CWindowNode@@QEAAJXZ.c)
 *     ?ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_COPYCOMPOSITOROWNEDRESOURCES@@@Z @ 0x18009C6A4 (-ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE.c)
 *     ?ProcessCreate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_CREATE@@@Z @ 0x18009C7CC (-ProcessCreate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_CREATE@@@Z.c)
 *     ?ProcessSetBounds@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETBOUNDS@@@Z @ 0x18009C838 (-ProcessSetBounds@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETBOUNDS@@@Z.c)
 *     ?ProcessSetDxImage@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXIMAGE@@@Z @ 0x18009CA54 (-ProcessSetDxImage@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXIMAGE@@@Z.c)
 *     ?ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXCLIP@@@Z @ 0x18009CAB4 (-ProcessSetDxClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXCLIP@@@Z.c)
 *     ?ProcessSetLayeredWindow@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETLAYEREDWINDOW@@@Z @ 0x18009CB14 (-ProcessSetLayeredWindow@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETLAYEREDW.c)
 *     ?ProcessSetMaximizedClipMargins@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETMAXIMIZEDCLIPMARGINS@@@Z @ 0x18009CB44 (-ProcessSetMaximizedClipMargins@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETM.c)
 *     ?ProcessSetLayoutRTL@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETLAYOUTRTL@@@Z @ 0x18009CBA4 (-ProcessSetLayoutRTL@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETLAYOUTRTL@@@.c)
 *     ?ProcessSetSpriteClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETSPRITECLIP@@@Z @ 0x18009CBC4 (-ProcessSetSpriteClip@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETSPRITECLIP@.c)
 *     ?ProcessSetSourceModifications@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETSOURCEMODIFICATIONS@@@Z @ 0x18009CD2C (-ProcessSetSourceModifications@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETSO.c)
 *     ?ProcessSetSpriteImage@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETSPRITEIMAGE@@@Z @ 0x18009CE6C (-ProcessSetSpriteImage@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETSPRITEIMAG.c)
 *     ?IsOfType@CGdiSpriteBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18009D2F0 (-IsOfType@CGdiSpriteBitmap@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?NotifyDirty@CGdiSpriteBitmap@@QEAAJ_K@Z @ 0x18009E26C (-NotifyDirty@CGdiSpriteBitmap@@QEAAJ_K@Z.c)
 *     ?ProcessUpdate@CGdiSpriteBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP@@@Z @ 0x18009E360 (-ProcessUpdate@CGdiSpriteBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP@@@Z.c)
 *     ?ProcessUpdateSurface@CGdiSpriteBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_UPDATESURFACE@@@Z @ 0x18009E3F0 (-ProcessUpdateSurface@CGdiSpriteBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_UPDA.c)
 *     ?ProcessUpdateMargins@CGdiSpriteBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_UPDATEMARGINS@@@Z @ 0x18009E430 (-ProcessUpdateMargins@CGdiSpriteBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_UPDA.c)
 *     ?SetOuterConeColor@CCompositionSpotLight@@AEAAXMMMM@Z @ 0x1800A08D0 (-SetOuterConeColor@CCompositionSpotLight@@AEAAXMMMM@Z.c)
 *     ?SetOuterConeAngle@CCompositionSpotLight@@AEAAXM@Z @ 0x1800A092C (-SetOuterConeAngle@CCompositionSpotLight@@AEAAXM@Z.c)
 *     ?SetOffset@CCompositionSpotLight@@AEAAXMMM@Z @ 0x1800A0964 (-SetOffset@CCompositionSpotLight@@AEAAXMMM@Z.c)
 *     ?SetInnerConeColor@CCompositionSpotLight@@AEAAXMMMM@Z @ 0x1800A09CC (-SetInnerConeColor@CCompositionSpotLight@@AEAAXMMMM@Z.c)
 *     ?SetInnerConeAngle@CCompositionSpotLight@@AEAAXM@Z @ 0x1800A0A28 (-SetInnerConeAngle@CCompositionSpotLight@@AEAAXM@Z.c)
 *     ?SetAttenuation0@CCompositionPointLight@@AEAAXM@Z @ 0x1800A0A50 (-SetAttenuation0@CCompositionPointLight@@AEAAXM@Z.c)
 *     ?ProcessSetCoordinateSpace@CCompositionSpotLight@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONSPOTLIGHT_SETCOORDINATESPACE@@@Z @ 0x1800A0D04 (-ProcessSetCoordinateSpace@CCompositionSpotLight@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIO.c)
 *     ?ProcessSetBindingBroken@CBaseExpression@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x1800A22D0 (-ProcessSetBindingBroken@CBaseExpression@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SET.c)
 *     ?ProcessSetTracingCookie@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETTRACINGCOOKIE@@@Z @ 0x1800A25A4 (-ProcessSetTracingCookie@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SET.c)
 *     ?ProcessSetTarget@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETTARGET@@@Z @ 0x1800A25F8 (-ProcessSetTarget@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETTARGET@.c)
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x1800A3410 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 *     ?ProcessUpdatePlaybackState@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_UPDATEPLAYBACKSTATE@@@Z @ 0x1800A3724 (-ProcessUpdatePlaybackState@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIM.c)
 *     ?ProcessSetSeekState@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETSEEKSTATE@@@Z @ 0x1800A3770 (-ProcessSetSeekState@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_S.c)
 *     ?IsOfType@CKeyframeAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800A37F0 (-IsOfType@CKeyframeAnimation@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x1800A5060 (-ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_.c)
 *     ?ProcessSetColorProperty@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE_SETCOLORPROPERTY@@@Z @ 0x1800A55EC (-ProcessSetColorProperty@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE_S.c)
 *     ?ProcessSetMatrix4x4Property@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE_SETMATRIX4X4PROPERTY@@@Z @ 0x1800A5658 (-ProcessSetMatrix4x4Property@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBA.c)
 *     ?ProcessSetMatrix3x2Property@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE_SETMATRIX3X2PROPERTY@@@Z @ 0x1800A56FC (-ProcessSetMatrix3x2Property@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBA.c)
 *     ?ProcessSetScalarProperty@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE_SETSCALARPROPERTY@@@Z @ 0x1800A578C (-ProcessSetScalarProperty@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE_.c)
 *     ?ProcessSetVector2Property@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE_SETVECTOR2PROPERTY@@@Z @ 0x1800A57F0 (-ProcessSetVector2Property@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE.c)
 *     ?ProcessSetVector3Property@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE_SETVECTOR3PROPERTY@@@Z @ 0x1800A584C (-ProcessSetVector3Property@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE.c)
 *     ?IsOfType@CPropertyBag@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800A69C0 (-IsOfType@CPropertyBag@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CExpression@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800A75E0 (-IsOfType@CExpression@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?ProcessSetReferenceInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETREFERENCEINFO@@PEBXI@Z @ 0x1800A82DC (-ProcessSetReferenceInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETREFERENC.c)
 *     ?ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETNODESINFO@@@Z @ 0x1800A83FC (-ProcessSetNodesInfo@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETNODESINFO@@@.c)
 *     ?ProcessSetSources@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETSOURCES@@PEBXI@Z @ 0x1800A85C4 (-ProcessSetSources@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETSOURCES@@PEBXI.c)
 *     ?DetachFromChannel@CResource@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1800A9760 (-DetachFromChannel@CResource@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800A9868 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A9B40 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?Release@CResource@@UEAAKXZ @ 0x1800A9F20 (-Release@CResource@@UEAAKXZ.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AA2B0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?DeleteHandle@CResourceTable@@QEAAJI@Z @ 0x1800AA4CC (-DeleteHandle@CResourceTable@@QEAAJI@Z.c)
 *     ?Channel_SetCallbackId@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_SETCALLBACKID@@@Z @ 0x1800AB174 (-Channel_SetCallbackId@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CH.c)
 *     ?Channel_DuplicateHandleOnTarget@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_DUPLICATEHANDLEONTARGET@@@Z @ 0x1800AB1D0 (-Channel_DuplicateHandleOnTarget@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEB.c)
 *     ?Channel_DuplicateHandleOnSource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_DUPLICATEHANDLEONSOURCE@@@Z @ 0x1800AB244 (-Channel_DuplicateHandleOnSource@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEB.c)
 *     ?Channel_RoundTripRequest@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_ROUNDTRIPREQUEST@@@Z @ 0x1800AB2B8 (-Channel_RoundTripRequest@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD.c)
 *     ?Channel_SyncFlush@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_SYNCFLUSH@@@Z @ 0x1800AB374 (-Channel_SyncFlush@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNE.c)
 *     ?Partition_TelemetryAnimationScenarioUnreference@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_TELEMETRYANIMATIONSCENARIOUNREFERENCE@@@Z @ 0x1800AB3EC (-Partition_TelemetryAnimationScenarioUnreference@CComposition@@AEAAJPEAVCChannelContext@@PEAVCRe.c)
 *     ?Partition_TelemetryAnimationScenarioReference@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_TELEMETRYANIMATIONSCENARIOREFERENCE@@@Z @ 0x1800AB42C (-Partition_TelemetryAnimationScenarioReference@CComposition@@AEAAJPEAVCChannelContext@@PEAVCReso.c)
 *     ?Partition_TelemetryAnimationScenarioBegin@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_TELEMETRYANIMATIONSCENARIOBEGIN@@PEBXI@Z @ 0x1800AB46C (-Partition_TelemetryAnimationScenarioBegin@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResource.c)
 *     ?Partition_TelemetrySetApplicationId@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_TELEMETRYSETAPPLICATIONID@@PEBXI@Z @ 0x1800AB4F0 (-Partition_TelemetrySetApplicationId@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@.c)
 *     ?Partition_SwitchRemotingMode@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SWITCHREMOTINGMODE@@@Z @ 0x1800AB560 (-Partition_SwitchRemotingMode@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMI.c)
 *     ?Partition_SetCurrentMmTask@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SETCURRENTMMTASK@@@Z @ 0x1800AB5E0 (-Partition_SetCurrentMmTask@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILC.c)
 *     ?SetColor@CCompositionAmbientLight@@AEAAXMMMM@Z @ 0x1800B11F4 (-SetColor@CCompositionAmbientLight@@AEAAXMMMM@Z.c)
 *     ?RemoveAllTargets@CCompositionLight@@AEAAJW4LightBehavior@@@Z @ 0x1800B1318 (-RemoveAllTargets@CCompositionLight@@AEAAJW4LightBehavior@@@Z.c)
 *     ?AddTargets@CCompositionLight@@AEAAJPEAVCResourceTable@@IPEBXIW4LightBehavior@@@Z @ 0x1800B13B4 (-AddTargets@CCompositionLight@@AEAAJPEAVCResourceTable@@IPEBXIW4LightBehavior@@@Z.c)
 *     ?ProcessUpdate@CTransformGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORMGROUP@@PEBXI@Z @ 0x1800B44B8 (-ProcessUpdate@CTransformGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORMGROUP@@PEBXI@Z.c)
 *     ?ProcessUpdate@CTranslateTransform@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSLATETRANSFORM@@@Z @ 0x1800B4754 (-ProcessUpdate@CTranslateTransform@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSLATETRANSFORM@@@Z.c)
 *     ?ProcessSetComponents@CManipulationTransform@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATIONTRANSFORM_SETCOMPONENTS@@@Z @ 0x1800B4854 (-ProcessSetComponents@CManipulationTransform@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATIONTR.c)
 *     ?ProcessUpdate@CMatrixTransform@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MATRIXTRANSFORM@@@Z @ 0x1800B4CAC (-ProcessUpdate@CMatrixTransform@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MATRIXTRANSFORM@@@Z.c)
 *     ?ProcessUpdate@CSkewTransform@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SKEWTRANSFORM@@@Z @ 0x1800B4DA0 (-ProcessUpdate@CSkewTransform@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SKEWTRANSFORM@@@Z.c)
 *     ?IsOfType@CPrimitiveGroupLayerClip@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800B53B0 (-IsOfType@CPrimitiveGroupLayerClip@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?ProcessSetConstantOpacity@CAtlasedRectsMesh@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSMESH_SETCONSTANTOPACITY@@@Z @ 0x1800B609C (-ProcessSetConstantOpacity@CAtlasedRectsMesh@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSME.c)
 *     ?ProcessUpdate@CAtlasedRectsMesh@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSMESH@@PEBXI@Z @ 0x1800B60F0 (-ProcessUpdate@CAtlasedRectsMesh@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSMESH@@PEBXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCResource@@$0A@@@QEAAJPEFBQEAVCResource@@I@Z @ 0x1800B664C (-AddMultipleAndSet@-$DynArray@PEAVCResource@@$0A@@@QEAAJPEFBQEAVCResource@@I@Z.c)
 *     ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800B7338 (-D2DInterpolationModeFromMilInterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapIn.c)
 *     ?ProcessRemoveBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_REMOVEBINDING@@@Z @ 0x1800B9950 (-ProcessRemoveBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_REMOVEBI.c)
 *     ?ProcessAddBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_ADDBINDING@@@Z @ 0x1800B9AD4 (-ProcessAddBinding@CBaseAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEANIMATION_ADDBINDING@.c)
 *     ?ProcessUpdate@CDcompRenderTargetGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGETGROUP@@PEBXI@Z @ 0x1800C0220 (-ProcessUpdate@CDcompRenderTargetGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGETGRO.c)
 *     ?ProcessUpdateTransform@CDcompRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGET_UPDATETRANSFORM@@@Z @ 0x1800C0A28 (-ProcessUpdateTransform@CDcompRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGE.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??1CWorkBuffer@Internal@FastRegion@@QEAA@XZ @ 0x18011BDAC (--1CWorkBuffer@Internal@FastRegion@@QEAA@XZ.c)
 *     McTemplateU0x @ 0x180126C58 (McTemplateU0x.c)
 *     ?Channel_EnableDebugCounter@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_ENABLEDEBUGCOUNTER@@@Z @ 0x180127D60 (-Channel_EnableDebugCounter@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILC.c)
 *     ?Channel_VisualCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_VISUALCAPTUREBITS@@@Z @ 0x180127D88 (-Channel_VisualCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCM.c)
 *     ?FailFastOnMalformedPacket@CComposition@@AEAAXW4MILCMD_CRASHID@@PEBX@Z @ 0x180127F00 (-FailFastOnMalformedPacket@CComposition@@AEAAXW4MILCMD_CRASHID@@PEBX@Z.c)
 *     ?Partition_DesktopCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_DESKTOPCAPTUREBITS@@@Z @ 0x180128660 (-Partition_DesktopCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMI.c)
 *     ?Partition_ForceRender@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_FORCERENDER@@@Z @ 0x1801287A0 (-Partition_ForceRender@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PA.c)
 *     ?Partition_RegisterForNotifications@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_REGISTERFORNOTIFICATIONS@@@Z @ 0x180128838 (-Partition_RegisterForNotifications@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@.c)
 *     ?Partition_SetCursor@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SETCURSOR@@@Z @ 0x18012899C (-Partition_SetCursor@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PART.c)
 *     ?Partition_SetExcludeFromDDA@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SETEXCLUDEFROMDDA@@@Z @ 0x180128A18 (-Partition_SetExcludeFromDDA@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMIL.c)
 *     ?Partition_SetMagnifier@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SETMAGNIFIER@@@Z @ 0x180128ABC (-Partition_SetMagnifier@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_P.c)
 *     ?Partition_Synchronize@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SYNCHRONIZE@@@Z @ 0x180128B60 (-Partition_Synchronize@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PA.c)
 *     ?Partition_TelemetryTouchInteractionBegin@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_TELEMETRYTOUCHINTERACTIONBEGIN@@PEBXI@Z @ 0x180128C40 (-Partition_TelemetryTouchInteractionBegin@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceT.c)
 *     ?Partition_TelemetryTouchInteractionUpdate@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_TELEMETRYTOUCHINTERACTIONUPDATE@@@Z @ 0x180128D58 (-Partition_TelemetryTouchInteractionUpdate@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResource.c)
 *     McTemplateU0qxqx @ 0x180129178 (McTemplateU0qxqx.c)
 *     ?ProcessCreate@CDcompRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGET_CREATE@@@Z @ 0x1801324D4 (-ProcessCreate@CDcompRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DCOMPRENDERTARGET_CREATE@.c)
 *     ?ProcessCreate@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPRENDERTARGET_CREATE@@@Z @ 0x18013405C (-ProcessCreate@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPRENDERTARGET_CRE.c)
 *     ?ProcessDisableStereoRendering@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPRENDERTARGET_DISABLESTEREORENDERING@@@Z @ 0x180134148 (-ProcessDisableStereoRendering@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOP.c)
 *     ?ProcessSetScreenCursor@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPRENDERTARGET_SETSCREENCURSOR@@@Z @ 0x1801342BC (-ProcessSetScreenCursor@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPRENDERT.c)
 *     ?ProcessUpdateMonitorRotation@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPRENDERTARGET_UPDATEMONITORROTATION@@@Z @ 0x1801343BC (-ProcessUpdateMonitorRotation@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DESKTOPR.c)
 *     ?SetSDRBoost@CHwndRenderTarget@@UEAAXM@Z @ 0x180136A50 (-SetSDRBoost@CHwndRenderTarget@@UEAAXM@Z.c)
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x180137474 (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPC.c)
 *     ?ProcessUpdateTargetBounds@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPCHAINRENDERTARGET_UPDATETARGETBOUNDS@@@Z @ 0x180137780 (-ProcessUpdateTargetBounds@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_I.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x180137C48 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 *     ?ProcessCaptureBits@CMagnifierRenderTarget@@QEAAJPEAVCChannelContext@@PEBUMILCMD_MAGNIFIERRENDERTARGET_CAPTUREBITS@@@Z @ 0x180138358 (-ProcessCaptureBits@CMagnifierRenderTarget@@QEAAJPEAVCChannelContext@@PEBUMILCMD_MAGNIFIERRENDER.c)
 *     ?ProcessCreate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MAGNIFIERRENDERTARGET_CREATE@@@Z @ 0x18013857C (-ProcessCreate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MAGNIFIERRENDERTARGET.c)
 *     ?ProcessSetColorTransform@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MAGNIFIERRENDERTARGET_SETCOLORTRANSFORM@@@Z @ 0x1801386A0 (-ProcessSetColorTransform@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MAGNIFIERR.c)
 *     ?ProcessSetResampleMode@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MAGNIFIERRENDERTARGET_SETRESAMPLEMODE@@@Z @ 0x18013873C (-ProcessSetResampleMode@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MAGNIFIERREN.c)
 *     ?ProcessSetSlicer@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MAGNIFIERRENDERTARGET_SETSLICER@@@Z @ 0x180138764 (-ProcessSetSlicer@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MAGNIFIERRENDERTAR.c)
 *     ?ProcessSetTransform@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MAGNIFIERRENDERTARGET_SETTRANSFORM@@@Z @ 0x1801387E0 (-ProcessSetTransform@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MAGNIFIERRENDER.c)
 *     ?ProcessUpdate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MAGNIFIERRENDERTARGET@@@Z @ 0x180138884 (-ProcessUpdate@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MAGNIFIERRENDERTARGET.c)
 *     ?ProcessCreate@CPlaneCaptureRenderTargetEngine@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PLANECAPTURERENDERTARGET_CREATE@@@Z @ 0x180139CDC (-ProcessCreate@CPlaneCaptureRenderTargetEngine@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PLANECAPTURE.c)
 *     ?ProcessSetRoot@CPlaneCaptureRenderTargetEngine@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PLANECAPTURERENDERTARGET_SETROOT@@@Z @ 0x180139D90 (-ProcessSetRoot@CPlaneCaptureRenderTargetEngine@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PLANECAPTUR.c)
 *     ?ProcessCreate@CRemotingRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_REMOTINGRENDERTARGET_CREATE@@@Z @ 0x18013A088 (-ProcessCreate@CRemotingRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_REMOTINGRENDERTARGET_C.c)
 *     ?ProcessSetRoot@CRemotingRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_REMOTINGRENDERTARGET_SETROOT@@@Z @ 0x18013A128 (-ProcessSetRoot@CRemotingRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_REMOTINGRENDERTARGET_.c)
 *     ?ProcessSetFilterList@CRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERTARGET_SETFILTERLIST@@@Z @ 0x18013A1C0 (-ProcessSetFilterList@CRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERTARGET_SETFILTERL.c)
 *     ?ProcessAppend@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_APPEND@@PEBXI@Z @ 0x180156044 (-ProcessAppend@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_APPEND@@PEBXI@Z.c)
 *     ?ProcessSetHandoff@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETHANDOFF@@@Z @ 0x180156180 (-ProcessSetHandoff@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETHANDOFF@@@Z.c)
 *     ?ProcessSetTrigger@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETTRIGGER@@@Z @ 0x180156218 (-ProcessSetTrigger@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_SETTRIGGER@@@Z.c)
 *     ?ProcessTelemetrySetAnimationScenarioGUID@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATION_TELEMETRYSETANIMATIONSCENARIOGUID@@@Z @ 0x180156324 (-ProcessTelemetrySetAnimationScenarioGUID@CAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMAT.c)
 *     ?LogDebugPropertyUpdates@CAnimationLoggingManager@@QEAAJ_K@Z @ 0x180157BCC (-LogDebugPropertyUpdates@CAnimationLoggingManager@@QEAAJ_K@Z.c)
 *     ?ProcessSetAnimationEnded@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATIONLOGGINGMANAGER_SETANIMATIONENDED@@@Z @ 0x180157D18 (-ProcessSetAnimationEnded@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATIO.c)
 *     ?ProcessSetComment@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATIONLOGGINGMANAGER_SETCOMMENT@@PEBXI@Z @ 0x180157D44 (-ProcessSetComment@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATIONLOGGIN.c)
 *     ?ProcessSetPropertyUpdate@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATIONLOGGINGMANAGER_SETPROPERTYUPDATE@@@Z @ 0x180157E5C (-ProcessSetPropertyUpdate@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATIO.c)
 *     ?ProcessTrigger@CAnimationTrigger@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATIONTRIGGER_TRIGGER@@@Z @ 0x180158350 (-ProcessTrigger@CAnimationTrigger@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANIMATIONTRIGGER_TRIGGER@.c)
 *     ?ProcessSetDebugInfo@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETDEBUGINFO@@PEBXI@Z @ 0x1801591C0 (-ProcessSetDebugInfo@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETDEBU.c)
 *     ?ProcessFreezeVisualSurface@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUALIMAGE_FREEZEVISUALSURFACE@@@Z @ 0x1801595E4 (-ProcessFreezeVisualSurface@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUAL.c)
 *     ?ProcessSetViewboxBottom@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUALIMAGE_SETVIEWBOXBOTTOM@@@Z @ 0x180159624 (-ProcessSetViewboxBottom@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUALIMA.c)
 *     ?ProcessSetViewboxLeft@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUALIMAGE_SETVIEWBOXLEFT@@@Z @ 0x18015965C (-ProcessSetViewboxLeft@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUALIMAGE.c)
 *     ?ProcessSetViewboxRight@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUALIMAGE_SETVIEWBOXRIGHT@@@Z @ 0x180159694 (-ProcessSetViewboxRight@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUALIMAG.c)
 *     ?ProcessSetViewboxTop@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUALIMAGE_SETVIEWBOXTOP@@@Z @ 0x1801596CC (-ProcessSetViewboxTop@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUALIMAGE_.c)
 *     ?SetIntensity@CCompositionAmbientLight@@AEAAXM@Z @ 0x18015A06C (-SetIntensity@CCompositionAmbientLight@@AEAAXM@Z.c)
 *     ?ProcessSetCreationParams@CCompositionCubeMap@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONCUBEMAP_SETCREATIONPARAMS@@@Z @ 0x18015A80C (-ProcessSetCreationParams@CCompositionCubeMap@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONCU.c)
 *     ?ProcessSetSurfaces@CCompositionCubeMap@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONCUBEMAP_SETSURFACES@@PEBXI@Z @ 0x18015A8C4 (-ProcessSetSurfaces@CCompositionCubeMap@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONCUBEMAP_.c)
 *     ?ProcessSetCoordinateSpace@CCompositionDistantLight@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONDISTANTLIGHT_SETCOORDINATESPACE@@@Z @ 0x18015ADE8 (-ProcessSetCoordinateSpace@CCompositionDistantLight@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSI.c)
 *     ?SetColor@CCompositionDistantLight@@AEAAXMMMM@Z @ 0x18015AE98 (-SetColor@CCompositionDistantLight@@AEAAXMMMM@Z.c)
 *     ?SetDirection@CCompositionDistantLight@@AEAAXMMM@Z @ 0x18015AF1C (-SetDirection@CCompositionDistantLight@@AEAAXMMM@Z.c)
 *     ?SetIntensity@CCompositionDistantLight@@AEAAXM@Z @ 0x18015AFAC (-SetIntensity@CCompositionDistantLight@@AEAAXM@Z.c)
 *     ?ProcessSetCoordinateSpace@CCompositionPointLight@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONPOINTLIGHT_SETCOORDINATESPACE@@@Z @ 0x18015C1BC (-ProcessSetCoordinateSpace@CCompositionPointLight@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITI.c)
 *     ?SetAttenuation1@CCompositionPointLight@@AEAAXM@Z @ 0x18015C26C (-SetAttenuation1@CCompositionPointLight@@AEAAXM@Z.c)
 *     ?SetColor@CCompositionPointLight@@AEAAXMMMM@Z @ 0x18015C2A4 (-SetColor@CCompositionPointLight@@AEAAXMMMM@Z.c)
 *     ?SetIntensity@CCompositionPointLight@@AEAAXM@Z @ 0x18015C328 (-SetIntensity@CCompositionPointLight@@AEAAXM@Z.c)
 *     ?SetOffset@CCompositionPointLight@@AEAAXMMM@Z @ 0x18015C360 (-SetOffset@CCompositionPointLight@@AEAAXMMM@Z.c)
 *     ?ProcessSetFaceVisibilities@CCompositionSkyBoxBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONSKYBOXBRUSH_SETFACEVISIBILITIES@@@Z @ 0x18015D194 (-ProcessSetFaceVisibilities@CCompositionSkyBoxBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSI.c)
 *     ?ProcessSetIsLocal@CCompositionSkyBoxBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONSKYBOXBRUSH_SETISLOCAL@@@Z @ 0x18015D1C0 (-ProcessSetIsLocal@CCompositionSkyBoxBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONSKYBO.c)
 *     ?ProcessSetSource@CCompositionSkyBoxBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONSKYBOXBRUSH_SETSOURCE@@@Z @ 0x18015D1F0 (-ProcessSetSource@CCompositionSkyBoxBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONSKYBOX.c)
 *     ?ProcessSetTransform@CCompositionSkyBoxBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONSKYBOXBRUSH_SETTRANSFORM@@@Z @ 0x18015D2AC (-ProcessSetTransform@CCompositionSkyBoxBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONSKY.c)
 *     ?SetOffset@CCompositionSkyBoxBrush@@AEAAXMMM@Z @ 0x18015D360 (-SetOffset@CCompositionSkyBoxBrush@@AEAAXMMM@Z.c)
 *     ?SetSize@CCompositionSkyBoxBrush@@AEAAXM@Z @ 0x18015D414 (-SetSize@CCompositionSkyBoxBrush@@AEAAXM@Z.c)
 *     ?SetAttenuation2@CCompositionPointLight@@AEAAXM@Z @ 0x18015D93C (-SetAttenuation2@CCompositionPointLight@@AEAAXM@Z.c)
 *     ?SetDirection@CCompositionSpotLight@@AEAAXMMM@Z @ 0x18015D974 (-SetDirection@CCompositionSpotLight@@AEAAXMMM@Z.c)
 *     ?SetInnerConeIntensity@CCompositionSpotLight@@AEAAXM@Z @ 0x18015DA04 (-SetInnerConeIntensity@CCompositionSpotLight@@AEAAXM@Z.c)
 *     ?SetOuterConeIntensity@CCompositionSpotLight@@AEAAXM@Z @ 0x18015DA3C (-SetOuterConeIntensity@CCompositionSpotLight@@AEAAXM@Z.c)
 *     ?ProcessAddConditionAnimationResources@CConditionalExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CONDITIONALEXPRESSION_ADDCONDITIONANIMATIONRESOURCES@@PEBXI@Z @ 0x18015EC48 (-ProcessAddConditionAnimationResources@CConditionalExpression@@QEAAJPEAVCResourceTable@@PEBUMILC.c)
 *     ?ProcessSetDefaultAnimation@CConditionalExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CONDITIONALEXPRESSION_SETDEFAULTANIMATION@@@Z @ 0x18015EF50 (-ProcessSetDefaultAnimation@CConditionalExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CONDITIO.c)
 *     ?ProcessSetMask@CDropShadow@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DROPSHADOW_SETMASK@@@Z @ 0x180160EC4 (-ProcessSetMask@CDropShadow@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DROPSHADOW_SETMASK@@@Z.c)
 *     ?SetBlurRadius@CDropShadow@@AEAAXM@Z @ 0x18016103C (-SetBlurRadius@CDropShadow@@AEAAXM@Z.c)
 *     ?SetColor@CDropShadow@@AEAAXMMMM@Z @ 0x1801610BC (-SetColor@CDropShadow@@AEAAXMMMM@Z.c)
 *     ?SetOffset@CDropShadow@@AEAAXMMM@Z @ 0x1801611B0 (-SetOffset@CDropShadow@@AEAAXMMM@Z.c)
 *     ?SetOpacity@CDropShadow@@AEAAXM@Z @ 0x180161218 (-SetOpacity@CDropShadow@@AEAAXM@Z.c)
 *     ?ProcessSetReferenceStrings@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETREFERENCESTRINGS@@PEBXI@Z @ 0x1801626C8 (-ProcessSetReferenceStrings@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETREFER.c)
 *     ?ProcessUpdateInputs@CFilterEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FILTEREFFECT_UPDATEINPUTS@@PEBXI@Z @ 0x1801644C4 (-ProcessUpdateInputs@CFilterEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FILTEREFFECT_UPDATEINPUT.c)
 *     ?ProcessCreate@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_CREATE@@@Z @ 0x1801657FC (-ProcessCreate@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_CREATE@@@Z.c)
 *     ?ProcessInitializeSharedDataObjects@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_INITIALIZESHAREDDATAOBJECTS@@@Z @ 0x180165874 (-ProcessInitializeSharedDataObjects@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_IN.c)
 *     ?ProcessRequestSharedHandle@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_REQUESTSHAREDHANDLE@@@Z @ 0x1801659C0 (-ProcessRequestSharedHandle@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_REQUESTSHA.c)
 *     ?ProcessResetSourceFrameCounters@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_RESETSOURCEFRAMECOUNTERS@@@Z @ 0x180165A3C (-ProcessResetSourceFrameCounters@CFlipChain@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLIPCHAIN_RESET.c)
 *     ?ProcessPropertiesUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GENERICINK_PROPERTIESUPDATE@@PEBXI@Z @ 0x180166FB8 (-ProcessPropertiesUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GENERICINK_PROPERTIESU.c)
 *     ?ProcessSegmentUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GENERICINK_SEGMENTUPDATE@@PEBXI@Z @ 0x18016708C (-ProcessSegmentUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GENERICINK_SEGMENTUPDATE@.c)
 *     ?ProcessTipPointBuffer@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GENERICINK_TIPPOINTBUFFER@@@Z @ 0x1801672AC (-ProcessTipPointBuffer@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GENERICINK_TIPPOINTBUFFE.c)
 *     ?ProcessSetExtendMode@CGradientBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GRADIENTBRUSH_SETEXTENDMODE@@@Z @ 0x1801674FC (-ProcessSetExtendMode@CGradientBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GRADIENTBRUSH_SETEXTEN.c)
 *     ?ProcessUpdate@CHwndBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_HWNDBITMAP@@@Z @ 0x1801680B0 (-ProcessUpdate@CHwndBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_HWNDBITMAP@@@Z.c)
 *     ?ProcessSetInjectionData@CInjectionAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INJECTIONANIMATION_SETINJECTIONDATA@@@Z @ 0x1801682C4 (-ProcessSetInjectionData@CInjectionAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INJECTIONANIMA.c)
 *     ?ProcessBasicStateUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_BASICSTATEUPDATE@@@Z @ 0x180168A4C (-ProcessBasicStateUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_BASICSTATEUPDATE@@@Z.c)
 *     ?ProcessSegmentCountUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_SEGMENTCOUNTUPDATE@@@Z @ 0x180168BB8 (-ProcessSegmentCountUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_SEGMENTCOUNTUPDATE@@@Z.c)
 *     ?ProcessSegmentUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_SEGMENTUPDATE@@@Z @ 0x180168D1C (-ProcessSegmentUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_SEGMENTUPDATE@@@Z.c)
 *     ?ProcessStartPointUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_STARTPOINTUPDATE@@@Z @ 0x180168F1C (-ProcessStartPointUpdate@CInk@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INK_STARTPOINTUPDATE@@@Z.c)
 *     ?ProcessCaptureManipulationInCompositor@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_CAPTUREMANIPULATIONINCOMPOSITOR@@@Z @ 0x1801698BC (-ProcessCaptureManipulationInCompositor@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERA.c)
 *     ?ProcessCapturePointer@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_CAPTUREPOINTER@@@Z @ 0x180169958 (-ProcessCapturePointer@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_CAPTUREPOIN.c)
 *     ?ProcessDisableOutputPrediction@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_DISABLEOUTPUTPREDICTION@@@Z @ 0x1801699E4 (-ProcessDisableOutputPrediction@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_DI.c)
 *     ?ProcessSetManipulation@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_SETMANIPULATION@@@Z @ 0x180169B48 (-ProcessSetManipulation@CInteraction@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION_SETMANIPUL.c)
 *     ?ProcessApplyPositionImpulse@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_APPLYPOSITIONIMPULSE@@@Z @ 0x18016C54C (-ProcessApplyPositionImpulse@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIO.c)
 *     ?ProcessApplyPositionShift@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_APPLYPOSITIONSHIFT@@PEBXI@Z @ 0x18016C5C8 (-ProcessApplyPositionShift@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONT.c)
 *     ?ProcessApplyScaleImpulse@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_APPLYSCALEIMPULSE@@@Z @ 0x18016C670 (-ProcessApplyScaleImpulse@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTR.c)
 *     ?ProcessDwmRestartCompleted@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_DWMRESTARTCOMPLETED@@@Z @ 0x18016C6F8 (-ProcessDwmRestartCompleted@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTION.c)
 *     ?ProcessDwmStarted@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_DWMSTARTED@@@Z @ 0x18016C744 (-ProcessDwmStarted@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_D.c)
 *     ?ProcessSetInertiaCenterpointX@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETINERTIACENTERPOINTX@@@Z @ 0x18016C7C4 (-ProcessSetInertiaCenterpointX@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACT.c)
 *     ?ProcessSetInertiaCenterpointY@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETINERTIACENTERPOINTY@@@Z @ 0x18016C840 (-ProcessSetInertiaCenterpointY@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACT.c)
 *     ?ProcessSetInertiaDecayRates@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETINERTIADECAYRATES@@@Z @ 0x18016C8BC (-ProcessSetInertiaDecayRates@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIO.c)
 *     ?ProcessSetInertiaModifierAnimations@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETINERTIAMODIFIERANIMATIONS@@PEBXI@Z @ 0x18016C914 (-ProcessSetInertiaModifierAnimations@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_IN.c)
 *     ?ProcessSetManipulations@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETMANIPULATIONS@@PEBXI@Z @ 0x18016CA44 (-ProcessSetManipulations@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRA.c)
 *     ?ProcessSetMaxPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETMAXPOSITION@@@Z @ 0x18016CC90 (-ProcessSetMaxPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACK.c)
 *     ?ProcessSetMinPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETMINPOSITION@@@Z @ 0x18016CCE4 (-ProcessSetMinPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACK.c)
 *     ?ProcessSetRequestedDeltaPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETREQUESTEDDELTAPOSITION@@@Z @ 0x18016CD38 (-ProcessSetRequestedDeltaPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTER.c)
 *     ?ProcessSetRequestedPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITION@@@Z @ 0x18016CDB0 (-ProcessSetRequestedPosition@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIO.c)
 *     ?ProcessSetRequestedPositionAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITIONANIMATION@@@Z @ 0x18016CE24 (-ProcessSetRequestedPositionAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_I.c)
 *     ?ProcessSetRequestedScale@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALE@@@Z @ 0x18016CF0C (-ProcessSetRequestedScale@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTR.c)
 *     ?ProcessSetRequestedScaleAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALEANIMATION@@@Z @ 0x18016CF88 (-ProcessSetRequestedScaleAnimation@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INTE.c)
 *     ?SetMaxScale@CInteractionTracker@@AEAAXM@Z @ 0x18016DF10 (-SetMaxScale@CInteractionTracker@@AEAAXM@Z.c)
 *     ?SetMinScale@CInteractionTracker@@AEAAXM@Z @ 0x18016E0B4 (-SetMinScale@CInteractionTracker@@AEAAXM@Z.c)
 *     ??$SetExpressionArray@UMILCMD_BASEEXPRESSION_ADDINITIALVALUEEXPRESSIONS@@V?$DynArrayIANoCtor@PEAVCBaseExpression@@$01$0A@@@@CBaseExpression@@IEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_ADDINITIALVALUEEXPRESSIONS@@PEBXIPEAV?$DynArrayIANoCtor@PEAVCBaseExpression@@$01$0A@@@PEAI@Z @ 0x18016F308 (--$SetExpressionArray@UMILCMD_BASEEXPRESSION_ADDINITIALVALUEEXPRESSIONS@@V-$DynArrayIANoCtor@PEA.c)
 *     ?ProcessSetShadow@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LAYERVISUAL_SETSHADOW@@@Z @ 0x18016FFAC (-ProcessSetShadow@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LAYERVISUAL_SETSHADOW@@@Z.c)
 *     ?SetEndPoint@CLinearGradientBrush@@AEAAXAEBUD2D_POINT_2F@@@Z @ 0x1801700D8 (-SetEndPoint@CLinearGradientBrush@@AEAAXAEBUD2D_POINT_2F@@@Z.c)
 *     ?SetStartPoint@CLinearGradientBrush@@AEAAXAEBUD2D_POINT_2F@@@Z @ 0x180170174 (-SetStartPoint@CLinearGradientBrush@@AEAAXAEBUD2D_POINT_2F@@@Z.c)
 *     ?InjectManipulation@CManipulation@@QEAAJAEBUInjectManipulationArgs@@@Z @ 0x18017055C (-InjectManipulation@CManipulation@@QEAAJAEBUInjectManipulationArgs@@@Z.c)
 *     ?ProcessSetSourceModifiers@CManipulation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATION_SETSOURCEMODIFIERS@@@Z @ 0x1801707A0 (-ProcessSetSourceModifiers@CManipulation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATION_SETSO.c)
 *     ?ProcessUpdateEdgyConfiguration@CManipulation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATION_UPDATEEDGYCONFIGURATION@@@Z @ 0x180170880 (-ProcessUpdateEdgyConfiguration@CManipulation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATION_.c)
 *     ?ProcessUpdateSettings@CManipulation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATION_UPDATESETTINGS@@@Z @ 0x1801709EC (-ProcessUpdateSettings@CManipulation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATION_UPDATESET.c)
 *     ?ProcessSetConstantOpacity@CMeshGeometry2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MESHGEOMETRY2D_SETCONSTANTOPACITY@@@Z @ 0x180172488 (-ProcessSetConstantOpacity@CMeshGeometry2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MESHGEOMETRY2D_S.c)
 *     ?ProcessSetAttractionParameters@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NATURALANIMATION_SETATTRACTIONPARAMETERS@@@Z @ 0x180173B8C (-ProcessSetAttractionParameters@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NATURALAN.c)
 *     ?ProcessSetBounceParameters@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NATURALANIMATION_SETBOUNCEPARAMETERS@@@Z @ 0x180173D30 (-ProcessSetBounceParameters@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NATURALANIMAT.c)
 *     ?ProcessSetCommonParameters@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NATURALANIMATION_SETCOMMONPARAMETERS@@@Z @ 0x180173DEC (-ProcessSetCommonParameters@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NATURALANIMAT.c)
 *     ?ProcessSetSpringParameters@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NATURALANIMATION_SETSPRINGPARAMETERS@@@Z @ 0x180173E8C (-ProcessSetSpringParameters@CNaturalAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_NATURALANIMAT.c)
 *     ?ProcessSetValue@CPrimitiveColor@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVECOLOR_SETVALUE@@@Z @ 0x180174A2C (-ProcessSetValue@CPrimitiveColor@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVECOLOR_SETVALUE@@@.c)
 *     ?ProcessSetBooleanProperty@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE_SETBOOLEANPROPERTY@@@Z @ 0x180175390 (-ProcessSetBooleanProperty@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE.c)
 *     ?ProcessSetQuaternionProperty@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE_SETQUATERNIONPROPERTY@@@Z @ 0x1801753F8 (-ProcessSetQuaternionProperty@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGB.c)
 *     ?ProcessSetVector4Property@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE_SETVECTOR4PROPERTY@@@Z @ 0x18017545C (-ProcessSetVector4Property@CPropertyBagBase@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROPERTYBAGBASE.c)
 *     ?ProcessSetValue@CScalar@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SCALAR_SETVALUE@@@Z @ 0x180175C34 (-ProcessSetValue@CScalar@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SCALAR_SETVALUE@@@Z.c)
 *     ?ProcessSetTransformMatrix@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUMILCMD_SNAPSHOT_SETTRANSFORMMATRIX@@@Z @ 0x180176020 (-ProcessSetTransformMatrix@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUMILCMD_SNAPSHOT_SETTRANSFORMM.c)
 *     ?ProcessUpdate@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUMILCMD_SNAPSHOT@@@Z @ 0x180176060 (-ProcessUpdate@CSnapshot@@UEAAJPEBVCResourceTable@@PEBUMILCMD_SNAPSHOT@@@Z.c)
 *     ?ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPRITEVISUAL_SETSHADOW@@@Z @ 0x180176128 (-ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPRITEVISUAL_SETSHADOW@@@Z.c)
 *     ?ProcessUpdateTable@CTableTransferEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TABLETRANSFEREFFECT_UPDATETABLE@@PEBXI@Z @ 0x1801766E0 (-ProcessUpdateTable@CTableTransferEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TABLETRANSFEREFFEC.c)
 *     ?ProcessSetSourceModifications@CTileLegacyMilBrush@@QEAAJPEBVCResourceTable@@PEBUMILCMD_TILELEGACYMILBRUSH_SETSOURCEMODIFICATIONS@@@Z @ 0x180176AD0 (-ProcessSetSourceModifications@CTileLegacyMilBrush@@QEAAJPEBVCResourceTable@@PEBUMILCMD_TILELEGA.c)
 *     ?ProcessExposeToCoRenderer@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_EXPOSETOCORENDERER@@@Z @ 0x1801778B4 (-ProcessExposeToCoRenderer@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_EXPOSETOCORENDERE.c)
 *     ?ProcessForceLowColor@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_FORCELOWCOLOR@@@Z @ 0x1801778D4 (-ProcessForceLowColor@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_FORCELOWCOLOR@@@Z.c)
 *     ?ProcessResampleMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_RESAMPLEMODE@@@Z @ 0x18017790C (-ProcessResampleMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_RESAMPLEMODE@@@Z.c)
 *     ?ProcessSetColorTransform@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETCOLORTRANSFORM@@@Z @ 0x180177938 (-ProcessSetColorTransform@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETCOLORTRANSFORM@.c)
 *     ?ProcessSetHeatMapMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETHEATMAPMODE@@@Z @ 0x180177A28 (-ProcessSetHeatMapMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETHEATMAPMODE@@@Z.c)
 *     ?ProcessSetRedrawRegionMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETREDRAWREGIONMODE@@@Z @ 0x180177AAC (-ProcessSetRedrawRegionMode@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETREDRAWREGIONM.c)
 *     ?ProcessUpdate@CVisualGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALGROUP@@PEBXI@Z @ 0x1801785EC (-ProcessUpdate@CVisualGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUALGROUP@@PEBXI@Z.c)
 *     ?FlushVistaBltTokens@CWindowNode@@QEAAXXZ @ 0x1801789D4 (-FlushVistaBltTokens@CWindowNode@@QEAAXXZ.c)
 *     ?ProcessNotifyDxImmediateUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXIMMEDIATEUPDATE@@@Z @ 0x180179058 (-ProcessNotifyDxImmediateUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTI.c)
 *     ?ProcessNotifyDxUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXUPDATE@@@Z @ 0x180179234 (-ProcessNotifyDxUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXUPDAT.c)
 *     ?ProcessNotifyVisRgnUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYVISRGNUPDATE@@@Z @ 0x180179504 (-ProcessNotifyVisRgnUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYVIS.c)
 *     ?ProcessProtectContent@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_PROTECTCONTENT@@@Z @ 0x180179548 (-ProcessProtectContent@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_PROTECTCONTEN.c)
 *     ?ProcessSetCompositionSurface@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETCOMPOSITIONSURFACE@@@Z @ 0x18017959C (-ProcessSetCompositionSurface@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETCOM.c)
 *     ?ProcessSetDxAlpha@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXALPHA@@@Z @ 0x18017964C (-ProcessSetDxAlpha@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETDXALPHA@@@Z.c)
 *     ?ProcessUpdate@CYCbCrSurface@@UEAAJPEBVCResourceTable@@PEBUMILCMD_YCBCRSURFACE@@@Z @ 0x18017A1C0 (-ProcessUpdate@CYCbCrSurface@@UEAAJPEBVCResourceTable@@PEBUMILCMD_YCBCRSURFACE@@@Z.c)
 *     ?ProcessUpdate@CAffineTransform2DEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_AFFINETRANSFORM2DEFFECT@@@Z @ 0x18017A718 (-ProcessUpdate@CAffineTransform2DEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_AFFINETRANSFORM2DEF.c)
 *     ?ProcessUpdate@CArithmeticCompositeEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ARITHMETICCOMPOSITEEFFECT@@@Z @ 0x18017A7C4 (-ProcessUpdate@CArithmeticCompositeEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ARITHMETICCOMPOSI.c)
 *     ?ProcessUpdate@CBrightnessEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BRIGHTNESSEFFECT@@@Z @ 0x18017A82C (-ProcessUpdate@CBrightnessEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BRIGHTNESSEFFECT@@@Z.c)
 *     ?ProcessUpdate@CColorMatrixEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COLORMATRIXEFFECT@@@Z @ 0x18017A8B0 (-ProcessUpdate@CColorMatrixEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COLORMATRIXEFFECT@@@Z.c)
 *     ?ProcessUpdate@CCombinedGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMBINEDGEOMETRY@@@Z @ 0x18017A98C (-ProcessUpdate@CCombinedGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMBINEDGEOMETRY@@@Z.c)
 *     ?ProcessUpdate@CBlendEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BLENDEFFECT@@@Z @ 0x18017AAD8 (-ProcessUpdate@CBlendEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BLENDEFFECT@@@Z.c)
 *     ?ProcessUpdate@CFloodEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLOODEFFECT@@@Z @ 0x18017AB20 (-ProcessUpdate@CFloodEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FLOODEFFECT@@@Z.c)
 *     ?ProcessUpdate@CGaussianBlurEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GAUSSIANBLUREFFECT@@@Z @ 0x18017AB78 (-ProcessUpdate@CGaussianBlurEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GAUSSIANBLUREFFECT@@@Z.c)
 *     ?ProcessUpdate@CGeometry2DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRY2DGROUP@@PEBXI@Z @ 0x18017ABE8 (-ProcessUpdate@CGeometry2DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRY2DGROUP@@PEBXI@Z.c)
 *     ?ProcessUpdate@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x18017ACD4 (-ProcessUpdate@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRYGROUP@@PEBXI@Z.c)
 *     ?ProcessUpdate@CSaturationEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SATURATIONEFFECT@@@Z @ 0x18017AE1C (-ProcessUpdate@CSaturationEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SATURATIONEFFECT@@@Z.c)
 *     ?ProcessUpdate@CLinearGradientLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LINEARGRADIENTLEGACYMILBRUSH@@PEBXI@Z @ 0x18017AE68 (-ProcessUpdate@CLinearGradientLegacyMilBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LINEARGRADIENT.c)
 *     ?ProcessUpdate@CLinearTransferEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LINEARTRANSFEREFFECT@@@Z @ 0x18017B0C4 (-ProcessUpdate@CLinearTransferEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LINEARTRANSFEREFFECT@@.c)
 *     ?ProcessUpdate@CMatrixTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MATRIXTRANSFORM3D@@@Z @ 0x18017B1EC (-ProcessUpdate@CMatrixTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MATRIXTRANSFORM3D@@@Z.c)
 *     ?ProcessUpdate@CMeshGeometry2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MESHGEOMETRY2D@@PEBXI@Z @ 0x18017B260 (-ProcessUpdate@CMeshGeometry2D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MESHGEOMETRY2D@@PEBXI@Z.c)
 *     ?ProcessUpdate@CRotateTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ROTATETRANSFORM3D@@@Z @ 0x18017B5B0 (-ProcessUpdate@CRotateTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ROTATETRANSFORM3D@@@Z.c)
 *     ?ProcessUpdate@CTranslateTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSLATETRANSFORM3D@@@Z @ 0x18017B620 (-ProcessUpdate@CTranslateTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSLATETRANSFORM3D@@.c)
 *     ?ProcessUpdate@CScaleTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SCALETRANSFORM3D@@@Z @ 0x18017B65C (-ProcessUpdate@CScaleTransform3D@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SCALETRANSFORM3D@@@Z.c)
 *     ?ProcessUpdate@CScreenCursor@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SCREENCURSOR@@@Z @ 0x18017B6CC (-ProcessUpdate@CScreenCursor@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SCREENCURSOR@@@Z.c)
 *     ?ProcessUpdate@CShadowEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SHADOWEFFECT@@@Z @ 0x18017B710 (-ProcessUpdate@CShadowEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SHADOWEFFECT@@@Z.c)
 *     ?ProcessUpdate@CTableTransferEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TABLETRANSFEREFFECT@@@Z @ 0x18017B790 (-ProcessUpdate@CTableTransferEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TABLETRANSFEREFFECT@@@Z.c)
 *     ?ProcessUpdate@CTransform3DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORM3DGROUP@@PEBXI@Z @ 0x18017B824 (-ProcessUpdate@CTransform3DGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORM3DGROUP@@PEBXI@Z.c)
 *     ?ProcessUpdate@CTurbulenceEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TURBULENCEEFFECT@@@Z @ 0x18017B96C (-ProcessUpdate@CTurbulenceEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TURBULENCEEFFECT@@@Z.c)
 *     ?GetStackCaptureRootFailureAddress@@YAPEAXJ@Z @ 0x180194044 (-GetStackCaptureRootFailureAddress@@YAPEAXJ@Z.c)
 *     ?MilUnexpectedError@@YAXJPEBG@Z @ 0x1801944B0 (-MilUnexpectedError@@YAXJPEBG@Z.c)
 *     ?ProcessSetQualityLevel@CHolographicComposition@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICCOMPOSITION_SETQUALITYLEVEL@@@Z @ 0x1801BCF38 (-ProcessSetQualityLevel@CHolographicComposition@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHIC.c)
 *     ?ProcessSetAdapterLuid@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICDISPLAY_SETADAPTERLUID@@@Z @ 0x1801BD240 (-ProcessSetAdapterLuid@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICDISPL.c)
 *     ?ProcessSetCameraId@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICDISPLAY_SETCAMERAID@@@Z @ 0x1801BD2B0 (-ProcessSetCameraId@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICDISPLAY_.c)
 *     ?ProcessSetFlags@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICDISPLAY_SETFLAGS@@@Z @ 0x1801BD330 (-ProcessSetFlags@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICDISPLAY_SET.c)
 *     ?ProcessSetSwapChain@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICDISPLAY_SETSWAPCHAIN@@@Z @ 0x1801BD388 (-ProcessSetSwapChain@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICDISPLAY.c)
 *     ?ProcessSetTargetFrameRate@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICDISPLAY_SETTARGETFRAMERATE@@@Z @ 0x1801BD420 (-ProcessSetTargetFrameRate@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICD.c)
 *     ?ProcessSetVidPnId@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICDISPLAY_SETVIDPNID@@@Z @ 0x1801BD480 (-ProcessSetVidPnId@CHolographicDisplay@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICDISPLAY_S.c)
 *     ?SetProperty@CHolographicExclusiveMode@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801BD570 (-SetProperty@CHolographicExclusiveMode@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessCreate@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICEXCLUSIVEVIEW_CREATE@@@Z @ 0x1801BDA0C (-ProcessCreate@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICEXCLUSI.c)
 *     ?ProcessSetSwapChain@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICEXCLUSIVEVIEW_SETSWAPCHAIN@@@Z @ 0x1801BDB88 (-ProcessSetSwapChain@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICE.c)
 *     ?ProcessSetViewData@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICEXCLUSIVEVIEW_SETVIEWDATA@@@Z @ 0x1801BDC28 (-ProcessSetViewData@CHolographicExclusiveView@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICEX.c)
 *     ?ProcessCreate@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICINTEROPTEXTURE_CREATE@@@Z @ 0x1801BEB4C (-ProcessCreate@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICINTERO.c)
 *     ?ProcessSetPosition@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICINTEROPTEXTURE_SETPOSITION@@@Z @ 0x1801BEBB8 (-ProcessSetPosition@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICI.c)
 *     ?ProcessSetRoot@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICINTEROPTEXTURE_SETROOT@@@Z @ 0x1801BECB4 (-ProcessSetRoot@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICINTER.c)
 *     ?SetActiveExclusiveView@CHolographicManager@@QEAAXI@Z @ 0x1801C13B8 (-SetActiveExclusiveView@CHolographicManager@@QEAAXI@Z.c)
 */

__int64 __fastcall CComposition::ProcessCommandBatch(
        CComposition *this,
        unsigned int *a2,
        unsigned int a3,
        struct CChannelContext *a4)
{
  __m128 v4; // xmm3
  unsigned int *v5; // rbx
  __int64 v6; // r14
  unsigned int v7; // esi
  __int64 v8; // r13
  struct CChannelContext *v9; // r10
  unsigned __int64 v10; // r8
  unsigned int *v11; // r12
  struct CComposition *v12; // r15
  int v13; // edi
  __int64 v14; // r9
  __int64 v15; // rax
  unsigned int v16; // edx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rcx
  bool (__fastcall *v21)(__int64, int); // rax
  char v22; // al
  unsigned int v23; // r14d
  int v24; // edx
  void (__fastcall *v25)(CWindowNode *, struct CChannelContext *, _QWORD); // rax
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rbx
  int v29; // eax
  _DWORD *v30; // rdx
  CResource *v31; // rcx
  __int64 (__fastcall *v32)(CGdiSpriteBitmap *); // rax
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rcx
  unsigned int v36; // esi
  CResource *v37; // r15
  unsigned int v38; // edi
  __int64 v39; // r13
  signed int v40; // ebx
  __int64 v41; // rax
  __int64 v42; // rcx
  signed int v43; // eax
  CMILCOMBase *v44; // rsi
  signed int v45; // eax
  __int64 v46; // rcx
  _DWORD *v47; // rdx
  int v48; // ecx
  __int64 v49; // rax
  CResourceTable *v50; // r14
  __int64 v51; // rbx
  __int64 (__fastcall *v52)(CMILCOMBase *); // rax
  int v53; // eax
  __int64 (__fastcall *v54)(CGdiSpriteBitmap *); // rax
  unsigned int v55; // edx
  __int64 v56; // rax
  __int64 v57; // rbx
  __int64 v58; // rcx
  bool (__fastcall *v59)(__int64, int); // rax
  char v60; // al
  float *v61; // rbx
  float v62; // xmm6_4
  float v63; // xmm7_4
  float v64; // xmm8_4
  unsigned int v65; // edx
  unsigned int v66; // edx
  __int64 v67; // rax
  __int64 v68; // rbx
  __int64 v69; // rcx
  bool (__fastcall *v70)(__int64, int); // rax
  char v71; // al
  CWindowNode *v72; // rcx
  signed int IsLocal; // eax
  unsigned int v74; // edx
  __int64 v75; // rax
  __int64 v76; // rbx
  __int64 v77; // rcx
  bool (__fastcall *v78)(__int64, int); // rax
  char v79; // al
  __int64 v80; // rcx
  char v81; // al
  unsigned int v83; // edx
  __int64 v84; // rax
  __int64 v85; // rbx
  __int64 v86; // rcx
  bool (__fastcall *v87)(__int64, int); // rax
  char v88; // al
  struct CResourceTable *v89; // rdx
  CWindowNode *v90; // rcx
  unsigned int v91; // edx
  __int64 v92; // rax
  __int64 v93; // rbx
  __int64 v94; // rcx
  bool (__fastcall *v95)(__int64, int); // rax
  char v96; // al
  unsigned int v97; // edx
  __int64 v98; // rax
  __int64 v99; // rbx
  __int64 v100; // rcx
  bool (__fastcall *v101)(__int64, int); // rax
  char v102; // al
  __int64 v103; // rbx
  unsigned int v104; // edx
  __int64 v105; // rax
  struct CResource *v106; // rdx
  float v107; // xmm1_4
  __m128i v108; // xmm0
  float v109; // xmm1_4
  float *v110; // rdx
  char v111; // r8
  unsigned int v113; // edx
  __int64 v114; // rax
  __int64 v115; // rbx
  __int64 v116; // rcx
  bool (__fastcall *v117)(__int64, int); // rax
  char v118; // al
  unsigned int v119; // edx
  unsigned int v120; // edx
  __int64 v121; // rax
  __int64 v122; // rbx
  __int64 v123; // rcx
  bool (__fastcall *v124)(__int64, int); // rax
  char v125; // al
  CWindowNode *v126; // rcx
  unsigned int v127; // edx
  unsigned int v128; // edx
  __int64 v129; // rax
  __int64 v130; // rbx
  __int64 v131; // rcx
  bool (__fastcall *v132)(__int64, int); // rax
  char v133; // al
  CWindowNode *v134; // rcx
  unsigned int v135; // edx
  __int64 v136; // rax
  __int64 v137; // rbx
  __int64 v138; // rcx
  bool (__fastcall *v139)(__int64, int); // rax
  char v140; // al
  CGdiSpriteBitmap *v141; // rcx
  unsigned int v142; // edx
  __int64 v143; // rax
  __int64 v144; // rbx
  __int64 v145; // rcx
  bool (__fastcall *v146)(__int64, int); // rax
  char v147; // al
  volatile signed __int32 **v148; // rcx
  unsigned int v149; // edx
  unsigned int v150; // esi
  __int64 v151; // rax
  __int64 v152; // rbx
  __int64 v153; // rcx
  bool (__fastcall *v154)(__int64, int); // rax
  char v155; // al
  void **v156; // r14
  struct FastRegion::Internal::CRgnData *v157; // rdi
  char v158; // r15
  unsigned int v159; // edx
  int v160; // r13d
  __m128 v161; // xmm0
  int v162; // ecx
  __m128 v163; // xmm1
  __m128 v164; // xmm0
  int v165; // r11d
  int v166; // ecx
  __m128 v167; // xmm0
  __int32 v168; // r9d
  int v169; // r10d
  __int32 v170; // r8d
  const struct FastRegion::Internal::CRgnData **v171; // r12
  int v172; // ebx
  const struct FastRegion::Internal::CRgnData *v173; // r8
  int *v174; // r15
  int v175; // ebx
  int v176; // eax
  const struct FastRegion::Internal::CRgnData *v177; // r10
  int v178; // r9d
  __int64 v179; // r11
  _DWORD *v180; // r8
  __int64 v181; // rax
  char *v182; // rdx
  unsigned __int64 v183; // rcx
  __int64 v184; // r11
  signed int v185; // ebx
  __int64 (__fastcall *v186)(CGradientBrush *, unsigned int, struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden)); // rax
  unsigned int v187; // edx
  unsigned int *v188; // rsi
  __int64 v189; // rax
  __int64 v190; // rbx
  __int64 v191; // rcx
  bool (__fastcall *v192)(__int64, int); // rax
  char v193; // al
  __int64 v194; // r12
  unsigned int v195; // ebx
  unsigned int v196; // edx
  __int64 v197; // rax
  CMILCOMBase *v198; // rcx
  bool (__fastcall *v199)(__int64, int); // rax
  bool v200; // al
  signed int v201; // eax
  void (*v202)(void); // rax
  unsigned int v203; // edx
  __int64 v204; // rax
  __int64 v205; // rdi
  __int64 v206; // rcx
  bool (__fastcall *v207)(__int64, int); // rax
  char v208; // al
  __int64 v209; // rdi
  __int64 v210; // rbx
  CGdiSpriteBitmap *v211; // rcx
  void (*v212)(void); // rax
  unsigned int v213; // edx
  __int64 v214; // rax
  __int64 v215; // rbx
  __int64 v216; // rcx
  bool (__fastcall *v217)(__int64, int); // rax
  char v218; // al
  unsigned int v219; // edx
  __int64 v220; // rax
  __int64 v221; // rbx
  __int64 v222; // rcx
  bool (__fastcall *v223)(__int64, int); // rax
  char v224; // al
  CVisual *v225; // rcx
  float *v226; // rbx
  float v227; // xmm7_4
  float v228; // xmm6_4
  int v229; // r8d
  __int64 v230; // r9
  __int64 v231; // rbx
  __int64 v232; // rcx
  bool (__fastcall *v233)(__int64, int); // rax
  bool v234; // al
  CVisual *v235; // rcx
  CWindowNode *v236; // rax
  struct CResourceTable *v237; // rdx
  __int64 v238; // r9
  CPropertyBagBase *v239; // rax
  struct CResourceTable *v240; // rdx
  __int64 v241; // r9
  CPropertyBagBase *v242; // rax
  struct CResourceTable *v243; // rdx
  __int64 v244; // r9
  CNotificationResource *v245; // rcx
  CBaseExpression *v246; // rax
  __int64 v247; // r9
  CBaseExpression *v248; // rax
  struct CResourceTable *v249; // rdx
  __int64 v250; // r9
  unsigned int v251; // edx
  __int64 v252; // r9
  CComposition **v253; // rax
  __int64 v254; // r9
  CMILRefCountBase *v255; // rcx
  void (*v256)(void); // rax
  __int64 (__fastcall *v257)(CGradientBrush *, unsigned int, struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden)); // rax
  CExpression *v258; // rax
  struct CResourceTable *v259; // rdx
  __int64 v260; // r9
  CRgnGeometry *v261; // rax
  struct CResourceTable *v262; // rdx
  __int64 v263; // r9
  CExpression *v264; // rax
  __int64 v265; // r9
  CExpression *v266; // rax
  __int64 v267; // r9
  CSpriteVisual *v268; // rax
  __int64 v269; // r9
  CAtlasedRectsMesh *v270; // rax
  struct CResourceTable *v271; // rdx
  __int64 v272; // r9
  CBaseExpression *v273; // rax
  __int64 v274; // r9
  __int64 (__fastcall *v275)(CKeyframeAnimation *, struct CResourceTable *, const struct MILCMD_BASEEXPRESSION_SETBINDINGBROKEN *); // r9
  signed int v276; // eax
  CComponentTransform2D *v277; // rax
  struct CResourceTable *v278; // rdx
  __int64 v279; // r9
  CComponentTransform3D *v280; // rax
  struct CResourceTable *v281; // rdx
  __int64 v282; // r9
  unsigned int v283; // edx
  __int64 v284; // r9
  CVisual *v285; // rax
  __int64 v286; // r9
  float *v287; // rdx
  CVisual *v288; // rax
  __int64 v289; // r9
  CKeyframeAnimation *v290; // rax
  struct CResourceTable *v291; // rdx
  __int64 v292; // r9
  CComponentTransform2D *v293; // rax
  struct CResourceTable *v294; // rdx
  __int64 v295; // r9
  CComponentTransform2D *v296; // rax
  struct CResourceTable *v297; // rdx
  __int64 v298; // r9
  CComponentTransform2D *v299; // rax
  struct CResourceTable *v300; // rdx
  __int64 v301; // r9
  CComponentTransform2D *v302; // rax
  struct CResourceTable *v303; // rdx
  __int64 v304; // r9
  CComponentTransform2D *v305; // rax
  struct CResourceTable *v306; // rdx
  __int64 v307; // r9
  signed int v308; // eax
  struct CResource **v309; // rax
  __int64 v310; // r9
  CSpriteVisualContent *v311; // rax
  __int64 v312; // r9
  CSpriteVisualContent *v313; // rax
  __int64 v314; // r9
  CSpriteVisualContent *v315; // rax
  __int64 v316; // r9
  struct CResource **v317; // rax
  __int64 v318; // r9
  struct CResource **v319; // rax
  __int64 v320; // r9
  CPropertyBagBase *v321; // rax
  struct CResourceTable *v322; // rdx
  __int64 v323; // r9
  CVisual *v324; // rax
  struct CResourceTable *v325; // rdx
  __int64 v326; // r9
  CRectangleGeometry *v327; // rax
  struct CResourceTable *v328; // rdx
  __int64 v329; // r9
  CRectangleGeometry *v330; // rax
  struct CResourceTable *v331; // rdx
  __int64 v332; // r9
  CRectangleGeometry *v333; // rax
  struct CResourceTable *v334; // rdx
  __int64 v335; // r9
  CRectangleGeometry *v336; // rax
  struct CResourceTable *v337; // rdx
  __int64 v338; // r9
  CKeyframeAnimation *v339; // rax
  __int64 v340; // r9
  CRenderData *v341; // rax
  __int64 v342; // r9
  CNineGridBrush *v343; // rax
  struct CResourceTable *v344; // rdx
  __int64 v345; // r9
  CVisual *v346; // rax
  struct CResourceTable *v347; // rdx
  __int64 v348; // r9
  unsigned int v349; // edx
  __int64 v350; // r9
  struct CResource **v351; // rax
  __int64 v352; // r9
  CMatrixTransform *v353; // rax
  struct CResourceTable *v354; // rdx
  __int64 v355; // r9
  unsigned int v356; // edx
  __int64 v357; // r9
  CVisual *v358; // rax
  __int64 v359; // r9
  CEffectGroup *v360; // rax
  __int64 v361; // r9
  CVisual *v362; // rax
  __int64 v363; // r9
  CComponentTransform3D *v364; // rax
  struct CResourceTable *v365; // rdx
  __int64 v366; // r9
  CComponentTransform3D *v367; // rax
  struct CResourceTable *v368; // rdx
  __int64 v369; // r9
  CComponentTransform3D *v370; // rax
  struct CResourceTable *v371; // rdx
  __int64 v372; // r9
  CComponentTransform3D *v373; // rax
  struct CResourceTable *v374; // rdx
  __int64 v375; // r9
  CComponentTransform3D *v376; // rax
  struct CResourceTable *v377; // rdx
  __int64 v378; // r9
  CComponentTransform3D *v379; // rax
  struct CResourceTable *v380; // rdx
  __int64 v381; // r9
  __int64 v382; // rax
  struct CResourceTable *v383; // rdx
  __int64 v384; // r9
  void *v385; // r9
  CWindowNode *v386; // rcx
  CColorGradientStop *v387; // rax
  __int64 v388; // r9
  CColorGradientStop *v389; // rax
  __int64 v390; // r9
  CKeyframeAnimation *v391; // rax
  struct CResourceTable *v392; // rdx
  __int64 v393; // r9
  CRectangleGeometry *v394; // rax
  struct CResourceTable *v395; // rdx
  __int64 v396; // r9
  CWindowNode *v397; // rax
  struct CResourceTable *v398; // rdx
  __int64 v399; // r9
  CAtlasedRectsGroup *v400; // rax
  __int64 v401; // r9
  CPrimitiveGroup *v402; // rax
  struct CResourceTable *v403; // rdx
  __int64 v404; // r9
  CCompositionSurfaceBitmap *v405; // rax
  __int64 v406; // r9
  CAnimation *v407; // rax
  __int64 v408; // r9
  CBaseAnimation *v409; // rax
  __int64 v410; // r9
  CColorBrush *v411; // rax
  __int64 v412; // r9
  __int64 v413; // rax
  __int64 v414; // r9
  CBaseAnimation *v415; // rax
  __int64 v416; // r9
  CAnimation *v417; // rax
  struct CResourceTable *v418; // rdx
  __int64 v419; // r9
  CAnimation *v420; // rax
  struct CResourceTable *v421; // rdx
  __int64 v422; // r9
  struct CResource ***v423; // rax
  __int64 v424; // r9
  struct CResource **v425; // rax
  __int64 v426; // r9
  __int64 v427; // rax
  __int64 v428; // r9
  CWindowNode *v429; // rax
  __int64 v430; // r9
  __int64 v431; // rax
  __int64 v432; // r9
  CSkewTransform *v433; // rax
  struct CResourceTable *v434; // rdx
  __int64 v435; // r9
  __int64 v436; // rax
  __int64 v437; // r9
  __int64 v438; // rax
  __int64 v439; // r9
  unsigned int v440; // edx
  __int64 v441; // r9
  CComposition **v442; // rax
  __int64 v443; // r9
  unsigned int v444; // edx
  __int64 v445; // r9
  CVisual *v446; // rax
  __int64 v447; // r9
  __int64 v448; // rax
  __int64 v449; // r9
  CWindowNode *v450; // rax
  struct CResourceTable *v451; // rdx
  __int64 v452; // r9
  CWindowNode *v453; // rax
  __int64 v454; // r9
  CWindowNode *v455; // rax
  struct CResourceTable *v456; // rdx
  __int64 v457; // r9
  CGdiSpriteBitmap *v458; // rax
  __int64 v459; // r9
  CGdiSpriteBitmap *v460; // rax
  __int64 v461; // r9
  __int64 v462; // rax
  __int64 v463; // r9
  __int64 v464; // rax
  struct CResourceTable *v465; // rdx
  __int64 v466; // r9
  CSharedSection *v467; // rax
  struct CResourceTable *v468; // rdx
  __int64 v469; // r9
  CManipulationTransform *v470; // rax
  struct CResourceTable *v471; // rdx
  __int64 v472; // r9
  __int64 v473; // rax
  __int64 v474; // r9
  CSolidColorLegacyMilBrush *v475; // rax
  __int64 v476; // r9
  unsigned int v477; // edx
  __int64 v478; // rax
  __int64 v479; // r9
  CVisual *v480; // rax
  __int64 v481; // r9
  __int64 v482; // rax
  struct CResourceTable *v483; // rdx
  __int64 v484; // r9
  CWindowNode *v485; // rax
  struct CResourceTable *v486; // rdx
  __int64 v487; // r9
  CTranslateTransform *v488; // rax
  struct CResourceTable *v489; // rdx
  __int64 v490; // r9
  unsigned int v491; // edx
  __int64 v492; // r9
  __int64 v493; // rax
  __int64 v494; // r9
  __int64 v495; // rsi
  __int64 v496; // r14
  __int64 v497; // rbx
  __int64 v498; // rax
  struct CResourceTable *v499; // rdx
  __int64 v500; // r9
  int v501; // eax
  __int64 v502; // rax
  __int64 v503; // r9
  CVisual *v504; // rax
  struct CResourceTable *v505; // rdx
  __int64 v506; // r9
  CCompiledEffectTemplate *v507; // rax
  __int64 v508; // r9
  signed int v509; // eax
  CVisual *v510; // rax
  __int64 v511; // r9
  CVisual *v512; // rax
  struct CResourceTable *v513; // rdx
  __int64 v514; // r9
  struct CResourceTable *v515; // rdx
  CAnimation *Resource; // rcx
  const struct MILCMD_ANIMATION_ADDTIMEEVENTS *v517; // r8
  __int64 v518; // r9
  CAnimation *v519; // rax
  __int64 v520; // r9
  CTransformGroup *v521; // rax
  __int64 v522; // r9
  CNineGridBrush *v523; // rax
  struct CResourceTable *v524; // rdx
  __int64 v525; // r9
  struct CResource **v526; // rax
  __int64 v527; // r9
  CImageLegacyMilBrush *v528; // rax
  __int64 v529; // r9
  __int64 v530; // rax
  __int64 v531; // r9
  __int64 v532; // rcx
  CVisual *v533; // rax
  struct CResourceTable *v534; // rdx
  const struct MILCMD_VISUAL_SETMODESTODEFAULT *v535; // r8
  __int64 v536; // r9
  CVisual *v537; // rax
  __int64 v538; // r9
  CPropertyBagBase *v539; // rax
  struct CResourceTable *v540; // rdx
  __int64 v541; // r9
  CDesktopRenderTarget *v542; // rax
  __int64 v543; // r9
  __int64 v544; // rax
  __int64 v545; // r9
  __int64 v546; // rax
  unsigned int v547; // edx
  __int64 v548; // r9
  CWindowNode *v549; // rax
  __int64 v550; // r9
  CEffectBrush *v551; // rax
  __int64 v552; // r9
  CEffectBrush *v553; // rax
  __int64 v554; // r9
  CPropertyBagBase *v555; // rax
  struct CResourceTable *v556; // rdx
  __int64 v557; // r9
  struct CComposition **v558; // rax
  __int64 v559; // r9
  CLayerVisual *v560; // rax
  __int64 v561; // r9
  __int64 v562; // rax
  __int64 v563; // r9
  _DWORD *v564; // rax
  __int64 v565; // r9
  CEffectBrush *v566; // rax
  __int64 v567; // r9
  __int64 v568; // rax
  __int64 v569; // r9
  CCompositionPointLight *v570; // rax
  __int64 v571; // r9
  struct CResource **v572; // rax
  __int64 v573; // r9
  CCompositionSpotLight *v574; // rax
  __int64 v575; // r9
  CCompositionSpotLight *v576; // rax
  __int64 v577; // r9
  unsigned int v578; // edx
  __int64 v579; // r9
  __int64 v580; // rax
  __int64 v581; // r9
  CAtlasedRectsMesh *v582; // rax
  struct CResourceTable *v583; // rdx
  __int64 v584; // r9
  unsigned int v585; // edx
  __int64 v586; // r9
  struct CResource **v587; // rax
  __int64 v588; // r9
  __int64 v589; // r9
  unsigned int v590; // edx
  __int64 v591; // rax
  __int64 v592; // r9
  __int64 v593; // rax
  __int64 v594; // r9
  CPropertyBagBase *v595; // rax
  struct CResourceTable *v596; // rdx
  __int64 v597; // r9
  CCompositionAmbientLight *v598; // rax
  __int64 v599; // r9
  CDcompRenderTarget *v600; // rax
  struct CResourceTable *v601; // rdx
  __int64 v602; // r9
  unsigned int v603; // edx
  __int64 v604; // r9
  struct CResource **v605; // rax
  __int64 v606; // r9
  CPrimitiveGroup *v607; // rax
  __int64 v608; // r9
  CDcompRenderTargetGroup *v609; // rax
  __int64 v610; // r9
  CVisualCapture *v611; // rax
  __int64 v612; // r9
  CPrimitiveGroup *v613; // rax
  __int64 v614; // r9
  CPrimitiveGroup *v615; // rbx
  int v616; // ecx
  void *StackCaptureRootFailureAddress; // rax
  __int64 v618; // r9
  CAnimation *v619; // rax
  struct CResourceTable *v620; // rdx
  __int64 v621; // r9
  __int64 v622; // rax
  __int64 v623; // r9
  __int64 v624; // rbx
  CAnimation *v625; // rax
  __int64 v626; // r9
  CAnimation *v627; // rax
  __int64 v628; // r9
  CAnimation *v629; // rax
  struct CResourceTable *v630; // rdx
  __int64 v631; // r9
  _QWORD *v632; // rax
  __int64 v633; // r9
  CAnimationLoggingManager *v634; // rax
  struct CResourceTable *v635; // rdx
  __int64 v636; // r9
  CAnimationLoggingManager *v637; // rax
  struct CResourceTable *v638; // rdx
  __int64 v639; // r9
  CAnimationLoggingManager *v640; // rax
  struct CResourceTable *v641; // rdx
  __int64 v642; // r9
  CAnimationTrigger *v643; // rax
  struct CResourceTable *v644; // rdx
  __int64 v645; // r9
  __int64 v646; // rax
  __int64 v647; // r9
  CBaseExpression *v648; // rax
  struct CResourceTable *v649; // rdx
  __int64 v650; // r9
  __int64 v651; // rax
  struct CResourceTable *v652; // rdx
  const struct MILCMD_CACHEDVISUALIMAGE_FREEZEVISUALSURFACE *v653; // r8
  __int64 v654; // r9
  __int64 v655; // rax
  struct CResourceTable *v656; // rdx
  __int64 v657; // r9
  __int64 v658; // rax
  struct CResourceTable *v659; // rdx
  __int64 v660; // r9
  __int64 v661; // rax
  struct CResourceTable *v662; // rdx
  __int64 v663; // r9
  __int64 v664; // rax
  struct CResourceTable *v665; // rdx
  __int64 v666; // r9
  __int64 v667; // rax
  __int64 v668; // r9
  CCompositionAmbientLight *v669; // rax
  __int64 v670; // r9
  CCompositionCubeMap *v671; // rax
  struct CResourceTable *v672; // rdx
  __int64 v673; // r9
  CCompositionCubeMap *v674; // rax
  __int64 v675; // r9
  CCompositionDistantLight *v676; // rax
  __int64 v677; // r9
  CCompositionDistantLight *v678; // rax
  __int64 v679; // r9
  CCompositionDistantLight *v680; // rax
  __int64 v681; // r9
  CCompositionDistantLight *v682; // rax
  __int64 v683; // r9
  __int64 v684; // rax
  __int64 v685; // r9
  __int64 v686; // rax
  __int64 v687; // r9
  __int64 v688; // r9
  CCompositionPointLight *v689; // rax
  __int64 v690; // r9
  CCompositionPointLight *v691; // rax
  __int64 v692; // r9
  CCompositionPointLight *v693; // rax
  __int64 v694; // r9
  CCompositionPointLight *v695; // rax
  __int64 v696; // r9
  CCompositionPointLight *v697; // rax
  __int64 v698; // r9
  CCompositionPointLight *v699; // rax
  __int64 v700; // r9
  CCompositionSkyBoxBrush *v701; // rax
  struct CResourceTable *v702; // rdx
  __int64 v703; // r9
  CCompositionSkyBoxBrush *v704; // rax
  struct CResourceTable *v705; // rdx
  __int64 v706; // r9
  CCompositionSkyBoxBrush *v707; // rax
  __int64 v708; // r9
  CCompositionSkyBoxBrush *v709; // rax
  __int64 v710; // r9
  CCompositionSkyBoxBrush *v711; // rax
  __int64 v712; // r9
  unsigned int v713; // edx
  __int64 v714; // r9
  CCompositionSkyBoxBrush *v715; // rax
  __int64 v716; // r9
  __int64 v717; // r9
  __int64 v718; // r9
  CCompositionSpotLight *v719; // rax
  __int64 v720; // r9
  CCompositionSpotLight *v721; // rax
  __int64 v722; // r9
  CCompositionSpotLight *v723; // rax
  __int64 v724; // r9
  CCompositionSpotLight *v725; // rax
  __int64 v726; // r9
  CCompositionSpotLight *v727; // rax
  __int64 v728; // r9
  CCompositionSpotLight *v729; // rax
  __int64 v730; // r9
  CConditionalExpression *v731; // rax
  __int64 v732; // r9
  CConditionalExpression *v733; // rax
  __int64 v734; // r9
  __int64 v735; // rax
  __int64 v736; // r9
  __int64 v737; // rax
  __int64 v738; // r9
  __int64 v739; // rax
  unsigned int v740; // ecx
  CDcompRenderTarget *v741; // rax
  struct CResourceTable *v742; // rdx
  __int64 v743; // r9
  __int64 v744; // rax
  __int64 v745; // r9
  __int64 v746; // rax
  __int64 v747; // r9
  CDesktopRenderTarget *v748; // rax
  struct CResourceTable *v749; // rdx
  __int64 v750; // r9
  CDesktopRenderTarget *v751; // rax
  struct CResourceTable *v752; // rdx
  __int64 v753; // r9
  __int64 v754; // rax
  __int64 v755; // r9
  __int64 v756; // rax
  __int64 v757; // r9
  unsigned int v758; // edx
  __int64 v759; // r9
  CDesktopRenderTarget *v760; // rax
  __int64 v761; // r9
  CDesktopRenderTarget *v762; // rax
  struct CResourceTable *v763; // rdx
  __int64 v764; // r9
  CDropShadow *v765; // rax
  __int64 v766; // r9
  CDropShadow *v767; // rax
  __int64 v768; // r9
  CDropShadow *v769; // rax
  __int64 v770; // r9
  CDropShadow *v771; // rax
  __int64 v772; // r9
  CDropShadow *v773; // rax
  __int64 v774; // r9
  CSpriteVisualContent *v775; // rax
  __int64 v776; // r9
  CExpression *v777; // rax
  struct CResourceTable *v778; // rdx
  __int64 v779; // r9
  CFilterEffect *v780; // rax
  __int64 v781; // r9
  __int64 v782; // rax
  struct CResourceTable *v783; // rdx
  __int64 v784; // r9
  __int64 v785; // rax
  struct CResourceTable *v786; // rdx
  __int64 v787; // r9
  __int64 v788; // rax
  struct CResourceTable *v789; // rdx
  __int64 v790; // r9
  __int64 v791; // rax
  struct CResourceTable *v792; // rdx
  const struct MILCMD_FLIPCHAIN_RESETSOURCEFRAMECOUNTERS *v793; // r8
  __int64 v794; // r9
  __int64 v795; // rax
  __int64 v796; // r9
  __int64 v797; // rax
  CGdiSpriteBitmap *v798; // rax
  __int64 v799; // r9
  CGenericInk *v800; // rax
  struct CResourceTable *v801; // rdx
  const struct MILCMD_GENERICINK_PROPERTIESUPDATE *v802; // r8
  __int64 v803; // r9
  CGenericInk *v804; // rax
  struct CResourceTable *v805; // rdx
  __int64 v806; // r9
  struct CResourceTable *v807; // rdx
  CGenericInk *v808; // rcx
  const struct MILCMD_GENERICINK_TIPPOINTBUFFER *v809; // r8
  __int64 v810; // r9
  CGradientBrush *v811; // rax
  struct CResourceTable *v812; // rdx
  __int64 v813; // r9
  __int64 v814; // rax
  __int64 v815; // r9
  unsigned int v816; // ecx
  __int64 v817; // rax
  __int64 v818; // r9
  CHolographicComposition *v819; // rax
  struct CResourceTable *v820; // rdx
  __int64 v821; // r9
  CHolographicDisplay *v822; // rax
  struct CResourceTable *v823; // rdx
  __int64 v824; // r9
  CHolographicDisplay *v825; // rax
  struct CResourceTable *v826; // rdx
  __int64 v827; // r9
  CHolographicDisplay *v828; // rax
  struct CResourceTable *v829; // rdx
  __int64 v830; // r9
  CHolographicDisplay *v831; // rax
  struct CResourceTable *v832; // rdx
  __int64 v833; // r9
  CHolographicDisplay *v834; // rax
  struct CResourceTable *v835; // rdx
  __int64 v836; // r9
  CHolographicDisplay *v837; // rax
  struct CResourceTable *v838; // rdx
  __int64 v839; // r9
  __int64 v840; // rax
  __int64 v841; // r9
  __int64 v842; // rax
  __int64 v843; // r9
  CHolographicExclusiveView *v844; // rax
  struct CResourceTable *v845; // rdx
  __int64 v846; // r9
  CHolographicExclusiveView *v847; // rax
  __int64 v848; // r9
  CHolographicExclusiveView *v849; // rax
  struct CResourceTable *v850; // rdx
  __int64 v851; // r9
  CHolographicInteropTexture *v852; // rax
  struct CResourceTable *v853; // rdx
  __int64 v854; // r9
  CHolographicInteropTexture *v855; // rax
  struct CResourceTable *v856; // rdx
  __int64 v857; // r9
  unsigned int v858; // edx
  __int64 v859; // r9
  CHolographicInteropTexture *v860; // rax
  __int64 v861; // r9
  __int64 v862; // rax
  __int64 v863; // r9
  __int64 v864; // r9
  unsigned int v865; // edx
  __int64 v866; // r9
  CIndirectSwapchainRenderTarget *v867; // rax
  __int64 v868; // r9
  CIndirectSwapchainRenderTarget *v869; // rax
  __int64 v870; // r9
  CIndirectSwapchainRenderTarget *v871; // rax
  struct CResourceTable *v872; // rdx
  __int64 v873; // r9
  CInjectionAnimation *v874; // rax
  __int64 v875; // r9
  CInk *v876; // rax
  struct CResourceTable *v877; // rdx
  __int64 v878; // r9
  CInk *v879; // rax
  struct CResourceTable *v880; // rdx
  __int64 v881; // r9
  CInk *v882; // rax
  struct CResourceTable *v883; // rdx
  __int64 v884; // r9
  CInk *v885; // rax
  struct CResourceTable *v886; // rdx
  __int64 v887; // r9
  __int64 v888; // rax
  struct CResourceTable *v889; // rdx
  __int64 v890; // r9
  __int64 v891; // rax
  struct CResourceTable *v892; // rdx
  __int64 v893; // r9
  __int64 v894; // rax
  struct CResourceTable *v895; // rdx
  __int64 v896; // r9
  unsigned int v897; // edx
  __int64 v898; // r9
  __int64 v899; // rax
  __int64 v900; // r9
  CInteractionTracker *v901; // rax
  struct CResourceTable *v902; // rdx
  __int64 v903; // r9
  CInteractionTracker *v904; // rax
  struct CResourceTable *v905; // rdx
  __int64 v906; // r9
  CInteractionTracker *v907; // rax
  struct CResourceTable *v908; // rdx
  __int64 v909; // r9
  CInteractionTracker *v910; // rax
  struct CResourceTable *v911; // rdx
  const struct MILCMD_INTERACTIONTRACKER_DWMRESTARTCOMPLETED *v912; // r8
  __int64 v913; // r9
  CInteractionTracker *v914; // rax
  __int64 v915; // r9
  __int64 v916; // rax
  __int64 v917; // r9
  unsigned int v918; // edx
  __int64 v919; // r9
  CInteractionTracker *v920; // rax
  __int64 v921; // r9
  unsigned int v922; // edx
  __int64 v923; // r9
  CInteractionTracker *v924; // rax
  __int64 v925; // r9
  CInteractionTracker *v926; // rax
  struct CResourceTable *v927; // rdx
  __int64 v928; // r9
  unsigned int v929; // edx
  __int64 v930; // r9
  CInteractionTracker *v931; // rax
  __int64 v932; // r9
  const void *v933; // r9
  _DWORD *v934; // rax
  __int64 v935; // r9
  CInteractionTracker *v936; // rax
  __int64 v937; // r9
  CInteractionTracker *v938; // rax
  struct CResourceTable *v939; // rdx
  __int64 v940; // r9
  CInteractionTracker *v941; // rax
  __int64 v942; // r9
  CInteractionTracker *v943; // rax
  struct CResourceTable *v944; // rdx
  __int64 v945; // r9
  CInteractionTracker *v946; // rax
  __int64 v947; // r9
  CInteractionTracker *v948; // rax
  struct CResourceTable *v949; // rdx
  __int64 v950; // r9
  CInteractionTracker *v951; // rax
  struct CResourceTable *v952; // rdx
  __int64 v953; // r9
  unsigned int v954; // edx
  __int64 v955; // r9
  CInteractionTracker *v956; // rax
  __int64 v957; // r9
  CInteractionTracker *v958; // rax
  struct CResourceTable *v959; // rdx
  __int64 v960; // r9
  unsigned int v961; // edx
  __int64 v962; // r9
  CInteractionTracker *v963; // rax
  __int64 v964; // r9
  __int64 v965; // rax
  __int64 v966; // r9
  CLayerVisual *v967; // rax
  __int64 v968; // r9
  CLinearGradientBrush *v969; // rax
  __int64 v970; // r9
  CLinearGradientBrush *v971; // rax
  __int64 v972; // r9
  CMagnifierRenderTarget *v973; // rax
  __int64 v974; // r9
  CMagnifierRenderTarget *v975; // rax
  struct CResourceTable *v976; // rdx
  __int64 v977; // r9
  unsigned int v978; // edx
  __int64 v979; // r9
  CMagnifierRenderTarget *v980; // rax
  __int64 v981; // r9
  CMagnifierRenderTarget *v982; // rax
  struct CResourceTable *v983; // rdx
  __int64 v984; // r9
  CMagnifierRenderTarget *v985; // rax
  struct CResourceTable *v986; // rdx
  __int64 v987; // r9
  unsigned int v988; // edx
  __int64 v989; // r9
  CMagnifierRenderTarget *v990; // rax
  __int64 v991; // r9
  CMagnifierRenderTarget *v992; // rax
  struct CResourceTable *v993; // rdx
  __int64 v994; // r9
  CManipulation *v995; // rax
  __int64 v996; // r9
  __int128 v997; // xmm1
  __int128 v998; // xmm0
  __int128 v999; // xmm1
  __int128 v1000; // xmm0
  __int128 v1001; // xmm1
  __int128 v1002; // xmm0
  __int128 v1003; // xmm1
  unsigned int v1004; // edx
  __int64 v1005; // r9
  unsigned int v1006; // edx
  __int64 v1007; // r9
  unsigned int v1008; // edx
  __int64 v1009; // r9
  unsigned int v1010; // edx
  __int64 v1011; // r9
  unsigned int v1012; // edx
  __int64 v1013; // r9
  CManipulation *v1014; // rax
  __int64 v1015; // r9
  CManipulation *v1016; // rax
  __int64 v1017; // r9
  CManipulation *v1018; // rax
  struct CResourceTable *v1019; // rdx
  __int64 v1020; // r9
  CMeshGeometry2D *v1021; // rax
  struct CResourceTable *v1022; // rdx
  __int64 v1023; // r9
  CNaturalAnimation *v1024; // rax
  struct CResourceTable *v1025; // rdx
  __int64 v1026; // r9
  CNaturalAnimation *v1027; // rax
  struct CResourceTable *v1028; // rdx
  __int64 v1029; // r9
  CNaturalAnimation *v1030; // rax
  struct CResourceTable *v1031; // rdx
  __int64 v1032; // r9
  __int64 v1033; // rax
  __int64 v1034; // r9
  __m128 v1035; // xmm1
  __int64 v1036; // rax
  __int64 v1037; // r9
  __m128 v1038; // xmm1
  __int64 v1039; // rax
  __int64 v1040; // r9
  __m128 v1041; // xmm1
  CNaturalAnimation *v1042; // rax
  struct CResourceTable *v1043; // rdx
  __int64 v1044; // r9
  CRenderTargetManager *v1045; // rcx
  char v1046; // al
  __int64 v1047; // rax
  struct CResourceTable *v1048; // rdx
  __int64 v1049; // r9
  unsigned int v1050; // edx
  __int64 v1051; // r9
  __int64 v1052; // rax
  __int64 v1053; // r9
  __int64 v1054; // rax
  struct CResourceTable *v1055; // rdx
  __int64 v1056; // r9
  __int64 v1057; // rsi
  __int64 v1058; // r14
  __int64 v1059; // rbx
  SIZE_T v1060; // r8
  const struct FastRegion::Internal::CRgnData *v1061; // rsi
  CPropertyBagBase *v1062; // rax
  struct CResourceTable *v1063; // rdx
  __int64 v1064; // r9
  CPropertyBagBase *v1065; // rax
  struct CResourceTable *v1066; // rdx
  __int64 v1067; // r9
  __int64 v1068; // rax
  __int64 v1069; // r9
  CPropertyBagBase *v1070; // rax
  struct CResourceTable *v1071; // rdx
  __int64 v1072; // r9
  CRemotingRenderTarget *v1073; // rax
  struct CResourceTable *v1074; // rdx
  __int64 v1075; // r9
  __int64 v1076; // rax
  __int64 v1077; // r9
  unsigned int v1078; // edx
  __int64 v1079; // r9
  CRemotingRenderTarget *v1080; // rax
  __int64 v1081; // r9
  __int64 v1082; // rax
  __int64 v1083; // rax
  unsigned int v1084; // edx
  __int64 v1085; // r9
  CRenderTarget *v1086; // rax
  __int64 v1087; // r9
  __int64 v1088; // rax
  unsigned int v1089; // edx
  __int64 v1090; // r9
  __int64 v1091; // rax
  CScalar *v1092; // rax
  struct CResourceTable *v1093; // rdx
  __int64 v1094; // r9
  CSnapshot *v1095; // rax
  __int64 v1096; // r9
  CSnapshot *v1097; // rax
  __int64 v1098; // r9
  CSpriteVisual *v1099; // rax
  __int64 v1100; // r9
  __int64 v1101; // rdx
  __int64 v1102; // r9
  int v1103; // eax
  CSpriteVisualContent *v1104; // rdx
  CTableTransferEffect *v1105; // rax
  struct CResourceTable *v1106; // rdx
  __int64 v1107; // r9
  CTileLegacyMilBrush *v1108; // rax
  const struct CResourceTable *v1109; // rdx
  __int64 v1110; // r9
  CVisual *v1111; // rax
  struct CResourceTable *v1112; // rdx
  __int64 v1113; // r9
  CVisual *v1114; // rax
  struct CResourceTable *v1115; // rdx
  __int64 v1116; // r9
  CVisual *v1117; // rax
  struct CResourceTable *v1118; // rdx
  __int64 v1119; // r9
  unsigned int v1120; // edx
  __int64 v1121; // r9
  CVisual *v1122; // rax
  __int64 v1123; // r9
  CVisual *v1124; // rax
  struct CResourceTable *v1125; // rdx
  __int64 v1126; // r9
  __int64 v1127; // rax
  __int64 v1128; // r9
  char v1129; // cl
  CVisual *v1130; // rax
  struct CResourceTable *v1131; // rdx
  __int64 v1132; // r9
  CVisualGroup *v1133; // rax
  __int64 v1134; // r9
  CWindowNode *v1135; // rax
  __int64 v1136; // r9
  unsigned int v1137; // edx
  __int64 v1138; // rax
  __int64 v1139; // r9
  CWindowNode *v1140; // rax
  __int64 v1141; // r9
  unsigned int v1142; // edx
  __int64 v1143; // rax
  __int64 v1144; // r9
  CWindowNode *v1145; // rax
  __int64 v1146; // r9
  CWindowNode *v1147; // rax
  struct CResourceTable *v1148; // rdx
  const struct MILCMD_WINDOWNODE_NOTIFYVISRGNUPDATE *v1149; // r8
  __int64 v1150; // r9
  CWindowNode *v1151; // rax
  struct CResourceTable *v1152; // rdx
  __int64 v1153; // r9
  __int64 v1154; // rax
  __int64 v1155; // r9
  CWindowNode *v1156; // rax
  struct CResourceTable *v1157; // rdx
  __int64 v1158; // r9
  CWindowNode *v1159; // rax
  struct CResourceTable *v1160; // rdx
  __int64 v1161; // r9
  __int64 v1162; // rax
  CYCbCrSurface *v1163; // rax
  __int64 v1164; // r9
  CAffineTransform2DEffect *v1165; // rax
  struct CResourceTable *v1166; // rdx
  __int64 v1167; // r9
  CArithmeticCompositeEffect *v1168; // rax
  struct CResourceTable *v1169; // rdx
  __int64 v1170; // r9
  CBlendEffect *v1171; // rax
  struct CResourceTable *v1172; // rdx
  __int64 v1173; // r9
  CBrightnessEffect *v1174; // rax
  struct CResourceTable *v1175; // rdx
  __int64 v1176; // r9
  CColorMatrixEffect *v1177; // rax
  struct CResourceTable *v1178; // rdx
  __int64 v1179; // r9
  CCombinedGeometry *v1180; // rax
  __int64 v1181; // r9
  CBlendEffect *v1182; // rax
  struct CResourceTable *v1183; // rdx
  __int64 v1184; // r9
  CFloodEffect *v1185; // rax
  struct CResourceTable *v1186; // rdx
  __int64 v1187; // r9
  CGaussianBlurEffect *v1188; // rax
  struct CResourceTable *v1189; // rdx
  __int64 v1190; // r9
  CGeometry2DGroup *v1191; // rax
  __int64 v1192; // r9
  CGeometryGroup *v1193; // rax
  __int64 v1194; // r9
  CSaturationEffect *v1195; // rax
  struct CResourceTable *v1196; // rdx
  __int64 v1197; // r9
  CLinearGradientLegacyMilBrush *v1198; // rax
  __int64 v1199; // r9
  CLinearTransferEffect *v1200; // rax
  struct CResourceTable *v1201; // rdx
  __int64 v1202; // r9
  CGradientBrush *v1203; // rax
  __int64 v1204; // r9
  CMatrixTransform3D *v1205; // rax
  struct CResourceTable *v1206; // rdx
  __int64 v1207; // r9
  CMeshGeometry2D *v1208; // rax
  struct CResourceTable *v1209; // rdx
  __int64 v1210; // r9
  CTranslateTransform3D *v1211; // rax
  struct CResourceTable *v1212; // rdx
  __int64 v1213; // r9
  CRotateTransform3D *v1214; // rax
  struct CResourceTable *v1215; // rdx
  __int64 v1216; // r9
  CSaturationEffect *v1217; // rax
  struct CResourceTable *v1218; // rdx
  __int64 v1219; // r9
  CScaleTransform3D *v1220; // rax
  struct CResourceTable *v1221; // rdx
  __int64 v1222; // r9
  CScreenCursor *v1223; // rax
  struct CResourceTable *v1224; // rdx
  __int64 v1225; // r9
  CShadowEffect *v1226; // rax
  struct CResourceTable *v1227; // rdx
  __int64 v1228; // r9
  CSkewTransform *v1229; // rax
  struct CResourceTable *v1230; // rdx
  __int64 v1231; // r9
  CTableTransferEffect *v1232; // rax
  struct CResourceTable *v1233; // rdx
  __int64 v1234; // r9
  CTransform3DGroup *v1235; // rax
  __int64 v1236; // r9
  CTranslateTransform3D *v1237; // rax
  struct CResourceTable *v1238; // rdx
  __int64 v1239; // r9
  CTurbulenceEffect *v1240; // rax
  struct CResourceTable *v1241; // rdx
  __int64 v1242; // r9
  __int64 v1243; // r9
  unsigned int v1244; // [rsp+20h] [rbp-E0h]
  unsigned int v1245; // [rsp+20h] [rbp-E0h]
  unsigned int v1246; // [rsp+40h] [rbp-C0h]
  struct MILCMD_NOTIFICATIONRESOURCE_SETCALLBACKID *v1248; // [rsp+58h] [rbp-A8h]
  int v1249; // [rsp+60h] [rbp-A0h]
  unsigned int v1250; // [rsp+64h] [rbp-9Ch]
  struct CResourceTable *v1251; // [rsp+68h] [rbp-98h]
  CMILCOMBase *v1252; // [rsp+70h] [rbp-90h] BYREF
  unsigned int *v1253; // [rsp+78h] [rbp-88h]
  struct CComposition *v1254; // [rsp+80h] [rbp-80h]
  void **v1255; // [rsp+88h] [rbp-78h]
  unsigned int *v1256; // [rsp+90h] [rbp-70h]
  CMILCOMBase *v1257; // [rsp+98h] [rbp-68h] BYREF
  _DWORD v1258[4]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v1259; // [rsp+B0h] [rbp-50h]
  _OWORD v1260[8]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v1261; // [rsp+140h] [rbp+40h] BYREF
  _DWORD v1262[4]; // [rsp+150h] [rbp+50h] BYREF
  __int128 v1263; // [rsp+160h] [rbp+60h]
  struct FastRegion::Internal::CRgnData *v1264; // [rsp+170h] [rbp+70h] BYREF
  _DWORD v1265[20]; // [rsp+178h] [rbp+78h] BYREF
  unsigned int v1266; // [rsp+1C8h] [rbp+C8h]
  unsigned int v1267; // [rsp+1D8h] [rbp+D8h]
  int v1268; // [rsp+1E0h] [rbp+E0h] BYREF
  void *lpMem; // [rsp+1E8h] [rbp+E8h]
  _BYTE v1270[256]; // [rsp+1F0h] [rbp+F0h] BYREF

  ++*((_DWORD *)a4 + 20);
  v5 = 0LL;
  v6 = *((_QWORD *)a4 + 3);
  v7 = 0;
  v8 = a3;
  v9 = a4;
  *((_QWORD *)this + 63) = a2;
  v10 = 0LL;
  *((_DWORD *)this + 128) = v8;
  v11 = a2;
  v12 = this;
  v1249 = v8;
  v1253 = a2;
  v1254 = this;
  v1246 = 0;
  v1248 = 0LL;
  v1250 = 0;
  v1251 = (struct CResourceTable *)v6;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    McTemplateU0x(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSQUEUEEVENT, v8);
    v10 = 0LL;
    v9 = a4;
  }
  v13 = -2147467259;
  v14 = 1LL;
  v1256 = v11;
  if ( (_DWORD)v8 )
  {
    if ( (unsigned int)v8 >= 8 )
    {
      v15 = *v11;
      if ( (unsigned int)v15 >= 8 && (v15 & 3) == 0 && (unsigned int)v15 <= (unsigned int)v8 )
      {
        v10 = v11[1];
        v5 = v11 + 1;
        v7 = v15 - 4;
        v1246 = v11[1];
        v1248 = (struct MILCMD_NOTIFICATIONRESOURCE_SETCALLBACKID *)(v11 + 1);
        v1256 = (unsigned int *)((char *)v11 + v15);
        v13 = 0;
        v1250 = v15 - 4;
      }
    }
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0x208u);
      goto LABEL_1071;
    }
  }
  else
  {
    v1248 = 0LL;
    v13 = 1;
    v1250 = 0;
  }
  while ( 2 )
  {
    if ( v13 == 1 )
    {
      *(_BYTE *)(*((_QWORD *)v12 + 27) + 376LL) |= 2u;
      if ( *((_QWORD *)v9 + 7)
        && (IsLocal = CAnimationLoggingManager::LogDebugPropertyUpdates(
                        *((CAnimationLoggingManager **)v9 + 7),
                        *((_QWORD *)v12 + 45)),
            v13 = IsLocal,
            IsLocal < 0) )
      {
        v1245 = 304;
LABEL_2934:
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, IsLocal, v1245);
      }
      else
      {
        v13 = 0;
      }
      goto LABEL_59;
    }
    switch ( (int)v10 )
    {
      case 1:
        if ( v7 < 8 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3660014874LL, 0LL, 1LL);
          __debugbreak();
        }
        Resource = (CAnimation *)CResourceTable::GetResource(v6, v5[1], 2u);
        if ( !Resource )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3660014874LL, 0LL, v518);
          __debugbreak();
        }
        IsLocal = CAnimation::ProcessAddTimeEvents(Resource, v515, v517, v5 + 2, v7 - 8);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 33;
        goto LABEL_2934;
      case 2:
        if ( v7 < 0xC )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1931109274LL, 0LL, 1LL);
          __debugbreak();
        }
        v619 = (CAnimation *)CResourceTable::GetResource(v6, v5[1], 2u);
        if ( !v619 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1931109274LL, 0LL, v621);
          __debugbreak();
        }
        IsLocal = CAnimation::ProcessAppend(v619, v620, (const struct MILCMD_ANIMATION_APPEND *)v5, v5 + 3, v7 - 12);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 59;
        goto LABEL_2934;
      case 3:
        if ( v7 != 8 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2893493219LL, 0LL, 1LL);
          __debugbreak();
        }
        v622 = CResourceTable::GetResource(v6, v5[1], 2u);
        v624 = v622;
        if ( !v622 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2893493219LL, 0LL, v623);
          __debugbreak();
        }
        *(_DWORD *)(v622 + 176) = 0;
        DynArrayImpl<0>::ShrinkToSize(v622 + 152, 0x10u);
        *(_DWORD *)(v624 + 184) = 0;
        goto LABEL_45;
      case 4:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 507882937LL, 0LL, 1LL);
          __debugbreak();
        }
        v519 = (CAnimation *)CResourceTable::GetResource(v6, v5[1], 2u);
        if ( !v519 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 507882937LL, 0LL, v520);
          __debugbreak();
        }
        IsLocal = CAnimation::ProcessSetCallbackId(
                    v519,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_ANIMATION_SETCALLBACKID *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 105;
        goto LABEL_2934;
      case 5:
        if ( v7 != 48 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 4101652420LL, 0LL, 1LL);
          __debugbreak();
        }
        v625 = (CAnimation *)CResourceTable::GetResource(v6, v5[1], 2u);
        if ( !v625 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 4101652420LL, 0LL, v626);
          __debugbreak();
        }
        IsLocal = CAnimation::ProcessSetHandoff(
                    v625,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_ANIMATION_SETHANDOFF *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 128;
        goto LABEL_2934;
      case 6:
        if ( v7 != 8 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 97919666LL, 0LL, 1LL);
          __debugbreak();
        }
        v413 = CResourceTable::GetResource(v6, v5[1], 2u);
        if ( !v413 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 97919666LL, 0LL, v414);
          __debugbreak();
        }
        *(_BYTE *)(v413 + 112) |= 8u;
        goto LABEL_46;
      case 7:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3304425837LL, 0LL, 1LL);
          __debugbreak();
        }
        v417 = (CAnimation *)CResourceTable::GetResource(v6, v5[1], 2u);
        if ( !v417 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3304425837LL, 0LL, v419);
          __debugbreak();
        }
        IsLocal = CAnimation::ProcessSetPaused(v417, v418, (const struct MILCMD_ANIMATION_SETPAUSED *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 174;
        goto LABEL_2934;
      case 8:
        if ( v7 != 20 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2858433065LL, 0LL, 1LL);
          __debugbreak();
        }
        v407 = (CAnimation *)CResourceTable::GetResource(v6, v5[1], 2u);
        if ( !v407 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2858433065LL, 0LL, v408);
          __debugbreak();
        }
        IsLocal = CAnimation::ProcessSetPrimitives(
                    v407,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_ANIMATION_SETPRIMITIVES *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 197;
        goto LABEL_2934;
      case 9:
        if ( v7 != 24 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2384459446LL, 0LL, 1LL);
          __debugbreak();
        }
        v420 = (CAnimation *)CResourceTable::GetResource(v6, v5[1], 2u);
        if ( !v420 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2384459446LL, 0LL, v422);
          __debugbreak();
        }
        IsLocal = CAnimation::ProcessSetSeek(v420, v421, (const struct MILCMD_ANIMATION_SETSEEK *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 220;
        goto LABEL_2934;
      case 10:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1312234675LL, 0LL, 1LL);
          __debugbreak();
        }
        v627 = (CAnimation *)CResourceTable::GetResource(v6, v5[1], 2u);
        if ( !v627 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1312234675LL, 0LL, v628);
          __debugbreak();
        }
        IsLocal = CAnimation::ProcessSetTrigger(
                    v627,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_ANIMATION_SETTRIGGER *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 243;
        goto LABEL_2934;
      case 11:
        if ( v7 != 24 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3136625663LL, 0LL, 1LL);
          __debugbreak();
        }
        v629 = (CAnimation *)CResourceTable::GetResource(v6, v5[1], 2u);
        if ( !v629 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3136625663LL, 0LL, v631);
          __debugbreak();
        }
        IsLocal = CAnimation::ProcessTelemetrySetAnimationScenarioGUID(
                    v629,
                    v630,
                    (const struct MILCMD_ANIMATION_TELEMETRYSETANIMATIONSCENARIOGUID *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 266;
        goto LABEL_2934;
      case 12:
        if ( v7 != 24 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1922479419LL, 0LL, 1LL);
          __debugbreak();
        }
        v530 = CResourceTable::GetResource(v6, v5[1], 2u);
        if ( !v530 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1922479419LL, 0LL, v531);
          __debugbreak();
        }
        v532 = *((_QWORD *)v5 + 1);
        *(_QWORD *)(v530 + 136) = v532;
        *(_QWORD *)(v530 + 208) = v532;
        goto LABEL_46;
      case 13:
        if ( v7 != 8 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3045471224LL, 0LL, 1LL);
          __debugbreak();
        }
        v632 = (_QWORD *)CResourceTable::GetResource(v6, v5[1], 3u);
        if ( !v632 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3045471224LL, 0LL, v633);
          __debugbreak();
        }
        *(_QWORD *)(v632[6] + 56LL) = v632;
        (*(void (__fastcall **)(_QWORD *))(*v632 + 8LL))(v632);
        goto LABEL_46;
      case 14:
        if ( v7 != 20 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3063018673LL, 0LL, 1LL);
          __debugbreak();
        }
        v634 = (CAnimationLoggingManager *)CResourceTable::GetResource(v6, v5[1], 3u);
        if ( !v634 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3063018673LL, 0LL, v636);
          __debugbreak();
        }
        IsLocal = CAnimationLoggingManager::ProcessSetAnimationEnded(
                    v634,
                    v635,
                    (const struct MILCMD_ANIMATIONLOGGINGMANAGER_SETANIMATIONENDED *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 335;
        goto LABEL_2934;
      case 15:
        if ( v7 < 0x10 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2256998218LL, 0LL, 1LL);
          __debugbreak();
        }
        v637 = (CAnimationLoggingManager *)CResourceTable::GetResource(v6, v5[1], 3u);
        if ( !v637 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2256998218LL, 0LL, v639);
          __debugbreak();
        }
        IsLocal = CAnimationLoggingManager::ProcessSetComment(
                    v637,
                    v638,
                    (const struct MILCMD_ANIMATIONLOGGINGMANAGER_SETCOMMENT *)v5,
                    v5 + 4,
                    v1244);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 361;
        goto LABEL_2934;
      case 16:
        if ( v7 != 20 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 979091401LL, 0LL, 1LL);
          __debugbreak();
        }
        v640 = (CAnimationLoggingManager *)CResourceTable::GetResource(v6, v5[1], 3u);
        if ( !v640 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 979091401LL, 0LL, v642);
          __debugbreak();
        }
        IsLocal = CAnimationLoggingManager::ProcessSetPropertyUpdate(
                    v640,
                    v641,
                    (const struct MILCMD_ANIMATIONLOGGINGMANAGER_SETPROPERTYUPDATE *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 384;
        goto LABEL_2934;
      case 17:
        if ( v7 != 16 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2066895863LL, 0LL, 1LL);
          __debugbreak();
        }
        v643 = (CAnimationTrigger *)CResourceTable::GetResource(v6, v5[1], 4u);
        if ( !v643 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2066895863LL, 0LL, v645);
          __debugbreak();
        }
        IsLocal = CAnimationTrigger::ProcessTrigger(v643, v644, (const struct MILCMD_ANIMATIONTRIGGER_TRIGGER *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 407;
        goto LABEL_2934;
      case 18:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 833587344LL, 0LL, 1LL);
          __debugbreak();
        }
        v582 = (CAtlasedRectsMesh *)CResourceTable::GetResource(v6, v5[1], 7u);
        if ( !v582 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 833587344LL, 0LL, v584);
          __debugbreak();
        }
        IsLocal = CAtlasedRectsMesh::ProcessSetConstantOpacity(
                    v582,
                    v583,
                    (const struct MILCMD_ATLASEDRECTSMESH_SETCONSTANTOPACITY *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 430;
        goto LABEL_2934;
      case 19:
        if ( v7 != 16 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2747607654LL, 0LL, 1LL);
          __debugbreak();
        }
        v409 = (CBaseAnimation *)CResourceTable::GetResource(v6, v5[1], 9u);
        if ( !v409 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2747607654LL, 0LL, v410);
          __debugbreak();
        }
        IsLocal = CBaseAnimation::ProcessAddBinding(
                    v409,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_BASEANIMATION_ADDBINDING *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 453;
        goto LABEL_2934;
      case 20:
        if ( v7 != 16 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2610812009LL, 0LL, 1LL);
          __debugbreak();
        }
        v415 = (CBaseAnimation *)CResourceTable::GetResource(v6, v5[1], 9u);
        if ( !v415 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2610812009LL, 0LL, v416);
          __debugbreak();
        }
        IsLocal = CBaseAnimation::ProcessRemoveBinding(
                    v415,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_BASEANIMATION_REMOVEBINDING *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 476;
        goto LABEL_2934;
      case 21:
        if ( v7 < 0xC )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1552156387LL, 0LL, 1LL);
          __debugbreak();
        }
        v646 = CResourceTable::GetResource(v6, v5[1], 0xAu);
        if ( !v646 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1552156387LL, 0LL, v647);
          __debugbreak();
        }
        IsLocal = CBaseExpression::SetExpressionArray<MILCMD_BASEEXPRESSION_ADDINITIALVALUEEXPRESSIONS,DynArrayIANoCtor<CBaseExpression *,2,0>>(
                    v646,
                    v6,
                    v5,
                    v5 + 3);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 502;
        goto LABEL_2934;
      case 22:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1204813472LL, 0LL, 1LL);
          __debugbreak();
        }
        v273 = (CBaseExpression *)CResourceTable::GetResource(v6, v5[1], 0xAu);
        if ( !v273 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1204813472LL, 0LL, v274);
          __debugbreak();
        }
        v275 = *(__int64 (__fastcall **)(CKeyframeAnimation *, struct CResourceTable *, const struct MILCMD_BASEEXPRESSION_SETBINDINGBROKEN *))(*(_QWORD *)v273 + 160LL);
        if ( v275 == CBaseExpression::ProcessSetBindingBroken )
        {
          v276 = CBaseExpression::ProcessSetBindingBroken(
                   v273,
                   (struct CResourceTable *)v6,
                   (const struct MILCMD_BASEEXPRESSION_SETBINDINGBROKEN *)v5);
        }
        else if ( v275 == CKeyframeAnimation::ProcessSetBindingBroken )
        {
          v276 = CKeyframeAnimation::ProcessSetBindingBroken(
                   v273,
                   (struct CResourceTable *)v6,
                   (const struct MILCMD_BASEEXPRESSION_SETBINDINGBROKEN *)v5);
        }
        else
        {
          v276 = (*(__int64 (__fastcall **)(CBaseExpression *, __int64, unsigned int *))(*(_QWORD *)v273 + 160LL))(
                   v273,
                   v6,
                   v5);
        }
        v13 = v276;
        if ( v276 >= 0 )
          goto LABEL_46;
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v276, 0x20Du);
        goto LABEL_59;
      case 23:
        if ( v7 < 0xC )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2418601794LL, 0LL, 1LL);
          __debugbreak();
        }
        v648 = (CBaseExpression *)CResourceTable::GetResource(v6, v5[1], 0xAu);
        if ( !v648 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2418601794LL, 0LL, v650);
          __debugbreak();
        }
        IsLocal = CBaseExpression::ProcessSetDebugInfo(
                    v648,
                    v649,
                    (const struct MILCMD_BASEEXPRESSION_SETDEBUGINFO *)v5,
                    v5 + 3,
                    v1244);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 551;
        goto LABEL_2934;
      case 24:
        if ( v7 != 40 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3926895916LL, 0LL, 1LL);
          __debugbreak();
        }
        v246 = (CBaseExpression *)CResourceTable::GetResource(v6, v5[1], 0xAu);
        if ( !v246 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3926895916LL, 0LL, v247);
          __debugbreak();
        }
        IsLocal = CBaseExpression::ProcessSetTarget(
                    v246,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_BASEEXPRESSION_SETTARGET *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 574;
        goto LABEL_2934;
      case 25:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 935868408LL, 0LL, 1LL);
          __debugbreak();
        }
        v248 = (CBaseExpression *)CResourceTable::GetResource(v6, v5[1], 0xAu);
        if ( !v248 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 935868408LL, 0LL, v250);
          __debugbreak();
        }
        IsLocal = CBaseExpression::ProcessSetTracingCookie(
                    v248,
                    v249,
                    (const struct MILCMD_BASEEXPRESSION_SETTRACINGCOOKIE *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 597;
        goto LABEL_2934;
      case 26:
        if ( v7 != 16 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1033753962LL, 0LL, 1LL);
          __debugbreak();
        }
        v502 = CResourceTable::GetResource(v6, v5[1], 0xBu);
        if ( !v502 || v502 == 16 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1033753962LL, 0LL, v503);
          __debugbreak();
        }
        IsLocal = (*(__int64 (__fastcall **)(__int64, __int64, unsigned int *))(*(_QWORD *)(v502 - 16) + 32LL))(
                    v502 - 16,
                    v6,
                    v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 620;
        goto LABEL_2934;
      case 27:
        if ( v7 != 8 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2037754310LL, 0LL, 1LL);
          __debugbreak();
        }
        v544 = CResourceTable::GetResource(v6, v5[1], 0xFu);
        if ( !v544 || (v546 = v544 - 16) == 0 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2037754310LL, 0LL, v545);
          __debugbreak();
        }
        *(_BYTE *)(v546 + 376) = 1;
        goto LABEL_46;
      case 28:
        if ( v7 != 8 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2616749837LL, 0LL, 1LL);
          __debugbreak();
        }
        v651 = CResourceTable::GetResource(v6, v5[1], 0xFu);
        if ( !v651 || v651 == 16 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2616749837LL, 0LL, v654);
          __debugbreak();
        }
        IsLocal = CCachedVisualImage::ProcessFreezeVisualSurface((CCachedVisualImage *)(v651 - 16), v652, v653);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 666;
        goto LABEL_2934;
      case 29:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3045389736LL, 0LL, 1LL);
          __debugbreak();
        }
        v655 = CResourceTable::GetResource(v6, v5[1], 0xFu);
        if ( !v655 || v655 == 16 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3045389736LL, 0LL, v657);
          __debugbreak();
        }
        IsLocal = CCachedVisualImage::ProcessSetViewboxBottom(
                    (CCachedVisualImage *)(v655 - 16),
                    v656,
                    (const struct MILCMD_CACHEDVISUALIMAGE_SETVIEWBOXBOTTOM *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 689;
        goto LABEL_2934;
      case 30:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 345053632LL, 0LL, 1LL);
          __debugbreak();
        }
        v658 = CResourceTable::GetResource(v6, v5[1], 0xFu);
        if ( !v658 || v658 == 16 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 345053632LL, 0LL, v660);
          __debugbreak();
        }
        IsLocal = CCachedVisualImage::ProcessSetViewboxLeft(
                    (CCachedVisualImage *)(v658 - 16),
                    v659,
                    (const struct MILCMD_CACHEDVISUALIMAGE_SETVIEWBOXLEFT *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 712;
        goto LABEL_2934;
      case 31:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1823057968LL, 0LL, 1LL);
          __debugbreak();
        }
        v661 = CResourceTable::GetResource(v6, v5[1], 0xFu);
        if ( !v661 || v661 == 16 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1823057968LL, 0LL, v663);
          __debugbreak();
        }
        IsLocal = CCachedVisualImage::ProcessSetViewboxRight(
                    (CCachedVisualImage *)(v661 - 16),
                    v662,
                    (const struct MILCMD_CACHEDVISUALIMAGE_SETVIEWBOXRIGHT *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 735;
        goto LABEL_2934;
      case 32:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2199998557LL, 0LL, 1LL);
          __debugbreak();
        }
        v664 = CResourceTable::GetResource(v6, v5[1], 0xFu);
        if ( !v664 || v664 == 16 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2199998557LL, 0LL, v666);
          __debugbreak();
        }
        IsLocal = CCachedVisualImage::ProcessSetViewboxTop(
                    (CCachedVisualImage *)(v664 - 16),
                    v665,
                    (const struct MILCMD_CACHEDVISUALIMAGE_SETVIEWBOXTOP *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 758;
        goto LABEL_2934;
      case 33:
        if ( v7 != 24 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 337284491LL, 0LL, 1LL);
          __debugbreak();
        }
        v568 = CResourceTable::GetResource(v6, v5[1], 0xFu);
        if ( !v568 || v568 == 16 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 337284491LL, 0LL, v569);
          __debugbreak();
        }
        IsLocal = CCachedVisualImage::Snapshot((CCachedVisualImage *)(v568 - 16), (const struct tagRECT *)(v5 + 2));
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 781;
        goto LABEL_2934;
      case 34:
        if ( v7 != 72 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 856028522LL, 0LL, 1LL);
          __debugbreak();
        }
        v491 = v5[12];
        if ( v491 && !CResourceTable::GetResource(v6, v491, 0x86u) )
        {
          CComposition::FailFastOnMalformedPacket(v12, 856028522LL, 0LL, v492);
          __debugbreak();
        }
        v493 = CResourceTable::GetResource(v6, v5[1], 0xFu);
        if ( !v493 || v493 == 16 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 856028522LL, 0LL, v494);
          __debugbreak();
        }
        IsLocal = CCachedVisualImage::ProcessUpdate(
                    (CCachedVisualImage *)(v493 - 16),
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_CACHEDVISUALIMAGE *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 817;
        goto LABEL_2934;
      case 35:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1970546016LL, 0LL, 1LL);
          __debugbreak();
        }
        IsLocal = CLegacySurfaceManager::AddAsyncFlushResponse(
                    (CLegacySurfaceManager *)(*((_QWORD *)v12 + 10) + 96LL),
                    v9,
                    v5[1],
                    v5[2]);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 835;
        goto LABEL_2934;
      case 36:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2866919555LL, 0LL, 1LL);
          __debugbreak();
        }
        v36 = v5[2];
        v37 = 0LL;
        v38 = v5[1];
        v39 = 0LL;
        v40 = 0;
        v1252 = 0LL;
        if ( !v36 || !v38 )
        {
          v40 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x190u);
          v9 = a4;
          goto LABEL_70;
        }
        if ( v38 < *(_DWORD *)(v6 + 28) )
          goto LABEL_66;
        v509 = HANDLE_TABLE::ResizeToFit((HANDLE_TABLE *)(v6 + 16), v38);
        v40 = v509;
        if ( v509 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v509, 0x19Du);
          v9 = a4;
        }
        else
        {
          v9 = a4;
LABEL_66:
          v41 = *(_QWORD *)(v6 + 40);
          v42 = v38 * *(_DWORD *)(v6 + 24);
          if ( *(_DWORD *)(v42 + v41) )
          {
            v40 = -2147024809;
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x1ACu);
            v13 = -2147024809;
            goto LABEL_1147;
          }
          *(_DWORD *)(v42 + v41) = v36;
        }
        if ( v40 >= 0 )
        {
          v39 = *((_QWORD *)v1251 + 5) + v38 * *((_DWORD *)v1251 + 6);
          *(_QWORD *)(v39 + 8) = 0LL;
        }
LABEL_70:
        v13 = v40;
        if ( v40 >= 0 )
        {
          v43 = CResourceFactory::Create(v1254, v9, *((_DWORD *)v1248 + 2), &v1252);
          v13 = v43;
          if ( v43 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v43, 0x32u);
          }
          else
          {
            v44 = v1252;
            v45 = (*(__int64 (__fastcall **)(CMILCOMBase *))(*(_QWORD *)v1252 + 40LL))(v1252);
            v13 = v45;
            if ( v45 >= 0 )
            {
              LODWORD(v47) = *((_DWORD *)v1248 + 1);
              v13 = -2147024890;
              if ( (_DWORD)v47 && (unsigned int)v47 < *(_DWORD *)(v6 + 28) )
              {
                v48 = *(_DWORD *)(v6 + 24);
                v49 = *(_QWORD *)(v6 + 40);
                v50 = v1251;
                v46 = (unsigned int)((_DWORD)v47 * v48);
                if ( *(_DWORD *)(v46 + v49) )
                {
                  v51 = *((_QWORD *)v1251 + 5) + (unsigned int)((_DWORD)v47 * *((_DWORD *)v1251 + 6));
                  if ( v51 )
                  {
                    *(_QWORD *)(v51 + 8) = v44;
                    v13 = 0;
                    v52 = *(__int64 (__fastcall **)(CMILCOMBase *))(*(_QWORD *)v44 + 8LL);
                    if ( v52 == CMILCOMBase::InternalAddRef || v52 == CMILCOMBase::InternalAddRef )
                      CMILCOMBase::InternalAddRef(v44);
                    else
                      v52(v44);
                    v53 = *(_DWORD *)v51;
                    v47 = (_DWORD *)*((_QWORD *)v1251 + 7);
                    if ( (*(int *)v51 < 80 || v53 >= 123) && v53 >= 26 && (v53 >= 78 || v53 < 36) )
                    {
                      switch ( v53 )
                      {
                        case 26:
                        case 29:
                        case 30:
                        case 31:
                        case 34:
                          ++v47[30];
                          goto LABEL_88;
                        case 35:
                          ++v47[31];
                          goto LABEL_88;
                        case 78:
                          ++v47[29];
                          goto LABEL_88;
                        case 79:
                        case 123:
                        case 134:
                        case 139:
                          ++v47[28];
                          goto LABEL_88;
                        default:
                          break;
                      }
                    }
                    ++v47[27];
                  }
                }
              }
              else
              {
                v50 = v1251;
              }
              if ( v13 >= 0 )
              {
LABEL_88:
                v9 = a4;
                v37 = v44;
                *((_QWORD *)v44 + 6) = a4;
                v39 = 0LL;
                v1252 = 0LL;
                goto LABEL_89;
              }
              MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0x39u);
LABEL_1149:
              v9 = a4;
LABEL_89:
              v5 = (unsigned int *)v1248;
              if ( v13 < 0 )
              {
                if ( v39 )
                  CResourceTable::DeleteHandle(v50, *((_DWORD *)v1248 + 1));
                ReleaseInterface<IBitmapLock>((__int64 *)&v1252);
                MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0x818u);
              }
              else
              {
                if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x40) == 0 )
                {
LABEL_91:
                  if ( v37 )
                  {
                    v54 = *(__int64 (__fastcall **)(CGdiSpriteBitmap *))(*(_QWORD *)v37 + 16LL);
                    if ( v54 == CResource::Release )
                    {
                      CResource::Release(v37);
                    }
                    else if ( v54 == CVisual::Release )
                    {
                      CVisual::Release(v37);
                    }
                    else if ( v54 == CGdiSpriteBitmap::Release )
                    {
                      CGdiSpriteBitmap::Release(v37);
                    }
                    else
                    {
                      v54(v37);
                    }
                    v9 = a4;
                  }
                  if ( v13 >= 0 )
                  {
                    LODWORD(v8) = v1249;
                    goto LABEL_47;
                  }
                  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0x355u);
                  v12 = v1254;
                  goto LABEL_59;
                }
                McTemplateU0qxqx(
                  v46,
                  (_DWORD)v47,
                  *((_DWORD *)v9 + 4),
                  *((_DWORD *)v1248 + 1),
                  *((_DWORD *)v1248 + 2),
                  (char)v37);
              }
              v9 = a4;
              goto LABEL_91;
            }
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v45, 0x38u);
          }
LABEL_1148:
          v50 = v1251;
          goto LABEL_1149;
        }
LABEL_1147:
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v40, 0x2Du);
        goto LABEL_1148;
      case 37:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 724106194LL, 0LL, 1LL);
          __debugbreak();
        }
        v16 = v5[1];
        v17 = v5[2];
        if ( !v16 )
          goto LABEL_2189;
        if ( v16 >= *(_DWORD *)(v6 + 28) )
          goto LABEL_2189;
        v18 = *(_QWORD *)(v6 + 40);
        if ( !*(_DWORD *)(v16 * *(_DWORD *)(v6 + 24) + v18) )
          goto LABEL_2189;
        v19 = v18 + v16 * *(_DWORD *)(v6 + 24);
        if ( !*(_QWORD *)(v19 + 8) )
          goto LABEL_2189;
        v20 = *(_QWORD *)(v19 + 8);
        v21 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v20 + 48LL);
        if ( v21 == CRgnGeometry::IsOfType )
        {
          v22 = CRgnGeometry::IsOfType(v20, v17);
        }
        else if ( v21 == CVisual::IsOfType )
        {
          v22 = CVisual::IsOfType(v20, v17);
        }
        else if ( v21 == CExpression::IsOfType )
        {
          v22 = CExpression::IsOfType(v20, v17);
        }
        else if ( v21 == CSpriteVisual::IsOfType )
        {
          v22 = CSpriteVisual::IsOfType(v20, v17);
        }
        else
        {
          v22 = v21 == CPropertyBag::IsOfType
              ? CPropertyBag::IsOfType(v20, v17)
              : ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64))v21)(v20, (unsigned int)v17, v17, 1LL);
        }
        if ( !v22 )
          goto LABEL_2189;
        v14 = *(_QWORD *)(v19 + 8);
        if ( !v14 )
          goto LABEL_2189;
        v23 = *((_DWORD *)v1248 + 1);
        if ( v23 && v23 < *((_DWORD *)v1251 + 7) )
          v24 = *(_DWORD *)(v23 * *((_DWORD *)v1251 + 6) + *((_QWORD *)v1251 + 5));
        else
          v24 = 0;
        if ( v24 != *((_DWORD *)v1248 + 2) )
        {
LABEL_2189:
          CComposition::FailFastOnMalformedPacket(v12, 724106194LL, 0LL, v14);
          __debugbreak();
        }
        v25 = *(void (__fastcall **)(CWindowNode *, struct CChannelContext *, _QWORD))(*(_QWORD *)v14 + 128LL);
        if ( (char *)v25 == (char *)CNotificationResource::DetachFromChannel )
        {
          CNotificationResource::DetachFromChannel(
            *(CNotificationResource **)(v19 + 8),
            (CAnimationLoggingManager **)a4);
        }
        else if ( (char *)v25 == (char *)CResource::DetachFromChannel )
        {
          CResource::DetachFromChannel(*(CResource **)(v19 + 8), (CAnimationLoggingManager **)a4);
        }
        else
        {
          v386 = *(CWindowNode **)(v19 + 8);
          if ( (char *)v25 == (char *)CWindowNode::DetachFromChannel )
            CWindowNode::DetachFromChannel(v386, (CAnimationLoggingManager **)a4, 0);
          else
            v25(v386, a4, 0LL);
        }
        v26 = *((_QWORD *)a4 + 3);
        v13 = -2147024890;
        if ( v23
          && v23 < *(_DWORD *)(v26 + 28)
          && (v27 = *(_QWORD *)(v26 + 40), *(_DWORD *)(v23 * *(_DWORD *)(v26 + 24) + v27))
          && (v28 = v27 + v23 * *(_DWORD *)(v26 + 24)) != 0
          && (v29 = *(_DWORD *)v28) != 0 )
        {
          if ( *(_QWORD *)(v28 + 8) )
          {
            v30 = *(_DWORD **)(v26 + 56);
            if ( v29 >= 80 && v29 < 123 || v29 < 26 || v29 < 78 && v29 >= 36 )
            {
LABEL_39:
              --v30[27];
            }
            else
            {
              switch ( v29 )
              {
                case 26:
                case 29:
                case 30:
                case 31:
                case 34:
                  --v30[30];
                  break;
                case 35:
                  --v30[31];
                  break;
                case 78:
                  --v30[29];
                  break;
                case 79:
                case 123:
                case 134:
                case 139:
                  --v30[28];
                  break;
                default:
                  goto LABEL_39;
              }
            }
            v31 = *(CResource **)(v28 + 8);
            v32 = *(__int64 (__fastcall **)(CGdiSpriteBitmap *))(*(_QWORD *)v31 + 16LL);
            if ( v32 == CResource::Release )
            {
              CResource::Release(v31);
            }
            else if ( v32 == CVisual::Release )
            {
              CVisual::Release(v31);
            }
            else if ( v32 == CGdiSpriteBitmap::Release )
            {
              CGdiSpriteBitmap::Release(v31);
            }
            else
            {
              ((void (__fastcall *)(CResource *, __int64 (__fastcall *)(CGdiSpriteBitmap *)))v32)(
                v31,
                CGdiSpriteBitmap::Release);
            }
            *(_QWORD *)(v28 + 8) = 0LL;
          }
          memset_0((void *)(*(_QWORD *)(v26 + 40) + *(_DWORD *)(v26 + 24) * v23), 0, *(unsigned int *)(v26 + 24));
          v13 = 0;
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070006, 0xD35u);
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070006, 0x7EAu);
        }
        if ( v13 >= 0 )
          goto LABEL_45;
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0x367u);
        goto LABEL_59;
      case 38:
        if ( v7 != 16 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2025927682LL, 0LL, 1LL);
          __debugbreak();
        }
        IsLocal = CComposition::Channel_DuplicateHandleOnSource(
                    v12,
                    v9,
                    (struct CResourceTable *)v10,
                    (const struct MILCMD_CHANNEL_DUPLICATEHANDLEONSOURCE *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 889;
        goto LABEL_2934;
      case 39:
        if ( v7 != 16 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1629774989LL, 0LL, 1LL);
          __debugbreak();
        }
        IsLocal = CComposition::Channel_DuplicateHandleOnTarget(
                    v12,
                    v9,
                    (struct CResourceTable *)v10,
                    (const struct MILCMD_CHANNEL_DUPLICATEHANDLEONTARGET *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 907;
        goto LABEL_2934;
      case 40:
        if ( v7 != 8 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1671348757LL, 0LL, 1LL);
          __debugbreak();
        }
        IsLocal = CComposition::Channel_EnableDebugCounter(
                    v12,
                    v9,
                    (struct CResourceTable *)v10,
                    (const struct MILCMD_CHANNEL_ENABLEDEBUGCOUNTER *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 925;
        goto LABEL_2934;
      case 41:
        if ( v7 != 8 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1291601584LL, 0LL, 1LL);
          __debugbreak();
        }
        IsLocal = CComposition::Channel_RoundTripRequest(
                    v12,
                    (struct CChannelContext *)&_ImageBase,
                    (struct CResourceTable *)v10,
                    (const struct MILCMD_CHANNEL_ROUNDTRIPREQUEST *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 943;
        goto LABEL_2934;
      case 42:
        if ( v7 != 16 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 4094737275LL, 0LL, 1LL);
          __debugbreak();
        }
        IsLocal = CComposition::Channel_SetCallbackId(
                    v12,
                    v9,
                    (struct CResourceTable *)v10,
                    (const struct MILCMD_CHANNEL_SETCALLBACKID *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 961;
        goto LABEL_2934;
      case 43:
        if ( v7 != 4 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 362500758LL, 0LL, 1LL);
          __debugbreak();
        }
        IsLocal = CComposition::Channel_SyncFlush(
                    v12,
                    v9,
                    (struct CResourceTable *)v10,
                    (const struct MILCMD_CHANNEL_SYNCFLUSH *)1);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 979;
        goto LABEL_2934;
      case 44:
        if ( v7 != 44 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2618595658LL, 0LL, 1LL);
          __debugbreak();
        }
        IsLocal = CComposition::Channel_VisualCaptureBits(
                    v12,
                    v9,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_CHANNEL_VISUALCAPTUREBITS *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 997;
        goto LABEL_2934;
      case 45:
        if ( v7 != 24 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3844216620LL, 0LL, 1LL);
          __debugbreak();
        }
        v411 = (CColorBrush *)CResourceTable::GetResource(v6, v5[1], 0x10u);
        if ( !v411 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3844216620LL, 0LL, v412);
          __debugbreak();
        }
        v4 = (__m128)v5[4];
        CColorBrush::SetColor(v411, *((float *)v5 + 2), *((float *)v5 + 3), v4.m128_f32[0], *((float *)v5 + 5));
        goto LABEL_46;
      case 46:
        if ( v7 != 24 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3818411214LL, 0LL, 1LL);
          __debugbreak();
        }
        v387 = (CColorGradientStop *)CResourceTable::GetResource(v6, v5[1], 0x11u);
        if ( !v387 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3818411214LL, 0LL, v388);
          __debugbreak();
        }
        CColorGradientStop::SetColor(v387, (const struct _D3DCOLORVALUE *)(v5 + 2));
        goto LABEL_46;
      case 47:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 4236620199LL, 0LL, 1LL);
          __debugbreak();
        }
        v389 = (CColorGradientStop *)CResourceTable::GetResource(v6, v5[1], 0x11u);
        if ( !v389 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 4236620199LL, 0LL, v390);
          __debugbreak();
        }
        CColorGradientStop::SetOffset(v389, *((float *)v5 + 2));
        goto LABEL_46;
      case 48:
        if ( v7 != 24 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2883246123LL, 0LL, 1LL);
          __debugbreak();
        }
        v562 = CResourceTable::GetResource(v6, v5[1], 0x13u);
        v563 = v562;
        if ( !v562 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2883246123LL, 0LL, 0LL);
          __debugbreak();
        }
        goto LABEL_970;
      case 49:
        if ( v7 != 108 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1866877126LL, 0LL, 1LL);
          __debugbreak();
        }
        v667 = CResourceTable::GetResource(v6, v5[1], 0x14u);
        if ( !v667 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1866877126LL, 0LL, v668);
          __debugbreak();
        }
        *(_OWORD *)(v667 + 56) = *(_OWORD *)(v5 + 2);
        *(_OWORD *)(v667 + 72) = *(_OWORD *)(v5 + 6);
        *(_OWORD *)(v667 + 88) = *(_OWORD *)(v5 + 10);
        *(_OWORD *)(v667 + 104) = *(_OWORD *)(v5 + 14);
        *(_OWORD *)(v667 + 120) = *(_OWORD *)(v5 + 18);
        *(_OWORD *)(v667 + 136) = *(_OWORD *)(v5 + 22);
        *(_DWORD *)(v667 + 152) = v5[26];
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v667 + 64LL))(v667, 0LL, 0LL);
        goto LABEL_46;
      case 50:
        if ( v7 != 28 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1410766426LL, 0LL, 1LL);
          __debugbreak();
        }
        v507 = (CCompiledEffectTemplate *)CResourceTable::GetResource(v6, v5[1], 0x16u);
        if ( !v507 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1410766426LL, 0LL, v508);
          __debugbreak();
        }
        IsLocal = CCompiledEffectTemplate::ProcessUpdate(
                    v507,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_COMPILEDEFFECTTEMPLATE *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 1135;
        goto LABEL_2934;
      case 51:
        if ( v7 != 16 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2278518416LL, 0LL, 1LL);
          __debugbreak();
        }
        v293 = (CComponentTransform2D *)CResourceTable::GetResource(v6, v5[1], 0x17u);
        if ( !v293 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2278518416LL, 0LL, v295);
          __debugbreak();
        }
        IsLocal = CComponentTransform2D::ProcessSetAnchorPoint(
                    v293,
                    v294,
                    (const struct MILCMD_COMPONENTTRANSFORM2D_SETANCHORPOINT *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 1158;
        goto LABEL_2934;
      case 52:
        if ( v7 != 16 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1500033243LL, 0LL, 1LL);
          __debugbreak();
        }
        v296 = (CComponentTransform2D *)CResourceTable::GetResource(v6, v5[1], 0x17u);
        if ( !v296 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1500033243LL, 0LL, v298);
          __debugbreak();
        }
        IsLocal = CComponentTransform2D::ProcessSetCenterPoint(
                    v296,
                    v297,
                    (const struct MILCMD_COMPONENTTRANSFORM2D_SETCENTERPOINT *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 1181;
        goto LABEL_2934;
      case 53:
        if ( v7 != 16 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 397718561LL, 0LL, 1LL);
          __debugbreak();
        }
        v299 = (CComponentTransform2D *)CResourceTable::GetResource(v6, v5[1], 0x17u);
        if ( !v299 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 397718561LL, 0LL, v301);
          __debugbreak();
        }
        IsLocal = CComponentTransform2D::ProcessSetOffset(
                    v299,
                    v300,
                    (const struct MILCMD_COMPONENTTRANSFORM2D_SETOFFSET *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 1204;
        goto LABEL_2934;
      case 54:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 4065333459LL, 0LL, 1LL);
          __debugbreak();
        }
        v302 = (CComponentTransform2D *)CResourceTable::GetResource(v6, v5[1], 0x17u);
        if ( !v302 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 4065333459LL, 0LL, v304);
          __debugbreak();
        }
        IsLocal = CComponentTransform2D::ProcessSetRotationAngle(
                    v302,
                    v303,
                    (const struct MILCMD_COMPONENTTRANSFORM2D_SETROTATIONANGLE *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 1227;
        goto LABEL_2934;
      case 55:
        if ( v7 != 16 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1455128678LL, 0LL, 1LL);
          __debugbreak();
        }
        v305 = (CComponentTransform2D *)CResourceTable::GetResource(v6, v5[1], 0x17u);
        if ( !v305 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1455128678LL, 0LL, v307);
          __debugbreak();
        }
        IsLocal = CComponentTransform2D::ProcessSetScale(
                    v305,
                    v306,
                    (const struct MILCMD_COMPONENTTRANSFORM2D_SETSCALE *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 1250;
        goto LABEL_2934;
      case 56:
        if ( v7 != 32 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1292971189LL, 0LL, 1LL);
          __debugbreak();
        }
        v277 = (CComponentTransform2D *)CResourceTable::GetResource(v6, v5[1], 0x17u);
        if ( !v277 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1292971189LL, 0LL, v279);
          __debugbreak();
        }
        IsLocal = CComponentTransform2D::ProcessSetTransformMatrix(
                    v277,
                    v278,
                    (const struct MILCMD_COMPONENTTRANSFORM2D_SETTRANSFORMMATRIX *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 1273;
        goto LABEL_2934;
      case 57:
        if ( v7 != 16 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 698875649LL, 0LL, 1LL);
          __debugbreak();
        }
        v367 = (CComponentTransform3D *)CResourceTable::GetResource(v6, v5[1], 0x18u);
        if ( !v367 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 698875649LL, 0LL, v369);
          __debugbreak();
        }
        IsLocal = CComponentTransform3D::ProcessSetAnchorPoint(
                    v367,
                    v368,
                    (const struct MILCMD_COMPONENTTRANSFORM3D_SETANCHORPOINT *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 1296;
        goto LABEL_2934;
      case 58:
        if ( v7 != 20 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 4143980874LL, 0LL, 1LL);
          __debugbreak();
        }
        v370 = (CComponentTransform3D *)CResourceTable::GetResource(v6, v5[1], 0x18u);
        if ( !v370 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 4143980874LL, 0LL, v372);
          __debugbreak();
        }
        IsLocal = CComponentTransform3D::ProcessSetCenterPoint(
                    v370,
                    v371,
                    (const struct MILCMD_COMPONENTTRANSFORM3D_SETCENTERPOINT *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 1319;
        goto LABEL_2934;
      case 59:
        if ( v7 != 24 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3345369876LL, 0LL, 1LL);
          __debugbreak();
        }
        v373 = (CComponentTransform3D *)CResourceTable::GetResource(v6, v5[1], 0x18u);
        if ( !v373 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3345369876LL, 0LL, v375);
          __debugbreak();
        }
        IsLocal = CComponentTransform3D::ProcessSetOrientation(
                    v373,
                    v374,
                    (const struct MILCMD_COMPONENTTRANSFORM3D_SETORIENTATION *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 1342;
        goto LABEL_2934;
      case 60:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 486712882LL, 0LL, 1LL);
          __debugbreak();
        }
        v376 = (CComponentTransform3D *)CResourceTable::GetResource(v6, v5[1], 0x18u);
        if ( !v376 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 486712882LL, 0LL, v378);
          __debugbreak();
        }
        IsLocal = CComponentTransform3D::ProcessSetRotationAngle(
                    v376,
                    v377,
                    (const struct MILCMD_COMPONENTTRANSFORM3D_SETROTATIONANGLE *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 1365;
        goto LABEL_2934;
      case 61:
        if ( v7 != 20 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2986138090LL, 0LL, 1LL);
          __debugbreak();
        }
        v379 = (CComponentTransform3D *)CResourceTable::GetResource(v6, v5[1], 0x18u);
        if ( !v379 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2986138090LL, 0LL, v381);
          __debugbreak();
        }
        IsLocal = CComponentTransform3D::ProcessSetRotationAxis(
                    v379,
                    v380,
                    (const struct MILCMD_COMPONENTTRANSFORM3D_SETROTATIONAXIS *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 1388;
        goto LABEL_2934;
      case 62:
        if ( v7 != 20 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3111775064LL, 0LL, 1LL);
          __debugbreak();
        }
        v364 = (CComponentTransform3D *)CResourceTable::GetResource(v6, v5[1], 0x18u);
        if ( !v364 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3111775064LL, 0LL, v366);
          __debugbreak();
        }
        IsLocal = CComponentTransform3D::ProcessSetScale(
                    v364,
                    v365,
                    (const struct MILCMD_COMPONENTTRANSFORM3D_SETSCALE *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 1411;
        goto LABEL_2934;
      case 63:
        if ( v7 != 72 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 678828019LL, 0LL, 1LL);
          __debugbreak();
        }
        v280 = (CComponentTransform3D *)CResourceTable::GetResource(v6, v5[1], 0x18u);
        if ( !v280 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 678828019LL, 0LL, v282);
          __debugbreak();
        }
        IsLocal = CComponentTransform3D::ProcessSetTransformMatrix(
                    v280,
                    v281,
                    (const struct MILCMD_COMPONENTTRANSFORM3D_SETTRANSFORMMATRIX *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 1434;
        goto LABEL_2934;
      case 64:
        if ( v7 != 24 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 737590444LL, 0LL, 1LL);
          __debugbreak();
        }
        v598 = (CCompositionAmbientLight *)CResourceTable::GetResource(v6, v5[1], 0x1Au);
        if ( !v598 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 737590444LL, 0LL, v599);
          __debugbreak();
        }
        v4 = (__m128)v5[4];
        CCompositionAmbientLight::SetColor(
          v598,
          *((float *)v5 + 2),
          *((float *)v5 + 3),
          v4.m128_f32[0],
          *((float *)v5 + 5));
        goto LABEL_46;
      case 65:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1373588053LL, 0LL, 1LL);
          __debugbreak();
        }
        v669 = (CCompositionAmbientLight *)CResourceTable::GetResource(v6, v5[1], 0x1Au);
        if ( !v669 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1373588053LL, 0LL, v670);
          __debugbreak();
        }
        CCompositionAmbientLight::SetIntensity(v669, *((float *)v5 + 2));
        goto LABEL_46;
      case 66:
        if ( v7 != 20 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2915454973LL, 0LL, 1LL);
          __debugbreak();
        }
        v671 = (CCompositionCubeMap *)CResourceTable::GetResource(v6, v5[1], 0x1Cu);
        if ( !v671 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2915454973LL, 0LL, v673);
          __debugbreak();
        }
        IsLocal = CCompositionCubeMap::ProcessSetCreationParams(
                    v671,
                    v672,
                    (const struct MILCMD_COMPOSITIONCUBEMAP_SETCREATIONPARAMS *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 1503;
        goto LABEL_2934;
      case 67:
        if ( v7 < 0xC )
        {
          CComposition::FailFastOnMalformedPacket(v12, 905713872LL, 0LL, 1LL);
          __debugbreak();
        }
        v674 = (CCompositionCubeMap *)CResourceTable::GetResource(v6, v5[1], 0x1Cu);
        if ( !v674 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 905713872LL, 0LL, v675);
          __debugbreak();
        }
        IsLocal = CCompositionCubeMap::ProcessSetSurfaces(
                    v674,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_COMPOSITIONCUBEMAP_SETSURFACES *)v5,
                    v5 + 3,
                    v1244);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 1529;
        goto LABEL_2934;
      case 68:
        if ( v7 != 24 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 4181458240LL, 0LL, 1LL);
          __debugbreak();
        }
        v676 = (CCompositionDistantLight *)CResourceTable::GetResource(v6, v5[1], 0x1Du);
        if ( !v676 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 4181458240LL, 0LL, v677);
          __debugbreak();
        }
        v4 = (__m128)v5[4];
        CCompositionDistantLight::SetColor(
          v676,
          *((float *)v5 + 2),
          *((float *)v5 + 3),
          v4.m128_f32[0],
          *((float *)v5 + 5));
        goto LABEL_46;
      case 69:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2439729973LL, 0LL, 1LL);
          __debugbreak();
        }
        v678 = (CCompositionDistantLight *)CResourceTable::GetResource(v6, v5[1], 0x1Du);
        if ( !v678 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2439729973LL, 0LL, v679);
          __debugbreak();
        }
        IsLocal = CCompositionDistantLight::ProcessSetCoordinateSpace(
                    v678,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_COMPOSITIONDISTANTLIGHT_SETCOORDINATESPACE *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 1575;
        goto LABEL_2934;
      case 70:
        if ( v7 != 20 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2103386360LL, 0LL, 1LL);
          __debugbreak();
        }
        v680 = (CCompositionDistantLight *)CResourceTable::GetResource(v6, v5[1], 0x1Du);
        if ( !v680 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2103386360LL, 0LL, v681);
          __debugbreak();
        }
        v4 = (__m128)v5[4];
        CCompositionDistantLight::SetDirection(v680, *((float *)v5 + 2), *((float *)v5 + 3), v4.m128_f32[0]);
        goto LABEL_46;
      case 71:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2863090137LL, 0LL, 1LL);
          __debugbreak();
        }
        v682 = (CCompositionDistantLight *)CResourceTable::GetResource(v6, v5[1], 0x1Du);
        if ( !v682 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2863090137LL, 0LL, v683);
          __debugbreak();
        }
        CCompositionDistantLight::SetIntensity(v682, *((float *)v5 + 2));
        goto LABEL_46;
      case 72:
        if ( v7 < 0xC )
        {
          CComposition::FailFastOnMalformedPacket(v12, 999407677LL, 0LL, 1LL);
          __debugbreak();
        }
        v684 = CResourceTable::GetResource(v6, v5[1], 0x1Eu);
        if ( !v684 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 999407677LL, 0LL, v685);
          __debugbreak();
        }
        IsLocal = CCompositionLight::AddTargets(v684, v6, v5[2], v5 + 3);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 1647;
        goto LABEL_2934;
      case 73:
        if ( v7 < 0xC )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3608573317LL, 0LL, 1LL);
          __debugbreak();
        }
        v436 = CResourceTable::GetResource(v6, v5[1], 0x1Eu);
        if ( !v436 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3608573317LL, 0LL, v437);
          __debugbreak();
        }
        IsLocal = CCompositionLight::AddTargets(v436, v6, v5[2], v5 + 3);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 1673;
        goto LABEL_2934;
      case 74:
        if ( v7 != 8 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 4231292225LL, 0LL, 1LL);
          __debugbreak();
        }
        v686 = CResourceTable::GetResource(v6, v5[1], 0x1Eu);
        if ( !v686 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 4231292225LL, 0LL, v687);
          __debugbreak();
        }
        IsLocal = CCompositionLight::RemoveAllTargets(v686, 1LL);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 1696;
        goto LABEL_2934;
      case 75:
        if ( v7 != 8 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2017891339LL, 0LL, 1LL);
          __debugbreak();
        }
        v427 = CResourceTable::GetResource(v6, v5[1], 0x1Eu);
        if ( !v427 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2017891339LL, 0LL, v428);
          __debugbreak();
        }
        IsLocal = CCompositionLight::RemoveAllTargets(v427, 0LL);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 1719;
        goto LABEL_2934;
      case 76:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 4022074160LL, 0LL, 1LL);
          __debugbreak();
        }
        v570 = (CCompositionPointLight *)CResourceTable::GetResource(v6, v5[1], 0x1Fu);
        if ( !v570 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 4022074160LL, 0LL, v688);
          __debugbreak();
        }
        goto LABEL_988;
      case 77:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2562509734LL, 0LL, 1LL);
          __debugbreak();
        }
        v689 = (CCompositionPointLight *)CResourceTable::GetResource(v6, v5[1], 0x1Fu);
        if ( !v689 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2562509734LL, 0LL, v690);
          __debugbreak();
        }
        goto LABEL_1212;
      case 78:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 28678684LL, 0LL, 1LL);
          __debugbreak();
        }
        v691 = (CCompositionPointLight *)CResourceTable::GetResource(v6, v5[1], 0x1Fu);
        if ( !v691 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 28678684LL, 0LL, v692);
          __debugbreak();
        }
        goto LABEL_1215;
      case 79:
        if ( v7 != 24 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2204668228LL, 0LL, 1LL);
          __debugbreak();
        }
        v693 = (CCompositionPointLight *)CResourceTable::GetResource(v6, v5[1], 0x1Fu);
        if ( !v693 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2204668228LL, 0LL, v694);
          __debugbreak();
        }
        v4 = (__m128)v5[4];
        CCompositionPointLight::SetColor(
          v693,
          *((float *)v5 + 2),
          *((float *)v5 + 3),
          v4.m128_f32[0],
          *((float *)v5 + 5));
        goto LABEL_46;
      case 80:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2976316095LL, 0LL, 1LL);
          __debugbreak();
        }
        v695 = (CCompositionPointLight *)CResourceTable::GetResource(v6, v5[1], 0x1Fu);
        if ( !v695 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2976316095LL, 0LL, v696);
          __debugbreak();
        }
        IsLocal = CCompositionPointLight::ProcessSetCoordinateSpace(
                    v695,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_COMPOSITIONPOINTLIGHT_SETCOORDINATESPACE *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 1834;
        goto LABEL_2934;
      case 81:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1162771071LL, 0LL, 1LL);
          __debugbreak();
        }
        v697 = (CCompositionPointLight *)CResourceTable::GetResource(v6, v5[1], 0x1Fu);
        if ( !v697 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1162771071LL, 0LL, v698);
          __debugbreak();
        }
        CCompositionPointLight::SetIntensity(v697, *((float *)v5 + 2));
        goto LABEL_46;
      case 82:
        if ( v7 != 20 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 4052233052LL, 0LL, 1LL);
          __debugbreak();
        }
        v699 = (CCompositionPointLight *)CResourceTable::GetResource(v6, v5[1], 0x1Fu);
        if ( !v699 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 4052233052LL, 0LL, v700);
          __debugbreak();
        }
        v4 = (__m128)v5[4];
        CCompositionPointLight::SetOffset(v699, *((float *)v5 + 2), *((float *)v5 + 3), v4.m128_f32[0]);
        goto LABEL_46;
      case 83:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1976638971LL, 0LL, 1LL);
          __debugbreak();
        }
        v701 = (CCompositionSkyBoxBrush *)CResourceTable::GetResource(v6, v5[1], 0x21u);
        if ( !v701 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1976638971LL, 0LL, v703);
          __debugbreak();
        }
        IsLocal = CCompositionSkyBoxBrush::ProcessSetFaceVisibilities(
                    v701,
                    v702,
                    (const struct MILCMD_COMPOSITIONSKYBOXBRUSH_SETFACEVISIBILITIES *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 1903;
        goto LABEL_2934;
      case 84:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 571935388LL, 0LL, 1LL);
          __debugbreak();
        }
        v704 = (CCompositionSkyBoxBrush *)CResourceTable::GetResource(v6, v5[1], 0x21u);
        if ( !v704 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 571935388LL, 0LL, v706);
          __debugbreak();
        }
        IsLocal = CCompositionSkyBoxBrush::ProcessSetIsLocal(
                    v704,
                    v705,
                    (const struct MILCMD_COMPOSITIONSKYBOXBRUSH_SETISLOCAL *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 1926;
        goto LABEL_2934;
      case 85:
        if ( v7 != 32 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2233202736LL, 0LL, 1LL);
          __debugbreak();
        }
        v707 = (CCompositionSkyBoxBrush *)CResourceTable::GetResource(v6, v5[1], 0x21u);
        if ( !v707 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2233202736LL, 0LL, v708);
          __debugbreak();
        }
        v4 = _mm_cvtpd_ps((__m128d)*((unsigned __int64 *)v5 + 3));
        CCompositionSkyBoxBrush::SetOffset(v707, *((double *)v5 + 1), *((double *)v5 + 2), v4.m128_f32[0]);
        goto LABEL_46;
      case 86:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 524795409LL, 0LL, 1LL);
          __debugbreak();
        }
        v709 = (CCompositionSkyBoxBrush *)CResourceTable::GetResource(v6, v5[1], 0x21u);
        if ( !v709 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 524795409LL, 0LL, v710);
          __debugbreak();
        }
        CCompositionSkyBoxBrush::SetSize(v709, *((float *)v5 + 2));
        goto LABEL_46;
      case 87:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2207993235LL, 0LL, 1LL);
          __debugbreak();
        }
        v711 = (CCompositionSkyBoxBrush *)CResourceTable::GetResource(v6, v5[1], 0x21u);
        if ( !v711 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2207993235LL, 0LL, v712);
          __debugbreak();
        }
        IsLocal = CCompositionSkyBoxBrush::ProcessSetSource(
                    v711,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_COMPOSITIONSKYBOXBRUSH_SETSOURCE *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 1995;
        goto LABEL_2934;
      case 88:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1502618962LL, 0LL, 1LL);
          __debugbreak();
        }
        v713 = v5[2];
        if ( v713 && !CResourceTable::GetResource(v6, v713, 0x80u) )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1502618962LL, 0LL, v714);
          __debugbreak();
        }
        v715 = (CCompositionSkyBoxBrush *)CResourceTable::GetResource(v6, v5[1], 0x21u);
        if ( !v715 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1502618962LL, 0LL, v716);
          __debugbreak();
        }
        IsLocal = CCompositionSkyBoxBrush::ProcessSetTransform(
                    v715,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_COMPOSITIONSKYBOXBRUSH_SETTRANSFORM *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 2031;
        goto LABEL_2934;
      case 89:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 721700632LL, 0LL, 1LL);
          __debugbreak();
        }
        v570 = (CCompositionPointLight *)CResourceTable::GetResource(v6, v5[1], 0x22u);
        if ( !v570 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 721700632LL, 0LL, v571);
          __debugbreak();
        }
LABEL_988:
        CCompositionPointLight::SetAttenuation0(v570, *((float *)v5 + 2));
        goto LABEL_46;
      case 90:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1543731086LL, 0LL, 1LL);
          __debugbreak();
        }
        v689 = (CCompositionPointLight *)CResourceTable::GetResource(v6, v5[1], 0x22u);
        if ( !v689 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1543731086LL, 0LL, v717);
          __debugbreak();
        }
LABEL_1212:
        CCompositionPointLight::SetAttenuation1(v689, *((float *)v5 + 2));
        goto LABEL_46;
      case 91:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3305776692LL, 0LL, 1LL);
          __debugbreak();
        }
        v691 = (CCompositionPointLight *)CResourceTable::GetResource(v6, v5[1], 0x22u);
        if ( !v691 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3305776692LL, 0LL, v718);
          __debugbreak();
        }
LABEL_1215:
        CCompositionPointLight::SetAttenuation2(v691, *((float *)v5 + 2));
        goto LABEL_46;
      case 92:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2492899978LL, 0LL, 1LL);
          __debugbreak();
        }
        v572 = (struct CResource **)CResourceTable::GetResource(v6, v5[1], 0x22u);
        if ( !v572 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2492899978LL, 0LL, v573);
          __debugbreak();
        }
        IsLocal = CCompositionSpotLight::ProcessSetCoordinateSpace(
                    v572,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_COMPOSITIONSPOTLIGHT_SETCOORDINATESPACE *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 2123;
        goto LABEL_2934;
      case 93:
        if ( v7 != 20 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 787195454LL, 0LL, 1LL);
          __debugbreak();
        }
        v719 = (CCompositionSpotLight *)CResourceTable::GetResource(v6, v5[1], 0x22u);
        if ( !v719 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 787195454LL, 0LL, v720);
          __debugbreak();
        }
        v4 = (__m128)v5[4];
        CCompositionSpotLight::SetDirection(v719, *((float *)v5 + 2), *((float *)v5 + 3), v4.m128_f32[0]);
        goto LABEL_46;
      case 94:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1385791261LL, 0LL, 1LL);
          __debugbreak();
        }
        v574 = (CCompositionSpotLight *)CResourceTable::GetResource(v6, v5[1], 0x22u);
        if ( !v574 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1385791261LL, 0LL, v575);
          __debugbreak();
        }
        CCompositionSpotLight::SetInnerConeAngle(v574, *((float *)v5 + 2));
        goto LABEL_46;
      case 95:
        if ( v7 != 24 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 877556477LL, 0LL, 1LL);
          __debugbreak();
        }
        v721 = (CCompositionSpotLight *)CResourceTable::GetResource(v6, v5[1], 0x22u);
        if ( !v721 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 877556477LL, 0LL, v722);
          __debugbreak();
        }
        v4 = (__m128)v5[4];
        CCompositionSpotLight::SetInnerConeColor(
          v721,
          *((float *)v5 + 2),
          *((float *)v5 + 3),
          v4.m128_f32[0],
          *((float *)v5 + 5));
        goto LABEL_46;
      case 96:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 407613597LL, 0LL, 1LL);
          __debugbreak();
        }
        v723 = (CCompositionSpotLight *)CResourceTable::GetResource(v6, v5[1], 0x22u);
        if ( !v723 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 407613597LL, 0LL, v724);
          __debugbreak();
        }
        CCompositionSpotLight::SetInnerConeIntensity(v723, *((float *)v5 + 2));
        goto LABEL_46;
      case 97:
        if ( v7 != 20 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3283950177LL, 0LL, 1LL);
          __debugbreak();
        }
        v725 = (CCompositionSpotLight *)CResourceTable::GetResource(v6, v5[1], 0x22u);
        if ( !v725 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3283950177LL, 0LL, v726);
          __debugbreak();
        }
        v4 = (__m128)v5[4];
        CCompositionSpotLight::SetOffset(v725, *((float *)v5 + 2), *((float *)v5 + 3), v4.m128_f32[0]);
        goto LABEL_46;
      case 98:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 532293711LL, 0LL, 1LL);
          __debugbreak();
        }
        v576 = (CCompositionSpotLight *)CResourceTable::GetResource(v6, v5[1], 0x22u);
        if ( !v576 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 532293711LL, 0LL, v577);
          __debugbreak();
        }
        CCompositionSpotLight::SetOuterConeAngle(v576, *((float *)v5 + 2));
        goto LABEL_46;
      case 99:
        if ( v7 != 24 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2037196207LL, 0LL, 1LL);
          __debugbreak();
        }
        v727 = (CCompositionSpotLight *)CResourceTable::GetResource(v6, v5[1], 0x22u);
        if ( !v727 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2037196207LL, 0LL, v728);
          __debugbreak();
        }
        v4 = (__m128)v5[4];
        CCompositionSpotLight::SetOuterConeColor(
          v727,
          *((float *)v5 + 2),
          *((float *)v5 + 3),
          v4.m128_f32[0],
          *((float *)v5 + 5));
        goto LABEL_46;
      case 100:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2792883661LL, 0LL, 1LL);
          __debugbreak();
        }
        v729 = (CCompositionSpotLight *)CResourceTable::GetResource(v6, v5[1], 0x22u);
        if ( !v729 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2792883661LL, 0LL, v730);
          __debugbreak();
        }
        CCompositionSpotLight::SetOuterConeIntensity(v729, *((float *)v5 + 2));
        goto LABEL_46;
      case 101:
        if ( v7 != 28 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2687366102LL, 0LL, 1LL);
          __debugbreak();
        }
        v405 = (CCompositionSurfaceBitmap *)CResourceTable::GetResource(v6, v5[1], 0x23u);
        if ( !v405 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2687366102LL, 0LL, v406);
          __debugbreak();
        }
        IsLocal = CCompositionSurfaceBitmap::ProcessUpdate(
                    v405,
                    (const struct CResourceTable *)v6,
                    (const struct MILCMD_COMPOSITIONSURFACEBITMAP *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 2330;
        goto LABEL_2934;
      case 102:
        if ( v7 < 0xC )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3140410345LL, 0LL, 1LL);
          __debugbreak();
        }
        v731 = (CConditionalExpression *)CResourceTable::GetResource(v6, v5[1], 0x24u);
        if ( !v731 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3140410345LL, 0LL, v732);
          __debugbreak();
        }
        IsLocal = CConditionalExpression::ProcessAddConditionAnimationResources(
                    v731,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_CONDITIONALEXPRESSION_ADDCONDITIONANIMATIONRESOURCES *)v5,
                    v5 + 3,
                    v1244);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 2356;
        goto LABEL_2934;
      case 103:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2340952886LL, 0LL, 1LL);
          __debugbreak();
        }
        v733 = (CConditionalExpression *)CResourceTable::GetResource(v6, v5[1], 0x24u);
        if ( !v733 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2340952886LL, 0LL, v734);
          __debugbreak();
        }
        IsLocal = CConditionalExpression::ProcessSetDefaultAnimation(
                    v733,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_CONDITIONALEXPRESSION_SETDEFAULTANIMATION *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 2379;
        goto LABEL_2934;
      case 104:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1892908779LL, 0LL, 1LL);
          __debugbreak();
        }
        v735 = CResourceTable::GetResource(v6, v5[1], 0x24u);
        if ( !v735 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1892908779LL, 0LL, v736);
          __debugbreak();
        }
        *(_DWORD *)(v735 + 320) = v5[2];
        goto LABEL_46;
      case 105:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1446074921LL, 0LL, 1LL);
          __debugbreak();
        }
        v737 = CResourceTable::GetResource(v6, v5[1], 0x27u);
        if ( !v737 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1446074921LL, 0LL, v738);
          __debugbreak();
        }
        v739 = *(_QWORD *)(v737 + 56);
        v740 = v5[2];
        *(_DWORD *)(v739 + 460) = v740;
        if ( *(_QWORD *)(v739 + 112) )
          *(_DWORD *)(*(_QWORD *)(v739 + 112) + 300LL) = v740;
        goto LABEL_46;
      case 106:
        if ( v7 != 44 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2345643037LL, 0LL, 1LL);
          __debugbreak();
        }
        v741 = (CDcompRenderTarget *)CResourceTable::GetResource(v6, v5[1], 0x27u);
        if ( !v741 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2345643037LL, 0LL, v743);
          __debugbreak();
        }
        IsLocal = CDcompRenderTarget::ProcessCreate(v741, v742, (const struct MILCMD_DCOMPRENDERTARGET_CREATE *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 2448;
        goto LABEL_2934;
      case 107:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 727821379LL, 0LL, 1LL);
          __debugbreak();
        }
        v744 = CResourceTable::GetResource(v6, v5[1], 0x27u);
        if ( !v744 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 727821379LL, 0LL, v745);
          __debugbreak();
        }
        *(_DWORD *)(*(_QWORD *)(v744 + 56) + 464LL) = v5[2];
        *(_BYTE *)(*(_QWORD *)(v744 + 16) + 1297LL) = 0;
        goto LABEL_46;
      case 108:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3742495025LL, 0LL, 1LL);
          __debugbreak();
        }
        v746 = CResourceTable::GetResource(v6, v5[1], 0x27u);
        if ( !v746 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3742495025LL, 0LL, v747);
          __debugbreak();
        }
        CHwndRenderTarget::SetSDRBoost((CHwndRenderTarget *)(*(_QWORD *)(v746 + 56) + 64LL), *((float *)v5 + 2));
        goto LABEL_46;
      case 109:
        if ( v7 != 44 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1097599239LL, 0LL, 1LL);
          __debugbreak();
        }
        v600 = (CDcompRenderTarget *)CResourceTable::GetResource(v6, v5[1], 0x27u);
        if ( !v600 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1097599239LL, 0LL, v602);
          __debugbreak();
        }
        IsLocal = CDcompRenderTarget::ProcessUpdateTransform(
                    v600,
                    v601,
                    (const struct MILCMD_DCOMPRENDERTARGET_UPDATETRANSFORM *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 2517;
        goto LABEL_2934;
      case 110:
        if ( v7 != 52 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2346390611LL, 0LL, 1LL);
          __debugbreak();
        }
        v542 = (CDesktopRenderTarget *)CResourceTable::GetResource(v6, v5[1], 0x29u);
        if ( !v542 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2346390611LL, 0LL, v543);
          __debugbreak();
        }
        IsLocal = CDesktopRenderTarget::ProcessCaptureBits(
                    v542,
                    a4,
                    (const struct MILCMD_DESKTOPRENDERTARGET_CAPTUREBITS *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 2540;
        goto LABEL_2934;
      case 111:
        if ( v7 != 40 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1189401622LL, 0LL, 1LL);
          __debugbreak();
        }
        v748 = (CDesktopRenderTarget *)CResourceTable::GetResource(v6, v5[1], 0x29u);
        if ( !v748 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1189401622LL, 0LL, v750);
          __debugbreak();
        }
        IsLocal = CDesktopRenderTarget::ProcessCreate(v748, v749, (const struct MILCMD_DESKTOPRENDERTARGET_CREATE *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 2563;
        goto LABEL_2934;
      case 112:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3417089859LL, 0LL, 1LL);
          __debugbreak();
        }
        v751 = (CDesktopRenderTarget *)CResourceTable::GetResource(v6, v5[1], 0x29u);
        if ( !v751 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3417089859LL, 0LL, v753);
          __debugbreak();
        }
        IsLocal = CDesktopRenderTarget::ProcessDisableStereoRendering(
                    v751,
                    v752,
                    (const struct MILCMD_DESKTOPRENDERTARGET_DISABLESTEREORENDERING *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 2586;
        goto LABEL_2934;
      case 113:
        if ( v7 != 8 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1022194741LL, 0LL, 1LL);
          __debugbreak();
        }
        v754 = CResourceTable::GetResource(v6, v5[1], 0x29u);
        if ( !v754 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1022194741LL, 0LL, v755);
          __debugbreak();
        }
        v10 = v1246;
        v14 = 1LL;
        v9 = a4;
        if ( *(_DWORD *)(v754 + 144) )
          *(_BYTE *)(v754 + 376) = 1;
        goto LABEL_49;
      case 114:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3772393677LL, 0LL, 1LL);
          __debugbreak();
        }
        v603 = v5[2];
        if ( v603 && !CResourceTable::GetResource(v6, v603, 0x28u) )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3772393677LL, 0LL, v604);
          __debugbreak();
        }
        v605 = (struct CResource **)CResourceTable::GetResource(v6, v5[1], 0x29u);
        if ( !v605 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3772393677LL, 0LL, v606);
          __debugbreak();
        }
        IsLocal = CDesktopRenderTarget::ProcessSetDcompRenderTargetGroup(
                    v605,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_DESKTOPRENDERTARGET_SETDCOMPRENDERTARGETGROUP *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 2645;
        goto LABEL_2934;
      case 115:
        if ( v7 != 24 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2049800915LL, 0LL, 1LL);
          __debugbreak();
        }
        v756 = CResourceTable::GetResource(v6, v5[1], 0x29u);
        if ( !v756 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2049800915LL, 0LL, v757);
          __debugbreak();
        }
        *(_BYTE *)(v756 + 314) = 1;
        v1263 = *(_OWORD *)(v5 + 2);
        *(_OWORD *)(v756 + 416) = v1263;
        goto LABEL_46;
      case 116:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 657210031LL, 0LL, 1LL);
          __debugbreak();
        }
        v758 = v5[2];
        if ( v758 && !CResourceTable::GetResource(v6, v758, 0x74u) )
        {
          CComposition::FailFastOnMalformedPacket(v12, 657210031LL, 0LL, v759);
          __debugbreak();
        }
        v760 = (CDesktopRenderTarget *)CResourceTable::GetResource(v6, v5[1], 0x29u);
        if ( !v760 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 657210031LL, 0LL, v761);
          __debugbreak();
        }
        IsLocal = CDesktopRenderTarget::ProcessSetScreenCursor(
                    v760,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_DESKTOPRENDERTARGET_SETSCREENCURSOR *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 2704;
        goto LABEL_2934;
      case 117:
        if ( v7 != 44 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3039594439LL, 0LL, 1LL);
          __debugbreak();
        }
        v762 = (CDesktopRenderTarget *)CResourceTable::GetResource(v6, v5[1], 0x29u);
        if ( !v762 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3039594439LL, 0LL, v764);
          __debugbreak();
        }
        IsLocal = CDesktopRenderTarget::ProcessUpdateMonitorRotation(
                    v762,
                    v763,
                    (const struct MILCMD_DESKTOPRENDERTARGET_UPDATEMONITORROTATION *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 2727;
        goto LABEL_2934;
      case 118:
        if ( v7 != 16 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 205102339LL, 0LL, 1LL);
          __debugbreak();
        }
        v562 = CResourceTable::GetResource(v6, v5[1], 0x2Au);
        v563 = v562;
        if ( !v562 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 205102339LL, 0LL, 0LL);
          __debugbreak();
        }
        *(_QWORD *)(v562 + 56) = *((_QWORD *)v5 + 1);
        goto LABEL_971;
      case 119:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 637807381LL, 0LL, 1LL);
          __debugbreak();
        }
        v765 = (CDropShadow *)CResourceTable::GetResource(v6, v5[1], 0x2Cu);
        if ( !v765 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 637807381LL, 0LL, v766);
          __debugbreak();
        }
        CDropShadow::SetBlurRadius(v765, *((float *)v5 + 2));
        goto LABEL_46;
      case 120:
        if ( v7 != 24 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3147740091LL, 0LL, 1LL);
          __debugbreak();
        }
        v767 = (CDropShadow *)CResourceTable::GetResource(v6, v5[1], 0x2Cu);
        if ( !v767 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3147740091LL, 0LL, v768);
          __debugbreak();
        }
        v4 = (__m128)v5[4];
        CDropShadow::SetColor(v767, *((float *)v5 + 2), *((float *)v5 + 3), v4.m128_f32[0], *((float *)v5 + 5));
        goto LABEL_46;
      case 121:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3135789151LL, 0LL, 1LL);
          __debugbreak();
        }
        v769 = (CDropShadow *)CResourceTable::GetResource(v6, v5[1], 0x2Cu);
        if ( !v769 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3135789151LL, 0LL, v770);
          __debugbreak();
        }
        IsLocal = CDropShadow::ProcessSetMask(
                    v769,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_DROPSHADOW_SETMASK *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 2819;
        goto LABEL_2934;
      case 122:
        if ( v7 != 20 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3702665971LL, 0LL, 1LL);
          __debugbreak();
        }
        v771 = (CDropShadow *)CResourceTable::GetResource(v6, v5[1], 0x2Cu);
        if ( !v771 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3702665971LL, 0LL, v772);
          __debugbreak();
        }
        v4 = (__m128)v5[4];
        CDropShadow::SetOffset(v771, *((float *)v5 + 2), *((float *)v5 + 3), v4.m128_f32[0]);
        goto LABEL_46;
      case 123:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3776947436LL, 0LL, 1LL);
          __debugbreak();
        }
        v773 = (CDropShadow *)CResourceTable::GetResource(v6, v5[1], 0x2Cu);
        if ( !v773 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3776947436LL, 0LL, v774);
          __debugbreak();
        }
        CDropShadow::SetOpacity(v773, *((float *)v5 + 2));
        goto LABEL_46;
      case 124:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 581297305LL, 0LL, 1LL);
          __debugbreak();
        }
        v775 = (CSpriteVisualContent *)CResourceTable::GetResource(v6, v5[1], 0x2Cu);
        if ( !v775 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 581297305LL, 0LL, v776);
          __debugbreak();
        }
        *((_DWORD *)v775 + 49) = v5[2];
        CSpriteVisualContent::ReleasePrimitiveCaches(v775);
        goto LABEL_46;
      case 125:
        if ( v7 != 16 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1965250993LL, 0LL, 1LL);
          __debugbreak();
        }
        v566 = (CEffectBrush *)CResourceTable::GetResource(v6, v5[1], 0x2Eu);
        if ( !v566 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1965250993LL, 0LL, v567);
          __debugbreak();
        }
        IsLocal = CEffectBrush::ProcessSetInput(
                    v566,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_EFFECTBRUSH_SETINPUT *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 2911;
        goto LABEL_2934;
      case 126:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 659692372LL, 0LL, 1LL);
          __debugbreak();
        }
        v551 = (CEffectBrush *)CResourceTable::GetResource(v6, v5[1], 0x2Eu);
        if ( !v551 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 659692372LL, 0LL, v552);
          __debugbreak();
        }
        IsLocal = CEffectBrush::ProcessSetPropertyBag(
                    v551,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_EFFECTBRUSH_SETPROPERTYBAG *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 2934;
        goto LABEL_2934;
      case 127:
        if ( v7 != 16 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3403793240LL, 0LL, 1LL);
          __debugbreak();
        }
        v553 = (CEffectBrush *)CResourceTable::GetResource(v6, v5[1], 0x2Eu);
        if ( !v553 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3403793240LL, 0LL, v554);
          __debugbreak();
        }
        IsLocal = CEffectBrush::ProcessSetTemplate(
                    v553,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_EFFECTBRUSH_SETTEMPLATE *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 2957;
        goto LABEL_2934;
      case 128:
        if ( v7 != 24 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3069146464LL, 0LL, 1LL);
          __debugbreak();
        }
        v360 = (CEffectGroup *)CResourceTable::GetResource(v6, v5[1], 0x2Fu);
        if ( !v360 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3069146464LL, 0LL, v361);
          __debugbreak();
        }
        IsLocal = CEffectGroup::ProcessUpdate(v360, (struct CResourceTable *)v6, (const struct MILCMD_EFFECTGROUP *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 2980;
        goto LABEL_2934;
      case 129:
        if ( v7 != 48 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3293632762LL, 0LL, 1LL);
          __debugbreak();
        }
        v264 = (CExpression *)CResourceTable::GetResource(v6, v5[1], 0x30u);
        if ( !v264 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3293632762LL, 0LL, v265);
          __debugbreak();
        }
        IsLocal = CExpression::ProcessSetNodesInfo(
                    v264,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_EXPRESSION_SETNODESINFO *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 3003;
        goto LABEL_2934;
      case 130:
        if ( v7 < 0x10 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 410120982LL, 0LL, 1LL);
          __debugbreak();
        }
        v258 = (CExpression *)CResourceTable::GetResource(v6, v5[1], 0x30u);
        if ( !v258 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 410120982LL, 0LL, v260);
          __debugbreak();
        }
        IsLocal = CExpression::ProcessSetReferenceInfo(
                    v258,
                    v259,
                    (const struct MILCMD_EXPRESSION_SETREFERENCEINFO *)v5,
                    (_QWORD *)v5 + 2);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 3029;
        goto LABEL_2934;
      case 131:
        if ( v7 < 0xC )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2405974579LL, 0LL, 1LL);
          __debugbreak();
        }
        v777 = (CExpression *)CResourceTable::GetResource(v6, v5[1], 0x30u);
        if ( !v777 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2405974579LL, 0LL, v779);
          __debugbreak();
        }
        IsLocal = CExpression::ProcessSetReferenceStrings(
                    v777,
                    v778,
                    (const struct MILCMD_EXPRESSION_SETREFERENCESTRINGS *)v5,
                    v5 + 3,
                    v1244);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 3055;
        goto LABEL_2934;
      case 132:
        if ( v7 < 0x10 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1232704442LL, 0LL, 1LL);
          __debugbreak();
        }
        v266 = (CExpression *)CResourceTable::GetResource(v6, v5[1], 0x30u);
        if ( !v266 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1232704442LL, 0LL, v267);
          __debugbreak();
        }
        IsLocal = CExpression::ProcessSetSources(
                    v266,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_EXPRESSION_SETSOURCES *)v5,
                    v5 + 4);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 3081;
        goto LABEL_2934;
      case 133:
        if ( v7 < 0x10 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3958939975LL, 0LL, 1LL);
          __debugbreak();
        }
        v780 = (CFilterEffect *)CResourceTable::GetResource(v6, v5[1], 0x31u);
        if ( !v780 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3958939975LL, 0LL, v781);
          __debugbreak();
        }
        IsLocal = CFilterEffect::ProcessUpdateInputs(
                    v780,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_FILTEREFFECT_UPDATEINPUTS *)v5,
                    v5 + 4,
                    v7 - 16);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 3107;
        goto LABEL_2934;
      case 134:
        if ( v7 != 20 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2516291463LL, 0LL, 1LL);
          __debugbreak();
        }
        v782 = CResourceTable::GetResource(v6, v5[1], 0x32u);
        if ( !v782 || v782 == 16 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2516291463LL, 0LL, v784);
          __debugbreak();
        }
        IsLocal = CFlipChain::ProcessCreate((CFlipChain *)(v782 - 16), v783, (const struct MILCMD_FLIPCHAIN_CREATE *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 3130;
        goto LABEL_2934;
      case 135:
        if ( v7 != 64 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2054718293LL, 0LL, 1LL);
          __debugbreak();
        }
        v785 = CResourceTable::GetResource(v6, v5[1], 0x32u);
        if ( !v785 || v785 == 16 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2054718293LL, 0LL, v787);
          __debugbreak();
        }
        IsLocal = CFlipChain::ProcessInitializeSharedDataObjects(
                    (CFlipChain *)(v785 - 16),
                    v786,
                    (const struct MILCMD_FLIPCHAIN_INITIALIZESHAREDDATAOBJECTS *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 3153;
        goto LABEL_2934;
      case 136:
        if ( v7 != 28 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2282097610LL, 0LL, 1LL);
          __debugbreak();
        }
        v788 = CResourceTable::GetResource(v6, v5[1], 0x32u);
        if ( !v788 || v788 == 16 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2282097610LL, 0LL, v790);
          __debugbreak();
        }
        IsLocal = CFlipChain::ProcessRequestSharedHandle(
                    (CFlipChain *)(v788 - 16),
                    v789,
                    (const struct MILCMD_FLIPCHAIN_REQUESTSHAREDHANDLE *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 3176;
        goto LABEL_2934;
      case 137:
        if ( v7 != 8 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1907148086LL, 0LL, 1LL);
          __debugbreak();
        }
        v791 = CResourceTable::GetResource(v6, v5[1], 0x32u);
        if ( !v791 || v791 == 16 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1907148086LL, 0LL, v794);
          __debugbreak();
        }
        IsLocal = CFlipChain::ProcessResetSourceFrameCounters((CFlipChain *)(v791 - 16), v792, v793);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 3199;
        goto LABEL_2934;
      case 138:
        if ( v7 != 24 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 99993566LL, 0LL, 1LL);
          __debugbreak();
        }
        v795 = CResourceTable::GetResource(v6, v5[1], 0x32u);
        if ( !v795 || (v797 = v795 - 16) == 0 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 99993566LL, 0LL, v796);
          __debugbreak();
        }
        *(_OWORD *)(v797 + 104) = *(_OWORD *)(v5 + 2);
        goto LABEL_46;
      case 139:
        if ( v7 != 16 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 894709751LL, 0LL, 1LL);
          __debugbreak();
        }
        v798 = (CGdiSpriteBitmap *)CResourceTable::GetResource(v6, v5[1], 0x35u);
        if ( !v798 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 894709751LL, 0LL, v799);
          __debugbreak();
        }
        IsLocal = CGdiSpriteBitmap::NotifyDirty(v798, *((_QWORD *)v5 + 1));
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 3245;
        goto LABEL_2934;
      case 140:
        if ( v7 != 8 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 4258743342LL, 0LL, 1LL);
          __debugbreak();
        }
        if ( !CResourceTable::GetResource(v6, v5[1], 0x35u) )
        {
          CComposition::FailFastOnMalformedPacket(v12, 4258743342LL, 0LL, v589);
          __debugbreak();
        }
        goto LABEL_46;
      case 141:
        if ( v7 != 20 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3358069538LL, 0LL, 1LL);
          __debugbreak();
        }
        v458 = (CGdiSpriteBitmap *)CResourceTable::GetResource(v6, v5[1], 0x35u);
        if ( !v458 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3358069538LL, 0LL, v459);
          __debugbreak();
        }
        IsLocal = CGdiSpriteBitmap::ProcessUpdate(
                    v458,
                    (const struct CResourceTable *)v6,
                    (const struct MILCMD_GDISPRITEBITMAP *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 3291;
        goto LABEL_2934;
      case 142:
        if ( v7 != 24 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2642884288LL, 0LL, 1LL);
          __debugbreak();
        }
        v135 = v5[1];
        if ( !v135
          || v135 >= *(_DWORD *)(v6 + 28)
          || (v136 = *(_QWORD *)(v6 + 40), !*(_DWORD *)(v135 * *(_DWORD *)(v6 + 24) + v136))
          || (v137 = v136 + v135 * *(_DWORD *)(v6 + 24), !*(_QWORD *)(v137 + 8))
          || ((v138 = *(_QWORD *)(v137 + 8),
               v139 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v138 + 48LL),
               v139 != CGdiSpriteBitmap::IsOfType)
            ? (v140 = ((__int64 (__fastcall *)(__int64, __int64, unsigned __int64, __int64))v139)(v138, 53LL, v10, 1LL))
            : (v140 = CGdiSpriteBitmap::IsOfType(v138, 53)),
              !v140 || (v141 = *(CGdiSpriteBitmap **)(v137 + 8)) == 0LL) )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2642884288LL, 0LL, v14);
          __debugbreak();
        }
        v5 = (unsigned int *)v1248;
        IsLocal = CGdiSpriteBitmap::ProcessUpdateMargins(v141, (const struct CResourceTable *)v6, v1248);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 3314;
        goto LABEL_2934;
      case 143:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3321130015LL, 0LL, 1LL);
          __debugbreak();
        }
        v460 = (CGdiSpriteBitmap *)CResourceTable::GetResource(v6, v5[1], 0x35u);
        if ( !v460 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3321130015LL, 0LL, v461);
          __debugbreak();
        }
        IsLocal = CGdiSpriteBitmap::ProcessUpdateSurface(
                    v460,
                    (const struct CResourceTable *)v6,
                    (const struct MILCMD_GDISPRITEBITMAP_UPDATESURFACE *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 3337;
        goto LABEL_2934;
      case 144:
        if ( v7 < 8 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2669265962LL, 0LL, 1LL);
          __debugbreak();
        }
        v800 = (CGenericInk *)CResourceTable::GetResource(v6, v5[1], 0x36u);
        if ( !v800 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2669265962LL, 0LL, v803);
          __debugbreak();
        }
        IsLocal = CGenericInk::ProcessPropertiesUpdate(v800, v801, v802, v5 + 2, v7 - 8);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 3363;
        goto LABEL_2934;
      case 145:
        if ( v7 < 0x14 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 757141187LL, 0LL, 1LL);
          __debugbreak();
        }
        v804 = (CGenericInk *)CResourceTable::GetResource(v6, v5[1], 0x36u);
        if ( !v804 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 757141187LL, 0LL, v806);
          __debugbreak();
        }
        IsLocal = CGenericInk::ProcessSegmentUpdate(
                    v804,
                    v805,
                    (const struct MILCMD_GENERICINK_SEGMENTUPDATE *)v5,
                    v5 + 5,
                    v7 - 20);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 3389;
        goto LABEL_2934;
      case 146:
        if ( v7 != 24 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1811278130LL, 0LL, 1LL);
          __debugbreak();
        }
        if ( !CResourceTable::GetResource(v6, v5[1], 0x36u) )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1811278130LL, 0LL, v810);
          __debugbreak();
        }
        IsLocal = CGenericInk::ProcessTipPointBuffer(v808, v807, v809);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 3412;
        goto LABEL_2934;
      case 147:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 779321140LL, 0LL, 1LL);
          __debugbreak();
        }
        v585 = v5[2];
        if ( v585 && !CResourceTable::GetResource(v6, v585, 0x17u) )
        {
          CComposition::FailFastOnMalformedPacket(v12, 779321140LL, 0LL, v586);
          __debugbreak();
        }
        v587 = (struct CResource **)CResourceTable::GetResource(v6, v5[1], 0x37u);
        if ( !v587 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 779321140LL, 0LL, v588);
          __debugbreak();
        }
        IsLocal = CGeometry::ProcessSetTransform(
                    v587,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_GEOMETRY_SETTRANSFORM *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 3448;
        goto LABEL_2934;
      case 148:
        if ( v7 < 0x10 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2881054928LL, 0LL, 1LL);
          __debugbreak();
        }
        v423 = (struct CResource ***)CResourceTable::GetResource(v6, v5[1], 0x3Bu);
        if ( !v423 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2881054928LL, 0LL, v424);
          __debugbreak();
        }
        IsLocal = CGradientBrush::ProcessSetColorStops(
                    v423,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_GRADIENTBRUSH_SETCOLORSTOPS *)v5,
                    v5 + 4,
                    v7 - 16);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 3474;
        goto LABEL_2934;
      case 149:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1432629670LL, 0LL, 1LL);
          __debugbreak();
        }
        v811 = (CGradientBrush *)CResourceTable::GetResource(v6, v5[1], 0x3Bu);
        if ( !v811 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1432629670LL, 0LL, v813);
          __debugbreak();
        }
        IsLocal = CGradientBrush::ProcessSetExtendMode(
                    v811,
                    v812,
                    (const struct MILCMD_GRADIENTBRUSH_SETEXTENDMODE *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 3497;
        goto LABEL_2934;
      case 150:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1856563844LL, 0LL, 1LL);
          __debugbreak();
        }
        v814 = CResourceTable::GetResource(v6, v5[1], 0x3Bu);
        if ( !v814 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1856563844LL, 0LL, v815);
          __debugbreak();
        }
        v816 = v5[2];
        if ( v816 != *(_DWORD *)(v814 + 108) )
        {
          *(_DWORD *)(v814 + 108) = v816;
          *(_BYTE *)(v814 + 104) = 0;
          CSpriteVisualContent::ReleasePrimitiveCaches((CSpriteVisualContent *)v814);
        }
        goto LABEL_46;
      case 151:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2485595434LL, 0LL, 1LL);
          __debugbreak();
        }
        v425 = (struct CResource **)CResourceTable::GetResource(v6, v5[1], 0x3Bu);
        if ( !v425 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2485595434LL, 0LL, v426);
          __debugbreak();
        }
        IsLocal = CGradientBrush::ProcessSetTransform(
                    v425,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_GRADIENTBRUSH_SETTRANSFORM *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 3543;
        goto LABEL_2934;
      case 152:
        if ( v7 != 8 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3646750492LL, 0LL, 1LL);
          __debugbreak();
        }
        v817 = CResourceTable::GetResource(v6, v5[1], 0x3Du);
        if ( !v817 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3646750492LL, 0LL, v818);
          __debugbreak();
        }
        *(_DWORD *)(v817 + 64) = 0;
        *(_BYTE *)(v817 + 69) = 1;
        goto LABEL_46;
      case 153:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1975658256LL, 0LL, 1LL);
          __debugbreak();
        }
        v819 = (CHolographicComposition *)CResourceTable::GetResource(v6, v5[1], 0x3Du);
        if ( !v819 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1975658256LL, 0LL, v821);
          __debugbreak();
        }
        IsLocal = CHolographicComposition::ProcessSetQualityLevel(
                    v819,
                    v820,
                    (const struct MILCMD_HOLOGRAPHICCOMPOSITION_SETQUALITYLEVEL *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 3589;
        goto LABEL_2934;
      case 154:
        if ( v7 != 24 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1950909407LL, 0LL, 1LL);
          __debugbreak();
        }
        v822 = (CHolographicDisplay *)CResourceTable::GetResource(v6, v5[1], 0x3Eu);
        if ( !v822 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1950909407LL, 0LL, v824);
          __debugbreak();
        }
        IsLocal = CHolographicDisplay::ProcessSetAdapterLuid(
                    v822,
                    v823,
                    (const struct MILCMD_HOLOGRAPHICDISPLAY_SETADAPTERLUID *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 3612;
        goto LABEL_2934;
      case 155:
        if ( v7 != 24 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2587320285LL, 0LL, 1LL);
          __debugbreak();
        }
        v825 = (CHolographicDisplay *)CResourceTable::GetResource(v6, v5[1], 0x3Eu);
        if ( !v825 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2587320285LL, 0LL, v827);
          __debugbreak();
        }
        IsLocal = CHolographicDisplay::ProcessSetCameraId(
                    v825,
                    v826,
                    (const struct MILCMD_HOLOGRAPHICDISPLAY_SETCAMERAID *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 3635;
        goto LABEL_2934;
      case 156:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 364691278LL, 0LL, 1LL);
          __debugbreak();
        }
        v828 = (CHolographicDisplay *)CResourceTable::GetResource(v6, v5[1], 0x3Eu);
        if ( !v828 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 364691278LL, 0LL, v830);
          __debugbreak();
        }
        IsLocal = CHolographicDisplay::ProcessSetFlags(
                    v828,
                    v829,
                    (const struct MILCMD_HOLOGRAPHICDISPLAY_SETFLAGS *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 3658;
        goto LABEL_2934;
      case 157:
        if ( v7 != 20 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1625689804LL, 0LL, 1LL);
          __debugbreak();
        }
        v831 = (CHolographicDisplay *)CResourceTable::GetResource(v6, v5[1], 0x3Eu);
        if ( !v831 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1625689804LL, 0LL, v833);
          __debugbreak();
        }
        IsLocal = CHolographicDisplay::ProcessSetSwapChain(
                    v831,
                    v832,
                    (const struct MILCMD_HOLOGRAPHICDISPLAY_SETSWAPCHAIN *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 3681;
        goto LABEL_2934;
      case 158:
        if ( v7 != 16 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2125963200LL, 0LL, 1LL);
          __debugbreak();
        }
        v834 = (CHolographicDisplay *)CResourceTable::GetResource(v6, v5[1], 0x3Eu);
        if ( !v834 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2125963200LL, 0LL, v836);
          __debugbreak();
        }
        IsLocal = CHolographicDisplay::ProcessSetTargetFrameRate(
                    v834,
                    v835,
                    (const struct MILCMD_HOLOGRAPHICDISPLAY_SETTARGETFRAMERATE *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 3704;
        goto LABEL_2934;
      case 159:
        if ( v7 != 16 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2573789422LL, 0LL, 1LL);
          __debugbreak();
        }
        v837 = (CHolographicDisplay *)CResourceTable::GetResource(v6, v5[1], 0x3Eu);
        if ( !v837 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2573789422LL, 0LL, v839);
          __debugbreak();
        }
        IsLocal = CHolographicDisplay::ProcessSetVidPnId(
                    v837,
                    v838,
                    (const struct MILCMD_HOLOGRAPHICDISPLAY_SETVIDPNID *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 3727;
        goto LABEL_2934;
      case 160:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3712559864LL, 0LL, 1LL);
          __debugbreak();
        }
        v840 = CResourceTable::GetResource(v6, v5[1], 0x3Fu);
        if ( !v840 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3712559864LL, 0LL, v841);
          __debugbreak();
        }
        if ( *(_QWORD *)(v840 + 56) )
          CHolographicManager::SetActiveExclusiveView(*(CHolographicManager **)(v840 + 56), v5[2]);
        goto LABEL_46;
      case 161:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 650721070LL, 0LL, 1LL);
          __debugbreak();
        }
        v842 = CResourceTable::GetResource(v6, v5[1], 0x3Fu);
        if ( !v842 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 650721070LL, 0LL, v843);
          __debugbreak();
        }
        IsLocal = CHolographicExclusiveMode::SetProperty(v842, 1LL, 18LL, v5 + 2);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 3773;
        goto LABEL_2934;
      case 162:
        if ( v7 != 24 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 4020561386LL, 0LL, 1LL);
          __debugbreak();
        }
        v844 = (CHolographicExclusiveView *)CResourceTable::GetResource(v6, v5[1], 0x40u);
        if ( !v844 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 4020561386LL, 0LL, v846);
          __debugbreak();
        }
        IsLocal = CHolographicExclusiveView::ProcessCreate(
                    v844,
                    v845,
                    (const struct MILCMD_HOLOGRAPHICEXCLUSIVEVIEW_CREATE *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 3796;
        goto LABEL_2934;
      case 163:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 48437491LL, 0LL, 1LL);
          __debugbreak();
        }
        v847 = (CHolographicExclusiveView *)CResourceTable::GetResource(v6, v5[1], 0x40u);
        if ( !v847 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 48437491LL, 0LL, v848);
          __debugbreak();
        }
        IsLocal = CHolographicExclusiveView::ProcessSetSwapChain(
                    v847,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_HOLOGRAPHICEXCLUSIVEVIEW_SETSWAPCHAIN *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 3819;
        goto LABEL_2934;
      case 164:
        if ( v7 != 32 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2084148074LL, 0LL, 1LL);
          __debugbreak();
        }
        v849 = (CHolographicExclusiveView *)CResourceTable::GetResource(v6, v5[1], 0x40u);
        if ( !v849 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2084148074LL, 0LL, v851);
          __debugbreak();
        }
        IsLocal = CHolographicExclusiveView::ProcessSetViewData(
                    v849,
                    v850,
                    (const struct MILCMD_HOLOGRAPHICEXCLUSIVEVIEW_SETVIEWDATA *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 3842;
        goto LABEL_2934;
      case 165:
        if ( v7 != 20 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 781606330LL, 0LL, 1LL);
          __debugbreak();
        }
        v852 = (CHolographicInteropTexture *)CResourceTable::GetResource(v6, v5[1], 0x42u);
        if ( !v852 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 781606330LL, 0LL, v854);
          __debugbreak();
        }
        IsLocal = CHolographicInteropTexture::ProcessCreate(
                    v852,
                    v853,
                    (const struct MILCMD_HOLOGRAPHICINTEROPTEXTURE_CREATE *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 3865;
        goto LABEL_2934;
      case 166:
        if ( v7 != 24 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 28534511LL, 0LL, 1LL);
          __debugbreak();
        }
        v855 = (CHolographicInteropTexture *)CResourceTable::GetResource(v6, v5[1], 0x42u);
        if ( !v855 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 28534511LL, 0LL, v857);
          __debugbreak();
        }
        IsLocal = CHolographicInteropTexture::ProcessSetPosition(
                    v855,
                    v856,
                    (const struct MILCMD_HOLOGRAPHICINTEROPTEXTURE_SETPOSITION *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 3888;
        goto LABEL_2934;
      case 167:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2189391340LL, 0LL, 1LL);
          __debugbreak();
        }
        v858 = v5[2];
        if ( v858 && !CResourceTable::GetResource(v6, v858, 0x86u) )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2189391340LL, 0LL, v859);
          __debugbreak();
        }
        v860 = (CHolographicInteropTexture *)CResourceTable::GetResource(v6, v5[1], 0x42u);
        if ( !v860 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2189391340LL, 0LL, v861);
          __debugbreak();
        }
        IsLocal = CHolographicInteropTexture::ProcessSetRoot(
                    v860,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_HOLOGRAPHICINTEROPTEXTURE_SETROOT *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 3924;
        goto LABEL_2934;
      case 168:
        if ( v7 != 16 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 4066905929LL, 0LL, 1LL);
          __debugbreak();
        }
        v862 = CResourceTable::GetResource(v6, v5[1], 0x45u);
        if ( !v862 || v862 == 16 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 4066905929LL, 0LL, v863);
          __debugbreak();
        }
        IsLocal = CHwndBitmap::ProcessUpdate(
                    (CHwndBitmap *)(v862 - 16),
                    (const struct CResourceTable *)v6,
                    (const struct MILCMD_HWNDBITMAP *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 3947;
        goto LABEL_2934;
      case 169:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1510641392LL, 0LL, 1LL);
          __debugbreak();
        }
        v578 = v5[2];
        if ( v578 && !CResourceTable::GetResource(v6, v578, 0x86u) )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1510641392LL, 0LL, v579);
          __debugbreak();
        }
        v580 = CResourceTable::GetResource(v6, v5[1], 0x45u);
        if ( !v580 || v580 == 16 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1510641392LL, 0LL, v581);
          __debugbreak();
        }
        IsLocal = CHwndBitmap::ProcessUpdateVisual(
                    (CHwndBitmap *)(v580 - 16),
                    (const struct CResourceTable *)v6,
                    (const struct MILCMD_HWNDBITMAP_UPDATEVISUAL *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 3983;
        goto LABEL_2934;
      case 170:
        if ( v7 != 48 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1148650078LL, 0LL, 1LL);
          __debugbreak();
        }
        if ( !CResourceTable::GetResource(v6, v5[1], 0x46u) )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1148650078LL, 0LL, v864);
          __debugbreak();
        }
        goto LABEL_46;
      case 171:
        if ( v7 != 28 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3720212347LL, 0LL, 1LL);
          __debugbreak();
        }
        v865 = v5[6];
        if ( v865 && !CResourceTable::GetResource(v6, v865, 0x86u) )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3720212347LL, 0LL, v866);
          __debugbreak();
        }
        v867 = (CIndirectSwapchainRenderTarget *)CResourceTable::GetResource(v6, v5[1], 0x49u);
        if ( !v867 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3720212347LL, 0LL, v868);
          __debugbreak();
        }
        IsLocal = CIndirectSwapchainRenderTarget::ProcessCreate(
                    v867,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 4042;
        goto LABEL_2934;
      case 172:
        if ( v7 != 8 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3103363155LL, 0LL, 1LL);
          __debugbreak();
        }
        v869 = (CIndirectSwapchainRenderTarget *)CResourceTable::GetResource(v6, v5[1], 0x49u);
        if ( !v869 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3103363155LL, 0LL, v870);
          __debugbreak();
        }
        CIndirectSwapchainRenderTarget::Unregister(v869);
        goto LABEL_46;
      case 173:
        if ( v7 != 24 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 897141542LL, 0LL, 1LL);
          __debugbreak();
        }
        v871 = (CIndirectSwapchainRenderTarget *)CResourceTable::GetResource(v6, v5[1], 0x49u);
        if ( !v871 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 897141542LL, 0LL, v873);
          __debugbreak();
        }
        IsLocal = CIndirectSwapchainRenderTarget::ProcessUpdateTargetBounds(
                    v871,
                    v872,
                    (const struct MILCMD_INDIRECTSWAPCHAINRENDERTARGET_UPDATETARGETBOUNDS *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 4088;
        goto LABEL_2934;
      case 174:
        if ( v7 != 20 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1883363567LL, 0LL, 1LL);
          __debugbreak();
        }
        v874 = (CInjectionAnimation *)CResourceTable::GetResource(v6, v5[1], 0x4Au);
        if ( !v874 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1883363567LL, 0LL, v875);
          __debugbreak();
        }
        IsLocal = CInjectionAnimation::ProcessSetInjectionData(
                    v874,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_INJECTIONANIMATION_SETINJECTIONDATA *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 4111;
        goto LABEL_2934;
      case 175:
        if ( v7 != 76 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3327409753LL, 0LL, 1LL);
          __debugbreak();
        }
        v876 = (CInk *)CResourceTable::GetResource(v6, v5[1], 0x4Bu);
        if ( !v876 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3327409753LL, 0LL, v878);
          __debugbreak();
        }
        IsLocal = CInk::ProcessBasicStateUpdate(v876, v877, (const struct MILCMD_INK_BASICSTATEUPDATE *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 4134;
        goto LABEL_2934;
      case 176:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1802431146LL, 0LL, 1LL);
          __debugbreak();
        }
        v879 = (CInk *)CResourceTable::GetResource(v6, v5[1], 0x4Bu);
        if ( !v879 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1802431146LL, 0LL, v881);
          __debugbreak();
        }
        IsLocal = CInk::ProcessSegmentCountUpdate(v879, v880, (const struct MILCMD_INK_SEGMENTCOUNTUPDATE *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 4157;
        goto LABEL_2934;
      case 177:
        if ( v7 != 48 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1818115894LL, 0LL, 1LL);
          __debugbreak();
        }
        v882 = (CInk *)CResourceTable::GetResource(v6, v5[1], 0x4Bu);
        if ( !v882 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1818115894LL, 0LL, v884);
          __debugbreak();
        }
        IsLocal = CInk::ProcessSegmentUpdate(v882, v883, (const struct MILCMD_INK_SEGMENTUPDATE *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 4180;
        goto LABEL_2934;
      case 178:
        if ( v7 != 20 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2227851718LL, 0LL, 1LL);
          __debugbreak();
        }
        v885 = (CInk *)CResourceTable::GetResource(v6, v5[1], 0x4Bu);
        if ( !v885 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2227851718LL, 0LL, v887);
          __debugbreak();
        }
        IsLocal = CInk::ProcessStartPointUpdate(v885, v886, (const struct MILCMD_INK_STARTPOINTUPDATE *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 4203;
        goto LABEL_2934;
      case 179:
        if ( v7 != 24 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2010700639LL, 0LL, 1LL);
          __debugbreak();
        }
        v888 = CResourceTable::GetResource(v6, v5[1], 0x4Cu);
        if ( !v888 || v888 == 8 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2010700639LL, 0LL, v890);
          __debugbreak();
        }
        IsLocal = CInteraction::ProcessCaptureManipulationInCompositor(
                    (CInteraction *)(v888 - 8),
                    v889,
                    (const struct MILCMD_INTERACTION_CAPTUREMANIPULATIONINCOMPOSITOR *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 4226;
        goto LABEL_2934;
      case 180:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3999911074LL, 0LL, 1LL);
          __debugbreak();
        }
        v891 = CResourceTable::GetResource(v6, v5[1], 0x4Cu);
        if ( !v891 || v891 == 8 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3999911074LL, 0LL, v893);
          __debugbreak();
        }
        IsLocal = CInteraction::ProcessCapturePointer(
                    (CInteraction *)(v891 - 8),
                    v892,
                    (const struct MILCMD_INTERACTION_CAPTUREPOINTER *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 4249;
        goto LABEL_2934;
      case 181:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1794014672LL, 0LL, 1LL);
          __debugbreak();
        }
        v894 = CResourceTable::GetResource(v6, v5[1], 0x4Cu);
        if ( !v894 || v894 == 8 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1794014672LL, 0LL, v896);
          __debugbreak();
        }
        IsLocal = CInteraction::ProcessDisableOutputPrediction(
                    (CInteraction *)(v894 - 8),
                    v895,
                    (const struct MILCMD_INTERACTION_DISABLEOUTPUTPREDICTION *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 4272;
        goto LABEL_2934;
      case 182:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 4138904703LL, 0LL, 1LL);
          __debugbreak();
        }
        v590 = v5[2];
        if ( v590 )
        {
          v591 = CResourceTable::GetResource(v6, v590, 0x43u);
          if ( !v591 || v591 == 8 )
          {
            CComposition::FailFastOnMalformedPacket(v12, 4138904703LL, 0LL, v592);
            __debugbreak();
          }
        }
        v593 = CResourceTable::GetResource(v6, v5[1], 0x4Cu);
        if ( !v593 || v593 == 8 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 4138904703LL, 0LL, v594);
          __debugbreak();
        }
        IsLocal = CInteraction::ProcessSetHoverSource(
                    (CInteraction *)(v593 - 8),
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_INTERACTION_SETHOVERSOURCE *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 4308;
        goto LABEL_2934;
      case 183:
        if ( v7 != 16 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3378461431LL, 0LL, 1LL);
          __debugbreak();
        }
        v482 = CResourceTable::GetResource(v6, v5[1], 0x4Cu);
        if ( !v482 || v482 == 8 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3378461431LL, 0LL, v484);
          __debugbreak();
        }
        IsLocal = CInteraction::ProcessSetInputSink((CInteraction *)(v482 - 8), v483, (void **)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 4331;
        goto LABEL_2934;
      case 184:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2406705530LL, 0LL, 1LL);
          __debugbreak();
        }
        v897 = v5[2];
        if ( v897 && !CResourceTable::GetResource(v6, v897, 0x55u) )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2406705530LL, 0LL, v898);
          __debugbreak();
        }
        v899 = CResourceTable::GetResource(v6, v5[1], 0x4Cu);
        if ( !v899 || v899 == 8 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2406705530LL, 0LL, v900);
          __debugbreak();
        }
        IsLocal = CInteraction::ProcessSetManipulation(
                    (CInteraction *)(v899 - 8),
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_INTERACTION_SETMANIPULATION *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 4367;
        goto LABEL_2934;
      case 185:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 4751174LL, 0LL, 1LL);
          __debugbreak();
        }
        v462 = CResourceTable::GetResource(v6, v5[1], 0x4Cu);
        if ( !v462 || v462 == 8 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 4751174LL, 0LL, v463);
          __debugbreak();
        }
        *(_DWORD *)(v462 - 8 + 212) = v5[2];
        goto LABEL_46;
      case 186:
        if ( v7 < 0x14 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2166837879LL, 0LL, 1LL);
          __debugbreak();
        }
        v382 = CResourceTable::GetResource((__int64)v1251, *((_DWORD *)v1248 + 1), 0x4Cu);
        if ( !v382 || v382 == 8 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2166837879LL, 0LL, v384);
          __debugbreak();
        }
        v385 = v5 + 5;
        v5 = (unsigned int *)v1248;
        IsLocal = CInteraction::ProcessUpdateConfiguration((CComposition **)(v382 - 8), v383, v1248, v385, v7 - 20);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 4416;
        goto LABEL_2934;
      case 187:
        if ( v7 != 28 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3403818852LL, 0LL, 1LL);
          __debugbreak();
        }
        v464 = CResourceTable::GetResource(v6, v5[1], 0x4Cu);
        if ( !v464 || v464 == 8 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3403818852LL, 0LL, v466);
          __debugbreak();
        }
        IsLocal = CInteraction::ProcessUpdateFlags(
                    (CInteraction *)(v464 - 8),
                    v465,
                    (const struct MILCMD_INTERACTION_UPDATEFLAGS *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 4439;
        goto LABEL_2934;
      case 188:
        if ( v7 != 16 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1074742920LL, 0LL, 1LL);
          __debugbreak();
        }
        v498 = CResourceTable::GetResource(v6, v5[1], 0x4Cu);
        if ( !v498 || v498 == 8 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1074742920LL, 0LL, v500);
          __debugbreak();
        }
        IsLocal = CInteraction::ProcessUpdateRails(
                    (CInteraction *)(v498 - 8),
                    v499,
                    (const struct MILCMD_INTERACTION_UPDATERAILS *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 4462;
        goto LABEL_2934;
      case 189:
        if ( v7 != 20 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2436838325LL, 0LL, 1LL);
          __debugbreak();
        }
        v901 = (CInteractionTracker *)CResourceTable::GetResource(v6, v5[1], 0x4Du);
        if ( !v901 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2436838325LL, 0LL, v903);
          __debugbreak();
        }
        IsLocal = CInteractionTracker::ProcessApplyPositionImpulse(
                    v901,
                    v902,
                    (const struct MILCMD_INTERACTIONTRACKER_APPLYPOSITIONIMPULSE *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 4485;
        goto LABEL_2934;
      case 190:
        if ( v7 < 0xC )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2559928969LL, 0LL, 1LL);
          __debugbreak();
        }
        v904 = (CInteractionTracker *)CResourceTable::GetResource(v6, v5[1], 0x4Du);
        if ( !v904 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2559928969LL, 0LL, v906);
          __debugbreak();
        }
        IsLocal = CInteractionTracker::ProcessApplyPositionShift(
                    v904,
                    v905,
                    (const struct MILCMD_INTERACTIONTRACKER_APPLYPOSITIONSHIFT *)v5,
                    v5 + 3,
                    v1244);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 4511;
        goto LABEL_2934;
      case 191:
        if ( v7 != 24 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 447242787LL, 0LL, 1LL);
          __debugbreak();
        }
        v907 = (CInteractionTracker *)CResourceTable::GetResource(v6, v5[1], 0x4Du);
        if ( !v907 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 447242787LL, 0LL, v909);
          __debugbreak();
        }
        IsLocal = CInteractionTracker::ProcessApplyScaleImpulse(
                    v907,
                    v908,
                    (const struct MILCMD_INTERACTIONTRACKER_APPLYSCALEIMPULSE *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 4534;
        goto LABEL_2934;
      case 192:
        if ( v7 != 8 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3715793064LL, 0LL, 1LL);
          __debugbreak();
        }
        v910 = (CInteractionTracker *)CResourceTable::GetResource(v6, v5[1], 0x4Du);
        if ( !v910 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3715793064LL, 0LL, v913);
          __debugbreak();
        }
        IsLocal = CInteractionTracker::ProcessDwmRestartCompleted(v910, v911, v912);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 4557;
        goto LABEL_2934;
      case 193:
        if ( v7 != 24 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1098155056LL, 0LL, 1LL);
          __debugbreak();
        }
        v914 = (CInteractionTracker *)CResourceTable::GetResource(v6, v5[1], 0x4Du);
        if ( !v914 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1098155056LL, 0LL, v915);
          __debugbreak();
        }
        IsLocal = CInteractionTracker::ProcessDwmStarted(
                    v914,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_INTERACTIONTRACKER_DWMSTARTED *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 4580;
        goto LABEL_2934;
      case 194:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3408437349LL, 0LL, 1LL);
          __debugbreak();
        }
        v916 = CResourceTable::GetResource(v6, v5[1], 0x4Du);
        if ( !v916 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3408437349LL, 0LL, v917);
          __debugbreak();
        }
        *(_DWORD *)(v916 + 156) = v5[2];
        goto LABEL_46;
      case 195:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 780098046LL, 0LL, 1LL);
          __debugbreak();
        }
        v918 = v5[2];
        if ( v918 && !CResourceTable::GetResource(v6, v918, 0x24u) )
        {
          CComposition::FailFastOnMalformedPacket(v12, 780098046LL, 0LL, v919);
          __debugbreak();
        }
        v920 = (CInteractionTracker *)CResourceTable::GetResource(v6, v5[1], 0x4Du);
        if ( !v920 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 780098046LL, 0LL, v921);
          __debugbreak();
        }
        IsLocal = CInteractionTracker::ProcessSetInertiaCenterpointX(
                    v920,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_INTERACTIONTRACKER_SETINERTIACENTERPOINTX *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 4639;
        goto LABEL_2934;
      case 196:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1501063528LL, 0LL, 1LL);
          __debugbreak();
        }
        v922 = v5[2];
        if ( v922 && !CResourceTable::GetResource(v6, v922, 0x24u) )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1501063528LL, 0LL, v923);
          __debugbreak();
        }
        v924 = (CInteractionTracker *)CResourceTable::GetResource(v6, v5[1], 0x4Du);
        if ( !v924 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1501063528LL, 0LL, v925);
          __debugbreak();
        }
        IsLocal = CInteractionTracker::ProcessSetInertiaCenterpointY(
                    v924,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_INTERACTIONTRACKER_SETINERTIACENTERPOINTY *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 4675;
        goto LABEL_2934;
      case 197:
        if ( v7 != 20 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2661336112LL, 0LL, 1LL);
          __debugbreak();
        }
        v926 = (CInteractionTracker *)CResourceTable::GetResource(v6, v5[1], 0x4Du);
        if ( !v926 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2661336112LL, 0LL, v928);
          __debugbreak();
        }
        IsLocal = CInteractionTracker::ProcessSetInertiaDecayRates(
                    v926,
                    v927,
                    (const struct MILCMD_INTERACTIONTRACKER_SETINERTIADECAYRATES *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 4698;
        goto LABEL_2934;
      case 198:
        if ( v7 < 0x14 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2856075149LL, 0LL, 1LL);
          __debugbreak();
        }
        v929 = *((_DWORD *)v1248 + 3);
        if ( v929 && !CResourceTable::GetResource((__int64)v1251, v929, 0x24u) )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2856075149LL, 0LL, v930);
          __debugbreak();
        }
        v931 = (CInteractionTracker *)CResourceTable::GetResource((__int64)v1251, *((_DWORD *)v1248 + 1), 0x4Du);
        if ( !v931 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2856075149LL, 0LL, v932);
          __debugbreak();
        }
        v933 = v5 + 5;
        v5 = (unsigned int *)v1248;
        IsLocal = CInteractionTracker::ProcessSetInertiaModifierAnimations(v931, v1251, v1248, v933, v7 - 20);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 4737;
        goto LABEL_2934;
      case 199:
        if ( v7 < 8 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2370149662LL, 0LL, 1LL);
          __debugbreak();
        }
        v934 = (_DWORD *)CResourceTable::GetResource(v6, v5[1], 0x4Du);
        if ( !v934 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2370149662LL, 0LL, v935);
          __debugbreak();
        }
        v934[156] = v5[2];
        v934[157] = v5[3];
        v934[158] = v5[4];
        v934[159] = v5[5];
        v934[160] = v5[6];
        goto LABEL_46;
      case 200:
        if ( v7 < 0xC )
        {
          CComposition::FailFastOnMalformedPacket(v12, 662442925LL, 0LL, 1LL);
          __debugbreak();
        }
        v936 = (CInteractionTracker *)CResourceTable::GetResource(v6, v5[1], 0x4Du);
        if ( !v936 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 662442925LL, 0LL, v937);
          __debugbreak();
        }
        IsLocal = CInteractionTracker::ProcessSetManipulations(
                    v936,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_INTERACTIONTRACKER_SETMANIPULATIONS *)v5,
                    v5 + 3,
                    v1244);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 4789;
        goto LABEL_2934;
      case 201:
        if ( v7 != 16 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 512437877LL, 0LL, 1LL);
          __debugbreak();
        }
        v938 = (CInteractionTracker *)CResourceTable::GetResource(v6, v5[1], 0x4Du);
        if ( !v938 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 512437877LL, 0LL, v940);
          __debugbreak();
        }
        IsLocal = CInteractionTracker::ProcessSetMaxPosition(
                    v938,
                    v939,
                    (const struct MILCMD_INTERACTIONTRACKER_SETMAXPOSITION *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 4812;
        goto LABEL_2934;
      case 202:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3943088800LL, 0LL, 1LL);
          __debugbreak();
        }
        v941 = (CInteractionTracker *)CResourceTable::GetResource(v6, v5[1], 0x4Du);
        if ( !v941 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3943088800LL, 0LL, v942);
          __debugbreak();
        }
        CInteractionTracker::SetMaxScale(v941, *((float *)v5 + 2));
        goto LABEL_46;
      case 203:
        if ( v7 != 16 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3532019066LL, 0LL, 1LL);
          __debugbreak();
        }
        v943 = (CInteractionTracker *)CResourceTable::GetResource(v6, v5[1], 0x4Du);
        if ( !v943 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3532019066LL, 0LL, v945);
          __debugbreak();
        }
        IsLocal = CInteractionTracker::ProcessSetMinPosition(
                    v943,
                    v944,
                    (const struct MILCMD_INTERACTIONTRACKER_SETMINPOSITION *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 4858;
        goto LABEL_2934;
      case 204:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 224816449LL, 0LL, 1LL);
          __debugbreak();
        }
        v946 = (CInteractionTracker *)CResourceTable::GetResource(v6, v5[1], 0x4Du);
        if ( !v946 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 224816449LL, 0LL, v947);
          __debugbreak();
        }
        CInteractionTracker::SetMinScale(v946, *((float *)v5 + 2));
        goto LABEL_46;
      case 205:
        if ( v7 != 24 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 433303945LL, 0LL, 1LL);
          __debugbreak();
        }
        v948 = (CInteractionTracker *)CResourceTable::GetResource(v6, v5[1], 0x4Du);
        if ( !v948 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 433303945LL, 0LL, v950);
          __debugbreak();
        }
        IsLocal = CInteractionTracker::ProcessSetRequestedDeltaPosition(
                    v948,
                    v949,
                    (const struct MILCMD_INTERACTIONTRACKER_SETREQUESTEDDELTAPOSITION *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 4904;
        goto LABEL_2934;
      case 206:
        if ( v7 != 24 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3964652047LL, 0LL, 1LL);
          __debugbreak();
        }
        v951 = (CInteractionTracker *)CResourceTable::GetResource(v6, v5[1], 0x4Du);
        if ( !v951 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3964652047LL, 0LL, v953);
          __debugbreak();
        }
        IsLocal = CInteractionTracker::ProcessSetRequestedPosition(
                    v951,
                    v952,
                    (const struct MILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITION *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 4927;
        goto LABEL_2934;
      case 207:
        if ( v7 != 24 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3904457784LL, 0LL, 1LL);
          __debugbreak();
        }
        v954 = v5[2];
        if ( v954 && !CResourceTable::GetResource(v6, v954, 0xAu) )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3904457784LL, 0LL, v955);
          __debugbreak();
        }
        v956 = (CInteractionTracker *)CResourceTable::GetResource(v6, v5[1], 0x4Du);
        if ( !v956 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3904457784LL, 0LL, v957);
          __debugbreak();
        }
        IsLocal = CInteractionTracker::ProcessSetRequestedPositionAnimation(
                    v956,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_INTERACTIONTRACKER_SETREQUESTEDPOSITIONANIMATION *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 4963;
        goto LABEL_2934;
      case 208:
        if ( v7 != 28 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3766384285LL, 0LL, 1LL);
          __debugbreak();
        }
        v958 = (CInteractionTracker *)CResourceTable::GetResource(v6, v5[1], 0x4Du);
        if ( !v958 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3766384285LL, 0LL, v960);
          __debugbreak();
        }
        IsLocal = CInteractionTracker::ProcessSetRequestedScale(
                    v958,
                    v959,
                    (const struct MILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALE *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 4986;
        goto LABEL_2934;
      case 209:
        if ( v7 != 32 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 4099247093LL, 0LL, 1LL);
          __debugbreak();
        }
        v961 = v5[2];
        if ( v961 && !CResourceTable::GetResource(v6, v961, 0xAu) )
        {
          CComposition::FailFastOnMalformedPacket(v12, 4099247093LL, 0LL, v962);
          __debugbreak();
        }
        v963 = (CInteractionTracker *)CResourceTable::GetResource(v6, v5[1], 0x4Du);
        if ( !v963 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 4099247093LL, 0LL, v964);
          __debugbreak();
        }
        IsLocal = CInteractionTracker::ProcessSetRequestedScaleAnimation(
                    v963,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_INTERACTIONTRACKER_SETREQUESTEDSCALEANIMATION *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 5022;
        goto LABEL_2934;
      case 210:
        if ( v7 < 0xC )
        {
          CComposition::FailFastOnMalformedPacket(v12, 294930617LL, 0LL, 1LL);
          __debugbreak();
        }
        v965 = CResourceTable::GetResource(v6, v5[1], 0x4Eu);
        if ( !v965 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 294930617LL, 0LL, v966);
          __debugbreak();
        }
        IsLocal = CBaseExpression::SetExpressionArray<MILCMD_BASEEXPRESSION_ADDINITIALVALUEEXPRESSIONS,DynArrayIANoCtor<CBaseExpression *,2,0>>(
                    v965,
                    v6,
                    v5,
                    v5 + 3);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 5048;
        goto LABEL_2934;
      case 211:
        if ( v7 != 68 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3120092704LL, 0LL, 1LL);
          __debugbreak();
        }
        v339 = (CKeyframeAnimation *)CResourceTable::GetResource(v6, v5[1], 0x4Eu);
        if ( !v339 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3120092704LL, 0LL, v340);
          __debugbreak();
        }
        IsLocal = CKeyframeAnimation::ProcessSetKeyframeData(
                    v339,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 5071;
        goto LABEL_2934;
      case 212:
        if ( v7 != 28 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1617563387LL, 0LL, 1LL);
          __debugbreak();
        }
        v391 = (CKeyframeAnimation *)CResourceTable::GetResource(v6, v5[1], 0x4Eu);
        if ( !v391 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1617563387LL, 0LL, v393);
          __debugbreak();
        }
        IsLocal = CKeyframeAnimation::ProcessSetSeekState(
                    v391,
                    v392,
                    (const struct MILCMD_KEYFRAMEANIMATION_SETSEEKSTATE *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 5094;
        goto LABEL_2934;
      case 213:
        if ( v7 != 24 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2820015898LL, 0LL, 1LL);
          __debugbreak();
        }
        v290 = (CKeyframeAnimation *)CResourceTable::GetResource(v6, v5[1], 0x4Eu);
        if ( !v290 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2820015898LL, 0LL, v292);
          __debugbreak();
        }
        IsLocal = CKeyframeAnimation::ProcessUpdatePlaybackState(
                    v290,
                    v291,
                    (const struct MILCMD_KEYFRAMEANIMATION_UPDATEPLAYBACKSTATE *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 5117;
        goto LABEL_2934;
      case 214:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 701820949LL, 0LL, 1LL);
          __debugbreak();
        }
        v438 = CResourceTable::GetResource(v6, v5[1], 0x4Fu);
        if ( !v438 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 701820949LL, 0LL, v439);
          __debugbreak();
        }
        *(_BYTE *)(v438 + 528) = v5[2] != 0;
        goto LABEL_46;
      case 215:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2968889339LL, 0LL, 1LL);
          __debugbreak();
        }
        v560 = (CLayerVisual *)CResourceTable::GetResource(v6, v5[1], 0x4Fu);
        if ( !v560 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2968889339LL, 0LL, v561);
          __debugbreak();
        }
        IsLocal = CLayerVisual::ProcessSetEffect(
                    v560,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_LAYERVISUAL_SETEFFECT *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 5163;
        goto LABEL_2934;
      case 216:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1944302628LL, 0LL, 1LL);
          __debugbreak();
        }
        v967 = (CLayerVisual *)CResourceTable::GetResource(v6, v5[1], 0x4Fu);
        if ( !v967 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1944302628LL, 0LL, v968);
          __debugbreak();
        }
        IsLocal = CLayerVisual::ProcessSetShadow(
                    v967,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_LAYERVISUAL_SETSHADOW *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 5186;
        goto LABEL_2934;
      case 217:
        if ( v7 != 16 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1595125107LL, 0LL, 1LL);
          __debugbreak();
        }
        v969 = (CLinearGradientBrush *)CResourceTable::GetResource(v6, v5[1], 0x51u);
        if ( !v969 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1595125107LL, 0LL, v970);
          __debugbreak();
        }
        CLinearGradientBrush::SetEndPoint(v969, (const struct D2D_POINT_2F *)v5 + 1);
        goto LABEL_46;
      case 218:
        if ( v7 != 16 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 725887992LL, 0LL, 1LL);
          __debugbreak();
        }
        v971 = (CLinearGradientBrush *)CResourceTable::GetResource(v6, v5[1], 0x51u);
        if ( !v971 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 725887992LL, 0LL, v972);
          __debugbreak();
        }
        CLinearGradientBrush::SetStartPoint(v971, (const struct D2D_POINT_2F *)v5 + 1);
        goto LABEL_46;
      case 219:
        if ( v7 != 72 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 401341510LL, 0LL, 1LL);
          __debugbreak();
        }
        v973 = (CMagnifierRenderTarget *)CResourceTable::GetResource(v6, v5[1], 0x54u);
        if ( !v973 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 401341510LL, 0LL, v974);
          __debugbreak();
        }
        IsLocal = CMagnifierRenderTarget::ProcessCaptureBits(
                    v973,
                    a4,
                    (const struct MILCMD_MAGNIFIERRENDERTARGET_CAPTUREBITS *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 5255;
        goto LABEL_2934;
      case 220:
        if ( v7 != 224 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 27094708LL, 0LL, 1LL);
          __debugbreak();
        }
        v975 = (CMagnifierRenderTarget *)CResourceTable::GetResource(v6, v5[1], 0x54u);
        if ( !v975 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 27094708LL, 0LL, v977);
          __debugbreak();
        }
        IsLocal = CMagnifierRenderTarget::ProcessCreate(
                    v975,
                    v976,
                    (const struct MILCMD_MAGNIFIERRENDERTARGET_CREATE *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 5278;
        goto LABEL_2934;
      case 221:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2368375182LL, 0LL, 1LL);
          __debugbreak();
        }
        v978 = v5[2];
        if ( v978 && !CResourceTable::GetResource(v6, v978, 0x14u) )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2368375182LL, 0LL, v979);
          __debugbreak();
        }
        v980 = (CMagnifierRenderTarget *)CResourceTable::GetResource(v6, v5[1], 0x54u);
        if ( !v980 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2368375182LL, 0LL, v981);
          __debugbreak();
        }
        IsLocal = CMagnifierRenderTarget::ProcessSetColorTransform(
                    v980,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_MAGNIFIERRENDERTARGET_SETCOLORTRANSFORM *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 5314;
        goto LABEL_2934;
      case 222:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2945874736LL, 0LL, 1LL);
          __debugbreak();
        }
        v982 = (CMagnifierRenderTarget *)CResourceTable::GetResource(v6, v5[1], 0x54u);
        if ( !v982 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2945874736LL, 0LL, v984);
          __debugbreak();
        }
        IsLocal = CMagnifierRenderTarget::ProcessSetResampleMode(
                    v982,
                    v983,
                    (const struct MILCMD_MAGNIFIERRENDERTARGET_SETRESAMPLEMODE *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 5337;
        goto LABEL_2934;
      case 223:
        if ( v7 != 32 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3961910496LL, 0LL, 1LL);
          __debugbreak();
        }
        v985 = (CMagnifierRenderTarget *)CResourceTable::GetResource(v6, v5[1], 0x54u);
        if ( !v985 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3961910496LL, 0LL, v987);
          __debugbreak();
        }
        IsLocal = CMagnifierRenderTarget::ProcessSetSlicer(
                    v985,
                    v986,
                    (const struct MILCMD_MAGNIFIERRENDERTARGET_SETSLICER *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 5360;
        goto LABEL_2934;
      case 224:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2987180719LL, 0LL, 1LL);
          __debugbreak();
        }
        v988 = v5[2];
        if ( v988 && !CResourceTable::GetResource(v6, v988, 0x7Fu) )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2987180719LL, 0LL, v989);
          __debugbreak();
        }
        v990 = (CMagnifierRenderTarget *)CResourceTable::GetResource(v6, v5[1], 0x54u);
        if ( !v990 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2987180719LL, 0LL, v991);
          __debugbreak();
        }
        IsLocal = CMagnifierRenderTarget::ProcessSetTransform(
                    v990,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_MAGNIFIERRENDERTARGET_SETTRANSFORM *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 5396;
        goto LABEL_2934;
      case 225:
        if ( v7 != 216 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3616674686LL, 0LL, 1LL);
          __debugbreak();
        }
        v992 = (CMagnifierRenderTarget *)CResourceTable::GetResource(v6, v5[1], 0x54u);
        if ( !v992 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3616674686LL, 0LL, v994);
          __debugbreak();
        }
        IsLocal = CMagnifierRenderTarget::ProcessUpdate(v992, v993, (const struct MILCMD_MAGNIFIERRENDERTARGET *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 5419;
        goto LABEL_2934;
      case 226:
        if ( v7 < 8 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2776611141LL, 0LL, 1LL);
          __debugbreak();
        }
        v995 = (CManipulation *)CResourceTable::GetResource(v6, v5[1], 0x55u);
        if ( !v995 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2776611141LL, 0LL, v996);
          __debugbreak();
        }
        v997 = *(_OWORD *)(v5 + 6);
        v1260[0] = *(_OWORD *)(v5 + 2);
        v998 = *(_OWORD *)(v5 + 10);
        v1260[1] = v997;
        v999 = *(_OWORD *)(v5 + 14);
        v1260[2] = v998;
        v1000 = *(_OWORD *)(v5 + 18);
        v1260[3] = v999;
        v1001 = *(_OWORD *)(v5 + 22);
        v1260[4] = v1000;
        v1002 = *(_OWORD *)(v5 + 26);
        v1260[5] = v1001;
        v1003 = *(_OWORD *)(v5 + 30);
        v1260[6] = v1002;
        v1260[7] = v1003;
        IsLocal = CManipulation::InjectManipulation(v995, (const struct InjectManipulationArgs *)v1260);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 5445;
        goto LABEL_2934;
      case 227:
        if ( v7 != 28 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1538815527LL, 0LL, 1LL);
          __debugbreak();
        }
        v1004 = v5[2];
        if ( v1004 && !CResourceTable::GetResource(v6, v1004, 0x24u) )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1538815527LL, 0LL, v1005);
          __debugbreak();
        }
        v1006 = v5[3];
        if ( v1006 && !CResourceTable::GetResource(v6, v1006, 0x24u) )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1538815527LL, 0LL, v1007);
          __debugbreak();
        }
        v1008 = v5[4];
        if ( v1008 && !CResourceTable::GetResource(v6, v1008, 0x24u) )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1538815527LL, 0LL, v1009);
          __debugbreak();
        }
        v1010 = v5[5];
        if ( v1010 && !CResourceTable::GetResource(v6, v1010, 0x24u) )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1538815527LL, 0LL, v1011);
          __debugbreak();
        }
        v1012 = v5[6];
        if ( v1012 && !CResourceTable::GetResource(v6, v1012, 0x24u) )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1538815527LL, 0LL, v1013);
          __debugbreak();
        }
        v1014 = (CManipulation *)CResourceTable::GetResource(v6, v5[1], 0x55u);
        if ( !v1014 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1538815527LL, 0LL, v1015);
          __debugbreak();
        }
        IsLocal = CManipulation::ProcessSetSourceModifiers(
                    v1014,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_MANIPULATION_SETSOURCEMODIFIERS *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 5533;
        goto LABEL_2934;
      case 228:
        if ( v7 != 48 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 110567945LL, 0LL, 1LL);
          __debugbreak();
        }
        v1016 = (CManipulation *)CResourceTable::GetResource(v6, v5[1], 0x55u);
        if ( !v1016 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 110567945LL, 0LL, v1017);
          __debugbreak();
        }
        IsLocal = CManipulation::ProcessUpdateEdgyConfiguration(
                    v1016,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_MANIPULATION_UPDATEEDGYCONFIGURATION *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 5556;
        goto LABEL_2934;
      case 229:
        if ( v7 != 36 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2465050980LL, 0LL, 1LL);
          __debugbreak();
        }
        v1018 = (CManipulation *)CResourceTable::GetResource(v6, v5[1], 0x55u);
        if ( !v1018 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2465050980LL, 0LL, v1020);
          __debugbreak();
        }
        IsLocal = CManipulation::ProcessUpdateSettings(
                    v1018,
                    v1019,
                    (const struct MILCMD_MANIPULATION_UPDATESETTINGS *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 5579;
        goto LABEL_2934;
      case 230:
        if ( v7 != 56 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3787005167LL, 0LL, 1LL);
          __debugbreak();
        }
        v470 = (CManipulationTransform *)CResourceTable::GetResource(v6, v5[1], 0x56u);
        if ( !v470 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3787005167LL, 0LL, v472);
          __debugbreak();
        }
        IsLocal = CManipulationTransform::ProcessSetComponents(
                    v470,
                    v471,
                    (const struct MILCMD_MANIPULATIONTRANSFORM_SETCOMPONENTS *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 5602;
        goto LABEL_2934;
      case 231:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 190360992LL, 0LL, 1LL);
          __debugbreak();
        }
        v473 = CResourceTable::GetResource(v6, v5[1], 0x56u);
        if ( !v473 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 190360992LL, 0LL, v474);
          __debugbreak();
        }
        *(_DWORD *)(v473 + 268) = v5[2];
        goto LABEL_46;
      case 232:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 4103207073LL, 0LL, 1LL);
          __debugbreak();
        }
        v319 = (struct CResource **)CResourceTable::GetResource(v6, v5[1], 0x57u);
        if ( !v319 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 4103207073LL, 0LL, v320);
          __debugbreak();
        }
        IsLocal = CMaskBrush::ProcessSetMask(
                    v319,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_MASKBRUSH_SETMASK *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 5648;
        goto LABEL_2934;
      case 233:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2262542066LL, 0LL, 1LL);
          __debugbreak();
        }
        v309 = (struct CResource **)CResourceTable::GetResource(v6, v5[1], 0x57u);
        if ( !v309 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2262542066LL, 0LL, v310);
          __debugbreak();
        }
        IsLocal = CMaskBrush::ProcessSetSource(
                    v309,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_MASKBRUSH_SETSOURCE *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 5671;
        goto LABEL_2934;
      case 234:
        if ( v7 != 56 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3598485557LL, 0LL, 1LL);
          __debugbreak();
        }
        v562 = CResourceTable::GetResource(v6, v5[1], 0x58u);
        v563 = v562;
        if ( !v562 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3598485557LL, 0LL, 0LL);
          __debugbreak();
        }
        *(_OWORD *)(v562 + 56) = *(_OWORD *)(v5 + 2);
        *(_OWORD *)(v562 + 72) = *(_OWORD *)(v5 + 6);
        *(_OWORD *)(v562 + 88) = *(_OWORD *)(v5 + 10);
        goto LABEL_971;
      case 235:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 564399005LL, 0LL, 1LL);
          __debugbreak();
        }
        v1021 = (CMeshGeometry2D *)CResourceTable::GetResource(v6, v5[1], 0x5Bu);
        if ( !v1021 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 564399005LL, 0LL, v1023);
          __debugbreak();
        }
        IsLocal = CMeshGeometry2D::ProcessSetConstantOpacity(
                    v1021,
                    v1022,
                    (const struct MILCMD_MESHGEOMETRY2D_SETCONSTANTOPACITY *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 5717;
        goto LABEL_2934;
      case 236:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3449333376LL, 0LL, 1LL);
          __debugbreak();
        }
        v1024 = (CNaturalAnimation *)CResourceTable::GetResource(v6, v5[1], 0x5Cu);
        if ( !v1024 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3449333376LL, 0LL, v1026);
          __debugbreak();
        }
        IsLocal = CNaturalAnimation::ProcessSetAttractionParameters(
                    v1024,
                    v1025,
                    (const struct MILCMD_NATURALANIMATION_SETATTRACTIONPARAMETERS *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 5740;
        goto LABEL_2934;
      case 237:
        if ( v7 != 16 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3027846566LL, 0LL, 1LL);
          __debugbreak();
        }
        v1027 = (CNaturalAnimation *)CResourceTable::GetResource(v6, v5[1], 0x5Cu);
        if ( !v1027 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3027846566LL, 0LL, v1029);
          __debugbreak();
        }
        IsLocal = CNaturalAnimation::ProcessSetBounceParameters(
                    v1027,
                    v1028,
                    (const struct MILCMD_NATURALANIMATION_SETBOUNCEPARAMETERS *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 5763;
        goto LABEL_2934;
      case 238:
        if ( v7 != 32 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3558559846LL, 0LL, 1LL);
          __debugbreak();
        }
        v1030 = (CNaturalAnimation *)CResourceTable::GetResource(v6, v5[1], 0x5Cu);
        if ( !v1030 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3558559846LL, 0LL, v1032);
          __debugbreak();
        }
        IsLocal = CNaturalAnimation::ProcessSetCommonParameters(
                    v1030,
                    v1031,
                    (const struct MILCMD_NATURALANIMATION_SETCOMMONPARAMETERS *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 5786;
        goto LABEL_2934;
      case 239:
        if ( v7 != 20 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 4250427801LL, 0LL, 1LL);
          __debugbreak();
        }
        v1033 = CResourceTable::GetResource(v6, v5[1], 0x5Cu);
        if ( !v1033 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 4250427801LL, 0LL, v1034);
          __debugbreak();
        }
        v1035 = (__m128)v5[3];
        v1266 = v5[4];
        *(_QWORD *)(v1033 + 296) = _mm_unpacklo_ps((__m128)v5[2], v1035).m128_u64[0];
        *(_DWORD *)(v1033 + 304) = v1266;
        *(_BYTE *)(v1033 + 524) |= 0x20u;
        goto LABEL_46;
      case 240:
        if ( v7 != 20 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1239080173LL, 0LL, 1LL);
          __debugbreak();
        }
        v1036 = CResourceTable::GetResource(v6, v5[1], 0x5Cu);
        if ( !v1036 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1239080173LL, 0LL, v1037);
          __debugbreak();
        }
        v1038 = (__m128)v5[3];
        v1267 = v5[4];
        *(_QWORD *)(v1036 + 272) = _mm_unpacklo_ps((__m128)v5[2], v1038).m128_u64[0];
        *(_DWORD *)(v1036 + 280) = v1267;
        *(_BYTE *)(v1036 + 524) |= 0x10u;
        goto LABEL_46;
      case 241:
        if ( v7 != 20 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3406322264LL, 0LL, 1LL);
          __debugbreak();
        }
        v1039 = CResourceTable::GetResource(v6, v5[1], 0x5Cu);
        if ( !v1039 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3406322264LL, 0LL, v1040);
          __debugbreak();
        }
        v1041 = (__m128)v5[3];
        v1259 = v5[4];
        *(_QWORD *)(v1039 + 308) = _mm_unpacklo_ps((__m128)v5[2], v1041).m128_u64[0];
        *(_DWORD *)(v1039 + 316) = v1259;
        goto LABEL_46;
      case 242:
        if ( v7 != 16 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 849453772LL, 0LL, 1LL);
          __debugbreak();
        }
        v1042 = (CNaturalAnimation *)CResourceTable::GetResource(v6, v5[1], 0x5Cu);
        if ( !v1042 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 849453772LL, 0LL, v1044);
          __debugbreak();
        }
        IsLocal = CNaturalAnimation::ProcessSetSpringParameters(
                    v1042,
                    v1043,
                    (const struct MILCMD_NATURALANIMATION_SETSPRINGPARAMETERS *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 5878;
        goto LABEL_2934;
      case 243:
        if ( v7 != 16 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1882405293LL, 0LL, 1LL);
          __debugbreak();
        }
        v343 = (CNineGridBrush *)CResourceTable::GetResource(v6, v5[1], 0x5Du);
        if ( !v343 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1882405293LL, 0LL, v345);
          __debugbreak();
        }
        IsLocal = CNineGridBrush::ProcessSetInsetProperty(
                    v343,
                    v344,
                    (const struct MILCMD_NINEGRIDBRUSH_SETINSETPROPERTY *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 5901;
        goto LABEL_2934;
      case 244:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3496143550LL, 0LL, 1LL);
          __debugbreak();
        }
        v523 = (CNineGridBrush *)CResourceTable::GetResource(v6, v5[1], 0x5Du);
        if ( !v523 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3496143550LL, 0LL, v525);
          __debugbreak();
        }
        IsLocal = CNineGridBrush::ProcessSetIsCenterHollow(
                    v523,
                    v524,
                    (const struct MILCMD_NINEGRIDBRUSH_SETISCENTERHOLLOW *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 5924;
        goto LABEL_2934;
      case 245:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 931578260LL, 0LL, 1LL);
          __debugbreak();
        }
        v526 = (struct CResource **)CResourceTable::GetResource(v6, v5[1], 0x5Du);
        if ( !v526 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 931578260LL, 0LL, v527);
          __debugbreak();
        }
        IsLocal = CNineGridBrush::ProcessSetSource(
                    v526,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_NINEGRIDBRUSH_SETSOURCE *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 5947;
        goto LABEL_2934;
      case 246:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3754781393LL, 0LL, 1LL);
          __debugbreak();
        }
        v113 = v5[1];
        if ( !v113
          || v113 >= *(_DWORD *)(v6 + 28)
          || (v114 = *(_QWORD *)(v6 + 40), !*(_DWORD *)(v113 * *(_DWORD *)(v6 + 24) + v114))
          || (v115 = v114 + v113 * *(_DWORD *)(v6 + 24), !*(_QWORD *)(v115 + 8))
          || ((v116 = *(_QWORD *)(v115 + 8),
               v117 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v116 + 48LL),
               v117 == CExpression::IsOfType)
            ? (v118 = CExpression::IsOfType(v116, 94))
            : v117 == CSpriteVisual::IsOfType
            ? (v118 = CSpriteVisual::IsOfType(v116, 94))
            : v117 == CVisual::IsOfType
            ? (v118 = CVisual::IsOfType(v116, 94))
            : v117 == CComponentTransform2D::IsOfType
            ? (v118 = CComponentTransform2D::IsOfType(v116, 94))
            : v117 == CKeyframeAnimation::IsOfType
            ? (v118 = CKeyframeAnimation::IsOfType(v116, 94))
            : (v118 = ((__int64 (__fastcall *)(__int64, __int64, unsigned __int64, __int64))v117)(v116, 94LL, v10, 1LL)),
              !v118 || (v245 = *(CNotificationResource **)(v115 + 8)) == 0LL) )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3754781393LL, 0LL, v14);
          __debugbreak();
        }
        v5 = (unsigned int *)v1248;
        IsLocal = CNotificationResource::ProcessSetCallbackId(v245, (struct CResourceTable *)v6, v1248);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 5970;
        goto LABEL_2934;
      case 247:
        if ( v7 != 48 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1561479332LL, 0LL, 1LL);
          __debugbreak();
        }
        IsLocal = CComposition::Partition_DesktopCaptureBits(
                    v12,
                    v9,
                    (struct CResourceTable *)v10,
                    (const struct MILCMD_PARTITION_DESKTOPCAPTUREBITS *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 5988;
        goto LABEL_2934;
      case 248:
        if ( v7 != 20 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3578658120LL, 0LL, 1LL);
          __debugbreak();
        }
        IsLocal = CComposition::Partition_ForceRender(
                    v12,
                    (struct CChannelContext *)&_ImageBase,
                    (struct CResourceTable *)v10,
                    (const struct MILCMD_PARTITION_FORCERENDER *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 6006;
        goto LABEL_2934;
      case 249:
        if ( v7 != 8 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 945298187LL, 0LL, 1LL);
          __debugbreak();
        }
        IsLocal = CComposition::Partition_RegisterForNotifications(
                    v12,
                    v9,
                    (struct CResourceTable *)v10,
                    (const struct MILCMD_PARTITION_REGISTERFORNOTIFICATIONS *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 6024;
        goto LABEL_2934;
      case 250:
        if ( v7 != 8 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1993314736LL, 0LL, 1LL);
          __debugbreak();
        }
        v1045 = (CRenderTargetManager *)*((_QWORD *)v12 + 9);
        v1046 = v5[1] != 0;
        if ( *((_BYTE *)v1045 + 148) == v1046 )
          goto LABEL_49;
        *((_BYTE *)v1045 + 148) = v1046;
        *((_BYTE *)v1045 + 147) = 1;
        CRenderTargetManager::ForceFullRender(v1045);
        goto LABEL_46;
      case 251:
        if ( v7 != 148 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 874634157LL, 0LL, 1LL);
          __debugbreak();
        }
        IsLocal = CComposition::Partition_SetCurrentMmTask(
                    v12,
                    (struct CChannelContext *)&_ImageBase,
                    (struct CResourceTable *)v10,
                    (const struct MILCMD_PARTITION_SETCURRENTMMTASK *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 6060;
        goto LABEL_2934;
      case 252:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 4261279585LL, 0LL, 1LL);
          __debugbreak();
        }
        IsLocal = CComposition::Partition_SetCursor(
                    v12,
                    (struct CChannelContext *)&_ImageBase,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_PARTITION_SETCURSOR *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 6078;
        goto LABEL_2934;
      case 253:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 4065339059LL, 0LL, 1LL);
          __debugbreak();
        }
        IsLocal = CComposition::Partition_SetExcludeFromDDA(
                    v12,
                    (struct CChannelContext *)&_ImageBase,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_PARTITION_SETEXCLUDEFROMDDA *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 6096;
        goto LABEL_2934;
      case 254:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 629443961LL, 0LL, 1LL);
          __debugbreak();
        }
        IsLocal = CComposition::Partition_SetMagnifier(
                    v12,
                    (struct CChannelContext *)&_ImageBase,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_PARTITION_SETMAGNIFIER *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 6114;
        goto LABEL_2934;
      case 255:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2461310709LL, 0LL, 1LL);
          __debugbreak();
        }
        IsLocal = CComposition::Partition_SwitchRemotingMode(
                    v12,
                    (struct CChannelContext *)&_ImageBase,
                    (struct CResourceTable *)v10,
                    (const struct MILCMD_PARTITION_SWITCHREMOTINGMODE *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 6132;
        goto LABEL_2934;
      case 256:
        if ( v7 != 16 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3322198LL, 0LL, 1LL);
          __debugbreak();
        }
        IsLocal = CComposition::Partition_Synchronize(
                    v12,
                    (struct CChannelContext *)&_ImageBase,
                    (struct CResourceTable *)v10,
                    (const struct MILCMD_PARTITION_SYNCHRONIZE *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 6150;
        goto LABEL_2934;
      case 257:
        if ( v7 < 4 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 528974075LL, 0LL, 1LL);
          __debugbreak();
        }
        IsLocal = CComposition::Partition_TelemetryAnimationScenarioBegin(
                    v12,
                    v9,
                    (struct CResourceTable *)v10,
                    (const struct MILCMD_PARTITION_TELEMETRYANIMATIONSCENARIOBEGIN *)1,
                    (_WORD *)v5 + 2,
                    v7 - 4);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 6171;
        goto LABEL_2934;
      case 258:
        if ( v7 != 28 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2365647318LL, 0LL, 1LL);
          __debugbreak();
        }
        IsLocal = CComposition::Partition_TelemetryAnimationScenarioReference(
                    v12,
                    v9,
                    (struct CResourceTable *)v10,
                    (const struct MILCMD_PARTITION_TELEMETRYANIMATIONSCENARIOREFERENCE *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 6189;
        goto LABEL_2934;
      case 259:
        if ( v7 != 28 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 53314915LL, 0LL, 1LL);
          __debugbreak();
        }
        IsLocal = CComposition::Partition_TelemetryAnimationScenarioUnreference(
                    v12,
                    v9,
                    (struct CResourceTable *)v10,
                    (const struct MILCMD_PARTITION_TELEMETRYANIMATIONSCENARIOUNREFERENCE *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 6207;
        goto LABEL_2934;
      case 260:
        if ( v7 != 16 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1689745007LL, 0LL, 1LL);
          __debugbreak();
        }
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(**((_QWORD **)v12 + 66) + 32LL))(
          *((_QWORD *)v12 + 66),
          v5[1],
          *((_QWORD *)v5 + 1),
          1LL);
        goto LABEL_46;
      case 261:
        if ( v7 < 4 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2350814536LL, 0LL, 1LL);
          __debugbreak();
        }
        IsLocal = CComposition::Partition_TelemetrySetApplicationId(
                    v12,
                    v9,
                    (struct CResourceTable *)v10,
                    (const struct MILCMD_PARTITION_TELEMETRYSETAPPLICATIONID *)1,
                    (char *)v5 + 4,
                    v7 - 4);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 6246;
        goto LABEL_2934;
      case 262:
        if ( v7 < 4 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 4160689699LL, 0LL, 1LL);
          __debugbreak();
        }
        IsLocal = CComposition::Partition_TelemetryTouchInteractionBegin(
                    v12,
                    (struct CChannelContext *)&_ImageBase,
                    (struct CResourceTable *)v10,
                    (const struct MILCMD_PARTITION_TELEMETRYTOUCHINTERACTIONBEGIN *)1,
                    v5 + 1,
                    v7 - 4);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 6267;
        goto LABEL_2934;
      case 263:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2304289143LL, 0LL, 1LL);
          __debugbreak();
        }
        (*(void (__fastcall **)(_QWORD, _QWORD, unsigned __int64, __int64))(**((_QWORD **)v12 + 66) + 24LL))(
          *((_QWORD *)v12 + 66),
          *(_QWORD *)(v5 + 1),
          v10,
          1LL);
        goto LABEL_46;
      case 264:
        if ( v7 != 68 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1460853346LL, 0LL, 1LL);
          __debugbreak();
        }
        IsLocal = CComposition::Partition_TelemetryTouchInteractionUpdate(
                    v12,
                    (struct CChannelContext *)&_ImageBase,
                    (struct CResourceTable *)v10,
                    (const struct MILCMD_PARTITION_TELEMETRYTOUCHINTERACTIONUPDATE *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 6303;
        goto LABEL_2934;
      case 265:
        if ( v7 != 4 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 805594708LL, 0LL, 1LL);
          __debugbreak();
        }
        *((_BYTE *)v12 + 1298) = 1;
        goto LABEL_49;
      case 266:
        if ( v7 != 4 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2209469153LL, 0LL, 1LL);
          __debugbreak();
        }
        *((_BYTE *)v12 + 1297) = 0;
        goto LABEL_49;
      case 267:
        if ( v7 != 40 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 158298897LL, 0LL, 1LL);
          __debugbreak();
        }
        v1047 = CResourceTable::GetResource(v6, v5[1], 0x5Fu);
        if ( !v1047 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 158298897LL, 0LL, v1049);
          __debugbreak();
        }
        IsLocal = CPlaneCaptureRenderTargetEngine::ProcessCreate(
                    (CPlaneCaptureRenderTargetEngine *)(v1047 + 56),
                    v1048,
                    (const struct MILCMD_PLANECAPTURERENDERTARGET_CREATE *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 6362;
        goto LABEL_2934;
      case 268:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3277649570LL, 0LL, 1LL);
          __debugbreak();
        }
        v1050 = v5[2];
        if ( v1050 && !CResourceTable::GetResource(v6, v1050, 0x86u) )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3277649570LL, 0LL, v1051);
          __debugbreak();
        }
        v1052 = CResourceTable::GetResource(v6, v5[1], 0x5Fu);
        if ( !v1052 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3277649570LL, 0LL, v1053);
          __debugbreak();
        }
        IsLocal = CPlaneCaptureRenderTargetEngine::ProcessSetRoot(
                    (CPlaneCaptureRenderTargetEngine *)(v1052 + 56),
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_PLANECAPTURERENDERTARGET_SETROOT *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 6398;
        goto LABEL_2934;
      case 269:
        if ( v7 != 24 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1335405769LL, 0LL, 1LL);
          __debugbreak();
        }
        v562 = CResourceTable::GetResource(v6, v5[1], 0x60u);
        v563 = v562;
        if ( !v562 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1335405769LL, 0LL, 0LL);
          __debugbreak();
        }
        goto LABEL_970;
      case 270:
        if ( v7 != 24 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2557239666LL, 0LL, 1LL);
          __debugbreak();
        }
        v1054 = CResourceTable::GetResource(v6, v5[1], 0x61u);
        if ( !v1054 || v1054 == 8 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2557239666LL, 0LL, v1056);
          __debugbreak();
        }
        IsLocal = CPrimitiveColor::ProcessSetValue(
                    (CPrimitiveColor *)(v1054 - 8),
                    v1055,
                    (const struct MILCMD_PRIMITIVECOLOR_SETVALUE *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 6444;
        goto LABEL_2934;
      case 271:
        if ( v7 < 0xC )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3517302343LL, 0LL, 1LL);
          __debugbreak();
        }
        v607 = (CPrimitiveGroup *)CResourceTable::GetResource(v6, v5[1], 0x62u);
        if ( !v607 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3517302343LL, 0LL, v608);
          __debugbreak();
        }
        IsLocal = CPrimitiveGroup::ProcessAddColorResources(
                    v607,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_PRIMITIVEGROUP_ADDCOLORRESOURCES *)v5,
                    v5 + 3,
                    v1244);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 6470;
        goto LABEL_2934;
      case 272:
        if ( v7 != 20 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 45958557LL, 0LL, 1LL);
          __debugbreak();
        }
        v142 = v5[1];
        if ( !v142
          || v142 >= *(_DWORD *)(v6 + 28)
          || (v143 = *(_QWORD *)(v6 + 40), !*(_DWORD *)(v142 * *(_DWORD *)(v6 + 24) + v143))
          || (v144 = v143 + v142 * *(_DWORD *)(v6 + 24), !*(_QWORD *)(v144 + 8))
          || ((v145 = *(_QWORD *)(v144 + 8),
               v146 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v145 + 48LL),
               v146 != CPrimitiveGroup::IsOfType)
            ? ((char *)v146 != (char *)CPrimitiveGroupLayerClip::IsOfType
             ? (v147 = ((__int64 (__fastcall *)(__int64, __int64, unsigned __int64, __int64))v146)(v145, 98LL, v10, 1LL))
             : (v147 = CPrimitiveGroupLayerClip::IsOfType(v145, 98LL)))
            : (v147 = CPrimitiveGroup::IsOfType(v145, 98)),
              !v147 || (v148 = *(volatile signed __int32 ***)(v144 + 8)) == 0LL) )
        {
          CComposition::FailFastOnMalformedPacket(v12, 45958557LL, 0LL, v14);
          __debugbreak();
        }
        v5 = (unsigned int *)v1248;
        IsLocal = CPrimitiveGroup::ProcessAddPrimitives(v148, (struct CResourceTable *)v6, v1248);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 6493;
        goto LABEL_2934;
      case 273:
        if ( v7 < 0xC )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3329152585LL, 0LL, 1LL);
          __debugbreak();
        }
        v187 = v5[1];
        v188 = v5 + 3;
        if ( !v187
          || v187 >= *(_DWORD *)(v6 + 28)
          || (v189 = *(_QWORD *)(v6 + 40), !*(_DWORD *)(v187 * *(_DWORD *)(v6 + 24) + v189))
          || (v190 = v189 + *(_DWORD *)(v6 + 24) * v187, !*(_QWORD *)(v190 + 8))
          || ((v191 = *(_QWORD *)(v190 + 8),
               v192 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v191 + 48LL),
               v192 != CPrimitiveGroup::IsOfType)
            ? ((char *)v192 != (char *)CPrimitiveGroupLayerClip::IsOfType
             ? (v193 = ((__int64 (__fastcall *)(__int64, __int64, unsigned __int64, __int64))v192)(v191, 98LL, v10, 1LL))
             : (v193 = CPrimitiveGroupLayerClip::IsOfType(v191, 98LL)))
            : (v193 = CPrimitiveGroup::IsOfType(v191, 98)),
              !v193 || (v194 = *(_QWORD *)(v190 + 8)) == 0) )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3329152585LL, 0LL, v14);
          __debugbreak();
        }
        v13 = 0;
        v195 = 0;
        if ( !*((_DWORD *)v1248 + 2) )
          goto LABEL_310;
        do
        {
          v196 = *v188;
          if ( *v188
            && v196 < *((_DWORD *)v1251 + 7)
            && (v197 = *((_QWORD *)v1251 + 5), *(_DWORD *)(v196 * *((_DWORD *)v1251 + 6) + v197)) )
          {
            v198 = *(CMILCOMBase **)(*((_DWORD *)v1251 + 6) * v196 + v197 + 8);
          }
          else
          {
            v198 = 0LL;
          }
          v1257 = v198;
          if ( !v198
            || ((v199 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v198 + 48LL),
                 v199 != CCompositionSurfaceBitmap::IsOfType)
              ? (v200 = v199((__int64)v198, 35))
              : (v200 = CCompositionSurfaceBitmap::IsOfType((__int64)v198, 35)),
                !v200) )
          {
            v13 = -2003303421;
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88980403, 0x115u);
LABEL_1805:
            CPrimitiveGroup::ReleaseSurfaceResources((CPrimitiveGroup *)v194);
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0x1977u);
LABEL_59:
            if ( v13 < 0 )
              goto LABEL_1071;
            return (unsigned int)v13;
          }
          v201 = DynArray<CResource *,0>::AddMultipleAndSet(v194 + 168, &v1257);
          v13 = v201;
          if ( v201 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v201, 0x11Du);
            goto LABEL_313;
          }
          v202 = *(void (**)(void))(*(_QWORD *)v1257 + 8LL);
          if ( (char *)v202 == (char *)CMILCOMBase::InternalAddRef )
            CMILCOMBase::InternalAddRef(v1257);
          else
            v202();
          ++v188;
          ++v195;
        }
        while ( v195 < *((_DWORD *)v1248 + 2) );
LABEL_310:
        if ( *(_DWORD *)(v194 + 136) )
        {
          v1057 = 0LL;
          v1058 = *(unsigned int *)(v194 + 136);
          do
          {
            v1059 = *(_QWORD *)(v1057 + *(_QWORD *)(v194 + 112));
            CD2DResource::RemoveResourceNotifier(
              (CD2DResource *)(v1059 + 16),
              (const struct IDeviceResourceNotify *)(v194 + 56));
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v1059 + 16LL))(v1059);
            v1057 += 8LL;
            --v1058;
          }
          while ( v1058 );
          v12 = v1254;
        }
        *(_DWORD *)(v194 + 136) = 0;
        DynArrayImpl<0>::ShrinkToSize(v194 + 112, 8u);
        if ( *(_QWORD *)(v194 + 160) )
        {
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v194 + 160) + 8LL))(*(_QWORD *)(v194 + 160));
          *(_QWORD *)(v194 + 160) = 0LL;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v194 + 64LL))(v194, 5LL);
        }
LABEL_313:
        if ( v13 < 0 )
          goto LABEL_1805;
        v11 = v1253;
LABEL_45:
        v5 = (unsigned int *)v1248;
LABEL_46:
        v9 = a4;
LABEL_47:
        v14 = 1LL;
LABEL_48:
        v10 = v1246;
LABEL_49:
        v13 = -2147467259;
        v33 = (unsigned __int64)v11 + (unsigned int)v8 - (_QWORD)v1256;
        if ( !v33 )
        {
          v12 = v1254;
          v5 = 0LL;
          v6 = (__int64)v1251;
          v7 = 0;
          v1250 = 0;
          v13 = 1;
          v1248 = 0LL;
          continue;
        }
        if ( v33 < 8 || (v34 = *v1256, (unsigned int)v34 < 8) || (v34 & 3) != 0 || v34 > v33 )
        {
          v7 = v1250;
        }
        else
        {
          v10 = v1256[1];
          v5 = v1256 + 1;
          v1246 = v1256[1];
          v7 = v34 - 4;
          v1256 = (unsigned int *)((char *)v1256 + v34);
          v13 = 0;
          v1248 = (struct MILCMD_NOTIFICATIONRESOURCE_SETCALLBACKID *)v5;
          v1250 = v34 - 4;
        }
        if ( v13 >= 0 )
        {
          v12 = v1254;
          v6 = (__int64)v1251;
          continue;
        }
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0x232u);
        v12 = v1254;
LABEL_1071:
        if ( !IsOOM(v13) )
        {
          MilUnexpectedError(v616, L"batch processing error");
          StackCaptureRootFailureAddress = GetStackCaptureRootFailureAddress(v13);
          CComposition::FailFastOnMalformedPacket(v12, (unsigned int)v13, StackCaptureRootFailureAddress, v618);
          __debugbreak();
        }
        return (unsigned int)v13;
      case 274:
        if ( v7 != 8 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 790592767LL, 0LL, 1LL);
          __debugbreak();
        }
        v613 = (CPrimitiveGroup *)CResourceTable::GetResource(v6, v5[1], 0x62u);
        v615 = v613;
        if ( !v613 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 790592767LL, 0LL, v614);
          __debugbreak();
        }
        CPrimitiveGroup::ReleasePrimitiveCaches(v613, 1);
        CPrimitiveGroup::ReleaseColorResources(v615);
        goto LABEL_45;
      case 275:
        if ( v7 != 8 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3251001041LL, 0LL, 1LL);
          __debugbreak();
        }
        v203 = v5[1];
        if ( !v203
          || v203 >= *(_DWORD *)(v6 + 28)
          || (v204 = *(_QWORD *)(v6 + 40), !*(_DWORD *)(v203 * *(_DWORD *)(v6 + 24) + v204))
          || (v205 = v204 + v203 * *(_DWORD *)(v6 + 24), !*(_QWORD *)(v205 + 8))
          || ((v206 = *(_QWORD *)(v205 + 8),
               v207 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v206 + 48LL),
               v207 != CPrimitiveGroup::IsOfType)
            ? (v208 = ((__int64 (__fastcall *)(__int64, __int64, unsigned __int64, __int64))v207)(v206, 98LL, v10, 1LL))
            : (v208 = CPrimitiveGroup::IsOfType(v206, 98)),
              !v208 || (v209 = *(_QWORD *)(v205 + 8)) == 0) )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3251001041LL, 0LL, v14);
          __debugbreak();
        }
        if ( *(_DWORD *)(v209 + 136) )
        {
          v495 = 0LL;
          v496 = *(unsigned int *)(v209 + 136);
          do
          {
            v497 = *(_QWORD *)(v495 + *(_QWORD *)(v209 + 112));
            CD2DResource::RemoveResourceNotifier(
              (CD2DResource *)(v497 + 16),
              (const struct IDeviceResourceNotify *)(v209 + 56));
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v497 + 16LL))(v497);
            v495 += 8LL;
            --v496;
          }
          while ( v496 );
        }
        *(_DWORD *)(v209 + 136) = 0;
        DynArrayImpl<0>::ShrinkToSize(v209 + 112, 8u);
        if ( *(_QWORD *)(v209 + 160) )
        {
          v255 = *(CMILRefCountBase **)(v209 + 160);
          v256 = *(void (**)(void))(*(_QWORD *)v255 + 8LL);
          if ( (char *)v256 == (char *)CMILRefCountBase::Release )
            CMILRefCountBase::Release(v255);
          else
            v256();
          *(_QWORD *)(v209 + 160) = 0LL;
          v257 = *(__int64 (__fastcall **)(CGradientBrush *, unsigned int, struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden)))(*(_QWORD *)v209 + 64LL);
          if ( v257 == CResource::NotifyOnChanged )
            CResource::NotifyOnChanged((CGradientBrush *)v209, 5u, 0LL);
          else
            ((void (__fastcall *)(__int64, __int64))v257)(v209, 5LL);
        }
        v210 = 0LL;
        if ( *(_DWORD *)(v209 + 192) )
        {
          do
          {
            v211 = *(CGdiSpriteBitmap **)(*(_QWORD *)(v209 + 168) + 8 * v210);
            v212 = *(void (**)(void))(*(_QWORD *)v211 + 16LL);
            if ( (char *)v212 == (char *)CGdiSpriteBitmap::Release )
              CGdiSpriteBitmap::Release(v211);
            else
              v212();
            v210 = (unsigned int)(v210 + 1);
          }
          while ( (unsigned int)v210 < *(_DWORD *)(v209 + 192) );
          LODWORD(v8) = v1249;
        }
        *(_DWORD *)(v209 + 192) = 0;
        DynArrayImpl<0>::ShrinkToSize(v209 + 168, 8u);
        goto LABEL_45;
      case 276:
        if ( v7 != 24 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2019003328LL, 0LL, 1LL);
          __debugbreak();
        }
        v402 = (CPrimitiveGroup *)CResourceTable::GetResource(v6, v5[1], 0x62u);
        if ( !v402 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2019003328LL, 0LL, v404);
          __debugbreak();
        }
        IsLocal = CPrimitiveGroup::ProcessSetBoundsRect(
                    v402,
                    v403,
                    (const struct MILCMD_PRIMITIVEGROUP_SETBOUNDSRECT *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 6588;
        goto LABEL_2934;
      case 277:
        if ( v7 < 0xC )
        {
          CComposition::FailFastOnMalformedPacket(v12, 4192483160LL, 0LL, 1LL);
          __debugbreak();
        }
        v149 = v5[1];
        v150 = v7 - 12;
        if ( !v149
          || v149 >= *(_DWORD *)(v6 + 28)
          || (v151 = *(_QWORD *)(v6 + 40), !*(_DWORD *)(v149 * *(_DWORD *)(v6 + 24) + v151))
          || (v152 = v151 + v149 * *(_DWORD *)(v6 + 24), !*(_QWORD *)(v152 + 8))
          || ((v153 = *(_QWORD *)(v152 + 8),
               v154 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v153 + 48LL),
               v154 != CPrimitiveGroup::IsOfType)
            ? ((char *)v154 != (char *)CPrimitiveGroupLayerClip::IsOfType
             ? (v155 = ((__int64 (__fastcall *)(__int64, __int64, unsigned __int64, __int64))v154)(v153, 98LL, v10, 1LL))
             : (v155 = CPrimitiveGroupLayerClip::IsOfType(v153, 98LL)))
            : (v155 = CPrimitiveGroup::IsOfType(v153, 98)),
              !v155 || (v156 = *(void ***)(v152 + 8), (v1255 = v156) == 0LL)) )
        {
          CComposition::FailFastOnMalformedPacket(v12, 4192483160LL, 0LL, v14);
          __debugbreak();
        }
        v5 = (unsigned int *)v1248;
        v157 = (struct FastRegion::Internal::CRgnData *)v1265;
        v1264 = (struct FastRegion::Internal::CRgnData *)v1265;
        v158 = 1;
        v1265[0] = 0;
        v159 = *((_DWORD *)v1248 + 2);
        if ( !v159 || v150 != 16LL * v159 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88980403, 0x1F1u);
LABEL_284:
          *(_DWORD *)v156[73] = 0;
          if ( v158 )
            (*((void (__fastcall **)(void **, _QWORD, _QWORD))*v156 + 8))(v156, 0LL, 0LL);
          v14 = 1LL;
          if ( v1265 != (_DWORD *)v1264 )
          {
            WPF::ProcessHeapImpl::Free(v1264);
            v1265[0] = 0;
            v1264 = (struct FastRegion::Internal::CRgnData *)v1265;
            goto LABEL_46;
          }
LABEL_147:
          v9 = a4;
          goto LABEL_48;
        }
        v160 = 0;
        while ( 1 )
        {
          if ( *(float *)&v5[4 * v160 + 3] < -16777216.0
            || *(float *)&v5[4 * v160 + 4] < -16777216.0
            || *(float *)&v5[4 * v160 + 5] > 16777216.0
            || *(float *)&v5[4 * v160 + 6] > 16777216.0 )
          {
            goto LABEL_1822;
          }
          v161 = (__m128)v5[4 * v160 + 3];
          v162 = (int)v161.m128_f32[0];
          v163.m128_f32[0] = (float)(int)v161.m128_f32[0];
          v163.m128_f32[0] = _mm_cmplt_ss(v161, v163).m128_f32[0];
          v164 = (__m128)v5[4 * v160 + 4];
          v165 = v162 + v163.m128_i32[0];
          v166 = (int)v164.m128_f32[0];
          v163.m128_f32[0] = (float)(int)v164.m128_f32[0];
          v167 = _mm_cmplt_ss(v164, v163);
          LODWORD(v1252) = v167.m128_i32[0];
          v163.m128_i32[0] = v5[4 * v160 + 5];
          v168 = v166 + v167.m128_i32[0];
          v167.m128_f32[0] = (float)(int)v163.m128_f32[0];
          LODWORD(v1252) = _mm_cmplt_ss(v167, v163).m128_u32[0];
          v167.m128_i32[0] = v5[4 * v160 + 6];
          v169 = (int)v163.m128_f32[0] - (_DWORD)v1252;
          v4.m128_f32[0] = (float)(int)v167.m128_f32[0];
          v4 = _mm_cmplt_ss(v4, v167);
          LODWORD(v1252) = v4.m128_i32[0];
          v170 = (int)v167.m128_f32[0] - v4.m128_i32[0];
          if ( v165 >= v169 || v168 >= v170 )
          {
            *(_DWORD *)v157 = 0;
          }
          else
          {
            *(_DWORD *)v157 = 2;
            *((_DWORD *)v157 + 1) = v165;
            *((_DWORD *)v157 + 2) = v169;
            *((_DWORD *)v157 + 3) = v168;
            *((_DWORD *)v157 + 4) = 16;
            *((_DWORD *)v157 + 7) = v165;
            *((_DWORD *)v157 + 8) = v169;
            *((_DWORD *)v157 + 5) = v170;
            *((_DWORD *)v157 + 6) = 16;
          }
          v157 = v1264;
          v171 = (const struct FastRegion::Internal::CRgnData **)(v156 + 73);
          v172 = *(_DWORD *)v1264;
          if ( !*(_DWORD *)v1264 )
            goto LABEL_279;
          v173 = *v171;
          if ( *(_DWORD *)*v171 )
          {
            v501 = FastRegion::Internal::CRgnData::EstimateSizeUnion(*v171, v1264);
            v1268 = 0;
            lpMem = v1270;
            v185 = FastRegion::Internal::CWorkBuffer::SetupBuffer((FastRegion::Internal::CWorkBuffer *)&v1268, v501);
            if ( v185 < 0 )
            {
              FastRegion::Internal::CWorkBuffer::~CWorkBuffer((FastRegion::Internal::CWorkBuffer *)&v1268);
            }
            else
            {
              FastRegion::Internal::CRgnData::Union((FastRegion::Internal::CRgnData *)lpMem, *v171, v1264);
              v185 = FastRegion::CRegion::SaveResult(v156 + 73, (struct FastRegion::Internal::CWorkBuffer *)&v1268);
              if ( v1270 != lpMem )
                WPF::ProcessHeapImpl::Free(lpMem);
            }
          }
          else
          {
            if ( v171 == &v1264 )
              goto LABEL_277;
            if ( !v172 )
            {
              *(_DWORD *)v173 = 0;
              goto LABEL_276;
            }
            v174 = (int *)(v156 + 74);
            v175 = 8 * (v172 - 1) + *((_DWORD *)v1264 + 2 * v172 + 2) + 8 * v172 + 24 - *((_DWORD *)v1264 + 4) - 12;
            if ( v156 + 74 == (void **)v173 )
              v176 = 60;
            else
              v176 = *v174;
            if ( v176 >= v175 )
              goto LABEL_270;
            v1060 = v175;
            if ( !v175 )
              v1060 = 1LL;
            v1061 = (const struct FastRegion::Internal::CRgnData *)HeapAlloc(WPF::g_processHeap, 0, v1060);
            if ( v1061 )
            {
              FastRegion::CRegion::FreeMemory((void **)v171);
              *v171 = v1061;
              *v174 = v175;
LABEL_270:
              v177 = *v171;
              v178 = 0;
              *(_DWORD *)v177 = *(_DWORD *)v157;
              *((_DWORD *)v177 + 1) = *((_DWORD *)v157 + 1);
              *((_DWORD *)v177 + 2) = *((_DWORD *)v157 + 2);
              v179 = (__int64)v157 + *((int *)v157 + 4) + 12;
              v180 = (_DWORD *)((char *)v177 + 8 * *(_DWORD *)v177 + 12);
              if ( *(int *)v177 > 0 )
              {
                do
                {
                  v181 = v178++;
                  v182 = (char *)v177 + 8 * v181;
                  *((_DWORD *)v182 + 3) = *((_DWORD *)v157 + 2 * v181 + 3);
                  *((_DWORD *)v182 + 4) = 4 * (((__int64)v180 - v179) >> 2)
                                        + (_DWORD)v157
                                        + 8 * v181
                                        + *((_DWORD *)v157 + 2 * v181 + 4)
                                        - (_DWORD)v182;
                }
                while ( v178 < *(_DWORD *)v177 );
              }
              v183 = (unsigned __int64)(8 * (*(_DWORD *)v157 - 1)
                                      + *((_DWORD *)v157 + 2 * *(_DWORD *)v157 + 2)
                                      - *((_DWORD *)v157 + 4)) >> 2;
              if ( (int)v183 > 0 )
              {
                v184 = v179 - (_QWORD)v180;
                v183 = (unsigned int)v183;
                do
                {
                  *v180 = *(_DWORD *)((char *)v180 + v184);
                  ++v180;
                  --v183;
                }
                while ( v183 );
              }
              v156 = v1255;
LABEL_276:
              v157 = v1264;
LABEL_277:
              v185 = 0;
              goto LABEL_278;
            }
            v156 = v1255;
            v185 = -2147024882;
          }
          v157 = v1264;
LABEL_278:
          if ( v185 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v185, 0x201u);
            v5 = (unsigned int *)v1248;
LABEL_1822:
            v158 = 1;
            v11 = v1253;
LABEL_283:
            LODWORD(v8) = v1249;
            goto LABEL_284;
          }
LABEL_279:
          v5 = (unsigned int *)v1248;
          if ( (unsigned int)++v160 >= *((_DWORD *)v1248 + 2) )
          {
            v11 = v1253;
            v186 = (__int64 (__fastcall *)(CGradientBrush *, unsigned int, struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden)))*((_QWORD *)*v156 + 8);
            if ( v186 == CResource::NotifyOnChanged )
              CResource::NotifyOnChanged(
                (CGradientBrush *)v156,
                1u,
                (struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden))v156);
            else
              v186((CGradientBrush *)v156, 1u, (struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden))v156);
            v158 = 0;
            goto LABEL_283;
          }
        }
      case 278:
        if ( v7 != 20 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3890546805LL, 0LL, 1LL);
          __debugbreak();
        }
        v1062 = (CPropertyBagBase *)CResourceTable::GetResource(v6, v5[1], 0x65u);
        if ( !v1062 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3890546805LL, 0LL, v1064);
          __debugbreak();
        }
        IsLocal = CPropertyBagBase::ProcessSetBooleanProperty(
                    v1062,
                    v1063,
                    (const struct MILCMD_PROPERTYBAGBASE_SETBOOLEANPROPERTY *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 6637;
        goto LABEL_2934;
      case 279:
        if ( v7 != 32 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2175774989LL, 0LL, 1LL);
          __debugbreak();
        }
        v539 = (CPropertyBagBase *)CResourceTable::GetResource(v6, v5[1], 0x65u);
        if ( !v539 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2175774989LL, 0LL, v541);
          __debugbreak();
        }
        IsLocal = CPropertyBagBase::ProcessSetColorProperty(
                    v539,
                    v540,
                    (const struct MILCMD_PROPERTYBAGBASE_SETCOLORPROPERTY *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 6660;
        goto LABEL_2934;
      case 280:
        if ( v7 != 40 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1621053857LL, 0LL, 1LL);
          __debugbreak();
        }
        v242 = (CPropertyBagBase *)CResourceTable::GetResource(v6, v5[1], 0x65u);
        if ( !v242 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1621053857LL, 0LL, v244);
          __debugbreak();
        }
        IsLocal = CPropertyBagBase::ProcessSetMatrix3x2Property(
                    v242,
                    v243,
                    (const struct MILCMD_PROPERTYBAGBASE_SETMATRIX3X2PROPERTY *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 6683;
        goto LABEL_2934;
      case 281:
        if ( v7 != 80 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 985546152LL, 0LL, 1LL);
          __debugbreak();
        }
        v321 = (CPropertyBagBase *)CResourceTable::GetResource(v6, v5[1], 0x65u);
        if ( !v321 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 985546152LL, 0LL, v323);
          __debugbreak();
        }
        IsLocal = CPropertyBagBase::ProcessSetMatrix4x4Property(
                    v321,
                    v322,
                    (const struct MILCMD_PROPERTYBAGBASE_SETMATRIX4X4PROPERTY *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 6706;
        goto LABEL_2934;
      case 282:
        if ( v7 != 32 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1590000378LL, 0LL, 1LL);
          __debugbreak();
        }
        v1065 = (CPropertyBagBase *)CResourceTable::GetResource(v6, v5[1], 0x65u);
        if ( !v1065 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1590000378LL, 0LL, v1067);
          __debugbreak();
        }
        IsLocal = CPropertyBagBase::ProcessSetQuaternionProperty(
                    v1065,
                    v1066,
                    (const struct MILCMD_PROPERTYBAGBASE_SETQUATERNIONPROPERTY *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 6729;
        goto LABEL_2934;
      case 283:
        if ( v7 != 20 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2231884527LL, 0LL, 1LL);
          __debugbreak();
        }
        v239 = (CPropertyBagBase *)CResourceTable::GetResource(v6, v5[1], 0x65u);
        if ( !v239 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2231884527LL, 0LL, v241);
          __debugbreak();
        }
        IsLocal = CPropertyBagBase::ProcessSetScalarProperty(
                    v239,
                    v240,
                    (const struct MILCMD_PROPERTYBAGBASE_SETSCALARPROPERTY *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 6752;
        goto LABEL_2934;
      case 284:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2232021832LL, 0LL, 1LL);
          __debugbreak();
        }
        v1068 = CResourceTable::GetResource(v6, v5[1], 0x65u);
        if ( !v1068 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2232021832LL, 0LL, v1069);
          __debugbreak();
        }
        *(_DWORD *)(v1068 + 56) = v5[2];
        goto LABEL_46;
      case 285:
        if ( v7 != 24 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3509770806LL, 0LL, 1LL);
          __debugbreak();
        }
        v595 = (CPropertyBagBase *)CResourceTable::GetResource(v6, v5[1], 0x65u);
        if ( !v595 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3509770806LL, 0LL, v597);
          __debugbreak();
        }
        IsLocal = CPropertyBagBase::ProcessSetVector2Property(
                    v595,
                    v596,
                    (const struct MILCMD_PROPERTYBAGBASE_SETVECTOR2PROPERTY *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 6798;
        goto LABEL_2934;
      case 286:
        if ( v7 != 28 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3326725749LL, 0LL, 1LL);
          __debugbreak();
        }
        v555 = (CPropertyBagBase *)CResourceTable::GetResource(v6, v5[1], 0x65u);
        if ( !v555 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3326725749LL, 0LL, v557);
          __debugbreak();
        }
        IsLocal = CPropertyBagBase::ProcessSetVector3Property(
                    v555,
                    v556,
                    (const struct MILCMD_PROPERTYBAGBASE_SETVECTOR3PROPERTY *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 6821;
        goto LABEL_2934;
      case 287:
        if ( v7 != 32 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2720572348LL, 0LL, 1LL);
          __debugbreak();
        }
        v1070 = (CPropertyBagBase *)CResourceTable::GetResource(v6, v5[1], 0x65u);
        if ( !v1070 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2720572348LL, 0LL, v1072);
          __debugbreak();
        }
        IsLocal = CPropertyBagBase::ProcessSetVector4Property(
                    v1070,
                    v1071,
                    (const struct MILCMD_PROPERTYBAGBASE_SETVECTOR4PROPERTY *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 6844;
        goto LABEL_2934;
      case 288:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3857500249LL, 0LL, 1LL);
          __debugbreak();
        }
        v564 = (_DWORD *)CResourceTable::GetResource(v6, v5[1], 0x66u);
        if ( !v564 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3857500249LL, 0LL, v565);
          __debugbreak();
        }
        v564[16] = v5[2];
        IsLocal = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v564 + 160LL))(v564);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 6867;
        goto LABEL_2934;
      case 289:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3330459588LL, 0LL, 1LL);
          __debugbreak();
        }
        v333 = (CRectangleGeometry *)CResourceTable::GetResource(v6, v5[1], 0x67u);
        if ( !v333 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3330459588LL, 0LL, v335);
          __debugbreak();
        }
        IsLocal = CRectangleGeometry::ProcessSetBottomInset(
                    v333,
                    v334,
                    (const struct MILCMD_RECTANGLEGEOMETRY_SETBOTTOMINSET *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 6890;
        goto LABEL_2934;
      case 290:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1684129358LL, 0LL, 1LL);
          __debugbreak();
        }
        v336 = (CRectangleGeometry *)CResourceTable::GetResource(v6, v5[1], 0x67u);
        if ( !v336 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1684129358LL, 0LL, v338);
          __debugbreak();
        }
        IsLocal = CRectangleGeometry::ProcessSetLeftInset(
                    v336,
                    v337,
                    (const struct MILCMD_RECTANGLEGEOMETRY_SETLEFTINSET *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 6913;
        goto LABEL_2934;
      case 291:
        if ( v7 != 44 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 62358744LL, 0LL, 1LL);
          __debugbreak();
        }
        v394 = (CRectangleGeometry *)CResourceTable::GetResource(v6, v5[1], 0x67u);
        if ( !v394 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 62358744LL, 0LL, v396);
          __debugbreak();
        }
        IsLocal = CRectangleGeometry::ProcessSetRectangle(
                    v394,
                    v395,
                    (const struct MILCMD_RECTANGLEGEOMETRY_SETRECTANGLE *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 6936;
        goto LABEL_2934;
      case 292:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2246670181LL, 0LL, 1LL);
          __debugbreak();
        }
        v327 = (CRectangleGeometry *)CResourceTable::GetResource(v6, v5[1], 0x67u);
        if ( !v327 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2246670181LL, 0LL, v329);
          __debugbreak();
        }
        IsLocal = CRectangleGeometry::ProcessSetRightInset(
                    v327,
                    v328,
                    (const struct MILCMD_RECTANGLEGEOMETRY_SETRIGHTINSET *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 6959;
        goto LABEL_2934;
      case 293:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3710330027LL, 0LL, 1LL);
          __debugbreak();
        }
        v330 = (CRectangleGeometry *)CResourceTable::GetResource(v6, v5[1], 0x67u);
        if ( !v330 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3710330027LL, 0LL, v332);
          __debugbreak();
        }
        IsLocal = CRectangleGeometry::ProcessSetTopInset(
                    v330,
                    v331,
                    (const struct MILCMD_RECTANGLEGEOMETRY_SETTOPINSET *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 6982;
        goto LABEL_2934;
      case 294:
        if ( v7 != 40 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 971077780LL, 0LL, 1LL);
          __debugbreak();
        }
        v562 = CResourceTable::GetResource(v6, v5[1], 0x68u);
        v563 = v562;
        if ( !v562 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 971077780LL, 0LL, 0LL);
          __debugbreak();
        }
        *(_OWORD *)(v562 + 56) = *(_OWORD *)(v5 + 2);
        *(_OWORD *)(v562 + 72) = *(_OWORD *)(v5 + 6);
        goto LABEL_971;
      case 295:
        if ( v7 != 24 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3397335438LL, 0LL, 1LL);
          __debugbreak();
        }
        v562 = CResourceTable::GetResource(v6, v5[1], 0x69u);
        v563 = v562;
        if ( !v562 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3397335438LL, 0LL, 0LL);
          __debugbreak();
        }
        goto LABEL_970;
      case 296:
        if ( v7 != 32 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3219898555LL, 0LL, 1LL);
          __debugbreak();
        }
        v1073 = (CRemotingRenderTarget *)CResourceTable::GetResource(v6, v5[1], 0x6Au);
        if ( !v1073 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3219898555LL, 0LL, v1075);
          __debugbreak();
        }
        IsLocal = CRemotingRenderTarget::ProcessCreate(
                    v1073,
                    v1074,
                    (const struct MILCMD_REMOTINGRENDERTARGET_CREATE *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 7051;
        goto LABEL_2934;
      case 297:
        if ( v7 != 24 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2646222656LL, 0LL, 1LL);
          __debugbreak();
        }
        v1076 = CResourceTable::GetResource(v6, v5[1], 0x6Au);
        if ( !v1076 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2646222656LL, 0LL, v1077);
          __debugbreak();
        }
        *(_OWORD *)(*(_QWORD *)(v1076 + 56) + 24LL) = *(_OWORD *)(v5 + 2);
        goto LABEL_46;
      case 298:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 4125702375LL, 0LL, 1LL);
          __debugbreak();
        }
        v1078 = v5[2];
        if ( v1078 && !CResourceTable::GetResource(v6, v1078, 0x86u) )
        {
          CComposition::FailFastOnMalformedPacket(v12, 4125702375LL, 0LL, v1079);
          __debugbreak();
        }
        v1080 = (CRemotingRenderTarget *)CResourceTable::GetResource(v6, v5[1], 0x6Au);
        if ( !v1080 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 4125702375LL, 0LL, v1081);
          __debugbreak();
        }
        IsLocal = CRemotingRenderTarget::ProcessSetRoot(
                    v1080,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_REMOTINGRENDERTARGET_SETROOT *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 7110;
        goto LABEL_2934;
      case 299:
        if ( v7 < 0xC )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3917422753LL, 0LL, 1LL);
          __debugbreak();
        }
        v341 = (CRenderData *)CResourceTable::GetResource(v6, v5[1], 0x6Bu);
        if ( !v341 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3917422753LL, 0LL, v342);
          __debugbreak();
        }
        IsLocal = CRenderData::ProcessUpdate(
                    v341,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_RENDERDATA *)v5,
                    v5 + 3,
                    v7 - 12);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 7136;
        goto LABEL_2934;
      case 300:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3247004996LL, 0LL, 1LL);
          __debugbreak();
        }
        v1082 = CResourceTable::GetResource(v6, v5[1], 0x6Cu);
        if ( !v1082 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3247004996LL, 0LL, 0LL);
          __debugbreak();
        }
        IsLocal = (*(__int64 (__fastcall **)(__int64, __int64, unsigned int *))(*(_QWORD *)v1082 + 176LL))(
                    v1082,
                    v6,
                    v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 7159;
        goto LABEL_2934;
      case 301:
        if ( v7 != 24 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1596892827LL, 0LL, 1LL);
          __debugbreak();
        }
        v1083 = CResourceTable::GetResource(v6, v5[1], 0x6Cu);
        if ( !v1083 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1596892827LL, 0LL, 0LL);
          __debugbreak();
        }
        IsLocal = (*(__int64 (__fastcall **)(__int64, __int64, unsigned int *))(*(_QWORD *)v1083 + 168LL))(
                    v1083,
                    v6,
                    v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 7182;
        goto LABEL_2934;
      case 302:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3774028180LL, 0LL, 1LL);
          __debugbreak();
        }
        v1084 = v5[2];
        if ( v1084 && !CResourceTable::GetResource(v6, v1084, 0x88u) )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3774028180LL, 0LL, v1085);
          __debugbreak();
        }
        v1086 = (CRenderTarget *)CResourceTable::GetResource(v6, v5[1], 0x6Cu);
        if ( !v1086 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3774028180LL, 0LL, v1087);
          __debugbreak();
        }
        IsLocal = CRenderTarget::ProcessSetFilterList(
                    v1086,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_RENDERTARGET_SETFILTERLIST *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 7218;
        goto LABEL_2934;
      case 303:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2707465459LL, 0LL, 1LL);
          __debugbreak();
        }
        v1088 = CResourceTable::GetResource(v6, v5[1], 0x6Cu);
        if ( !v1088 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2707465459LL, 0LL, 0LL);
          __debugbreak();
        }
        IsLocal = (*(__int64 (__fastcall **)(__int64, __int64, unsigned int *))(*(_QWORD *)v1088 + 184LL))(
                    v1088,
                    v6,
                    v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 7241;
        goto LABEL_2934;
      case 304:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2036199221LL, 0LL, 1LL);
          __debugbreak();
        }
        v1089 = v5[2];
        if ( v1089 && !CResourceTable::GetResource(v6, v1089, 0x86u) )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2036199221LL, 0LL, v1090);
          __debugbreak();
        }
        v1091 = CResourceTable::GetResource(v6, v5[1], 0x6Cu);
        if ( !v1091 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2036199221LL, 0LL, 0LL);
          __debugbreak();
        }
        IsLocal = (*(__int64 (__fastcall **)(__int64, __int64, unsigned int *))(*(_QWORD *)v1091 + 160LL))(
                    v1091,
                    v6,
                    v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 7277;
        goto LABEL_2934;
      case 305:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1561262701LL, 0LL, 1LL);
          __debugbreak();
        }
        v1092 = (CScalar *)CResourceTable::GetResource(v6, v5[1], 0x71u);
        if ( !v1092 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1561262701LL, 0LL, v1094);
          __debugbreak();
        }
        IsLocal = CScalar::ProcessSetValue(v1092, v1093, (const struct MILCMD_SCALAR_SETVALUE *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 7300;
        goto LABEL_2934;
      case 306:
        if ( v7 != 24 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1002445622LL, 0LL, 1LL);
          __debugbreak();
        }
        v562 = CResourceTable::GetResource(v6, v5[1], 0x77u);
        v563 = v562;
        if ( !v562 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1002445622LL, 0LL, 0LL);
          __debugbreak();
        }
LABEL_970:
        *(_OWORD *)(v562 + 56) = *(_OWORD *)(v5 + 2);
LABEL_971:
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v562 + 64LL))(v563, 0LL, 0LL, v563);
        goto LABEL_46;
      case 307:
        if ( v7 != 72 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 4144900114LL, 0LL, 1LL);
          __debugbreak();
        }
        v1095 = (CSnapshot *)CResourceTable::GetResource(v6, v5[1], 0x79u);
        if ( !v1095 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 4144900114LL, 0LL, v1096);
          __debugbreak();
        }
        IsLocal = CSnapshot::ProcessSetTransformMatrix(
                    v1095,
                    (const struct CResourceTable *)v6,
                    (const struct MILCMD_SNAPSHOT_SETTRANSFORMMATRIX *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 7346;
        goto LABEL_2934;
      case 308:
        if ( v7 != 24 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1508083678LL, 0LL, 1LL);
          __debugbreak();
        }
        v1097 = (CSnapshot *)CResourceTable::GetResource(v6, v5[1], 0x79u);
        if ( !v1097 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1508083678LL, 0LL, v1098);
          __debugbreak();
        }
        IsLocal = CSnapshot::ProcessUpdate(v1097, (const struct CResourceTable *)v6, (const struct MILCMD_SNAPSHOT *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 7369;
        goto LABEL_2934;
      case 309:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1812227472LL, 0LL, 1LL);
          __debugbreak();
        }
        v268 = (CSpriteVisual *)CResourceTable::GetResource(v6, v5[1], 0x7Bu);
        if ( !v268 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1812227472LL, 0LL, v269);
          __debugbreak();
        }
        IsLocal = CSpriteVisual::ProcessSetBrush(
                    v268,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_SPRITEVISUAL_SETBRUSH *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 7392;
        goto LABEL_2934;
      case 310:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2273911252LL, 0LL, 1LL);
          __debugbreak();
        }
        v1099 = (CSpriteVisual *)CResourceTable::GetResource(v6, v5[1], 0x7Bu);
        if ( !v1099 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2273911252LL, 0LL, v1100);
          __debugbreak();
        }
        IsLocal = CSpriteVisual::ProcessSetShadow(
                    v1099,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_SPRITEVISUAL_SETSHADOW *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 7415;
        goto LABEL_2934;
      case 311:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 641216632LL, 0LL, 1LL);
          __debugbreak();
        }
        v311 = (CSpriteVisualContent *)CResourceTable::GetResource(v6, v5[1], 0x7Cu);
        if ( !v311 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 641216632LL, 0LL, v312);
          __debugbreak();
        }
        *((_DWORD *)v311 + 20) = v5[2];
        CSpriteVisualContent::ReleasePrimitiveCaches(v311);
        goto LABEL_46;
      case 312:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3810653060LL, 0LL, 1LL);
          __debugbreak();
        }
        v1101 = CResourceTable::GetResource(v6, v5[1], 0x7Cu);
        if ( !v1101 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3810653060LL, 0LL, v1102);
          __debugbreak();
        }
        v1103 = D2DInterpolationModeFromMilInterpolationMode(v5[2], v1101);
        *((_DWORD *)v1104 + 23) = v1103;
        CSpriteVisualContent::ReleasePrimitiveCaches(v1104);
        goto LABEL_46;
      case 313:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 631396834LL, 0LL, 1LL);
          __debugbreak();
        }
        v315 = (CSpriteVisualContent *)CResourceTable::GetResource(v6, v5[1], 0x7Cu);
        if ( !v315 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 631396834LL, 0LL, v316);
          __debugbreak();
        }
        *((_DWORD *)v315 + 22) = v5[2];
        CSpriteVisualContent::ReleasePrimitiveCaches(v315);
        goto LABEL_46;
      case 314:
        if ( v7 != 28 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2551658639LL, 0LL, 1LL);
          __debugbreak();
        }
        v97 = v5[1];
        if ( !v97
          || v97 >= *(_DWORD *)(v6 + 28)
          || (v98 = *(_QWORD *)(v6 + 40), !*(_DWORD *)(v97 * *(_DWORD *)(v6 + 24) + v98))
          || (v99 = v98 + *(_DWORD *)(v6 + 24) * v97, !*(_QWORD *)(v99 + 8))
          || ((v100 = *(_QWORD *)(v99 + 8),
               v101 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v100 + 48LL),
               v101 != CSurfaceBrush::IsOfType)
            ? (v102 = ((__int64 (__fastcall *)(__int64, __int64, unsigned __int64, __int64))v101)(v100, 124LL, v10, 1LL))
            : (v102 = CSurfaceBrush::IsOfType(v100, 124)),
              !v102 || (v103 = *(_QWORD *)(v99 + 8)) == 0) )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2551658639LL, 0LL, v14);
          __debugbreak();
        }
        v13 = 0;
        v104 = *((_DWORD *)v1248 + 2);
        if ( v104
          && v104 < *(_DWORD *)(v6 + 28)
          && (v105 = *(_QWORD *)(v6 + 40), *(_DWORD *)(v104 * *(_DWORD *)(v6 + 24) + v105)) )
        {
          v106 = *(struct CResource **)(*(_DWORD *)(v6 + 24) * v104 + v105 + 8);
        }
        else
        {
          v106 = 0LL;
        }
        v107 = (float)*((int *)v1248 + 4);
        *(float *)&v1261 = (float)*((int *)v1248 + 3);
        v108 = _mm_cvtsi32_si128(*((_DWORD *)v1248 + 5));
        *((float *)&v1261 + 1) = v107;
        v109 = (float)*((int *)v1248 + 6);
        DWORD2(v1261) = _mm_cvtepi32_ps(v108).m128_u32[0];
        *((float *)&v1261 + 3) = v109;
        if ( v106 == *(struct CResource **)(v103 + 96)
          || (v308 = CSurfaceBrush::SetSurface((struct CResource **)v103, v106), v13 = v308, v308 >= 0) )
        {
          if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::operator==((float *)&v1261, (float *)(v103 + 120))
            || TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v1261)
            && TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(v287)
            || TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite((float *)&v1261)
            && TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite(v110) )
          {
            if ( !v111 )
              goto LABEL_185;
          }
          else
          {
            *(_OWORD *)v110 = v1261;
          }
          CSpriteVisualContent::ReleasePrimitiveCaches((CSpriteVisualContent *)v103);
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v308, 0x9Bu);
        }
LABEL_185:
        if ( v13 >= 0 )
          goto LABEL_45;
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0x1D53u);
        goto LABEL_59;
      case 315:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 258105739LL, 0LL, 1LL);
          __debugbreak();
        }
        v317 = (struct CResource **)CResourceTable::GetResource(v6, v5[1], 0x7Cu);
        if ( !v317 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 258105739LL, 0LL, v318);
          __debugbreak();
        }
        IsLocal = CSurfaceBrush::ProcessSetTransform(
                    v317,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_SURFACEBRUSH_SETTRANSFORM *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 7530;
        goto LABEL_2934;
      case 316:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 928431818LL, 0LL, 1LL);
          __debugbreak();
        }
        v313 = (CSpriteVisualContent *)CResourceTable::GetResource(v6, v5[1], 0x7Cu);
        if ( !v313 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 928431818LL, 0LL, v314);
          __debugbreak();
        }
        *((_DWORD *)v313 + 21) = v5[2];
        CSpriteVisualContent::ReleasePrimitiveCaches(v313);
        goto LABEL_46;
      case 317:
        if ( v7 < 0x10 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2554619396LL, 0LL, 1LL);
          __debugbreak();
        }
        v1105 = (CTableTransferEffect *)CResourceTable::GetResource(v6, v5[1], 0x7Du);
        if ( !v1105 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2554619396LL, 0LL, v1107);
          __debugbreak();
        }
        IsLocal = CTableTransferEffect::ProcessUpdateTable(
                    v1105,
                    v1106,
                    (const struct MILCMD_TABLETRANSFEREFFECT_UPDATETABLE *)v5,
                    v5 + 4,
                    v7 - 16);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 7579;
        goto LABEL_2934;
      case 318:
        if ( v7 != 20 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 866019398LL, 0LL, 1LL);
          __debugbreak();
        }
        v1108 = (CTileLegacyMilBrush *)CResourceTable::GetResource(v6, v5[1], 0x7Eu);
        if ( !v1108 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 866019398LL, 0LL, v1110);
          __debugbreak();
        }
        IsLocal = CTileLegacyMilBrush::ProcessSetSourceModifications(
                    v1108,
                    v1109,
                    (const struct MILCMD_TILELEGACYMILBRUSH_SETSOURCEMODIFICATIONS *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 7602;
        goto LABEL_2934;
      case 319:
        if ( v7 != 8 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3130822254LL, 0LL, 1LL);
          __debugbreak();
        }
        if ( !CResourceTable::GetResource(v6, v5[1], 0x86u) )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3130822254LL, 0LL, v1243);
          __debugbreak();
        }
        v13 = -2147418113;
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8000FFFF, 0x1DC9u);
        goto LABEL_1071;
      case 320:
        if ( v7 != 16 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3601308317LL, 0LL, 1LL);
          __debugbreak();
        }
        v1111 = (CVisual *)CResourceTable::GetResource(v6, v5[1], 0x86u);
        if ( !v1111 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3601308317LL, 0LL, v1113);
          __debugbreak();
        }
        IsLocal = CVisual::ProcessExposeToCoRenderer(v1111, v1112, (const struct MILCMD_VISUAL_EXPOSETOCORENDERER *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 7648;
        goto LABEL_2934;
      case 321:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1596463423LL, 0LL, 1LL);
          __debugbreak();
        }
        v1114 = (CVisual *)CResourceTable::GetResource(v6, v5[1], 0x86u);
        if ( !v1114 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1596463423LL, 0LL, v1116);
          __debugbreak();
        }
        IsLocal = CVisual::ProcessForceLowColor(v1114, v1115, (const struct MILCMD_VISUAL_FORCELOWCOLOR *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 7671;
        goto LABEL_2934;
      case 322:
        if ( v7 != 16 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1053478622LL, 0LL, 1LL);
          __debugbreak();
        }
        v213 = v5[2];
        if ( v213 )
        {
          if ( v213 >= *(_DWORD *)(v6 + 28)
            || (v214 = *(_QWORD *)(v6 + 40), !*(_DWORD *)(v213 * *(_DWORD *)(v6 + 24) + v214))
            || (v215 = v214 + v213 * *(_DWORD *)(v6 + 24), !*(_QWORD *)(v215 + 8))
            || ((v216 = *(_QWORD *)(v215 + 8),
                 v217 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v216 + 48LL),
                 v217 != CSpriteVisual::IsOfType)
              ? (v217 != CVisual::IsOfType
               ? (v217 != CWindowNode::IsOfType
                ? (v218 = ((__int64 (__fastcall *)(__int64, __int64, unsigned __int64, __int64))v217)(
                            v216,
                            134LL,
                            v10,
                            1LL))
                : (v218 = CWindowNode::IsOfType(v216, 134)))
               : (v218 = CVisual::IsOfType(v216, 134)))
              : (v218 = CSpriteVisual::IsOfType(v216, 134)),
                !v218 || !*(_QWORD *)(v215 + 8)) )
          {
            CComposition::FailFastOnMalformedPacket(v12, 1053478622LL, 0LL, v14);
            __debugbreak();
          }
          v5 = (unsigned int *)v1248;
        }
        v219 = v5[1];
        if ( !v219
          || v219 >= *(_DWORD *)(v6 + 28)
          || (v220 = *(_QWORD *)(v6 + 40), !*(_DWORD *)(v219 * *(_DWORD *)(v6 + 24) + v220))
          || (v221 = v220 + v219 * *(_DWORD *)(v6 + 24), !*(_QWORD *)(v221 + 8))
          || ((v222 = *(_QWORD *)(v221 + 8),
               v223 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v222 + 48LL),
               v223 != CVisual::IsOfType)
            ? (v224 = ((__int64 (__fastcall *)(__int64, __int64, unsigned __int64, __int64))v223)(v222, 134LL, v10, v14))
            : (v224 = CVisual::IsOfType(v222, 134)),
              !v224 || (v225 = *(CVisual **)(v221 + 8)) == 0LL) )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1053478622LL, 0LL, v14);
          __debugbreak();
        }
        v5 = (unsigned int *)v1248;
        IsLocal = CVisual::ProcessInsertChildAt(v225, (const struct CResourceTable *)v6, v1248);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 7707;
        goto LABEL_2934;
      case 323:
        if ( v7 != 16 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 647013131LL, 0LL, 1LL);
          __debugbreak();
        }
        v440 = v5[2];
        if ( v440 && !CResourceTable::GetResource(v6, v440, 0x86u) )
        {
          CComposition::FailFastOnMalformedPacket(v12, 647013131LL, 0LL, v441);
          __debugbreak();
        }
        v442 = (CComposition **)CResourceTable::GetResource(v6, v5[1], 0x86u);
        if ( !v442 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 647013131LL, 0LL, v443);
          __debugbreak();
        }
        IsLocal = CVisual::ProcessMoveChild(
                    v442,
                    (const struct CResourceTable *)v6,
                    (const struct MILCMD_VISUAL_MOVECHILD *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 7743;
        goto LABEL_2934;
      case 324:
        if ( v7 != 8 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1318103640LL, 0LL, 1LL);
          __debugbreak();
        }
        v362 = (CVisual *)CResourceTable::GetResource(v6, v5[1], 0x86u);
        if ( !v362 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1318103640LL, 0LL, v363);
          __debugbreak();
        }
        CVisual::RemoveAllChildren(v362);
        goto LABEL_46;
      case 325:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2970768438LL, 0LL, 1LL);
          __debugbreak();
        }
        v251 = v5[2];
        if ( v251 && !CResourceTable::GetResource(v6, v251, 0x86u) )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2970768438LL, 0LL, v252);
          __debugbreak();
        }
        v253 = (CComposition **)CResourceTable::GetResource(v6, v5[1], 0x86u);
        if ( !v253 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2970768438LL, 0LL, v254);
          __debugbreak();
        }
        IsLocal = CVisual::ProcessRemoveChild(
                    v253,
                    (const struct CResourceTable *)v6,
                    (const struct MILCMD_VISUAL_REMOVECHILD *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 7802;
        goto LABEL_2934;
      case 326:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3862953000LL, 0LL, 1LL);
          __debugbreak();
        }
        v1117 = (CVisual *)CResourceTable::GetResource(v6, v5[1], 0x86u);
        if ( !v1117 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3862953000LL, 0LL, v1119);
          __debugbreak();
        }
        IsLocal = CVisual::ProcessResampleMode(v1117, v1118, (const struct MILCMD_VISUAL_RESAMPLEMODE *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 7825;
        goto LABEL_2934;
      case 327:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3095495886LL, 0LL, 1LL);
          __debugbreak();
        }
        v283 = v5[2];
        if ( v283 && !CResourceTable::GetResource(v6, v283, 0x37u) )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3095495886LL, 0LL, v284);
          __debugbreak();
        }
        v285 = (CVisual *)CResourceTable::GetResource(v6, v5[1], 0x86u);
        if ( !v285 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3095495886LL, 0LL, v286);
          __debugbreak();
        }
        IsLocal = CVisual::ProcessSetClip(v285, (struct CResourceTable *)v6, (const struct MILCMD_VISUAL_SETCLIP *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 7861;
        goto LABEL_2934;
      case 328:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3420449394LL, 0LL, 1LL);
          __debugbreak();
        }
        v1120 = v5[2];
        if ( v1120 && !CResourceTable::GetResource(v6, v1120, 0x14u) )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3420449394LL, 0LL, v1121);
          __debugbreak();
        }
        v1122 = (CVisual *)CResourceTable::GetResource(v6, v5[1], 0x86u);
        if ( !v1122 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3420449394LL, 0LL, v1123);
          __debugbreak();
        }
        IsLocal = CVisual::ProcessSetColorTransform(
                    v1122,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_VISUAL_SETCOLORTRANSFORM *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 7897;
        goto LABEL_2934;
      case 329:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 4177284919LL, 0LL, 1LL);
          __debugbreak();
        }
        v288 = (CVisual *)CResourceTable::GetResource(v6, v5[1], 0x86u);
        if ( !v288 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 4177284919LL, 0LL, v289);
          __debugbreak();
        }
        IsLocal = CVisual::ProcessSetContent(
                    v288,
                    (const struct CResourceTable *)v6,
                    (const struct MILCMD_VISUAL_SETCONTENT *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 7920;
        goto LABEL_2934;
      case 330:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 967446711LL, 0LL, 1LL);
          __debugbreak();
        }
        v356 = v5[2];
        if ( v356 && !CResourceTable::GetResource(v6, v356, 0x2Du) )
        {
          CComposition::FailFastOnMalformedPacket(v12, 967446711LL, 0LL, v357);
          __debugbreak();
        }
        v358 = (CVisual *)CResourceTable::GetResource(v6, v5[1], 0x86u);
        if ( !v358 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 967446711LL, 0LL, v359);
          __debugbreak();
        }
        IsLocal = CVisual::ProcessSetEffect(
                    v358,
                    (const struct CResourceTable *)v6,
                    (const struct MILCMD_VISUAL_SETEFFECT *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 7956;
        goto LABEL_2934;
      case 331:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1163345965LL, 0LL, 1LL);
          __debugbreak();
        }
        v504 = (CVisual *)CResourceTable::GetResource(v6, v5[1], 0x86u);
        if ( !v504 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1163345965LL, 0LL, v506);
          __debugbreak();
        }
        IsLocal = CVisual::ProcessSetExcludeSubtree(v504, v505, (const struct MILCMD_VISUAL_SETEXCLUDESUBTREE *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 7979;
        goto LABEL_2934;
      case 332:
        if ( v7 != 28 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 965971293LL, 0LL, 1LL);
          __debugbreak();
        }
        v1124 = (CVisual *)CResourceTable::GetResource(v6, v5[1], 0x86u);
        if ( !v1124 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 965971293LL, 0LL, v1126);
          __debugbreak();
        }
        IsLocal = CVisual::ProcessSetHeatMapMode(v1124, v1125, (const struct MILCMD_VISUAL_SETHEATMAPMODE *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 8002;
        goto LABEL_2934;
      case 333:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3529010386LL, 0LL, 1LL);
          __debugbreak();
        }
        v477 = v5[2];
        if ( v477 )
        {
          v478 = CResourceTable::GetResource(v6, v477, 0x4Cu);
          if ( !v478 || v478 == 8 )
          {
            CComposition::FailFastOnMalformedPacket(v12, 3529010386LL, 0LL, v479);
            __debugbreak();
          }
        }
        v480 = (CVisual *)CResourceTable::GetResource(v6, v5[1], 0x86u);
        if ( !v480 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3529010386LL, 0LL, v481);
          __debugbreak();
        }
        IsLocal = CVisual::ProcessSetInteraction(
                    v480,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_VISUAL_SETINTERACTION *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 8038;
        goto LABEL_2934;
      case 334:
        if ( v7 != 8 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2408950086LL, 0LL, 1LL);
          __debugbreak();
        }
        v533 = (CVisual *)CResourceTable::GetResource(v6, v5[1], 0x86u);
        if ( !v533 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2408950086LL, 0LL, v536);
          __debugbreak();
        }
        IsLocal = CVisual::ProcessSetModesToDefault(v533, v534, v535);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 8061;
        goto LABEL_2934;
      case 335:
        if ( v7 != 32 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3602926485LL, 0LL, 1LL);
          __debugbreak();
        }
        v55 = v5[1];
        if ( !v55
          || v55 >= *(_DWORD *)(v6 + 28)
          || (v56 = *(_QWORD *)(v6 + 40), !*(_DWORD *)(v55 * *(_DWORD *)(v6 + 24) + v56))
          || (v57 = v56 + v55 * *(_DWORD *)(v6 + 24), !*(_QWORD *)(v57 + 8))
          || ((v58 = *(_QWORD *)(v57 + 8),
               v59 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v58 + 48LL),
               v59 != CWindowNode::IsOfType)
            ? (v59 != CSpriteVisual::IsOfType
             ? (v59 != CVisual::IsOfType
              ? (v60 = ((__int64 (__fastcall *)(__int64, __int64, unsigned __int64, __int64))v59)(v58, 134LL, v10, 1LL))
              : (v60 = CVisual::IsOfType(v58, 134)))
             : (v60 = CSpriteVisual::IsOfType(v58, 134)))
            : (v60 = CWindowNode::IsOfType(v58, 134)),
              !v60 || (v61 = *(float **)(v57 + 8)) == 0LL) )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3602926485LL, 0LL, v14);
          __debugbreak();
        }
        v62 = *((double *)v1248 + 1);
        v63 = *((double *)v1248 + 2);
        v64 = *((double *)v1248 + 3);
        if ( v61[26] != v62 || v61[27] != v63 || v61[28] != v64 )
        {
          v61[26] = v62;
          v61[27] = v63;
          v61[28] = v64;
          CVisual::PropagateFlags((__int64)v61, 5u, 1);
          CVisual::OnOuterTransformChanged((CVisual *)v61);
          *(float *)v1262 = v62;
          *(float *)&v1262[1] = v63;
          *(float *)&v1262[2] = v64;
          CPropertyChangeResource::NotifyVector3PropertyChanged(
            (CPropertyChangeResource *)v61,
            0x19u,
            (const struct D2DVector3 *)v1262);
          CResource::InvalidateAnimationSources((CResource *)v61);
        }
        goto LABEL_45;
      case 336:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1170477816LL, 0LL, 1LL);
          __debugbreak();
        }
        if ( !HANDLE_TABLE::ValidEntry((HANDLE_TABLE *)(v6 + 16), v5[1])
          || (v231 = *(_QWORD *)(v6 + 40) + (unsigned int)(v229 * *(_DWORD *)(v6 + 24)), !*(_QWORD *)(v231 + 8))
          || ((v232 = *(_QWORD *)(v231 + 8),
               v233 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v232 + 48LL),
               v233 != CSpriteVisual::IsOfType)
            ? (v233 != CVisual::IsOfType
             ? (v234 = v233(v232, 134))
             : (v234 = CVisual::IsOfType(v232, 134)))
            : (v234 = CSpriteVisual::IsOfType(v232, 134)),
              !v234 || (v235 = *(CVisual **)(v231 + 8)) == 0LL) )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1170477816LL, 0LL, v230);
          __debugbreak();
        }
        v5 = (unsigned int *)v1248;
        CVisual::SetOpacity(v235, *((float *)v1248 + 2));
        goto LABEL_46;
      case 337:
        if ( v7 != 24 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3591144729LL, 0LL, 1LL);
          __debugbreak();
        }
        v346 = (CVisual *)CResourceTable::GetResource(v6, v5[1], 0x86u);
        if ( !v346 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3591144729LL, 0LL, v348);
          __debugbreak();
        }
        IsLocal = CVisual::ProcessSetOptions(v346, v347, (const struct MILCMD_VISUAL_SETOPTIONS *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 8130;
        goto LABEL_2934;
      case 338:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3502695891LL, 0LL, 1LL);
          __debugbreak();
        }
        v1127 = CResourceTable::GetResource(v6, v5[1], 0x86u);
        if ( !v1127 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3502695891LL, 0LL, v1128);
          __debugbreak();
        }
        v1129 = v5[2] != 0;
        *(_BYTE *)(v1127 + 93) &= ~0x80u;
        *(_BYTE *)(v1127 + 93) |= v1129 << 7;
        goto LABEL_46;
      case 339:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3565150337LL, 0LL, 1LL);
          __debugbreak();
        }
        v1130 = (CVisual *)CResourceTable::GetResource(v6, v5[1], 0x86u);
        if ( !v1130 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3565150337LL, 0LL, v1132);
          __debugbreak();
        }
        IsLocal = CVisual::ProcessSetRedrawRegionMode(
                    v1130,
                    v1131,
                    (const struct MILCMD_VISUAL_SETREDRAWREGIONMODE *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 8176;
        goto LABEL_2934;
      case 340:
        if ( v7 != 32 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3926572864LL, 0LL, 1LL);
          __debugbreak();
        }
        v537 = (CVisual *)CResourceTable::GetResource(v6, v5[1], 0x86u);
        if ( !v537 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3926572864LL, 0LL, v538);
          __debugbreak();
        }
        v4 = _mm_cvtpd_ps((__m128d)*((unsigned __int64 *)v5 + 3));
        CVisual::SetRelativeOffset(v537, *((double *)v5 + 1), *((double *)v5 + 2), v4.m128_f32[0]);
        goto LABEL_46;
      case 341:
        if ( v7 != 24 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 4265940656LL, 0LL, 1LL);
          __debugbreak();
        }
        v510 = (CVisual *)CResourceTable::GetResource(v6, v5[1], 0x86u);
        if ( !v510 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 4265940656LL, 0LL, v511);
          __debugbreak();
        }
        CVisual::SetRelativeSize(v510, *((double *)v5 + 1), *((double *)v5 + 2));
        goto LABEL_46;
      case 342:
        if ( v7 != 48 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 279316662LL, 0LL, 1LL);
          __debugbreak();
        }
        v324 = (CVisual *)CResourceTable::GetResource(v6, v5[1], 0x86u);
        if ( !v324 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 279316662LL, 0LL, v326);
          __debugbreak();
        }
        IsLocal = CVisual::ProcessSetRenderOptions(v324, v325, (const struct MILCMD_VISUAL_SETRENDEROPTIONS *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 8245;
        goto LABEL_2934;
      case 343:
        if ( v7 != 24 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3798054083LL, 0LL, 1LL);
          __debugbreak();
        }
        v91 = v5[1];
        if ( !v91
          || v91 >= *(_DWORD *)(v6 + 28)
          || (v92 = *(_QWORD *)(v6 + 40), !*(_DWORD *)(v91 * *(_DWORD *)(v6 + 24) + v92))
          || (v93 = v92 + v91 * *(_DWORD *)(v6 + 24), !*(_QWORD *)(v93 + 8))
          || ((v94 = *(_QWORD *)(v93 + 8),
               v95 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v94 + 48LL),
               v95 == CSpriteVisual::IsOfType)
            ? (v96 = CSpriteVisual::IsOfType(v94, 134))
            : v95 != CWindowNode::IsOfType
            ? (v95 != CVisual::IsOfType
             ? (v96 = ((__int64 (__fastcall *)(__int64, __int64, unsigned __int64, __int64))v95)(v94, 134LL, v10, 1LL))
             : (v96 = CVisual::IsOfType(v94, 134)))
            : (v96 = CWindowNode::IsOfType(v94, 134)),
              !v96 || (v226 = *(float **)(v93 + 8)) == 0LL) )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3798054083LL, 0LL, v14);
          __debugbreak();
        }
        v227 = *((double *)v1248 + 1);
        v228 = *((double *)v1248 + 2);
        if ( v226[31] != v227 || v226[32] != v228 )
        {
          v226[31] = v227;
          v226[32] = v228;
          CVisual::PropagateFlags((__int64)v226, 5u, 0);
          CVisual::OnOuterTransformChanged((CVisual *)v226);
          *(float *)v1258 = v227;
          *(float *)&v1258[1] = v228;
          CPropertyChangeResource::NotifyVector2PropertyChanged(
            (CPropertyChangeResource *)v226,
            0x1Au,
            (const struct D2DVector2 *)v1258);
          CResource::InvalidateAnimationSources((CResource *)v226);
        }
        goto LABEL_45;
      case 344:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1489652909LL, 0LL, 1LL);
          __debugbreak();
        }
        v349 = v5[2];
        if ( v349 && !CResourceTable::GetResource(v6, v349, 0x80u) )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1489652909LL, 0LL, v350);
          __debugbreak();
        }
        v351 = (struct CResource **)CResourceTable::GetResource(v6, v5[1], 0x86u);
        if ( !v351 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1489652909LL, 0LL, v352);
          __debugbreak();
        }
        IsLocal = CVisual::ProcessSetTransform(
                    v351,
                    (const struct CResourceTable *)v6,
                    (const struct MILCMD_VISUAL_SETTRANSFORM *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 8304;
        goto LABEL_2934;
      case 345:
        if ( v7 != 16 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2046600043LL, 0LL, 1LL);
          __debugbreak();
        }
        v444 = v5[2];
        if ( v444 && !CResourceTable::GetResource(v6, v444, 0x86u) )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2046600043LL, 0LL, v445);
          __debugbreak();
        }
        v446 = (CVisual *)CResourceTable::GetResource(v6, v5[1], 0x86u);
        if ( !v446 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2046600043LL, 0LL, v447);
          __debugbreak();
        }
        IsLocal = CVisual::ProcessSetTransformParent(
                    v446,
                    (const struct CResourceTable *)v6,
                    (const struct MILCMD_VISUAL_SETTRANSFORMPARENT *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 8340;
        goto LABEL_2934;
      case 346:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 750174801LL, 0LL, 1LL);
          __debugbreak();
        }
        v558 = (struct CComposition **)CResourceTable::GetResource(v6, v5[1], 0x86u);
        if ( !v558 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 750174801LL, 0LL, v559);
          __debugbreak();
        }
        IsLocal = CVisual::ProcessSetWindowBackgroundTreatment(
                    v558,
                    (const struct CResourceTable *)v6,
                    (const struct MILCMD_VISUAL_SETWINDOWBACKGROUNDTREATMENT *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 8363;
        goto LABEL_2934;
      case 347:
        if ( v7 != 20 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 4223364451LL, 0LL, 1LL);
          __debugbreak();
        }
        v512 = (CVisual *)CResourceTable::GetResource(v6, v5[1], 0x86u);
        if ( !v512 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 4223364451LL, 0LL, v514);
          __debugbreak();
        }
        IsLocal = CVisual::ProcessTopLevelNode(v512, v513, (const struct MILCMD_VISUAL_TOPLEVELNODE *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 8386;
        goto LABEL_2934;
      case 348:
        if ( v7 < 0x10 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2449877997LL, 0LL, 1LL);
          __debugbreak();
        }
        v1133 = (CVisualGroup *)CResourceTable::GetResource(v6, v5[1], 0x88u);
        if ( !v1133 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2449877997LL, 0LL, v1134);
          __debugbreak();
        }
        IsLocal = CVisualGroup::ProcessUpdate(
                    v1133,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_VISUALGROUP *)v5,
                    v5 + 4,
                    v7 - 16);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 8412;
        goto LABEL_2934;
      case 349:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 927807323LL, 0LL, 1LL);
          __debugbreak();
        }
        v547 = v5[2];
        if ( v547 && !CResourceTable::GetResource(v6, v547, 0x8Bu) )
        {
          CComposition::FailFastOnMalformedPacket(v12, 927807323LL, 0LL, v548);
          __debugbreak();
        }
        v549 = (CWindowNode *)CResourceTable::GetResource(v6, v5[1], 0x8Bu);
        if ( !v549 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 927807323LL, 0LL, v550);
          __debugbreak();
        }
        IsLocal = CWindowNode::ProcessCopyCompositorOwnedResources(
                    v549,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_WINDOWNODE_COPYCOMPOSITOROWNEDRESOURCES *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 8448;
        goto LABEL_2934;
      case 350:
        if ( v7 != 36 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 4249632213LL, 0LL, 1LL);
          __debugbreak();
        }
        v450 = (CWindowNode *)CResourceTable::GetResource(v6, v5[1], 0x8Bu);
        if ( !v450 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 4249632213LL, 0LL, v452);
          __debugbreak();
        }
        IsLocal = CWindowNode::ProcessCreate(v450, v451, (const struct MILCMD_WINDOWNODE_CREATE *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 8471;
        goto LABEL_2934;
      case 351:
        if ( v7 != 8 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2703134254LL, 0LL, 1LL);
          __debugbreak();
        }
        v429 = (CWindowNode *)CResourceTable::GetResource(v6, v5[1], 0x8Bu);
        if ( !v429 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2703134254LL, 0LL, v430);
          __debugbreak();
        }
        IsLocal = CWindowNode::Detach(v429);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 8494;
        goto LABEL_2934;
      case 352:
        if ( v7 != 8 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3668042232LL, 0LL, 1LL);
          __debugbreak();
        }
        v1135 = (CWindowNode *)CResourceTable::GetResource(v6, v5[1], 0x8Bu);
        if ( !v1135 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3668042232LL, 0LL, v1136);
          __debugbreak();
        }
        CWindowNode::FlushVistaBltTokens(v1135);
        goto LABEL_46;
      case 353:
        if ( v7 != 60 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 486633809LL, 0LL, 1LL);
          __debugbreak();
        }
        v1137 = v5[2];
        if ( v1137 )
        {
          v1138 = CResourceTable::GetResource(v6, v1137, 0x32u);
          if ( !v1138 || v1138 == 16 )
          {
            CComposition::FailFastOnMalformedPacket(v12, 486633809LL, 0LL, v1139);
            __debugbreak();
          }
        }
        v1140 = (CWindowNode *)CResourceTable::GetResource(v6, v5[1], 0x8Bu);
        if ( !v1140 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 486633809LL, 0LL, v1141);
          __debugbreak();
        }
        IsLocal = CWindowNode::ProcessNotifyDxImmediateUpdate(
                    v1140,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_WINDOWNODE_NOTIFYDXIMMEDIATEUPDATE *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 8553;
        goto LABEL_2934;
      case 354:
        if ( v7 != 64 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1984882775LL, 0LL, 1LL);
          __debugbreak();
        }
        v1142 = v5[2];
        if ( v1142 )
        {
          v1143 = CResourceTable::GetResource(v6, v1142, 0x32u);
          if ( !v1143 || v1143 == 16 )
          {
            CComposition::FailFastOnMalformedPacket(v12, 1984882775LL, 0LL, v1144);
            __debugbreak();
          }
        }
        v1145 = (CWindowNode *)CResourceTable::GetResource(v6, v5[1], 0x8Bu);
        if ( !v1145 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1984882775LL, 0LL, v1146);
          __debugbreak();
        }
        IsLocal = CWindowNode::ProcessNotifyDxUpdate(
                    v1145,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_WINDOWNODE_NOTIFYDXUPDATE *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 8589;
        goto LABEL_2934;
      case 355:
        if ( v7 != 8 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 4043390794LL, 0LL, 1LL);
          __debugbreak();
        }
        v1147 = (CWindowNode *)CResourceTable::GetResource(v6, v5[1], 0x8Bu);
        if ( !v1147 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 4043390794LL, 0LL, v1150);
          __debugbreak();
        }
        IsLocal = CWindowNode::ProcessNotifyVisRgnUpdate(v1147, v1148, v1149);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 8612;
        goto LABEL_2934;
      case 356:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 979926618LL, 0LL, 1LL);
          __debugbreak();
        }
        v1151 = (CWindowNode *)CResourceTable::GetResource(v6, v5[1], 0x8Bu);
        if ( !v1151 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 979926618LL, 0LL, v1153);
          __debugbreak();
        }
        IsLocal = CWindowNode::ProcessProtectContent(v1151, v1152, (const struct MILCMD_WINDOWNODE_PROTECTCONTENT *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 8635;
        goto LABEL_2934;
      case 357:
        if ( v7 != 24 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 585113618LL, 0LL, 1LL);
          __debugbreak();
        }
        v74 = v5[1];
        if ( !v74
          || v74 >= *(_DWORD *)(v6 + 28)
          || (v75 = *(_QWORD *)(v6 + 40), !*(_DWORD *)(v74 * *(_DWORD *)(v6 + 24) + v75))
          || (v76 = v75 + v74 * *(_DWORD *)(v6 + 24), !*(_QWORD *)(v76 + 8))
          || ((v77 = *(_QWORD *)(v76 + 8),
               v78 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v77 + 48LL),
               v78 != CWindowNode::IsOfType)
            ? (v79 = ((__int64 (__fastcall *)(__int64, __int64, unsigned __int64, __int64))v78)(v77, 139LL, v10, 1LL))
            : (v79 = CWindowNode::IsOfType(v77, 139)),
              !v79 || (v80 = *(_QWORD *)(v76 + 8)) == 0) )
        {
          CComposition::FailFastOnMalformedPacket(v12, 585113618LL, 0LL, v14);
          __debugbreak();
        }
        v5 = (unsigned int *)v1248;
        if ( *((int *)v1248 + 2) < 0 || *((int *)v1248 + 3) < 0 || *((int *)v1248 + 4) < 0 || *((int *)v1248 + 5) < 0 )
        {
          v81 = 0;
          v14 = 1LL;
        }
        else
        {
          v14 = 1LL;
          v81 = 1;
        }
        if ( !v81 )
        {
          v13 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x765u);
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x21D2u);
          goto LABEL_59;
        }
        if ( *(_DWORD *)(v80 + 884) != *((_DWORD *)v1248 + 2)
          || *(_DWORD *)(v80 + 888) != *((_DWORD *)v1248 + 3)
          || *(_DWORD *)(v80 + 892) != *((_DWORD *)v1248 + 4)
          || *(_DWORD *)(v80 + 896) != *((_DWORD *)v1248 + 5) )
        {
          *(_OWORD *)(v80 + 884) = *(_OWORD *)((char *)v1248 + 8);
          CVisual::PropagateFlags(v80, 4u, 0);
          goto LABEL_46;
        }
        goto LABEL_147;
      case 358:
        if ( v7 != 72 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 911435923LL, 0LL, 1LL);
          __debugbreak();
        }
        v236 = (CWindowNode *)CResourceTable::GetResource(v6, v5[1], 0x8Bu);
        if ( !v236 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 911435923LL, 0LL, v238);
          __debugbreak();
        }
        IsLocal = CWindowNode::ProcessSetBounds(v236, v237, (const struct MILCMD_WINDOWNODE_SETBOUNDS *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 8681;
        goto LABEL_2934;
      case 359:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1471465256LL, 0LL, 1LL);
          __debugbreak();
        }
        v1154 = CResourceTable::GetResource(v6, v5[1], 0x8Bu);
        if ( !v1154 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1471465256LL, 0LL, v1155);
          __debugbreak();
        }
        *(_BYTE *)(v1154 + 1010) = v5[2] != 0;
        goto LABEL_46;
      case 360:
        if ( v7 != 16 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1729958440LL, 0LL, 1LL);
          __debugbreak();
        }
        v1156 = (CWindowNode *)CResourceTable::GetResource(v6, v5[1], 0x8Bu);
        if ( !v1156 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1729958440LL, 0LL, v1158);
          __debugbreak();
        }
        IsLocal = CWindowNode::ProcessSetCompositionSurface(
                    v1156,
                    v1157,
                    (const struct MILCMD_WINDOWNODE_SETCOMPOSITIONSURFACE *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 8727;
        goto LABEL_2934;
      case 361:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2956279351LL, 0LL, 1LL);
          __debugbreak();
        }
        v1159 = (CWindowNode *)CResourceTable::GetResource(v6, v5[1], 0x8Bu);
        if ( !v1159 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2956279351LL, 0LL, v1161);
          __debugbreak();
        }
        IsLocal = CWindowNode::ProcessSetDxAlpha(v1159, v1160, (const struct MILCMD_WINDOWNODE_SETDXALPHA *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 8750;
        goto LABEL_2934;
      case 362:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3366558968LL, 0LL, 1LL);
          __debugbreak();
        }
        v119 = v5[2];
        if ( v119 && !CResourceTable::GetResource(v6, v119, 0x37u) )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3366558968LL, 0LL, v14);
          __debugbreak();
        }
        v120 = v5[1];
        if ( !v120
          || v120 >= *(_DWORD *)(v6 + 28)
          || (v121 = *(_QWORD *)(v6 + 40), !*(_DWORD *)(v120 * *(_DWORD *)(v6 + 24) + v121))
          || (v122 = v121 + v120 * *(_DWORD *)(v6 + 24), !*(_QWORD *)(v122 + 8))
          || ((v123 = *(_QWORD *)(v122 + 8),
               v124 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v123 + 48LL),
               v124 != CWindowNode::IsOfType)
            ? (v125 = ((__int64 (__fastcall *)(__int64, __int64, unsigned __int64, __int64))v124)(v123, 139LL, v10, v14))
            : (v125 = CWindowNode::IsOfType(v123, 139)),
              !v125 || (v126 = *(CWindowNode **)(v122 + 8)) == 0LL) )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3366558968LL, 0LL, v14);
          __debugbreak();
        }
        v5 = (unsigned int *)v1248;
        IsLocal = CWindowNode::ProcessSetDxClip(v126, (struct CResourceTable *)v6, v1248);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 8786;
        goto LABEL_2934;
      case 363:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2783445762LL, 0LL, 1LL);
          __debugbreak();
        }
        v127 = v5[2];
        if ( v127 )
        {
          v1162 = CResourceTable::GetResource(v6, v127, 0x32u);
          if ( !v1162 || v1162 == 16 )
          {
            CComposition::FailFastOnMalformedPacket(v12, 2783445762LL, 0LL, v14);
            __debugbreak();
          }
        }
        v128 = v5[1];
        if ( !v128
          || v128 >= *(_DWORD *)(v6 + 28)
          || (v129 = *(_QWORD *)(v6 + 40), !*(_DWORD *)(v128 * *(_DWORD *)(v6 + 24) + v129))
          || (v130 = v129 + v128 * *(_DWORD *)(v6 + 24), !*(_QWORD *)(v130 + 8))
          || ((v131 = *(_QWORD *)(v130 + 8),
               v132 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v131 + 48LL),
               v132 != CWindowNode::IsOfType)
            ? (v133 = ((__int64 (__fastcall *)(__int64, __int64, unsigned __int64, __int64))v132)(v131, 139LL, v10, v14))
            : (v133 = CWindowNode::IsOfType(v131, 139)),
              !v133 || (v134 = *(CWindowNode **)(v130 + 8)) == 0LL) )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2783445762LL, 0LL, v14);
          __debugbreak();
        }
        v5 = (unsigned int *)v1248;
        IsLocal = CWindowNode::ProcessSetDxImage(v134, (struct CResourceTable *)v6, v1248);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 8822;
        goto LABEL_2934;
      case 364:
        if ( v7 != 24 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2072285933LL, 0LL, 1LL);
          __debugbreak();
        }
        v431 = CResourceTable::GetResource(v6, v5[1], 0x8Bu);
        if ( !v431 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2072285933LL, 0LL, v432);
          __debugbreak();
        }
        *(_OWORD *)(v431 + 648) = *(_OWORD *)(v5 + 2);
        goto LABEL_46;
      case 365:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3410537721LL, 0LL, 1LL);
          __debugbreak();
        }
        v397 = (CWindowNode *)CResourceTable::GetResource(v6, v5[1], 0x8Bu);
        if ( !v397 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3410537721LL, 0LL, v399);
          __debugbreak();
        }
        IsLocal = CWindowNode::ProcessSetLayeredWindow(
                    v397,
                    v398,
                    (const struct MILCMD_WINDOWNODE_SETLAYEREDWINDOW *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 8868;
        goto LABEL_2934;
      case 366:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2150934435LL, 0LL, 1LL);
          __debugbreak();
        }
        v455 = (CWindowNode *)CResourceTable::GetResource(v6, v5[1], 0x8Bu);
        if ( !v455 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2150934435LL, 0LL, v457);
          __debugbreak();
        }
        IsLocal = CWindowNode::ProcessSetLayoutRTL(v455, v456, (const struct MILCMD_WINDOWNODE_SETLAYOUTRTL *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 8891;
        goto LABEL_2934;
      case 367:
        if ( v7 != 24 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1020198490LL, 0LL, 1LL);
          __debugbreak();
        }
        v485 = (CWindowNode *)CResourceTable::GetResource(v6, v5[1], 0x8Bu);
        if ( !v485 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1020198490LL, 0LL, v487);
          __debugbreak();
        }
        IsLocal = CWindowNode::ProcessSetMaximizedClipMargins(
                    v485,
                    v486,
                    (const struct MILCMD_WINDOWNODE_SETMAXIMIZEDCLIPMARGINS *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 8914;
        goto LABEL_2934;
      case 368:
        if ( v7 != 24 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1138671944LL, 0LL, 1LL);
          __debugbreak();
        }
        v83 = v5[1];
        if ( !v83
          || v83 >= *(_DWORD *)(v6 + 28)
          || (v84 = *(_QWORD *)(v6 + 40), !*(_DWORD *)(v83 * *(_DWORD *)(v6 + 24) + v84))
          || (v85 = v84 + v83 * *(_DWORD *)(v6 + 24), !*(_QWORD *)(v85 + 8))
          || ((v86 = *(_QWORD *)(v85 + 8),
               v87 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v86 + 48LL),
               v87 != CWindowNode::IsOfType)
            ? (v88 = ((__int64 (__fastcall *)(__int64, __int64, unsigned __int64, __int64))v87)(v86, 139LL, v10, 1LL))
            : (v88 = CWindowNode::IsOfType(v86, 139)),
              !v88 || (v90 = *(CWindowNode **)(v85 + 8)) == 0LL) )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1138671944LL, 0LL, v14);
          __debugbreak();
        }
        v5 = (unsigned int *)v1248;
        IsLocal = CWindowNode::ProcessSetSourceModifications(v90, v89, v1248);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 8937;
        goto LABEL_2934;
      case 369:
        if ( v7 != 16 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 571393245LL, 0LL, 1LL);
          __debugbreak();
        }
        v65 = v5[3];
        if ( v65 && !CResourceTable::GetResource(v6, v65, 0x6Du) )
        {
          CComposition::FailFastOnMalformedPacket(v12, 571393245LL, 0LL, v14);
          __debugbreak();
        }
        v66 = v5[1];
        if ( !v66
          || v66 >= *(_DWORD *)(v6 + 28)
          || (v67 = *(_QWORD *)(v6 + 40), !*(_DWORD *)(v66 * *(_DWORD *)(v6 + 24) + v67))
          || (v68 = v67 + v66 * *(_DWORD *)(v6 + 24), !*(_QWORD *)(v68 + 8))
          || ((v69 = *(_QWORD *)(v68 + 8),
               v70 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v69 + 48LL),
               v70 != CWindowNode::IsOfType)
            ? (v71 = ((__int64 (__fastcall *)(__int64, __int64, unsigned __int64, __int64))v70)(v69, 139LL, v10, v14))
            : (v71 = CWindowNode::IsOfType(v69, 139)),
              !v71 || (v72 = *(CWindowNode **)(v68 + 8)) == 0LL) )
        {
          CComposition::FailFastOnMalformedPacket(v12, 571393245LL, 0LL, v14);
          __debugbreak();
        }
        v5 = (unsigned int *)v1248;
        IsLocal = CWindowNode::ProcessSetSpriteClip(v72, (struct CResourceTable *)v6, v1248);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 8973;
        goto LABEL_2934;
      case 370:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3993399325LL, 0LL, 1LL);
          __debugbreak();
        }
        v453 = (CWindowNode *)CResourceTable::GetResource(v6, v5[1], 0x8Bu);
        if ( !v453 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3993399325LL, 0LL, v454);
          __debugbreak();
        }
        IsLocal = CWindowNode::ProcessSetSpriteImage(
                    v453,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_WINDOWNODE_SETSPRITEIMAGE *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 8996;
        goto LABEL_2934;
      case 371:
        if ( v7 != 16 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2218877073LL, 0LL, 1LL);
          __debugbreak();
        }
        v448 = CResourceTable::GetResource(v6, v5[1], 0x8Bu);
        if ( !v448 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2218877073LL, 0LL, v449);
          __debugbreak();
        }
        *(_QWORD *)(v448 + 600) = *((_QWORD *)v5 + 1);
        goto LABEL_46;
      case 372:
        if ( v7 != 20 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1349958009LL, 0LL, 1LL);
          __debugbreak();
        }
        v1163 = (CYCbCrSurface *)CResourceTable::GetResource(v6, v5[1], 0x8Cu);
        if ( !v1163 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1349958009LL, 0LL, v1164);
          __debugbreak();
        }
        IsLocal = CYCbCrSurface::ProcessUpdate(
                    v1163,
                    (const struct CResourceTable *)v6,
                    (const struct MILCMD_YCBCRSURFACE *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 9042;
        goto LABEL_2934;
      case 385:
        if ( v7 != 44 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 358368269LL, 0LL, 1LL);
          __debugbreak();
        }
        v1165 = (CAffineTransform2DEffect *)CResourceTable::GetResource(v6, v5[1], 1u);
        if ( !v1165 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 358368269LL, 0LL, v1167);
          __debugbreak();
        }
        IsLocal = CAffineTransform2DEffect::ProcessUpdate(
                    v1165,
                    v1166,
                    (const struct MILCMD_AFFINETRANSFORM2DEFFECT *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 9066;
        goto LABEL_2934;
      case 386:
        if ( v7 != 28 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 4024158096LL, 0LL, 1LL);
          __debugbreak();
        }
        v1168 = (CArithmeticCompositeEffect *)CResourceTable::GetResource(v6, v5[1], 5u);
        if ( !v1168 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 4024158096LL, 0LL, v1170);
          __debugbreak();
        }
        IsLocal = CArithmeticCompositeEffect::ProcessUpdate(
                    v1168,
                    v1169,
                    (const struct MILCMD_ARITHMETICCOMPOSITEEFFECT *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 9090;
        goto LABEL_2934;
      case 387:
        if ( v7 < 0x10 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3831383144LL, 0LL, 1LL);
          __debugbreak();
        }
        v400 = (CAtlasedRectsGroup *)CResourceTable::GetResource(v6, v5[1], 6u);
        if ( !v400 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3831383144LL, 0LL, v401);
          __debugbreak();
        }
        IsLocal = CAtlasedRectsGroup::ProcessUpdate(v400, (struct CResourceTable *)v6, (__m128i *)v5, v5 + 4, v7 - 16);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 9117;
        goto LABEL_2934;
      case 388:
        if ( v7 < 0x1C )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2890168271LL, 0LL, 1LL);
          __debugbreak();
        }
        v270 = (CAtlasedRectsMesh *)CResourceTable::GetResource(v6, v5[1], 7u);
        if ( !v270 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2890168271LL, 0LL, v272);
          __debugbreak();
        }
        IsLocal = CAtlasedRectsMesh::ProcessUpdate(
                    v270,
                    v271,
                    (const struct MILCMD_ATLASEDRECTSMESH *)v5,
                    v5 + 7,
                    v7 - 28);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 9144;
        goto LABEL_2934;
      case 389:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3542616155LL, 0LL, 1LL);
          __debugbreak();
        }
        v1171 = (CBlendEffect *)CResourceTable::GetResource(v6, v5[1], 0xCu);
        if ( !v1171 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3542616155LL, 0LL, v1173);
          __debugbreak();
        }
        IsLocal = CBlendEffect::ProcessUpdate(v1171, v1172, (const struct MILCMD_BLENDEFFECT *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 9168;
        goto LABEL_2934;
      case 390:
        if ( v7 != 24 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1600964589LL, 0LL, 1LL);
          __debugbreak();
        }
        v1174 = (CBrightnessEffect *)CResourceTable::GetResource(v6, v5[1], 0xDu);
        if ( !v1174 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1600964589LL, 0LL, v1176);
          __debugbreak();
        }
        IsLocal = CBrightnessEffect::ProcessUpdate(v1174, v1175, (const struct MILCMD_BRIGHTNESSEFFECT *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 9192;
        goto LABEL_2934;
      case 391:
        if ( v7 != 96 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3470831754LL, 0LL, 1LL);
          __debugbreak();
        }
        v1177 = (CColorMatrixEffect *)CResourceTable::GetResource(v6, v5[1], 0x12u);
        if ( !v1177 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3470831754LL, 0LL, v1179);
          __debugbreak();
        }
        IsLocal = CColorMatrixEffect::ProcessUpdate(v1177, v1178, (const struct MILCMD_COLORMATRIXEFFECT *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 9216;
        goto LABEL_2934;
      case 392:
        if ( v7 != 20 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2212192917LL, 0LL, 1LL);
          __debugbreak();
        }
        v1180 = (CCombinedGeometry *)CResourceTable::GetResource(v6, v5[1], 0x15u);
        if ( !v1180 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2212192917LL, 0LL, v1181);
          __debugbreak();
        }
        IsLocal = CCombinedGeometry::ProcessUpdate(
                    v1180,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_COMBINEDGEOMETRY *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 9240;
        goto LABEL_2934;
      case 393:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 784054879LL, 0LL, 1LL);
          __debugbreak();
        }
        v1182 = (CBlendEffect *)CResourceTable::GetResource(v6, v5[1], 0x19u);
        if ( !v1182 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 784054879LL, 0LL, v1184);
          __debugbreak();
        }
        IsLocal = CBlendEffect::ProcessUpdate(v1182, v1183, (const struct MILCMD_BLENDEFFECT *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 9264;
        goto LABEL_2934;
      case 394:
        if ( v7 < 0xC )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2947200835LL, 0LL, 1LL);
          __debugbreak();
        }
        v609 = (CDcompRenderTargetGroup *)CResourceTable::GetResource(v6, v5[1], 0x28u);
        if ( !v609 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2947200835LL, 0LL, v610);
          __debugbreak();
        }
        IsLocal = CDcompRenderTargetGroup::ProcessUpdate(
                    v609,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_DCOMPRENDERTARGETGROUP *)v5,
                    v5 + 3,
                    v7 - 12);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 9291;
        goto LABEL_2934;
      case 395:
        if ( v7 != 24 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 980808153LL, 0LL, 1LL);
          __debugbreak();
        }
        v1185 = (CFloodEffect *)CResourceTable::GetResource(v6, v5[1], 0x33u);
        if ( !v1185 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 980808153LL, 0LL, v1187);
          __debugbreak();
        }
        IsLocal = CFloodEffect::ProcessUpdate(v1185, v1186, (const struct MILCMD_FLOODEFFECT *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 9315;
        goto LABEL_2934;
      case 396:
        if ( v7 != 20 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 473549871LL, 0LL, 1LL);
          __debugbreak();
        }
        v1188 = (CGaussianBlurEffect *)CResourceTable::GetResource(v6, v5[1], 0x34u);
        if ( !v1188 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 473549871LL, 0LL, v1190);
          __debugbreak();
        }
        IsLocal = CGaussianBlurEffect::ProcessUpdate(v1188, v1189, (const struct MILCMD_GAUSSIANBLUREFFECT *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 9339;
        goto LABEL_2934;
      case 397:
        if ( v7 < 0xC )
        {
          CComposition::FailFastOnMalformedPacket(v12, 695132294LL, 0LL, 1LL);
          __debugbreak();
        }
        v1191 = (CGeometry2DGroup *)CResourceTable::GetResource(v6, v5[1], 0x39u);
        if ( !v1191 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 695132294LL, 0LL, v1192);
          __debugbreak();
        }
        IsLocal = CGeometry2DGroup::ProcessUpdate(
                    v1191,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_GEOMETRY2DGROUP *)v5,
                    v5 + 3,
                    v7 - 12);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 9366;
        goto LABEL_2934;
      case 398:
        if ( v7 < 0x10 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3787723980LL, 0LL, 1LL);
          __debugbreak();
        }
        v1193 = (CGeometryGroup *)CResourceTable::GetResource(v6, v5[1], 0x3Au);
        if ( !v1193 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3787723980LL, 0LL, v1194);
          __debugbreak();
        }
        IsLocal = CGeometryGroup::ProcessUpdate(
                    v1193,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_GEOMETRYGROUP *)v5,
                    v5 + 4,
                    v7 - 16);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 9393;
        goto LABEL_2934;
      case 399:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2516563276LL, 0LL, 1LL);
          __debugbreak();
        }
        v1195 = (CSaturationEffect *)CResourceTable::GetResource(v6, v5[1], 0x44u);
        if ( !v1195 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2516563276LL, 0LL, v1197);
          __debugbreak();
        }
        IsLocal = CSaturationEffect::ProcessUpdate(v1195, v1196, (const struct MILCMD_SATURATIONEFFECT *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 9417;
        goto LABEL_2934;
      case 400:
        if ( v7 != 116 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3312284605LL, 0LL, 1LL);
          __debugbreak();
        }
        v528 = (CImageLegacyMilBrush *)CResourceTable::GetResource(v6, v5[1], 0x47u);
        if ( !v528 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3312284605LL, 0LL, v529);
          __debugbreak();
        }
        IsLocal = CImageLegacyMilBrush::ProcessUpdate(v528, (struct CResourceTable *)v6, (__m128i *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 9441;
        goto LABEL_2934;
      case 401:
        if ( v7 < 0x4C )
        {
          CComposition::FailFastOnMalformedPacket(v12, 95588842LL, 0LL, 1LL);
          __debugbreak();
        }
        v1198 = (CLinearGradientLegacyMilBrush *)CResourceTable::GetResource(v6, v5[1], 0x52u);
        if ( !v1198 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 95588842LL, 0LL, v1199);
          __debugbreak();
        }
        IsLocal = CLinearGradientLegacyMilBrush::ProcessUpdate(
                    v1198,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_LINEARGRADIENTLEGACYMILBRUSH *)v5,
                    v5 + 19,
                    v7 - 76);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 9468;
        goto LABEL_2934;
      case 402:
        if ( v7 != 60 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 922785918LL, 0LL, 1LL);
          __debugbreak();
        }
        v1200 = (CLinearTransferEffect *)CResourceTable::GetResource(v6, v5[1], 0x53u);
        if ( !v1200 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 922785918LL, 0LL, v1202);
          __debugbreak();
        }
        IsLocal = CLinearTransferEffect::ProcessUpdate(v1200, v1201, (const struct MILCMD_LINEARTRANSFEREFFECT *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 9492;
        goto LABEL_2934;
      case 403:
        if ( v7 != 8 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1561662580LL, 0LL, 1LL);
          __debugbreak();
        }
        v1203 = (CGradientBrush *)CResourceTable::GetResource(v6, v5[1], 0x56u);
        if ( !v1203 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1561662580LL, 0LL, v1204);
          __debugbreak();
        }
        CResource::NotifyOnChanged(v1203, 0, 0LL);
        goto LABEL_46;
      case 404:
        if ( v7 != 56 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3586071971LL, 0LL, 1LL);
          __debugbreak();
        }
        v353 = (CMatrixTransform *)CResourceTable::GetResource(v6, v5[1], 0x59u);
        if ( !v353 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3586071971LL, 0LL, v355);
          __debugbreak();
        }
        IsLocal = CMatrixTransform::ProcessUpdate(v353, v354, (const struct MILCMD_MATRIXTRANSFORM *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 9540;
        goto LABEL_2934;
      case 405:
        if ( v7 != 72 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 573547530LL, 0LL, 1LL);
          __debugbreak();
        }
        v1205 = (CMatrixTransform3D *)CResourceTable::GetResource(v6, v5[1], 0x5Au);
        if ( !v1205 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 573547530LL, 0LL, v1207);
          __debugbreak();
        }
        IsLocal = CMatrixTransform3D::ProcessUpdate(v1205, v1206, (const struct MILCMD_MATRIXTRANSFORM3D *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 9564;
        goto LABEL_2934;
      case 406:
        if ( v7 < 0x18 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3016549867LL, 0LL, 1LL);
          __debugbreak();
        }
        v1208 = (CMeshGeometry2D *)CResourceTable::GetResource(v6, v5[1], 0x5Bu);
        if ( !v1208 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3016549867LL, 0LL, v1210);
          __debugbreak();
        }
        IsLocal = CMeshGeometry2D::ProcessUpdate(
                    v1208,
                    v1209,
                    (const struct MILCMD_MESHGEOMETRY2D *)v5,
                    v5 + 6,
                    v7 - 24);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 9591;
        goto LABEL_2934;
      case 407:
        if ( v7 < 0xC )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3036411190LL, 0LL, 1LL);
          __debugbreak();
        }
        v261 = (CRgnGeometry *)CResourceTable::GetResource(v6, v5[1], 0x6Du);
        if ( !v261 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3036411190LL, 0LL, v263);
          __debugbreak();
        }
        IsLocal = CRgnGeometry::ProcessUpdate(v261, v262, (const struct MILCMD_RGNGEOMETRY *)v5, v5 + 3, v7 - 12);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 9618;
        goto LABEL_2934;
      case 408:
        if ( v7 != 32 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3262818409LL, 0LL, 1LL);
          __debugbreak();
        }
        v1211 = (CTranslateTransform3D *)CResourceTable::GetResource(v6, v5[1], 0x6Eu);
        if ( !v1211 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3262818409LL, 0LL, v1213);
          __debugbreak();
        }
        IsLocal = CTranslateTransform3D::ProcessUpdate(v1211, v1212, (const struct MILCMD_TRANSLATETRANSFORM3D *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 9642;
        goto LABEL_2934;
      case 409:
        if ( v7 != 64 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2821835528LL, 0LL, 1LL);
          __debugbreak();
        }
        v1214 = (CRotateTransform3D *)CResourceTable::GetResource(v6, v5[1], 0x6Fu);
        if ( !v1214 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2821835528LL, 0LL, v1216);
          __debugbreak();
        }
        IsLocal = CRotateTransform3D::ProcessUpdate(v1214, v1215, (const struct MILCMD_ROTATETRANSFORM3D *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 9666;
        goto LABEL_2934;
      case 410:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2231669817LL, 0LL, 1LL);
          __debugbreak();
        }
        v1217 = (CSaturationEffect *)CResourceTable::GetResource(v6, v5[1], 0x70u);
        if ( !v1217 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2231669817LL, 0LL, v1219);
          __debugbreak();
        }
        IsLocal = CSaturationEffect::ProcessUpdate(v1217, v1218, (const struct MILCMD_SATURATIONEFFECT *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 9690;
        goto LABEL_2934;
      case 411:
        if ( v7 != 40 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 301661817LL, 0LL, 1LL);
          __debugbreak();
        }
        v433 = (CSkewTransform *)CResourceTable::GetResource(v6, v5[1], 0x72u);
        if ( !v433 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 301661817LL, 0LL, v435);
          __debugbreak();
        }
        IsLocal = CSkewTransform::ProcessUpdate(v433, v434, (const struct MILCMD_SKEWTRANSFORM *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 9714;
        goto LABEL_2934;
      case 412:
        if ( v7 != 56 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1627127320LL, 0LL, 1LL);
          __debugbreak();
        }
        v1220 = (CScaleTransform3D *)CResourceTable::GetResource(v6, v5[1], 0x73u);
        if ( !v1220 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 1627127320LL, 0LL, v1222);
          __debugbreak();
        }
        IsLocal = CScaleTransform3D::ProcessUpdate(v1220, v1221, (const struct MILCMD_SCALETRANSFORM3D *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 9738;
        goto LABEL_2934;
      case 413:
        if ( v7 != 12 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3673038099LL, 0LL, 1LL);
          __debugbreak();
        }
        v1223 = (CScreenCursor *)CResourceTable::GetResource(v6, v5[1], 0x74u);
        if ( !v1223 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3673038099LL, 0LL, v1225);
          __debugbreak();
        }
        IsLocal = CScreenCursor::ProcessUpdate(v1223, v1224, (const struct MILCMD_SCREENCURSOR *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 9762;
        goto LABEL_2934;
      case 414:
        if ( v7 != 32 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 850692694LL, 0LL, 1LL);
          __debugbreak();
        }
        v1226 = (CShadowEffect *)CResourceTable::GetResource(v6, v5[1], 0x75u);
        if ( !v1226 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 850692694LL, 0LL, v1228);
          __debugbreak();
        }
        IsLocal = CShadowEffect::ProcessUpdate(v1226, v1227, (const struct MILCMD_SHADOWEFFECT *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 9786;
        goto LABEL_2934;
      case 415:
        if ( v7 != 20 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2984674556LL, 0LL, 1LL);
          __debugbreak();
        }
        v467 = (CSharedSection *)CResourceTable::GetResource(v6, v5[1], 0x76u);
        if ( !v467 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2984674556LL, 0LL, v469);
          __debugbreak();
        }
        IsLocal = CSharedSection::ProcessUpdate(v467, v468, (__m128i *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 9810;
        goto LABEL_2934;
      case 416:
        if ( v7 != 40 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3191148493LL, 0LL, 1LL);
          __debugbreak();
        }
        v1229 = (CSkewTransform *)CResourceTable::GetResource(v6, v5[1], 0x78u);
        if ( !v1229 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3191148493LL, 0LL, v1231);
          __debugbreak();
        }
        IsLocal = CSkewTransform::ProcessUpdate(v1229, v1230, (const struct MILCMD_SKEWTRANSFORM *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 9834;
        goto LABEL_2934;
      case 417:
        if ( v7 != 44 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2070616409LL, 0LL, 1LL);
          __debugbreak();
        }
        v475 = (CSolidColorLegacyMilBrush *)CResourceTable::GetResource(v6, v5[1], 0x7Au);
        if ( !v475 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2070616409LL, 0LL, v476);
          __debugbreak();
        }
        IsLocal = CSolidColorLegacyMilBrush::ProcessUpdate(
                    v475,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_SOLIDCOLORLEGACYMILBRUSH *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 9858;
        goto LABEL_2934;
      case 418:
        if ( v7 != 28 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2248625990LL, 0LL, 1LL);
          __debugbreak();
        }
        v1232 = (CTableTransferEffect *)CResourceTable::GetResource(v6, v5[1], 0x7Du);
        if ( !v1232 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2248625990LL, 0LL, v1234);
          __debugbreak();
        }
        IsLocal = CTableTransferEffect::ProcessUpdate(v1232, v1233, (const struct MILCMD_TABLETRANSFEREFFECT *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 9882;
        goto LABEL_2934;
      case 419:
        if ( v7 < 0x10 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 565920662LL, 0LL, 1LL);
          __debugbreak();
        }
        v1235 = (CTransform3DGroup *)CResourceTable::GetResource(v6, v5[1], 0x81u);
        if ( !v1235 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 565920662LL, 0LL, v1236);
          __debugbreak();
        }
        IsLocal = CTransform3DGroup::ProcessUpdate(
                    v1235,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_TRANSFORM3DGROUP *)v5,
                    v5 + 4,
                    v7 - 16);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 9909;
        goto LABEL_2934;
      case 420:
        if ( v7 < 0x10 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 4282154827LL, 0LL, 1LL);
          __debugbreak();
        }
        v521 = (CTransformGroup *)CResourceTable::GetResource(v6, v5[1], 0x82u);
        if ( !v521 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 4282154827LL, 0LL, v522);
          __debugbreak();
        }
        IsLocal = CTransformGroup::ProcessUpdate(
                    v521,
                    (struct CResourceTable *)v6,
                    (const struct MILCMD_TRANSFORMGROUP *)v5,
                    v5 + 4,
                    v7 - 16);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 9936;
        goto LABEL_2934;
      case 421:
        if ( v7 != 24 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3691915650LL, 0LL, 1LL);
          __debugbreak();
        }
        v488 = (CTranslateTransform *)CResourceTable::GetResource(v6, v5[1], 0x83u);
        if ( !v488 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3691915650LL, 0LL, v490);
          __debugbreak();
        }
        IsLocal = CTranslateTransform::ProcessUpdate(v488, v489, (const struct MILCMD_TRANSLATETRANSFORM *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 9960;
        goto LABEL_2934;
      case 422:
        if ( v7 != 32 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2399423725LL, 0LL, 1LL);
          __debugbreak();
        }
        v1237 = (CTranslateTransform3D *)CResourceTable::GetResource(v6, v5[1], 0x84u);
        if ( !v1237 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 2399423725LL, 0LL, v1239);
          __debugbreak();
        }
        IsLocal = CTranslateTransform3D::ProcessUpdate(v1237, v1238, (const struct MILCMD_TRANSLATETRANSFORM3D *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 9984;
        goto LABEL_2934;
      case 423:
        if ( v7 != 48 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3254525814LL, 0LL, 1LL);
          __debugbreak();
        }
        v1240 = (CTurbulenceEffect *)CResourceTable::GetResource(v6, v5[1], 0x85u);
        if ( !v1240 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 3254525814LL, 0LL, v1242);
          __debugbreak();
        }
        IsLocal = CTurbulenceEffect::ProcessUpdate(v1240, v1241, (const struct MILCMD_TURBULENCEEFFECT *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 10008;
        goto LABEL_2934;
      case 424:
        if ( v7 != 28 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 195988288LL, 0LL, 1LL);
          __debugbreak();
        }
        v611 = (CVisualCapture *)CResourceTable::GetResource(v6, v5[1], 0x87u);
        if ( !v611 )
        {
          CComposition::FailFastOnMalformedPacket(v12, 195988288LL, 0LL, v612);
          __debugbreak();
        }
        IsLocal = CVisualCapture::ProcessUpdate(v611, (struct CResourceTable *)v6, (__m128i *)v5);
        v13 = IsLocal;
        if ( IsLocal >= 0 )
          goto LABEL_46;
        v1245 = 10032;
        goto LABEL_2934;
      default:
        CComposition::FailFastOnMalformedPacket(v12, 1067978050LL, 0LL, 1LL);
        __debugbreak();
    }
  }
}
