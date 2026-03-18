/*
 * XREFs of ?IsEligibleForOverlays@COverlayContext@@AEAA_NAEBVOverlayPlaneInfo@1@@Z @ 0x1801434D8
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcclusionContext@@PEA_N@Z @ 0x1800678F4 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcc.c)
 * Callees:
 *     ?EnsureCurrentRenderingRealization@CCompositionSurfaceInfo@@AEAAJXZ @ 0x18004BB0C (-EnsureCurrentRenderingRealization@CCompositionSurfaceInfo@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsRevokable@COverlayContext@@AEAA_NAEBVOverlayPlaneInfo@1@@Z @ 0x180143B20 (-IsRevokable@COverlayContext@@AEAA_NAEBVOverlayPlaneInfo@1@@Z.c)
 *     ?IsSufficientIntervalForStats@OverlayPlaneInfo@COverlayContext@@QEBA_N_KPEAM@Z @ 0x180143BA4 (-IsSufficientIntervalForStats@OverlayPlaneInfo@COverlayContext@@QEBA_N_KPEAM@Z.c)
 *     ?IsSufficientPresentCountForEligibility@OverlayPlaneInfo@COverlayContext@@QEBA_NIM@Z @ 0x180143C50 (-IsSufficientPresentCountForEligibility@OverlayPlaneInfo@COverlayContext@@QEBA_NIM@Z.c)
 */

char __fastcall COverlayContext::IsEligibleForOverlays(
        COverlayContext *this,
        const struct COverlayContext::OverlayPlaneInfo *a2)
{
  char IsSufficientPresentCountForEligibility; // di
  unsigned __int64 v5; // rsi
  __int64 v6; // rcx
  signed int v7; // eax
  __int64 v8; // r11
  __int64 v9; // r11
  int v10; // r10d
  __int64 v11; // rax
  float v13; // [rsp+50h] [rbp+18h] BYREF

  v13 = FLOAT_1_0;
  IsSufficientPresentCountForEligibility = 1;
  if ( COverlayContext::IsRevokable(this, a2) )
  {
    IsSufficientPresentCountForEligibility = *((_BYTE *)a2 + 192);
    v5 = *(_QWORD *)(*((_QWORD *)this + 150) + 472LL);
    if ( COverlayContext::OverlayPlaneInfo::IsSufficientIntervalForStats(a2, v5, &v13) )
    {
      if ( *((_BYTE *)a2 + 200) )
      {
        if ( !*((_BYTE *)a2 + 201) )
        {
          v6 = *((_QWORD *)a2 + 3);
          if ( *(_QWORD *)(v6 + 56) == *((_QWORD *)a2 + 4) )
          {
            if ( *(_DWORD *)(v6 + 104) )
            {
              v7 = CCompositionSurfaceInfo::EnsureCurrentRenderingRealization((CCompositionSurfaceInfo *)v6);
              if ( v7 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x332u);
            }
          }
        }
      }
      v8 = *((_QWORD *)a2 + 3);
      if ( *(_BYTE *)(v8 + 196) )
      {
        return 0;
      }
      else
      {
        IsSufficientPresentCountForEligibility = COverlayContext::OverlayPlaneInfo::IsSufficientPresentCountForEligibility(
                                                   a2,
                                                   *(_DWORD *)(v8 + 72),
                                                   v13);
        *(_QWORD *)(v9 + 184) = v5;
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
