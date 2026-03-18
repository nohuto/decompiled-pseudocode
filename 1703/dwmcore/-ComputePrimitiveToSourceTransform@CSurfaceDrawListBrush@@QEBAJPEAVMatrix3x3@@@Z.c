/*
 * XREFs of ?ComputePrimitiveToSourceTransform@CSurfaceDrawListBrush@@QEBAJPEAVMatrix3x3@@@Z @ 0x18015FA94
 * Callers:
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z @ 0x180058A44 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEAAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?ConfigureIntermediateFromInput@CBrushRenderingGraph@@AEBAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x1801800A0 (-ConfigureIntermediateFromInput@CBrushRenderingGraph@@AEBAXAEBUIntermediateConfigurationInputs@1.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBV0@@Z @ 0x1800414C0 (--DMatrix3x3@@QEBA-AV0@AEBV0@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?TryInvert@Matrix3x3@@SA_NAEBV1@PEAV1@@Z @ 0x1800C0A38 (-TryInvert@Matrix3x3@@SA_NAEBV1@PEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceDrawListBrush::ComputePrimitiveToSourceTransform(
        CSurfaceDrawListBrush *this,
        struct Matrix3x3 *a2)
{
  unsigned int v4; // esi
  __int64 v5; // rdx
  float Float; // xmm1_4
  __int64 v7; // rcx
  int v8; // eax
  float *v9; // rax
  float *v10; // rax
  __int64 v12; // [rsp+30h] [rbp-39h] BYREF
  int v13; // [rsp+38h] [rbp-31h] BYREF
  int v14; // [rsp+3Ch] [rbp-2Dh] BYREF
  float v15; // [rsp+40h] [rbp-29h] BYREF
  __int64 v16; // [rsp+44h] [rbp-25h]
  int v17; // [rsp+4Ch] [rbp-1Dh]
  _BYTE v18[20]; // [rsp+50h] [rbp-19h]
  float v19[9]; // [rsp+68h] [rbp-1h] BYREF
  float v20[13]; // [rsp+8Ch] [rbp+23h] BYREF

  v4 = 0;
  *(_OWORD *)a2 = *(_OWORD *)((char *)this + 28);
  *((_OWORD *)a2 + 1) = *(_OWORD *)((char *)this + 44);
  *((_DWORD *)a2 + 8) = *((_DWORD *)this + 15);
  if ( Matrix3x3::TryInvert(a2, a2) )
  {
    if ( *((_DWORD *)this + 6) == 2 )
    {
      v7 = *((_QWORD *)this + 18);
      v12 = 0LL;
      v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 72LL))(v7, &v12);
      v4 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x62u);
      }
      else
      {
        (*(void (__fastcall **)(__int64, int *, int *))(*(_QWORD *)v12 + 24LL))(v12, &v13, &v14);
        v16 = 0LL;
        v17 = 0;
        *(_DWORD *)&v18[4] = 0;
        v15 = (float)v13;
        *(float *)v18 = (float)v14;
        *(float *)&v18[8] = 0.0 - (float)((float)v13 * 0.0);
        *(float *)&v18[16] = FLOAT_1_0;
        *(float *)&v18[12] = 0.0 - (float)((float)v14 * 0.0);
        v9 = Matrix3x3::operator*((float *)a2, v19, (float *)this + 17);
        v10 = Matrix3x3::operator*(v9, v20, &v15);
        *(_OWORD *)a2 = *(_OWORD *)v10;
        *((_OWORD *)a2 + 1) = *((_OWORD *)v10 + 1);
        *((float *)a2 + 8) = v10[8];
      }
      Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(&v12);
    }
  }
  else
  {
    Float = FInf._Float;
    *(_OWORD *)&v18[4] = _xmm;
    *(_OWORD *)v5 = LODWORD(FInf._Float);
    *(float *)v18 = Float;
    *(_OWORD *)(v5 + 16) = *(_OWORD *)v18;
    *(_DWORD *)(v5 + 32) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)_xmm, 12));
  }
  return v4;
}
