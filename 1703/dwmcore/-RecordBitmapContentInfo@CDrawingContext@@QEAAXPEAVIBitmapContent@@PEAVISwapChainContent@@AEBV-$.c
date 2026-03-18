/*
 * XREFs of ?RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800A5F54
 * Callers:
 *     ?IssueSurfaceNotifications@CCommonRenderingEffect@@UEBAXPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180009810 (-IssueSurfaceNotifications@CCommonRenderingEffect@@UEBAXPEAVCDrawingContext@@AEBV-$TMilRect_@MUM.c)
 *     ?DrawCommandListBitmapRepresentation@CDrawingContext@@QEAAJPEAVCCommandListBitmapRepresentation@@PEBVCMILMatrix@@@Z @ 0x18000EFFC (-DrawCommandListBitmapRepresentation@CDrawingContext@@QEAAJPEAVCCommandListBitmapRepresentation@.c)
 *     ?ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapSource@@@Z @ 0x1800A23E0 (-ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAV-$TMilRec.c)
 *     ?BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBVCMILMatrix@@_NPEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1800A2550 (-BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBVCMILMatrix@@_NPEAVCCol.c)
 *     ?Render@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x18015EB80 (-Render@CWARPDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode.c)
 *     ?IssueSurfaceNotifications@CBrushRenderingEffect@@UEBAXPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801BB470 (-IssueSurfaceNotifications@CBrushRenderingEffect@@UEBAXPEAVCDrawingContext@@AEBV-$TMilRect_@MUMi.c)
 * Callees:
 *     ?IsMonitorSpecificContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18000AB10 (-IsMonitorSpecificContent@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?SetSwapChainOrientation@CCompositionSurfaceBitmap@@UEAAXW4DXGI_MODE_ROTATION@@@Z @ 0x18000AB60 (-SetSwapChainOrientation@CCompositionSurfaceBitmap@@UEAAXW4DXGI_MODE_ROTATION@@@Z.c)
 *     ?IsNormalDesktopRender@CDrawingContext@@QEBA?B_NXZ @ 0x18000CD80 (-IsNormalDesktopRender@CDrawingContext@@QEBA-B_NXZ.c)
 *     ?GetRotation@CMILMatrix@@QEBA?AW4DXGI_MODE_ROTATION@@XZ @ 0x18001217C (-GetRotation@CMILMatrix@@QEBA-AW4DXGI_MODE_ROTATION@@XZ.c)
 *     ?IsProtectedContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x1800375F0 (-IsProtectedContent@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ @ 0x1800484D0 (-IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ.c)
 *     ?IsProtectedContent@CCachedVisualImage@@UEBA_NXZ @ 0x180048570 (-IsProtectedContent@CCachedVisualImage@@UEBA_NXZ.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18004EC28 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006FBC0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18006FD70 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009339C (-GetTopGpuClipInScope@CScopedClipStack@@QEAAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180099948 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDrawingContext::RecordBitmapContentInfo(
        CDrawingContext *this,
        CCachedVisualImage *a2,
        CCompositionSurfaceBitmap *a3,
        __int128 *a4,
        __int64 a5)
{
  bool (__fastcall *v9)(CCompositionSurfaceBitmap *); // rax
  bool IsProtectedContent; // al
  __int64 v11; // rdx
  __int64 v12; // r8
  struct _GUID *v13; // r9
  __int64 (__fastcall *v14)(CCachedVisualImage *); // rax
  char IsMonitorSpecificContent; // al
  int v16; // eax
  CMILMatrix *v17; // rcx
  __int64 Rotation; // rdx
  const struct CMILMatrix *TopByReference; // rax
  const struct CMILMatrix *v20; // rax
  float v21; // xmm3_4
  float v22; // xmm0_4
  float v23; // xmm1_4
  float v24; // xmm2_4
  float v25; // [rsp+20h] [rbp-38h] BYREF
  float v26; // [rsp+24h] [rbp-34h]
  float v27; // [rsp+28h] [rbp-30h]
  float v28; // [rsp+2Ch] [rbp-2Ch]
  __int128 v29; // [rsp+30h] [rbp-28h] BYREF

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
    *((_BYTE *)this + 6776) = 1;
  v14 = *(__int64 (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)a2 + 24LL);
  if ( (char *)v14 == (char *)CCompositionSurfaceBitmap::IsMonitorSpecificContent )
  {
    IsMonitorSpecificContent = CCompositionSurfaceBitmap::IsMonitorSpecificContent(a2);
  }
  else if ( (char *)v14 == (char *)CCachedVisualImage::IsMonitorSpecificContent )
  {
    IsMonitorSpecificContent = CCachedVisualImage::IsMonitorSpecificContent(a2, v11, v12, v13);
  }
  else
  {
    IsMonitorSpecificContent = v14(a2);
  }
  if ( IsMonitorSpecificContent )
    *((_BYTE *)this + 6778) = 1;
  if ( a3 && CDrawingContext::IsNormalDesktopRender(this) )
  {
    v16 = *((_DWORD *)this + 118);
    if ( v16 )
      v17 = (CMILMatrix *)(*((_QWORD *)this + 61) + 68LL * (unsigned int)(v16 - 1));
    else
      v17 = (CMILMatrix *)&CMILMatrix::Identity;
    Rotation = (unsigned int)CMILMatrix::GetRotation(v17);
    if ( *(void (__fastcall **)(CCompositionSurfaceBitmap *, enum DXGI_MODE_ROTATION))(*(_QWORD *)a3 + 168LL) == CCompositionSurfaceBitmap::SetSwapChainOrientation )
      CCompositionSurfaceBitmap::SetSwapChainOrientation(a3, (enum DXGI_MODE_ROTATION)Rotation);
    else
      (*(void (__fastcall **)(CCompositionSurfaceBitmap *, __int64))(*(_QWORD *)a3 + 168LL))(a3, Rotation);
  }
  if ( *((_BYTE *)this + 6773) )
  {
    if ( *((_DWORD *)this + 1678) == 1 )
    {
      if ( a3 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)a3 + 88LL))(a3) )
        {
          TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 472));
          if ( CMILMatrix::Is2DAxisAlignedPreserving<1>((__int64)TopByReference) )
          {
            if ( a5 )
              CMILMatrix::Transform2DBoundsHelper<0>(a5, (__int64)a4, (float *)&v29);
            else
              v29 = *a4;
            v20 = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 472));
            CMILMatrix::Transform2DBoundsHelper<0>((__int64)v20, (__int64)&v29, &v25);
            CScopedClipStack::GetTopGpuClipInScope((__int64 *)this + 114, 1, (__int64)&v29);
            v21 = v25;
            if ( *(float *)&v29 > v25 )
            {
              v25 = *(float *)&v29;
              v21 = *(float *)&v29;
            }
            v22 = v26;
            if ( *((float *)&v29 + 1) > v26 )
            {
              v26 = *((float *)&v29 + 1);
              v22 = *((float *)&v29 + 1);
            }
            v23 = v27;
            if ( v27 > *((float *)&v29 + 2) )
            {
              v23 = *((float *)&v29 + 2);
              v27 = *((float *)&v29 + 2);
            }
            v24 = v28;
            if ( v28 > *((float *)&v29 + 3) )
            {
              v24 = *((float *)&v29 + 3);
              v28 = *((float *)&v29 + 3);
            }
            if ( v23 <= v21 || v24 <= v22 )
            {
              v28 = 0.0;
              v27 = 0.0;
              v26 = 0.0;
              v25 = 0.0;
            }
            if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(&v25) )
              TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)this + 1679, &v25);
          }
        }
      }
    }
  }
}
