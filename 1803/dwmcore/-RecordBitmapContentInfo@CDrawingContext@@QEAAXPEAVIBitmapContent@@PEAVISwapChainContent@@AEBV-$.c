/*
 * XREFs of ?RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18006AFF4
 * Callers:
 *     ?UpdateSwapChainRealization@CDrawListBitmap@@QEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180006170 (-UpdateSwapChainRealization@CDrawListBitmap@@QEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRect.c)
 *     ?ImageSourceToDrawListImageSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAPEAV2@@Z @ 0x1800678EC (-ImageSourceToDrawListImageSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAPEA.c)
 *     ?ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapSource@@@Z @ 0x180067A44 (-ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAV-$TMilRec.c)
 *     ?BitmapResourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIBitmapResource@@PEBVCMILMatrix@@_NPEAPEAUID2D1Bitmap1@@@Z @ 0x18015E654 (-BitmapResourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIBitmapResource@@PEBVCMILMatrix@@_NPEAPEAUI.c)
 * Callees:
 *     ?IsHDRContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x1800072D0 (-IsHDRContent@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?IsMonitorSpecificContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x1800072F0 (-IsMonitorSpecificContent@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?SetSwapChainOrientation@CCompositionSurfaceBitmap@@UEAAXW4DXGI_MODE_ROTATION@@@Z @ 0x180007320 (-SetSwapChainOrientation@CCompositionSurfaceBitmap@@UEAAXW4DXGI_MODE_ROTATION@@@Z.c)
 *     ?IsNormalDesktopRender@CDrawingContext@@QEBA?B_NXZ @ 0x180007CE8 (-IsNormalDesktopRender@CDrawingContext@@QEBA-B_NXZ.c)
 *     ?GetRotation@CMILMatrix@@QEBA?AW4DXGI_MODE_ROTATION@@XZ @ 0x18000F220 (-GetRotation@CMILMatrix@@QEBA-AW4DXGI_MODE_ROTATION@@XZ.c)
 *     ?IsProtectedContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180047960 (-IsProtectedContent@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?GetTopGpuClipInScope@CScopedClipStack@@QEBAX_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180063000 (-GetTopGpuClipInScope@CScopedClipStack@@QEBAX_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180064E70 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180065050 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A4FF0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800A5828 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x1800BE850 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDrawingContext::RecordBitmapContentInfo(
        CDrawingContext *this,
        CCompositionSurfaceBitmap *a2,
        CCompositionSurfaceBitmap *a3,
        __int128 *a4,
        CMILMatrix *a5)
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
  const struct CMILMatrix *TopByReference; // rax
  CMILMatrix *v19; // rax
  float left; // xmm3_4
  float top; // xmm1_4
  float right; // xmm2_4
  float bottom; // xmm0_4
  struct D2D_RECT_F v24; // [rsp+20h] [rbp-38h] BYREF
  __int128 v25; // [rsp+30h] [rbp-28h] BYREF

  v9 = *(bool (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)a2 + 32LL);
  if ( v9 == CCompositionSurfaceBitmap::IsProtectedContent )
    IsProtectedContent = CCompositionSurfaceBitmap::IsProtectedContent(a2);
  else
    IsProtectedContent = v9(a2);
  if ( IsProtectedContent )
    *((_BYTE *)this + 6834) = 1;
  v11 = *(char (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)a2 + 24LL);
  if ( v11 == CCompositionSurfaceBitmap::IsMonitorSpecificContent )
    IsMonitorSpecificContent = CCompositionSurfaceBitmap::IsMonitorSpecificContent(a2);
  else
    IsMonitorSpecificContent = v11(a2);
  if ( IsMonitorSpecificContent )
    *((_BYTE *)this + 6836) = 1;
  v13 = *(bool (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)a2 + 48LL);
  if ( v13 == CCompositionSurfaceBitmap::IsHDRContent )
    IsHDRContent = CCompositionSurfaceBitmap::IsHDRContent(a2);
  else
    IsHDRContent = v13(a2);
  if ( IsHDRContent )
    *((_BYTE *)this + 6837) = 1;
  if ( a3 && CDrawingContext::IsNormalDesktopRender(this) )
  {
    v15 = *((_DWORD *)this + 120);
    if ( v15 )
      v16 = (CMILMatrix *)(*((_QWORD *)this + 62) + 68LL * (unsigned int)(v15 - 1));
    else
      v16 = (CMILMatrix *)&CMILMatrix::Identity;
    Rotation = (unsigned int)CMILMatrix::GetRotation(v16);
    if ( *(void (__fastcall **)(CCompositionSurfaceBitmap *, enum DXGI_MODE_ROTATION))(*(_QWORD *)a3 + 184LL) == CCompositionSurfaceBitmap::SetSwapChainOrientation )
      CCompositionSurfaceBitmap::SetSwapChainOrientation(a3, (enum DXGI_MODE_ROTATION)Rotation);
    else
      (*(void (__fastcall **)(CCompositionSurfaceBitmap *, __int64))(*(_QWORD *)a3 + 184LL))(a3, Rotation);
  }
  if ( *((_BYTE *)this + 6829) )
  {
    if ( *((_DWORD *)this + 101) == 1 )
    {
      if ( a3 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(CCompositionSurfaceBitmap *))(*(_QWORD *)a3 + 96LL))(a3) )
        {
          TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 480));
          if ( (unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(TopByReference) )
          {
            if ( a5 )
              CMILMatrix::Transform2DBoundsHelper<0>(a5);
            else
              v25 = *a4;
            v19 = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 480));
            CMILMatrix::Transform2DBoundsHelper<0>(v19);
            CScopedClipStack::GetTopGpuClipInScope((__int64 *)this + 126, 1, (__int64)&v25);
            left = v24.left;
            if ( *(float *)&v25 > v24.left )
            {
              LODWORD(v24.left) = v25;
              left = *(float *)&v25;
            }
            top = v24.top;
            if ( *((float *)&v25 + 1) > v24.top )
            {
              v24.top = *((FLOAT *)&v25 + 1);
              top = *((float *)&v25 + 1);
            }
            right = v24.right;
            if ( v24.right > *((float *)&v25 + 2) )
            {
              v24.right = *((FLOAT *)&v25 + 2);
              right = *((float *)&v25 + 2);
            }
            bottom = v24.bottom;
            if ( v24.bottom > *((float *)&v25 + 3) )
            {
              v24.bottom = *((FLOAT *)&v25 + 3);
              bottom = *((float *)&v25 + 3);
            }
            if ( right <= left || bottom <= top )
            {
              v24.bottom = 0.0;
              v24.right = 0.0;
              v24.top = 0.0;
              v24.left = 0.0;
            }
            if ( !IsEmpty(&v24) )
              TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)this + 1694, &v24.left);
          }
        }
      }
    }
  }
}
