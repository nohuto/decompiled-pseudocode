/*
 * XREFs of ??$ReleaseGDIObject@PEAUHRGN__@@@@YAXAEAPEAUHRGN__@@@Z @ 0x18001A770
 * Callers:
 *     ?ValidateResources@CText@@AEAAJXZ @ 0x18001BCAC (-ValidateResources@CText@@AEAAJXZ.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180038AF0 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z @ 0x180076E30 (-_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z.c)
 *     ?_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAJPEBVCTopLevelWindow@@PEAULivePreviewResource@@@Z @ 0x1800773B8 (-_UpdateResourcesForMonitorHelper@CLivePreview@@AEAAJPEBVCTopLevelWindow@@PEAULivePreviewResourc.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall ReleaseGDIObject<HRGN__ *>(void **a1)
{
  void *v2; // rcx
  BOOL result; // eax

  v2 = *a1;
  if ( v2 )
  {
    result = DeleteObject(v2);
    *a1 = 0LL;
  }
  return result;
}
