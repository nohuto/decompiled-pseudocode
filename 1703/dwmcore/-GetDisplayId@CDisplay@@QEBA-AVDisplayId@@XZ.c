/*
 * XREFs of ?GetDisplayId@CDisplay@@QEBA?AVDisplayId@@XZ @ 0x1800B8124
 * Callers:
 *     ?GetDisplay@CDisplaySet@@QEBAJU_LUID@@VDisplayId@@PEAPEBVCDisplay@@@Z @ 0x18001B29C (-GetDisplay@CDisplaySet@@QEBAJU_LUID@@VDisplayId@@PEAPEBVCDisplay@@@Z.c)
 *     ?GetSnapshotBitmapSourceInfo@CCachedVisualImage@@AEAAJPEBUtagRECT@@PEAUBitmapSourceInfo@@@Z @ 0x180047D8C (-GetSnapshotBitmapSourceInfo@CCachedVisualImage@@AEAAJPEBUtagRECT@@PEAUBitmapSourceInfo@@@Z.c)
 *     ?GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z @ 0x180048580 (-GetBitmapSource@CCachedVisualImage@@UEAAJPEAPEAVIBitmapSource@@PEBUBitmapSourceInfo@@@Z.c)
 *     ?SetPrimaryCloneDisplay@CDisplay@@QEAAXPEAV1@@Z @ 0x1800B7F60 (-SetPrimaryCloneDisplay@CDisplay@@QEAAXPEAV1@@Z.c)
 *     ?Create@CHwDisplayRenderTarget@@SAJAEBU_GUID@@PEBVCDisplay@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEAPEAV1@@Z @ 0x1800C93E0 (-Create@CHwDisplayRenderTarget@@SAJAEBU_GUID@@PEBVCDisplay@@U-$TMILFlagsEnum@W4FlagsEnum@MilRTIn.c)
 *     ?GetDisplayIndexFromDisplayId@CDisplaySet@@QEBAJVDisplayId@@PEAI@Z @ 0x1801331B8 (-GetDisplayIndexFromDisplayId@CDisplaySet@@QEBAJVDisplayId@@PEAI@Z.c)
 *     ?GetDisplayIdFromMonitor@CDisplaySet@@QEBAJPEAUHMONITOR__@@PEAVDisplayId@@@Z @ 0x18013329C (-GetDisplayIdFromMonitor@CDisplaySet@@QEBAJPEAUHMONITOR__@@PEAVDisplayId@@@Z.c)
 *     ?EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ @ 0x180147ED0 (-EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x180149428 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?RealizeBitmapSourceHelper@@YAJPEAVCD3DDeviceManager@@AEBU_GUID@@PEBVCDisplay@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@@Z @ 0x180188458 (-RealizeBitmapSourceHelper@@YAJPEAVCD3DDeviceManager@@AEBU_GUID@@PEBVCDisplay@@PEAVIBitmapSource.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CDisplay::GetDisplayId(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rax
  int v3; // eax

  *a2 = 0;
  v2 = *(_QWORD *)(a1 + 128);
  if ( v2 )
    v3 = *(_DWORD *)(v2 + 236);
  else
    v3 = *(_DWORD *)(a1 + 236);
  *a2 = v3;
  return a2;
}
