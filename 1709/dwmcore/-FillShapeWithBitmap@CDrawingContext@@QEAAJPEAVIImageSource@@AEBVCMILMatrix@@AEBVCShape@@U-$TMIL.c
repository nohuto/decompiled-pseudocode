/*
 * XREFs of ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@AEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18003DB18
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N55PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180099748 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18017D7D0 (-RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV-$TMilRect_.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180017080 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x180036C7C (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?ImageSourceToDrawListImageSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAPEAV2@@Z @ 0x180037114 (-ImageSourceToDrawListImageSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAPEA.c)
 *     ?FillRectanglesAsDrawList@CDrawingContext@@AEAAJPEBUMilRectF@@I0PEAVIImageSource@@PEBUD2D_MATRIX_3X2_F@@MW4Enum@MilCompositingMode@@_N@Z @ 0x18003EEF0 (-FillRectanglesAsDrawList@CDrawingContext@@AEAAJPEBUMilRectF@@I0PEAVIImageSource@@PEBUD2D_MATRIX.c)
 *     ?FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z @ 0x18003FE70 (-FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180041600 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::FillShapeWithBitmap(
        CDrawingContext *this,
        struct IImageSource *a2,
        struct CMILMatrix *a3,
        const struct CShape *a4,
        char a5)
{
  unsigned int v9; // edi
  CDrawingContext *v10; // rcx
  bool v11; // r8
  int v12; // eax
  struct IImageSource *v13; // rbx
  int v14; // eax
  int v15; // xmm0_4
  __int64 v16; // rax
  __m128 v17; // xmm2
  unsigned __int8 (__fastcall *v18)(const struct CShape *, unsigned __int64 *); // rax
  __m128 v19; // xmm1
  unsigned int v20; // edi
  SIZE_T v21; // rax
  CInputSinkStruct::InputQueueInfo *v22; // rax
  CInputSinkStruct::InputQueueInfo *v23; // rsi
  int v24; // eax
  CInputSinkStruct::InputQueueInfo *v25; // rcx
  int v27; // eax
  struct IImageSource *v28; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int64 v29; // [rsp+58h] [rbp-28h] BYREF
  _DWORD v30[4]; // [rsp+60h] [rbp-20h] BYREF
  unsigned __int64 v31; // [rsp+70h] [rbp-10h]

  v9 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(const struct CShape *))(*(_QWORD *)a4 + 16LL))(a4) )
  {
    if ( CDrawingContext::IsBounding(this) )
    {
      v27 = CDrawingContext::FillShapeForBounds(v10, a4, v11);
      v9 = v27;
      if ( v27 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0xCF6u);
    }
    else
    {
      v28 = 0LL;
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v28);
      v12 = CDrawingContext::ImageSourceToDrawListImageSource(this, a2, a3, &v28);
      v9 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xCD3u);
      }
      else
      {
        v13 = v28;
        if ( v28 )
        {
          v14 = CDrawingContext::ApplyRenderStateInternal(this, 0);
          v9 = v14;
          if ( v14 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0xCD7u);
          }
          else
          {
            v15 = *(_DWORD *)a3;
            v16 = *(_QWORD *)a4;
            v17 = (__m128)*((unsigned int *)a3 + 13);
            v30[1] = *((_DWORD *)a3 + 1);
            v18 = *(unsigned __int8 (__fastcall **)(const struct CShape *, unsigned __int64 *))(v16 + 40);
            v30[3] = *((_DWORD *)a3 + 5);
            v19 = (__m128)*((unsigned int *)a3 + 12);
            v30[0] = v15;
            v30[2] = *((_DWORD *)a3 + 4);
            v31 = _mm_unpacklo_ps(v19, v17).m128_u64[0];
            if ( v18(a4, &v29) )
            {
              v20 = v29;
              v21 = 16LL * (unsigned int)v29;
              if ( !is_mul_ok((unsigned int)v29, 0x10uLL) )
                v21 = -1LL;
              if ( !v21 )
                v21 = 1LL;
              v22 = (CInputSinkStruct::InputQueueInfo *)HeapAlloc(WPF::g_processHeap, 0, v21);
              v23 = v22;
              if ( v22 )
                `vector constructor iterator'(v22, 16LL, v20, COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
              else
                v23 = 0LL;
              if ( v23 )
              {
                (*(void (__fastcall **)(const struct CShape *, CInputSinkStruct::InputQueueInfo *, _QWORD))(*(_QWORD *)a4 + 48LL))(
                  a4,
                  v23,
                  (unsigned int)v29);
                v24 = CDrawingContext::FillRectanglesAsDrawList(
                        this,
                        v23,
                        (unsigned int)v29,
                        0LL,
                        v13,
                        v30,
                        LODWORD(FLOAT_1_0),
                        *((_DWORD *)this + 65),
                        a5 & 1);
                v9 = v24;
                if ( v24 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0xCECu);
                v25 = v23;
              }
              else
              {
                v9 = -2147024882;
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0xCE0u);
                v25 = 0LL;
              }
              WPF::ProcessHeapImpl::Free(v25);
            }
          }
        }
      }
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v28);
    }
  }
  return v9;
}
