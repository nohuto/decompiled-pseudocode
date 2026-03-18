/*
 * XREFs of ?IsKernelDebuggerPresent@@YAHXZ @ 0x1801CD38C
 * Callers:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18001DA50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?GetD2DContext@CSwRenderTargetGetBounds@@UEAAJPEAPEAVID2DContext@@@Z @ 0x1800427D0 (-GetD2DContext@CSwRenderTargetGetBounds@@UEAAJPEAPEAVID2DContext@@@Z.c)
 *     ?AddRef@CHwDisplayRenderTarget@@UEAAKXZ @ 0x1800463E0 (-AddRef@CHwDisplayRenderTarget@@UEAAKXZ.c)
 *     ?AddRef@CResource@@UEAAKXZ @ 0x180051070 (-AddRef@CResource@@UEAAKXZ.c)
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x180051B80 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 *     ?ResolveSourceReference@CExpression@@UEAAJIPEAPEAVCResource@@@Z @ 0x180054AE0 (-ResolveSourceReference@CExpression@@UEAAJIPEAPEAVCResource@@@Z.c)
 *     ?ScheduleCompositionPass@CPartitionVerticalBlankScheduler@@UEAAXKW4ScheduledCompositionPassReason@@@Z @ 0x18005A6A0 (-ScheduleCompositionPass@CPartitionVerticalBlankScheduler@@UEAAXKW4ScheduledCompositionPassReaso.c)
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x18005D3B0 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 *     ?WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18005DBF0 (-WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?AddRef@CRenderTargetImageSource@@UEAAKXZ @ 0x180089F70 (-AddRef@CRenderTargetImageSource@@UEAAKXZ.c)
 *     ?CreateFromSharedSection@CD2DSharedBuffer@@SAJPEAXIPEAVCSharedSection@@PEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x1800BE9D0 (-CreateFromSharedSection@CD2DSharedBuffer@@SAJPEAXIPEAVCSharedSection@@PEAPEAUID2D1PrivateCompos.c)
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x18014886C (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x1801CD3F4 (-MilInstrumentationBreak@@YAXK_N@Z.c)
 *     ?MilUnexpectedError@@YAXJPEBG@Z @ 0x1801CD680 (-MilUnexpectedError@@YAXJPEBG@Z.c)
 *     ?DrawLegacyCommandList@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommandList@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_DRAW_COMPOSITOR_COMMAND_LIST_OPTIONS@@I_N@Z @ 0x1801E2750 (-DrawLegacyCommandList@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommand.c)
 *     ?FillRectangleWithSolidColor@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1801E3010 (-FillRectangleWithSolidColor@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOL.c)
 *     ??1CHolographicInteropTexture@@MEAA@XZ @ 0x1801FA58C (--1CHolographicInteropTexture@@MEAA@XZ.c)
 *     ?CacheDirtyRegion@CHolographicInteropTexture@@QEAAXXZ @ 0x1801FAB04 (-CacheDirtyRegion@CHolographicInteropTexture@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerPresent(void)
{
  char v0; // al
  char v1; // cl
  unsigned int v2; // ebx

  v0 = word_1802D4530;
  if ( !(_BYTE)word_1802D4530 )
    return 0;
  v1 = HIBYTE(word_1802D4530);
  v2 = 1;
  if ( HIBYTE(word_1802D4530) )
  {
    if ( NtQuerySystemInformation(SystemKernelDebuggerInformation, &word_1802D4530, 2u, 0LL) >= 0 )
    {
      v1 = HIBYTE(word_1802D4530);
      v0 = word_1802D4530;
    }
    else
    {
      v0 = 1;
      word_1802D4530 = 257;
      v1 = 1;
    }
  }
  if ( !v0 || v1 )
    return 0;
  return v2;
}
