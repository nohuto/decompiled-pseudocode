/*
 * XREFs of ?FillShapeWithD2DBitmap@CDrawingContext@@QEAAJPEAUID2D1Bitmap1@@AEBVCMILMatrix@@PEAVCShape@@W4Enum@MilCompositingMode@@@Z @ 0x18000DF60
 * Callers:
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@W4Enum@MilBitmapWrapMode@@_N@Z @ 0x18000E2FC (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@AEBVCMILMatrix@@PEAVCShape@@U-$TMIL.c)
 *     ?RestoreState@CClippedBitmapLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180157AE0 (-RestoreState@CClippedBitmapLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x18000D164 (-PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800A1660 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?IsIn3DMode@CDrawingContext@@UEBA_NXZ @ 0x1800A1D90 (-IsIn3DMode@CDrawingContext@@UEBA_NXZ.c)
 *     ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800C22F4 (-D2DInterpolationModeFromMilInterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapIn.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?PushClippedBitmapLayer@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@AEBVCMILMatrix@@PEAVCShape@@@Z @ 0x18014D2B0 (-PushClippedBitmapLayer@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@AEBVCMILMatrix@@PEAVCShape@@@Z.c)
 */

__int64 __fastcall CDrawingContext::FillShapeWithD2DBitmap(
        __int64 a1,
        struct ID2D1Bitmap1 *a2,
        const struct CMILMatrix *a3,
        struct CShape *a4,
        int a5)
{
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // eax
  int v12; // edx
  int v13; // eax
  int v15; // eax
  int v16; // eax
  __int128 v17; // [rsp+60h] [rbp-78h]
  __int128 v18; // [rsp+78h] [rbp-60h] BYREF
  unsigned __int64 v19; // [rsp+88h] [rbp-50h]

  v9 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(struct CShape *))(*(_QWORD *)a4 + 16LL))(a4) )
  {
    if ( a5 < 0 || a5 > 1 && a5 != 4 || CDrawingContext::IsIn3DMode((CDrawingContext *)(a1 + 8)) )
    {
      v15 = CDrawingContext::PushClippedBitmapLayer((CDrawingContext *)a1, a2, a3, a4);
      v9 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x1040u);
      }
      else
      {
        v16 = CDrawingContext::PopLayerInternal(a1);
        v9 = v16;
        if ( v16 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x1046u);
      }
    }
    else
    {
      v10 = CDrawingContext::ApplyRenderStateInternal((CDrawingContext *)a1, 0);
      v9 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x104Cu);
      }
      else
      {
        DWORD1(v17) = *((_DWORD *)a3 + 1);
        HIDWORD(v17) = *((_DWORD *)a3 + 5);
        LODWORD(v17) = *(_DWORD *)a3;
        DWORD2(v17) = *((_DWORD *)a3 + 4);
        v19 = _mm_unpacklo_ps((__m128)*((unsigned int *)a3 + 12), (__m128)*((unsigned int *)a3 + 13)).m128_u64[0];
        v18 = v17;
        v11 = D2DInterpolationModeFromMilInterpolationMode(*(unsigned int *)(a1 + 260));
        v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct CShape *, struct ID2D1Bitmap1 *, __int128 *, _DWORD, bool, int, _DWORD, int))(**(_QWORD **)(a1 + 392) + 120LL))(
                *(_QWORD *)(a1 + 392),
                (a1 + 8) & -(__int64)(a1 != 0),
                a4,
                a2,
                &v18,
                LODWORD(FLOAT_1_0),
                *(_DWORD *)(a1 + 264) != 0,
                v11,
                0,
                v12);
        v9 = v13;
        if ( v13 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x1058u);
      }
    }
  }
  return v9;
}
