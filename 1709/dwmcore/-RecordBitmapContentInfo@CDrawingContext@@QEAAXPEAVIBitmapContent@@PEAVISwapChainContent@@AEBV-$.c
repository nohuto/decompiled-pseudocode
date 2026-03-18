/*
 * XREFs of ?RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18003AEA4
 * Callers:
 *     ?UpdateSwapChains@CCommonRenderingEffect@@UEAAXPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001FB90 (-UpdateSwapChains@CCommonRenderingEffect@@UEAAXPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@.c)
 *     ?ImageSourceToDrawListImageSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAPEAV2@@Z @ 0x180037114 (-ImageSourceToDrawListImageSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAPEA.c)
 *     ?ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapSource@@@Z @ 0x1800372A8 (-ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAV-$TMilRec.c)
 *     ?BitmapResourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIBitmapResource@@PEBVCMILMatrix@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x1800373D8 (-BitmapResourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIBitmapResource@@PEBVCMILMatrix@@_NPEAPEAUI.c)
 *     ?UpdateSwapChainRealization@CDrawListBitmap@@QEAAXPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18011C548 (-UpdateSwapChainRealization@CDrawListBitmap@@QEAAXPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRect.c)
 * Callees:
 *     ?IsHDRContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180028D30 (-IsHDRContent@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?IsProtectedContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180028D50 (-IsProtectedContent@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?IsMonitorSpecificContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180028D70 (-IsMonitorSpecificContent@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?SetSwapChainOrientation@CCompositionSurfaceBitmap@@UEAAXW4DXGI_MODE_ROTATION@@@Z @ 0x180028DB0 (-SetSwapChainOrientation@CCompositionSurfaceBitmap@@UEAAXW4DXGI_MODE_ROTATION@@@Z.c)
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180031D18 (-GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036770 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180036790 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?GetRotation@CMILMatrix@@QEBA?AW4DXGI_MODE_ROTATION@@XZ @ 0x180059220 (-GetRotation@CMILMatrix@@QEBA-AW4DXGI_MODE_ROTATION@@XZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059FB0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005A460 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18007B3D4 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?IsProtectedContent@CCachedVisualImage@@UEBA_NXZ @ 0x18008DC10 (-IsProtectedContent@CCachedVisualImage@@UEBA_NXZ.c)
 *     ?IsHDRContent@CCachedVisualImage@@UEBA_NXZ @ 0x18008E010 (-IsHDRContent@CCachedVisualImage@@UEBA_NXZ.c)
 *     ?IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ @ 0x18008E090 (-IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDrawingContext::RecordBitmapContentInfo(
        __int64 a1,
        CCompositionSurfaceBitmap *a2,
        CCompositionSurfaceBitmap *a3,
        __int128 *a4,
        __int64 a5)
{
  bool (__fastcall *v9)(CCompositionSurfaceBitmap *); // rax
  bool IsProtectedContent; // al
  char (__fastcall *v11)(CCompositionSurfaceBitmap *); // rax
  char IsMonitorSpecificContent; // al
  bool (__fastcall *v13)(CCompositionSurfaceBitmap *); // rax
  bool IsHDRContent; // al
  int v15; // eax
  CMILMatrix *v16; // rcx
  __int64 Rotation; // rdx
  const struct CMILMatrix *v18; // rax
  __int64 v19; // rdx
  float *v20; // rcx
  float v21; // xmm1_4
  float v22; // xmm1_4
  float v23; // xmm1_4
  float v24; // xmm1_4
  const struct CMILMatrix *TopByReference; // rax
  float v26; // xmm3_4
  float v27; // xmm0_4
  float v28; // xmm1_4
  float v29; // xmm2_4
  float v30; // [rsp+20h] [rbp-38h] BYREF
  float v31; // [rsp+24h] [rbp-34h]
  float v32; // [rsp+28h] [rbp-30h]
  float v33; // [rsp+2Ch] [rbp-2Ch]
  __int128 v34; // [rsp+30h] [rbp-28h] BYREF

  v9 = *(bool (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)a2 + 32LL);
  if ( v9 == CCompositionSurfaceBitmap::IsProtectedContent )
  {
    IsProtectedContent = CCompositionSurfaceBitmap::IsProtectedContent(a2);
  }
  else if ( v9 == CCachedVisualImage::IsProtectedContent )
  {
    IsProtectedContent = CCachedVisualImage::IsProtectedContent(a2);
  }
  else
  {
    IsProtectedContent = v9(a2);
  }
  if ( IsProtectedContent )
    *(_BYTE *)(a1 + 6832) = 1;
  v11 = *(char (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)a2 + 24LL);
  if ( v11 == CCompositionSurfaceBitmap::IsMonitorSpecificContent )
  {
    IsMonitorSpecificContent = CCompositionSurfaceBitmap::IsMonitorSpecificContent(a2);
  }
  else if ( (char *)v11 == (char *)CCachedVisualImage::IsMonitorSpecificContent )
  {
    IsMonitorSpecificContent = CCachedVisualImage::IsMonitorSpecificContent(a2);
  }
  else
  {
    IsMonitorSpecificContent = v11(a2);
  }
  if ( IsMonitorSpecificContent )
    *(_BYTE *)(a1 + 6834) = 1;
  v13 = *(bool (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)a2 + 48LL);
  if ( v13 == CCompositionSurfaceBitmap::IsHDRContent )
  {
    IsHDRContent = CCompositionSurfaceBitmap::IsHDRContent(a2);
  }
  else if ( v13 == CCachedVisualImage::IsHDRContent )
  {
    IsHDRContent = CCachedVisualImage::IsHDRContent(a2);
  }
  else
  {
    IsHDRContent = v13(a2);
  }
  if ( IsHDRContent )
    *(_BYTE *)(a1 + 6835) = 1;
  if ( a3 && *(_QWORD *)(a1 + 368) && *(_QWORD *)(a1 + 6792) && !*(_BYTE *)(*(_QWORD *)(a1 + 32) + 1296LL) )
  {
    v15 = *(_DWORD *)(a1 + 480);
    if ( v15 )
      v16 = (CMILMatrix *)(*(_QWORD *)(a1 + 496) + 68LL * (unsigned int)(v15 - 1));
    else
      v16 = (CMILMatrix *)&CMILMatrix::Identity;
    Rotation = (unsigned int)CMILMatrix::GetRotation(v16);
    if ( *(void (__fastcall **)(CCompositionSurfaceBitmap *, enum DXGI_MODE_ROTATION))(*(_QWORD *)a3 + 184LL) == CCompositionSurfaceBitmap::SetSwapChainOrientation )
      CCompositionSurfaceBitmap::SetSwapChainOrientation(a3, (enum DXGI_MODE_ROTATION)Rotation);
    else
      (*(void (__fastcall **)(CCompositionSurfaceBitmap *, __int64))(*(_QWORD *)a3 + 184LL))(a3, Rotation);
  }
  if ( *(_BYTE *)(a1 + 6829)
    && *(_DWORD *)(a1 + 404) == 1
    && a3
    && (*(unsigned __int8 (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)a3 + 96LL))(a3) )
  {
    if ( (v18 = CMatrixStack::GetTopByReference((CMatrixStack *)(a1 + 480)),
          LOBYTE(v19) = 1,
          (unsigned __int8)CMILMatrix::Is2DAffine<1>(v18, v19))
      && (v21 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v20[1]) & _xmm), v21 < 0.000081380211)
      && (v22 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v20[4]) & _xmm), v22 < 0.000081380211)
      || (v23 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*v20) & _xmm), v23 < 0.000081380211)
      && (v24 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v20[5]) & _xmm), v24 < 0.000081380211) )
    {
      if ( a5 )
        CMILMatrix::Transform2DBoundsHelper<0>(a5, a4, &v34);
      else
        v34 = *a4;
      TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(a1 + 480));
      CMILMatrix::Transform2DBoundsHelper<0>(TopByReference, &v34, &v30);
      CScopedClipStack::GetTopGpuClipInScope((CScopedClipStack *)(a1 + 1008), 1);
      v26 = v30;
      if ( *(float *)&v34 > v30 )
      {
        v30 = *(float *)&v34;
        v26 = *(float *)&v34;
      }
      v27 = v31;
      if ( *((float *)&v34 + 1) > v31 )
      {
        v31 = *((float *)&v34 + 1);
        v27 = *((float *)&v34 + 1);
      }
      v28 = v32;
      if ( v32 > *((float *)&v34 + 2) )
      {
        v28 = *((float *)&v34 + 2);
        v32 = *((float *)&v34 + 2);
      }
      v29 = v33;
      if ( v33 > *((float *)&v34 + 3) )
      {
        v29 = *((float *)&v34 + 3);
        v33 = *((float *)&v34 + 3);
      }
      if ( v28 <= v26 || v29 <= v27 )
      {
        v33 = 0.0;
        v32 = 0.0;
        v31 = 0.0;
        v30 = 0.0;
      }
      if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(&v30) )
        TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)(a1 + 6776), &v30);
    }
  }
}
