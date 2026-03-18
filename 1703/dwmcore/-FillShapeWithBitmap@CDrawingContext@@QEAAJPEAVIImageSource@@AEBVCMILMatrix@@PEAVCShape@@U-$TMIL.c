/*
 * XREFs of ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@W4Enum@MilBitmapWrapMode@@_N@Z @ 0x18000E2FC
 * Callers:
 *     ?FillShapeWithBitmap@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVIImageSource@@AEBVCMILMatrix@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@W4Enum@MilBitmapWrapMode@@@Z @ 0x18001E3AC (-FillShapeWithBitmap@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVIImageSource@@AEBVCMILMatrix@@PE.c)
 *     ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@PEAVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18017676C (-RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@PEAVCShape@@PEAV-$TMilRect_.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x180001C80 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?FillShapeWithD2DBitmap@CDrawingContext@@QEAAJPEAUID2D1Bitmap1@@AEBVCMILMatrix@@PEAVCShape@@W4Enum@MilCompositingMode@@@Z @ 0x18000DF60 (-FillShapeWithD2DBitmap@CDrawingContext@@QEAAJPEAUID2D1Bitmap1@@AEBVCMILMatrix@@PEAVCShape@@W4En.c)
 *     ?FillRectanglesAsDrawList@CDrawingContext@@AEAAJPEBUMilRectF@@I0PEAVIImageSource@@PEBUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x18000F298 (-FillRectanglesAsDrawList@CDrawingContext@@AEAAJPEBUMilRectF@@I0PEAVIImageSource@@PEBUD2D_MATRIX.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800A1660 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x1800A1D6C (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?ImageSourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBVCMILMatrix@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1800A1DB4 (-ImageSourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBVCMILMatrix@@U-$TMILFlagsEnum.c)
 *     ?ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapSource@@@Z @ 0x1800A23E0 (-ImageSourceToBitmapSource@CDrawingContext@@AEAAJPEAVIImageSource@@PEBVCMILMatrix@@PEAV-$TMilRec.c)
 *     ?FillShapeWithBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBVCMILMatrix@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@W4Enum@MilBitmapWrapMode@@W47MilCompositingMode@@_N@Z @ 0x1800A76A8 (-FillShapeWithBitmapSource@CDrawingContext@@AEAAJPEAVIBitmapSource@@AEBVCMILMatrix@@PEAVCShape@@.c)
 *     ?FillShapeForBounds@CDrawingContext@@AEAAJPEAVCShape@@_N@Z @ 0x1800A8E40 (-FillShapeForBounds@CDrawingContext@@AEAAJPEAVCShape@@_N@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800B3474 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800C22F4 (-D2DInterpolationModeFromMilInterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapIn.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::FillShapeWithBitmap(
        CDrawingContext *this,
        CCachedVisualImage *a2,
        __int64 a3,
        struct CShape *a4,
        int a5,
        __int64 a6,
        int a7,
        char a8)
{
  unsigned int v12; // edi
  const struct MilRectF *v13; // r15
  struct CColorKey *v14; // rdx
  CDrawingContext *v15; // rcx
  BOOL v16; // r8d
  __int64 v17; // r9
  int v19; // eax
  FLOAT v20; // xmm0_4
  __int64 v21; // rax
  __m128 v22; // xmm2
  void (__fastcall *v23)(struct CShape *, unsigned int *); // rax
  __m128 v24; // xmm1
  unsigned int v25; // ebx
  CInputSinkStruct::InputQueueInfo *v26; // rax
  enum D2D1_INTERPOLATION_MODE v27; // eax
  unsigned int v28; // [rsp+20h] [rbp-71h]
  int v29; // [rsp+30h] [rbp-61h]
  enum D2D1_ANTIALIAS_MODE v30; // [rsp+38h] [rbp-59h]
  enum D2D1_PRIMITIVE_BLEND v31; // [rsp+48h] [rbp-49h]
  unsigned int v32; // [rsp+50h] [rbp-41h] BYREF
  struct IBitmapSource *v33; // [rsp+58h] [rbp-39h] BYREF
  __int64 v34; // [rsp+60h] [rbp-31h]
  __int64 v35; // [rsp+68h] [rbp-29h]
  struct D2D_MATRIX_3X2_F v36; // [rsp+70h] [rbp-21h] BYREF

  v35 = a6;
  v33 = 0LL;
  v12 = 0;
  v34 = 0LL;
  v13 = 0LL;
  if ( CDrawingContext::IsBounding(this) )
  {
    v19 = CDrawingContext::FillShapeForBounds(v15, a4, v16);
    v12 = v19;
    if ( v19 < 0 )
    {
      v28 = 3774;
      goto LABEL_22;
    }
  }
  else if ( a8 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(struct CShape *))(*(_QWORD *)v17 + 16LL))(a4) )
    {
      v19 = CDrawingContext::ApplyRenderStateInternal(this, 0);
      v12 = v19;
      if ( v19 < 0 )
      {
        v28 = 3707;
      }
      else
      {
        v20 = *(float *)a3;
        v21 = *(_QWORD *)a4;
        v22 = (__m128)*(unsigned int *)(a3 + 52);
        v36.m12 = *(FLOAT *)(a3 + 4);
        v23 = *(void (__fastcall **)(struct CShape *, unsigned int *))(v21 + 40);
        v36.m22 = *(FLOAT *)(a3 + 20);
        v24 = (__m128)*(unsigned int *)(a3 + 48);
        v36.m11 = v20;
        v36.m21 = *(FLOAT *)(a3 + 16);
        *(_QWORD *)&v36.m[2][0] = _mm_unpacklo_ps(v24, v22).m128_u64[0];
        v23(a4, &v32);
        v25 = v32;
        v26 = (CInputSinkStruct::InputQueueInfo *)operator new(saturated_mul(v32, 0x10uLL));
        v13 = v26;
        if ( v26 )
          `vector constructor iterator'(
            v26,
            0x10uLL,
            v25,
            (void *(*)(void *))COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
        else
          v13 = 0LL;
        if ( !v13 )
        {
          v12 = -2147024882;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xE84u);
          goto LABEL_4;
        }
        (*(void (__fastcall **)(struct CShape *, const struct MilRectF *, _QWORD))(*(_QWORD *)a4 + 48LL))(a4, v13, v32);
        v27 = (unsigned int)D2DInterpolationModeFromMilInterpolationMode(*((unsigned int *)this + 65));
        v19 = CDrawingContext::FillRectanglesAsDrawList(this, v13, v32, 0LL, a2, &v36, *(float *)&v29, v30, v27, v31);
        v12 = v19;
        if ( v19 >= 0 )
          goto LABEL_4;
        v28 = 3728;
      }
LABEL_22:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, v28);
    }
  }
  else
  {
    CDrawingContext::ImageSourceToD2DBitmap((_DWORD)v15, (_DWORD)a2, v16, a5, v14);
    v19 = CDrawingContext::ImageSourceToBitmapSource(this, a2, &v33);
    v12 = v19;
    if ( v19 < 0 )
    {
      v28 = 3757;
      goto LABEL_22;
    }
    if ( v33 )
    {
      v19 = CDrawingContext::FillShapeWithBitmapSource(this, a5, v35, v29, *((_DWORD *)this + 72), 0);
      v12 = v19;
      if ( v19 < 0 )
      {
        v28 = 3767;
        goto LABEL_22;
      }
    }
  }
LABEL_4:
  WPF::ProcessHeapImpl::Free(v13);
  ReleaseInterfaceNoNULL<ID2D1Ink>((__int64)v33);
  ReleaseInterfaceNoNULL<CD2DPencil>(v34);
  return v12;
}
