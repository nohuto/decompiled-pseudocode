/*
 * XREFs of ?IsKernelDebuggerPresent@@YAHXZ @ 0x180189314
 * Callers:
 *     ?ResolveSourceReference@CExpression@@UEAAJIPEAPEAVCResource@@@Z @ 0x180033710 (-ResolveSourceReference@CExpression@@UEAAJIPEAPEAVCResource@@@Z.c)
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x1800339C0 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 *     ?AddRef@CResource@@UEAAKXZ @ 0x180034810 (-AddRef@CResource@@UEAAKXZ.c)
 *     ?QueryInterface@CResource@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180034840 (-QueryInterface@CResource@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180036B40 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?AddRef@CHwDisplayRenderTarget@@UEAAKXZ @ 0x180039DE0 (-AddRef@CHwDisplayRenderTarget@@UEAAKXZ.c)
 *     ?GetD2DContext@CSwRenderTargetGetBounds@@UEAAJPEAPEAVID2DContext@@@Z @ 0x18003DD00 (-GetD2DContext@CSwRenderTargetGetBounds@@UEAAJPEAPEAVID2DContext@@@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180088C60 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?DrawLegacyCommandList@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommandList@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_DRAW_COMPOSITOR_COMMAND_LIST_OPTIONS@@I_N@Z @ 0x1800AD1A0 (-DrawLegacyCommandList@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommand.c)
 *     ?FillRectangleWithSolidColor@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1800AD860 (-FillRectangleWithSolidColor@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOL.c)
 *     ?UpdateData@?$CMrowWriter@USharedBufferDataFlipChain@@@@QEAAJPEAUSharedBufferDataFlipChain@@@Z @ 0x1800B1440 (-UpdateData@-$CMrowWriter@USharedBufferDataFlipChain@@@@QEAAJPEAUSharedBufferDataFlipChain@@@Z.c)
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x18013B684 (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 *     ??1CIndependentRefreshRateScheduler@@UEAA@XZ @ 0x18013C224 (--1CIndependentRefreshRateScheduler@@UEAA@XZ.c)
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x18018937C (-MilInstrumentationBreak@@YAXK_N@Z.c)
 *     ?MilUnexpectedError@@YAXJPEBG@Z @ 0x180189608 (-MilUnexpectedError@@YAXJPEBG@Z.c)
 *     ??1CHolographicInteropTexture@@MEAA@XZ @ 0x1801A361C (--1CHolographicInteropTexture@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerPresent(void)
{
  char v0; // al
  char v1; // cl
  unsigned int v2; // ebx

  v0 = word_18023DCE8;
  if ( !(_BYTE)word_18023DCE8 )
    return 0;
  v1 = HIBYTE(word_18023DCE8);
  v2 = 1;
  if ( HIBYTE(word_18023DCE8) )
  {
    if ( NtQuerySystemInformation(SystemKernelDebuggerInformation, &word_18023DCE8, 2u, 0LL) >= 0 )
    {
      v1 = HIBYTE(word_18023DCE8);
      v0 = word_18023DCE8;
    }
    else
    {
      v0 = 1;
      word_18023DCE8 = 257;
      v1 = 1;
    }
  }
  if ( !v0 || v1 )
    return 0;
  return v2;
}
