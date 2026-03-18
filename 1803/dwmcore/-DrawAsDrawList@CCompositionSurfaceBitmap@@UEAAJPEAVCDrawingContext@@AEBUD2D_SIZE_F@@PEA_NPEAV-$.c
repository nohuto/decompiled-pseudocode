/*
 * XREFs of ?DrawAsDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180007470
 * Callers:
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18004A1F0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18016EFB0 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 * Callees:
 *     ?BoundsFromLayoutSize@CCompositionSurfaceBitmap@@AEBA_NPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800071B4 (-BoundsFromLayoutSize@CCompositionSurfaceBitmap@@AEBA_NPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRect.c)
 *     ?GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180007240 (-GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?IsOverlayRequired@CDxHandleBitmapRealization@@UEBA_NXZ @ 0x180007BC0 (-IsOverlayRequired@CDxHandleBitmapRealization@@UEBA_NXZ.c)
 *     ?DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z @ 0x180007DA8 (-DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180008CF0 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x18004735C (-EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x18006E480 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?EtwLogCurrentState@CDrawingContext@@QEAAXXZ @ 0x18006E4A0 (-EtwLogCurrentState@CDrawingContext@@QEAAXXZ.c)
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18009B2F0 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800A4FF0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?AppendSizePreferenceTransform@CCompositionSurfaceBitmap@@UEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCMILMatrix@@@Z @ 0x180186A50 (-AppendSizePreferenceTransform@CCompositionSurfaceBitmap@@UEAA_NAEBV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?GetBorderColor@CCompositionSurfaceBitmap@@UEBA?AU_D3DCOLORVALUE@@XZ @ 0x180186DC0 (-GetBorderColor@CCompositionSurfaceBitmap@@UEBA-AU_D3DCOLORVALUE@@XZ.c)
 *     McTemplateU0pppffff @ 0x180187294 (McTemplateU0pppffff.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::DrawAsDrawList(
        CCompositionSurfaceBitmap *this,
        CDrawingContext *a2,
        struct D2D_SIZE_F *a3,
        __int64 a4,
        int a5,
        struct CDrawListCache *a6)
{
  unsigned int v9; // ebx
  float v10; // xmm8_4
  float v11; // xmm10_4
  float v12; // xmm9_4
  float v13; // xmm11_4
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rax
  CDxHandleBitmapRealization *v17; // rcx
  bool (__fastcall *v18)(CDxHandleBitmapRealization *__hidden); // rax
  char IsOverlayRequired; // al
  int v20; // eax
  unsigned int CurrentVisual; // eax
  int v23; // edx
  int v24; // ecx
  int v25; // eax
  __int64 v26; // rax
  float v27; // xmm6_4
  float v28; // xmm7_4
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  float v33; // [rsp+38h] [rbp-C8h]
  float v34; // [rsp+40h] [rbp-C0h]
  bool v35; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v36[64]; // [rsp+60h] [rbp-A0h] BYREF
  int v37; // [rsp+A0h] [rbp-60h]
  struct CDrawListCache *v38; // [rsp+B0h] [rbp-50h] BYREF
  float v39; // [rsp+B8h] [rbp-48h]
  float v40; // [rsp+BCh] [rbp-44h]
  struct CDrawListCache *v41; // [rsp+C0h] [rbp-40h] BYREF
  float v42; // [rsp+C8h] [rbp-38h]
  float v43; // [rsp+CCh] [rbp-34h]
  struct _D3DCOLORVALUE v44; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v45; // [rsp+E0h] [rbp-20h] BYREF
  float v46; // [rsp+E8h] [rbp-18h]
  float v47; // [rsp+ECh] [rbp-14h]

  v38 = a6;
  v9 = 0;
  if ( CCompositionSurfaceBitmap::EnsureBitmapRealization(this, 0) )
  {
    v37 = 0;
    CCompositionSurfaceBitmap::GetTransform((__int64)this + 56, (__int64)v36, &v45);
    if ( CCompositionSurfaceBitmap::BoundsFromLayoutSize((__int64)this, (float *)a3, &v44) )
      CCompositionSurfaceBitmap::AppendSizePreferenceTransform((char *)this + 56, &v44, v36);
    if ( v46 > *(float *)&v45 && v47 > *((float *)&v45 + 1) )
    {
      CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v36);
      CDrawingContext::EtwLogCurrentState(a2);
      v10 = v43;
      v11 = v42;
      v12 = *((float *)&v41 + 1);
      v13 = *(float *)&v41;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
      {
        CurrentVisual = (unsigned int)CDrawingContext::GetCurrentVisual((CDrawingContext *)((char *)a2 + 8));
        v34 = v10 - v12;
        v33 = v11 - v13;
        McTemplateU0pppffff(v24, v23, CurrentVisual, (_DWORD)this, (char)this, 0, 0, SLOBYTE(v33), SLOBYTE(v34));
      }
      v14 = *((_QWORD *)this + 12);
      if ( v14 && (*(_BYTE *)(v14 + 268) & 2) != 0 && *(_BYTE *)(*((_QWORD *)this + 2) + 1344LL) )
      {
        v25 = CDrawingContext::DrawSolidRectangle(a2, (struct MilRectF *)&v41);
        v9 = v25;
        if ( v25 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x33Fu);
          return v9;
        }
        v10 = v43;
        v11 = v42;
        v12 = *((float *)&v41 + 1);
        v13 = *(float *)&v41;
      }
      else
      {
        v35 = 0;
        v15 = CDrawingContext::DrawAsOverlay(
                a2,
                (struct ISwapChainContent *)(((unsigned __int64)this + 56) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
                &v35);
        v9 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x346u);
          return v9;
        }
        if ( !v35 )
        {
          v16 = *((_QWORD *)this + 12);
          if ( !v16
            || ((v17 = (CDxHandleBitmapRealization *)(v16 + 144),
                 v18 = *(bool (__fastcall **)(CDxHandleBitmapRealization *__hidden))(*(_QWORD *)(v16 + 144) + 64LL),
                 v18 != CDxHandleBitmapRealization::IsOverlayRequired)
              ? (IsOverlayRequired = ((__int64 (*)(void))v18)())
              : (IsOverlayRequired = CDxHandleBitmapRealization::IsOverlayRequired(v17)),
                !IsOverlayRequired || *(_DWORD *)(*((_QWORD *)this + 11) + 104LL) <= 1u) )
          {
            v20 = CContent::DrawAsDrawList(this, a2, a3, a5, v38);
            v9 = v20;
            if ( v20 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x352u);
              return v9;
            }
          }
        }
      }
      if ( CCompositionSurfaceBitmap::BoundsFromLayoutSize((__int64)this, (float *)a3, &v41) )
      {
        CCompositionSurfaceBitmap::GetBorderColor((CCompositionSurfaceBitmap *)((char *)this + 56), &v44);
        v26 = *((_QWORD *)this + 12);
        if ( !v26 || *(_DWORD *)(v26 + 168) )
        {
          v27 = v42;
          LODWORD(v28) = (_DWORD)v41;
          if ( v12 <= *((float *)&v41 + 1)
            || (v40 = v12,
                v38 = v41,
                v39 = v42,
                v29 = CDrawingContext::DrawSolidRectangle(a2, (struct MilRectF *)&v38),
                v9 = v29,
                v29 >= 0) )
          {
            if ( v43 <= v10
              || (v40 = v43,
                  v38 = (struct CDrawListCache *)__PAIR64__(LODWORD(v10), LODWORD(v28)),
                  v39 = v27,
                  v30 = CDrawingContext::DrawSolidRectangle(a2, (struct MilRectF *)&v38),
                  v9 = v30,
                  v30 >= 0) )
            {
              if ( v13 <= v28
                || (v40 = v10,
                    v38 = (struct CDrawListCache *)__PAIR64__(LODWORD(v12), LODWORD(v28)),
                    v39 = v13,
                    v31 = CDrawingContext::DrawSolidRectangle(a2, (struct MilRectF *)&v38),
                    v9 = v31,
                    v31 >= 0) )
              {
                if ( v27 > v11 && v10 > v12 )
                {
                  v40 = v10;
                  v38 = (struct CDrawListCache *)__PAIR64__(LODWORD(v12), LODWORD(v11));
                  v39 = v27;
                  v32 = CDrawingContext::DrawSolidRectangle(a2, (struct MilRectF *)&v38);
                  v9 = v32;
                  if ( v32 < 0 )
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v32, 0x391u);
                }
              }
              else
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0x383u);
              }
            }
            else
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0x377u);
            }
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0x36Bu);
          }
        }
      }
    }
  }
  return v9;
}
