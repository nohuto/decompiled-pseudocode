/*
 * XREFs of McTemplateU0pp @ 0x18014AD40
 * Callers:
 *     ?EndAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAX_K0AEB_K@Z @ 0x180014BC4 (-EndAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAX_K0AEB_K@Z.c)
 *     ?Initialize@CRedirectedGDISurface@@IEAAJPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@@Z @ 0x18001F8AC (-Initialize@CRedirectedGDISurface@@IEAAJPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@@Z.c)
 *     ?SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z @ 0x180028438 (-SetVisual@CInteraction@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z @ 0x18003444C (-Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z.c)
 *     ?Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z @ 0x18007BBA0 (-Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z.c)
 *     ?QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x1801CFE6C (-QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 *     ?NotifyMoveOptimization@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z @ 0x1801EBA78 (-NotifyMoveOptimization@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z.c)
 *     ?Render@CHolographicInteropTarget@@UEAAJPEA_N@Z @ 0x1801FDE00 (-Render@CHolographicInteropTarget@@UEAAJPEA_N@Z.c)
 * Callees:
 *     McGenEventWriteUM @ 0x1800CF9CC (McGenEventWriteUM.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

ULONG McTemplateU0pp(__int64 a1, const EVENT_DESCRIPTOR *a2, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+20h] [rbp-48h] BYREF
  va_list v4; // [rsp+30h] [rbp-38h]
  int v5; // [rsp+38h] [rbp-30h]
  int v6; // [rsp+3Ch] [rbp-2Ch]
  va_list v7; // [rsp+40h] [rbp-28h]
  int v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+4Ch] [rbp-1Ch]
  __int64 v10; // [rsp+80h] [rbp+18h] BYREF
  va_list va; // [rsp+80h] [rbp+18h]
  va_list va1; // [rsp+88h] [rbp+20h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v10 = va_arg(va1, _QWORD);
  va_copy(v4, va);
  v6 = 0;
  v5 = 8;
  va_copy(v7, va1);
  v9 = 0;
  v8 = 8;
  return McGenEventWriteUM(Microsoft_Windows_Dwm_Core_Provider_Context, a2, 3u, &v3);
}
