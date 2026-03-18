/*
 * XREFs of ?ComputePrimitiveToTextureTransform@CSurfaceDrawListBrush@@QEBAJPEAVMatrix3x3@@@Z @ 0x18007AF68
 * Callers:
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z @ 0x180058A44 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800379F0 (-GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBV0@@Z @ 0x1800414C0 (--DMatrix3x3@@QEBA-AV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetSize@CDxHandleBitmapRealization@@UEBAXPEAI0@Z @ 0x180079B40 (-GetSize@CDxHandleBitmapRealization@@UEBAXPEAI0@Z.c)
 *     ?TryInvert@Matrix3x3@@SA_NAEBV1@PEAV1@@Z @ 0x1800C0A38 (-TryInvert@Matrix3x3@@SA_NAEBV1@PEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceDrawListBrush::ComputePrimitiveToTextureTransform(
        CSurfaceDrawListBrush *this,
        struct Matrix3x3 *a2)
{
  unsigned int v3; // edi
  __int64 v4; // rdx
  float *v5; // rcx
  __int64 v6; // r8
  CCompositionSurfaceBitmap *v7; // rcx
  __int64 (__fastcall *v8)(CCompositionSurfaceBitmap *, struct IBitmapRealization **); // rax
  int CurrentRenderingRealization; // eax
  void (__fastcall *v10)(CDxHandleBitmapRealization *, unsigned int *, unsigned int *); // rax
  float *v11; // rax
  float *v13; // rax
  float Float; // xmm1_4
  unsigned int v15; // [rsp+30h] [rbp-9h] BYREF
  unsigned int v16; // [rsp+34h] [rbp-5h] BYREF
  CDxHandleBitmapRealization *v17; // [rsp+38h] [rbp-1h] BYREF
  __int128 Float_low; // [rsp+40h] [rbp+7h] BYREF
  _BYTE v19[20]; // [rsp+50h] [rbp+17h]
  float v20[10]; // [rsp+68h] [rbp+2Fh] BYREF

  v3 = 0;
  *(_OWORD *)a2 = *(_OWORD *)((char *)this + 28);
  *((_OWORD *)a2 + 1) = *(_OWORD *)((char *)this + 44);
  *((_DWORD *)a2 + 8) = *((_DWORD *)this + 15);
  if ( Matrix3x3::TryInvert(a2, a2) )
  {
    if ( *(_DWORD *)(v6 + 24) == 2 )
    {
      v13 = Matrix3x3::operator*(v5, v20, (float *)(v6 + 68));
      *(_OWORD *)a2 = *(_OWORD *)v13;
      *((_OWORD *)a2 + 1) = *((_OWORD *)v13 + 1);
      *((float *)a2 + 8) = v13[8];
    }
    else
    {
      v17 = 0LL;
      v7 = *(CCompositionSurfaceBitmap **)(v6 + 144);
      v8 = *(__int64 (__fastcall **)(CCompositionSurfaceBitmap *, struct IBitmapRealization **))(*(_QWORD *)v7 + 72LL);
      if ( v8 == CCompositionSurfaceBitmap::GetCurrentRenderingRealization )
        CurrentRenderingRealization = CCompositionSurfaceBitmap::GetCurrentRenderingRealization(v7, &v17);
      else
        CurrentRenderingRealization = v8(v7, &v17);
      v3 = CurrentRenderingRealization;
      if ( CurrentRenderingRealization < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, CurrentRenderingRealization, 0x39u);
      }
      else
      {
        v10 = *(void (__fastcall **)(CDxHandleBitmapRealization *, unsigned int *, unsigned int *))(*(_QWORD *)v17 + 24LL);
        if ( v10 == CDxHandleBitmapRealization::GetSize )
          CDxHandleBitmapRealization::GetSize(v17, &v15, &v16);
        else
          v10(v17, &v15, &v16);
        *(_QWORD *)((char *)&Float_low + 4) = 0LL;
        HIDWORD(Float_low) = 0;
        *(_DWORD *)&v19[4] = 0;
        *(_DWORD *)&v19[16] = 1065353216;
        *(float *)&Float_low = 1.0 / (float)(int)v15;
        *(float *)v19 = 1.0 / (float)(int)v16;
        *(float *)&v19[8] = 0.0 - (float)(*(float *)&Float_low * 0.0);
        *(float *)&v19[12] = 0.0 - (float)(*(float *)v19 * 0.0);
        v11 = Matrix3x3::operator*((float *)a2, v20, (float *)&Float_low);
        *(_OWORD *)a2 = *(_OWORD *)v11;
        *((_OWORD *)a2 + 1) = *((_OWORD *)v11 + 1);
        *((float *)a2 + 8) = v11[8];
      }
      Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)&v17);
    }
  }
  else
  {
    Float = FInf._Float;
    Float_low = LODWORD(FInf._Float);
    *(_OWORD *)&v19[4] = _xmm;
    *(_OWORD *)v4 = LODWORD(FInf._Float);
    *(float *)v19 = Float;
    *(_OWORD *)(v4 + 16) = *(_OWORD *)v19;
    *(_DWORD *)(v4 + 32) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)_xmm, 12));
  }
  return v3;
}
