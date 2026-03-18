/*
 * XREFs of ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18000AD30
 * Callers:
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18008F660 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 * Callees:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180008CB0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?EnsureDrawListGeneratorIfNeeded@CCommandListBitmapRepresentation@@QEAAJPEBVCComposition@@PEAVID2DContextOwner@@PEAVID2DContext@@@Z @ 0x180009EA0 (-EnsureDrawListGeneratorIfNeeded@CCommandListBitmapRepresentation@@QEAAJPEBVCComposition@@PEAVID.c)
 *     ?BoundsFromLayoutSize@CCompositionSurfaceBitmap@@AEBA_NPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000A8B0 (-BoundsFromLayoutSize@CCompositionSurfaceBitmap@@AEBA_NPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRect.c)
 *     ?GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000AA10 (-GetTransform@CCompositionSurfaceBitmap@@UEAA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?AppendSizePreferenceTransform@CCompositionSurfaceBitmap@@UEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCMILMatrix@@@Z @ 0x180037A90 (-AppendSizePreferenceTransform@CCompositionSurfaceBitmap@@UEAA_NAEBV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006FBC0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::GenerateDrawList(
        struct CPrimitiveGroupDrawListGenerator **this,
        struct CDrawingContext *a2,
        struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  char Transform; // r14
  struct ID2DContext *v9; // r9
  int v10; // eax
  unsigned int v11; // ebx
  CPrimitiveGroupDrawListGenerator *v12; // rcx
  int v13; // eax
  int DrawList; // eax
  _QWORD v16[6]; // [rsp+30h] [rbp-59h] BYREF
  unsigned int v17; // [rsp+60h] [rbp-29h]
  unsigned int v18; // [rsp+64h] [rbp-25h]
  int v19; // [rsp+70h] [rbp-19h]
  struct D2D_MATRIX_3X2_F v20; // [rsp+80h] [rbp-9h] BYREF
  _QWORD v21[2]; // [rsp+98h] [rbp+Fh] BYREF

  v19 = 0;
  Transform = CCompositionSurfaceBitmap::GetTransform((__int64)(this + 7), (__int64)v16, v21);
  if ( CCompositionSurfaceBitmap::BoundsFromLayoutSize((__int64)this, (float *)a3, &v20) )
    Transform |= CCompositionSurfaceBitmap::AppendSizePreferenceTransform(this + 7, &v20, v16);
  if ( !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(v21) )
  {
    v10 = CCommandListBitmapRepresentation::EnsureDrawListGeneratorIfNeeded(
            this + 11,
            this[2],
            (struct ID2DContextOwner *)(((unsigned __int64)a2 + 8) & -(__int64)(a2 != 0LL)),
            v9);
    v11 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x3E2u);
      return v11;
    }
    v12 = this[49];
    if ( v12 )
    {
      if ( Transform )
      {
        *(_QWORD *)&v20.m11 = v16[0];
        *(_QWORD *)&v20.m[1][0] = v16[2];
        *(_QWORD *)&v20.m[2][0] = _mm_unpacklo_ps((__m128)v17, (__m128)v18).m128_u64[0];
        v13 = CPrimitiveGroupDrawListGenerator::GenerateDrawList(v12, a2, &v20, a4);
        v11 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x3F7u);
          return v11;
        }
      }
      else
      {
        DrawList = CPrimitiveGroupDrawListGenerator::GenerateDrawList(v12, a2, 0LL, a4);
        v11 = DrawList;
        if ( DrawList < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, DrawList, 0x3FBu);
          return v11;
        }
      }
    }
  }
  return 0;
}
