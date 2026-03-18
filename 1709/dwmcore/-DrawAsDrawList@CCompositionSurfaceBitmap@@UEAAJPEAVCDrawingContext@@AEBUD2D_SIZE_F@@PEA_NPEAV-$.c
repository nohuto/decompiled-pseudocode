/*
 * XREFs of ?DrawAsDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1800293F0
 * Callers:
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180029760 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180053BB0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1800231D0 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 *     ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x180028408 (-EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z.c)
 *     ?BoundsFromLayoutSize@CCompositionSurfaceBitmap@@AEBA_NPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800287B4 (-BoundsFromLayoutSize@CCompositionSurfaceBitmap@@AEBA_NPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRect.c)
 *     ?GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180028CA0 (-GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z @ 0x18003B044 (-DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180040290 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x1800407C0 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?EtwLogCurrentState@CDrawingContext@@QEAAXXZ @ 0x1800407E0 (-EtwLogCurrentState@CDrawingContext@@QEAAXXZ.c)
 *     ?IsOverlayRequired@CDxHandleBitmapRealization@@UEBA_NXZ @ 0x18004D1F0 (-IsOverlayRequired@CDxHandleBitmapRealization@@UEBA_NXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059FB0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?AppendSizePreferenceTransform@CCompositionSurfaceBitmap@@UEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCMILMatrix@@@Z @ 0x18015DAC0 (-AppendSizePreferenceTransform@CCompositionSurfaceBitmap@@UEAA_NAEBV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?GetBorderColor@CCompositionSurfaceBitmap@@UEBA?AU_D3DCOLORVALUE@@XZ @ 0x18015DE40 (-GetBorderColor@CCompositionSurfaceBitmap@@UEBA-AU_D3DCOLORVALUE@@XZ.c)
 *     McTemplateU0pppffff @ 0x18015E174 (McTemplateU0pppffff.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::DrawAsDrawList(
        CSpriteVisualContent *this,
        struct CDrawingContext *a2,
        struct D2D_SIZE_F *a3,
        __int64 a4,
        int a5,
        struct CDrawListCache *a6)
{
  unsigned int v10; // ebx
  float v11; // xmm8_4
  float v12; // xmm10_4
  float v13; // xmm9_4
  float v14; // xmm11_4
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rax
  CDxHandleBitmapRealization *v18; // rcx
  bool (__fastcall *v19)(CDxHandleBitmapRealization *__hidden); // rax
  char IsOverlayRequired; // al
  int v21; // eax
  unsigned int CurrentVisual; // eax
  int v24; // edx
  int v25; // ecx
  int v26; // eax
  __int64 v27; // rax
  float v28; // xmm6_4
  float v29; // xmm7_4
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  float v34; // [rsp+38h] [rbp-C8h]
  float v35; // [rsp+40h] [rbp-C0h]
  bool v36; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v37[64]; // [rsp+60h] [rbp-A0h] BYREF
  int v38; // [rsp+A0h] [rbp-60h]
  struct CDrawListCache *v39; // [rsp+B0h] [rbp-50h] BYREF
  float v40; // [rsp+B8h] [rbp-48h]
  float v41; // [rsp+BCh] [rbp-44h]
  struct CDrawListCache *v42; // [rsp+C0h] [rbp-40h] BYREF
  float v43; // [rsp+C8h] [rbp-38h]
  float v44; // [rsp+CCh] [rbp-34h]
  struct _D3DCOLORVALUE v45; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v46; // [rsp+E0h] [rbp-20h] BYREF
  float v47; // [rsp+E8h] [rbp-18h]
  float v48; // [rsp+ECh] [rbp-14h]

  v39 = a6;
  v10 = 0;
  if ( CCompositionSurfaceBitmap::EnsureBitmapRealization(this, 0) )
  {
    v38 = 0;
    CCompositionSurfaceBitmap::GetTransform((__int64)this + 56, (__int64)v37, &v46);
    if ( CCompositionSurfaceBitmap::BoundsFromLayoutSize((__int64)this, (float *)a3, &v45) )
      CCompositionSurfaceBitmap::AppendSizePreferenceTransform((char *)this + 56, &v45, v37);
    if ( v47 > *(float *)&v46 && v48 > *((float *)&v46 + 1) )
    {
      CMILMatrix::Transform2DBoundsHelper<0>(v37, &v46, &v42);
      CDrawingContext::EtwLogCurrentState(a2);
      v11 = v44;
      v12 = v43;
      v13 = *((float *)&v42 + 1);
      v14 = *(float *)&v42;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
      {
        CurrentVisual = (unsigned int)CDrawingContext::GetCurrentVisual((struct CDrawingContext *)((char *)a2 + 8));
        v35 = v11 - v13;
        v34 = v12 - v14;
        McTemplateU0pppffff(v25, v24, CurrentVisual, (_DWORD)this, (char)this, 0, 0, SLOBYTE(v34), SLOBYTE(v35));
      }
      v15 = *((_QWORD *)this + 12);
      if ( v15 && (*(_BYTE *)(v15 + 268) & 2) != 0 && *(_BYTE *)(*((_QWORD *)this + 2) + 1296LL) )
      {
        v26 = CDrawingContext::DrawSolidRectangle(a2, (struct MilRectF *)&v42);
        v10 = v26;
        if ( v26 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0x345u);
          return v10;
        }
        v11 = v44;
        v12 = v43;
        v13 = *((float *)&v42 + 1);
        v14 = *(float *)&v42;
      }
      else
      {
        v36 = 0;
        v16 = CDrawingContext::DrawAsOverlay(
                a2,
                (struct ISwapChainContent *)(((unsigned __int64)this + 56) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
                &v36);
        v10 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x34Cu);
          return v10;
        }
        if ( !v36 )
        {
          v17 = *((_QWORD *)this + 12);
          if ( !v17
            || ((v18 = (CDxHandleBitmapRealization *)(v17 + 144),
                 v19 = *(bool (__fastcall **)(CDxHandleBitmapRealization *__hidden))(*(_QWORD *)(v17 + 144) + 64LL),
                 v19 != CDxHandleBitmapRealization::IsOverlayRequired)
              ? (IsOverlayRequired = ((__int64 (*)(void))v19)())
              : (IsOverlayRequired = CDxHandleBitmapRealization::IsOverlayRequired(v18)),
                !IsOverlayRequired || *(_DWORD *)(*((_QWORD *)this + 11) + 104LL) <= 1u) )
          {
            v21 = CContent::DrawAsDrawList(this, (const struct CVisualTree **)a2, a3, a4, a5, v39);
            v10 = v21;
            if ( v21 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x358u);
              return v10;
            }
          }
        }
      }
      if ( CCompositionSurfaceBitmap::BoundsFromLayoutSize((__int64)this, (float *)a3, &v42) )
      {
        CCompositionSurfaceBitmap::GetBorderColor((CSpriteVisualContent *)((char *)this + 56), &v45);
        v27 = *((_QWORD *)this + 12);
        if ( !v27 || *(_DWORD *)(v27 + 168) )
        {
          v28 = v43;
          LODWORD(v29) = (_DWORD)v42;
          if ( v13 <= *((float *)&v42 + 1)
            || (v41 = v13,
                v39 = v42,
                v40 = v43,
                v30 = CDrawingContext::DrawSolidRectangle(a2, (struct MilRectF *)&v39),
                v10 = v30,
                v30 >= 0) )
          {
            if ( v44 <= v11
              || (v41 = v44,
                  v39 = (struct CDrawListCache *)__PAIR64__(LODWORD(v11), LODWORD(v29)),
                  v40 = v28,
                  v31 = CDrawingContext::DrawSolidRectangle(a2, (struct MilRectF *)&v39),
                  v10 = v31,
                  v31 >= 0) )
            {
              if ( v14 <= v29
                || (v41 = v11,
                    v39 = (struct CDrawListCache *)__PAIR64__(LODWORD(v13), LODWORD(v29)),
                    v40 = v14,
                    v32 = CDrawingContext::DrawSolidRectangle(a2, (struct MilRectF *)&v39),
                    v10 = v32,
                    v32 >= 0) )
              {
                if ( v28 > v12 && v11 > v13 )
                {
                  v41 = v11;
                  v39 = (struct CDrawListCache *)__PAIR64__(LODWORD(v13), LODWORD(v12));
                  v40 = v28;
                  v33 = CDrawingContext::DrawSolidRectangle(a2, (struct MilRectF *)&v39);
                  v10 = v33;
                  if ( v33 < 0 )
                    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v33, 0x397u);
                }
              }
              else
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v32, 0x389u);
              }
            }
            else
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0x37Du);
            }
          }
          else
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0x371u);
          }
        }
      }
    }
  }
  return v10;
}
