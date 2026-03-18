/*
 * XREFs of ?CalculatePrimitiveToBitmap@CPrimitiveGroupDrawListGenerator@@CAJPEAVIImageSource@@AEBUD2D_MATRIX_3X2_F@@PEAVMatrix3x3@@@Z @ 0x18015C518
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180008CB0 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveGroupDrawListGenerator::CalculatePrimitiveToBitmap(
        struct IImageSource *a1,
        const struct D2D_MATRIX_3X2_F *a2,
        struct Matrix3x3 *a3)
{
  int v5; // eax
  unsigned int v6; // edi
  float m21; // xmm12_4
  float v8; // xmm2_4
  float v9; // xmm11_4
  float v10; // xmm9_4
  float v11; // xmm12_4
  float dx; // xmm8_4
  float v13; // xmm10_4
  float v14; // xmm2_4
  float v15; // xmm8_4
  int v17; // [rsp+30h] [rbp-98h] BYREF
  int v18; // [rsp+34h] [rbp-94h] BYREF
  __int64 v19; // [rsp+38h] [rbp-90h] BYREF

  v19 = 0LL;
  v5 = (*(__int64 (__fastcall **)(struct IImageSource *, __int64 *))(*(_QWORD *)a1 + 72LL))(a1, &v19);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x269u);
  }
  else
  {
    (*(void (__fastcall **)(__int64, int *, int *))(*(_QWORD *)v19 + 24LL))(v19, &v17, &v18);
    m21 = a2->m21;
    v8 = m21 * 0.0;
    v9 = (float)(a2->m11 * (float)v17) + (float)(a2->m12 * 0.0);
    v10 = (float)(a2->m12 * (float)v18) + (float)(a2->m11 * 0.0);
    v11 = (float)(m21 * (float)v17) + (float)(a2->m22 * 0.0);
    dx = a2->dx;
    v13 = (float)(a2->m22 * (float)v18) + v8;
    v14 = (float)((float)(a2->dy * (float)v18) + (float)(dx * 0.0)) + (float)(0.0 - (float)((float)v18 * 0.0));
    v15 = (float)((float)(dx * (float)v17) + (float)(a2->dy * 0.0)) + (float)(0.0 - (float)((float)v17 * 0.0));
    if ( a3 )
    {
      *((_DWORD *)a3 + 2) = 0;
      *((_DWORD *)a3 + 5) = 0;
      *(float *)a3 = v9;
      *((float *)a3 + 1) = v10;
      *((float *)a3 + 3) = v11;
      *((float *)a3 + 4) = v13;
      *((float *)a3 + 6) = v15;
      *((float *)a3 + 7) = v14;
      *((_DWORD *)a3 + 8) = 1065353216;
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(&v19);
  return v6;
}
