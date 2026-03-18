/*
 * XREFs of ?GetDisplayId@CDisplay@@QEBA?AVDisplayId@@XZ @ 0x1800B7888
 * Callers:
 *     ?GetDisplay@CDisplaySet@@QEBAJU_LUID@@VDisplayId@@PEAPEBVCDisplay@@@Z @ 0x18000A818 (-GetDisplay@CDisplaySet@@QEBAJU_LUID@@VDisplayId@@PEAPEBVCDisplay@@@Z.c)
 *     ?GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x1800B4480 (-GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 *     ?GetSnapshotBitmapSourceInfo@CCachedVisualImage@@AEAAJPEBUtagRECT@@PEAUBitmapSourceInfo@@@Z @ 0x1800B4780 (-GetSnapshotBitmapSourceInfo@CCachedVisualImage@@AEAAJPEBUtagRECT@@PEAUBitmapSourceInfo@@@Z.c)
 *     ?GetDisplayIndexFromDisplayId@CDisplaySet@@QEBAJVDisplayId@@PEAI@Z @ 0x1800B7040 (-GetDisplayIndexFromDisplayId@CDisplaySet@@QEBAJVDisplayId@@PEAI@Z.c)
 *     ?SetPrimaryCloneDisplay@CDisplay@@QEAAXPEAV1@@Z @ 0x1800B7C08 (-SetPrimaryCloneDisplay@CDisplay@@QEAAXPEAV1@@Z.c)
 *     ?LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z @ 0x1800C6EC0 (-LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z.c)
 *     ?Create@CHwDisplayRenderTarget@@SAJPEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAV1@@Z @ 0x1800C80C8 (-Create@CHwDisplayRenderTarget@@SAJPEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTInitializatio.c)
 *     ?CreateOverlayableRenderTargetBitmap@CPlaneCaptureRenderTargetEngine@@IEAAJPEAPEAVIRenderTargetBitmap@@@Z @ 0x18015B6E8 (-CreateOverlayableRenderTargetBitmap@CPlaneCaptureRenderTargetEngine@@IEAAJPEAPEAVIRenderTargetB.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x18015D484 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ @ 0x18016F9D0 (-EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ.c)
 *     ?GetDisplayIdFromMonitor@CDisplaySet@@QEBAJPEAUHMONITOR__@@PEAVDisplayId@@@Z @ 0x1801C6768 (-GetDisplayIdFromMonitor@CDisplaySet@@QEBAJPEAUHMONITOR__@@PEAVDisplayId@@@Z.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CDisplay::GetDisplayId(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rax
  int v3; // eax

  *a2 = 0;
  v2 = *(_QWORD *)(a1 + 152);
  if ( v2 )
    v3 = *(_DWORD *)(v2 + 260);
  else
    v3 = *(_DWORD *)(a1 + 260);
  *a2 = v3;
  return a2;
}
