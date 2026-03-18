/*
 * XREFs of ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180008334
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N55PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180090490 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801ADC70 (-RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV-$TMilRect_.c)
 * Callees:
 *     ?GetRectangles@CRegionShape@@UEBA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x18000B7B0 (-GetRectangles@CRegionShape@@UEBA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rec.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsRectangles@CRegionShape@@UEBA_NPEAI@Z @ 0x180063CE0 (-IsRectangles@CRegionShape@@UEBA_NPEAI@Z.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x1800665E4 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180066CF0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?ImageSourceToDrawListImageSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAPEAV2@@Z @ 0x1800678EC (-ImageSourceToDrawListImageSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAPEA.c)
 *     ?FillRectanglesAsDrawList@CDrawingContext@@AEAAJPEBUMilRectF@@I0PEAVIImageSource@@PEBUD2D_MATRIX_3X2_F@@MW4Enum@MilCompositingMode@@_N@Z @ 0x18006D274 (-FillRectanglesAsDrawList@CDrawingContext@@AEAAJPEBUMilRectF@@I0PEAVIImageSource@@PEBUD2D_MATRIX.c)
 *     ?FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z @ 0x18006DF14 (-FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ @ 0x180089E20 (-InternalRelease@-$ComPtr@VIImageSource@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsEmpty@CShape@@UEBA_NXZ @ 0x18008C5A0 (-IsEmpty@CShape@@UEBA_NXZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800CD620 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::FillShapeWithBitmap(
        CDrawingContext *this,
        struct IImageSource *a2,
        const struct CMILMatrix *a3,
        CShape *a4,
        char a5)
{
  unsigned int v6; // edi
  bool (__fastcall *v10)(CShape *__hidden); // rax
  bool IsEmpty; // al
  CDrawingContext *v12; // rcx
  bool v13; // r8
  int v14; // eax
  struct IImageSource *v15; // rbx
  int v16; // xmm0_4
  __int64 v17; // rax
  int v18; // xmm1_4
  int v19; // xmm0_4
  bool (__fastcall *v20)(CRegionShape *__hidden, unsigned int *); // rax
  __int64 v21; // xmm1_8
  bool IsRectangles; // al
  unsigned int v23; // edi
  SIZE_T v24; // rax
  CInputSinkStruct::InputQueueInfo *v25; // rax
  CInputSinkStruct::InputQueueInfo *v26; // rsi
  void (__fastcall *v27)(CShape *, CInputSinkStruct::InputQueueInfo *, _QWORD); // rax
  int v28; // eax
  int v30; // eax
  unsigned int v31; // [rsp+20h] [rbp-60h]
  unsigned int v32; // [rsp+50h] [rbp-30h] BYREF
  struct IImageSource *v33; // [rsp+58h] [rbp-28h] BYREF
  _DWORD v34[4]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v35; // [rsp+70h] [rbp-10h]

  v6 = 0;
  v10 = *(bool (__fastcall **)(CShape *__hidden))(*(_QWORD *)a4 + 16LL);
  if ( v10 == CShape::IsEmpty )
    IsEmpty = CShape::IsEmpty(a4);
  else
    IsEmpty = v10(a4);
  if ( !IsEmpty )
  {
    if ( !CDrawingContext::IsBounding(this) )
    {
      v33 = 0LL;
      Microsoft::WRL::ComPtr<IImageSource>::InternalRelease(&v33);
      v14 = CDrawingContext::ImageSourceToDrawListImageSource(this, a2, a3, &v33);
      v6 = v14;
      if ( v14 < 0 )
      {
        v31 = 3338;
      }
      else
      {
        v15 = v33;
        if ( !v33 )
        {
LABEL_23:
          Microsoft::WRL::ComPtr<IImageSource>::InternalRelease(&v33);
          return v6;
        }
        v14 = CDrawingContext::ApplyRenderStateInternal(this, 0);
        v6 = v14;
        if ( v14 >= 0 )
        {
          v16 = *(_DWORD *)a3;
          v17 = *(_QWORD *)a4;
          v34[1] = *((_DWORD *)a3 + 1);
          v18 = *((_DWORD *)a3 + 5);
          v34[0] = v16;
          v19 = *((_DWORD *)a3 + 4);
          v20 = *(bool (__fastcall **)(CRegionShape *__hidden, unsigned int *))(v17 + 40);
          v34[3] = v18;
          v21 = *((_QWORD *)a3 + 6);
          v34[2] = v19;
          v35 = v21;
          if ( v20 == CRegionShape::IsRectangles )
            IsRectangles = CRegionShape::IsRectangles(a4, &v32);
          else
            IsRectangles = v20(a4, &v32);
          if ( IsRectangles )
          {
            v23 = v32;
            v24 = 16LL * v32;
            if ( !is_mul_ok(v32, 0x10uLL) )
              v24 = -1LL;
            if ( !v24 )
              v24 = 1LL;
            v25 = (CInputSinkStruct::InputQueueInfo *)HeapAlloc(WPF::g_processHeap, 0, v24);
            v26 = v25;
            if ( v25 )
              `vector constructor iterator'(
                v25,
                0x10uLL,
                v23,
                (void *(*)(void *))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
            else
              v26 = 0LL;
            if ( v26 )
            {
              v27 = *(void (__fastcall **)(CShape *, CInputSinkStruct::InputQueueInfo *, _QWORD))(*(_QWORD *)a4 + 48LL);
              if ( (char *)v27 == (char *)CRegionShape::GetRectangles )
                CRegionShape::GetRectangles(a4, v26, v32);
              else
                v27(a4, v26, v32);
              v28 = CDrawingContext::FillRectanglesAsDrawList(
                      this,
                      v26,
                      v32,
                      0LL,
                      v15,
                      v34,
                      LODWORD(FLOAT_1_0),
                      *((_DWORD *)this + 65),
                      a5 & 1);
              v6 = v28;
              if ( v28 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0xD23u);
              operator delete(v26);
            }
            else
            {
              v6 = -2147024882;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xD17u);
            }
          }
          goto LABEL_23;
        }
        v31 = 3342;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, v31);
      goto LABEL_23;
    }
    v30 = CDrawingContext::FillShapeForBounds(v12, a4, v13);
    v6 = v30;
    if ( v30 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v30, 0xD2Du);
  }
  return v6;
}
