/*
 * XREFs of ?IsEligibleForOverlays@COverlayContext@@AEAA_NPEAUOverlayPlaneInfo@1@@Z @ 0x180151368
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcclusionContext@@PEA_N@Z @ 0x180072060 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcc.c)
 * Callees:
 *     ?IsRevokable@COverlayContext@@AEAA_NPEAUOverlayPlaneInfo@1@@Z @ 0x180151974 (-IsRevokable@COverlayContext@@AEAA_NPEAUOverlayPlaneInfo@1@@Z.c)
 *     ?IsSufficientIntervalForStats@COverlayContext@@AEAA_NPEAUOverlayPlaneInfo@1@_KPEAM@Z @ 0x1801519F8 (-IsSufficientIntervalForStats@COverlayContext@@AEAA_NPEAUOverlayPlaneInfo@1@_KPEAM@Z.c)
 *     ?IsSufficientPresentCountForEligibility@COverlayContext@@AEAA_NPEAUOverlayPlaneInfo@1@IM@Z @ 0x180151AA0 (-IsSufficientPresentCountForEligibility@COverlayContext@@AEAA_NPEAUOverlayPlaneInfo@1@IM@Z.c)
 *     ?ForceUpdateRenderingRealization@CCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x1801751A0 (-ForceUpdateRenderingRealization@CCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 */

char __fastcall COverlayContext::IsEligibleForOverlays(
        COverlayContext *this,
        struct COverlayContext::OverlayPlaneInfo *a2)
{
  char IsSufficientPresentCountForEligibility; // di
  COverlayContext *v5; // rcx
  unsigned __int64 v6; // rsi
  COverlayContext *v7; // rcx
  __int64 v8; // r11
  __int64 v9; // r11
  int v10; // r10d
  __int64 v11; // rax
  float v13; // [rsp+40h] [rbp+18h] BYREF

  v13 = FLOAT_1_0;
  IsSufficientPresentCountForEligibility = 1;
  if ( COverlayContext::IsRevokable(this, a2) )
  {
    IsSufficientPresentCountForEligibility = *((_BYTE *)a2 + 184);
    v6 = *(_QWORD *)(*((_QWORD *)this + 139) + 520LL);
    if ( COverlayContext::IsSufficientIntervalForStats(v5, a2, v6, &v13) )
    {
      if ( *((_BYTE *)a2 + 192) && !*((_BYTE *)a2 + 193) )
        CCompositionSurfaceInfo::ForceUpdateRenderingRealization(
          *((CCompositionSurfaceInfo **)a2 + 3),
          *((_QWORD *)a2 + 4));
      v8 = *((_QWORD *)a2 + 3);
      if ( *(_BYTE *)(v8 + 196) )
      {
        return 0;
      }
      else
      {
        IsSufficientPresentCountForEligibility = COverlayContext::IsSufficientPresentCountForEligibility(
                                                   v7,
                                                   a2,
                                                   *(_DWORD *)(v8 + 72),
                                                   v13);
        *(_QWORD *)(v9 + 184) = v6;
        *(_DWORD *)(v9 + 192) = v10;
      }
    }
  }
  else
  {
    v11 = *((_QWORD *)a2 + 3);
    *(_QWORD *)(v11 + 184) = 0LL;
    *(_DWORD *)(v11 + 192) = 0;
  }
  return IsSufficientPresentCountForEligibility;
}
