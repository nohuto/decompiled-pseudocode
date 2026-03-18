/*
 * XREFs of ?GetSwapChainSize@CSurfaceBrush@@AEBAJPEAUD2D_SIZE_F@@PEAUD2D_RECT_F@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180161D78
 * Callers:
 *     ?ComputeLayout@CSurfaceBrush@@AEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAULayoutData@1@PEAPEAVCShape@@@Z @ 0x180038180 (-ComputeLayout@CSurfaceBrush@@AEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAULayoutData@1@PEAPEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::GetSwapChainSize(
        CSurfaceBrush *this,
        struct D2D_SIZE_F *a2,
        struct D2D_RECT_F *a3,
        struct D2D_MATRIX_3X2_F *a4)
{
  __int64 v4; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  char v10; // al
  float bottom; // xmm5_4
  float right; // xmm4_4
  bool v13; // al
  __int128 v14; // xmm0
  unsigned __int64 v15; // xmm1_8
  FLOAT left; // xmm7_4
  FLOAT top; // xmm8_4
  __m128 v18; // xmm2
  __m128 v19; // xmm1
  __int64 v21; // [rsp+38h] [rbp-99h] BYREF
  __int128 v22; // [rsp+40h] [rbp-91h]
  float v23; // [rsp+58h] [rbp-79h] BYREF
  float v24; // [rsp+5Ch] [rbp-75h]
  float v25; // [rsp+68h] [rbp-69h]
  float v26; // [rsp+6Ch] [rbp-65h]
  float v27; // [rsp+88h] [rbp-49h]
  float v28; // [rsp+8Ch] [rbp-45h]
  int v29; // [rsp+98h] [rbp-39h]
  struct D2D_RECT_F v30; // [rsp+A8h] [rbp-29h] BYREF
  struct D2D_RECT_F v31; // [rsp+C0h] [rbp-11h] BYREF

  v4 = *((_QWORD *)this + 13);
  v29 = 0;
  v21 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 72LL))(v4, &v21);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x254u);
    goto LABEL_15;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, float *, struct D2D_RECT_F *))(*(_QWORD *)v21 + 32LL))(v21, &v23, &v31);
  bottom = v31.bottom;
  right = v31.right;
  v13 = v10 == 0;
  if ( a3 )
  {
    v30 = v31;
    *a3 = v31;
  }
  if ( v13 )
  {
    *(_QWORD *)&v30.left = __PAIR64__(LODWORD(bottom), LODWORD(right));
    if ( a4 )
    {
      v14 = _xmm;
      v15 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
LABEL_9:
      *(_OWORD *)&a4->m11 = v14;
      *(_QWORD *)&a4->m[2][0] = v15;
    }
  }
  else
  {
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)&v23, (__int64)&v31, &v30.left);
    left = v30.left;
    top = v30.top;
    right = v30.right - v30.left;
    bottom = v30.bottom - v30.top;
    v30.left = v30.right - v30.left;
    v30.top = v30.bottom - v30.top;
    if ( a4 )
    {
      v18 = (__m128)LODWORD(v27);
      *(float *)&v22 = (float)(v24 * 0.0) + v23;
      *((float *)&v22 + 1) = (float)(v23 * 0.0) + v24;
      *((float *)&v22 + 2) = (float)(v26 * 0.0) + v25;
      *((float *)&v22 + 3) = (float)(v25 * 0.0) + v26;
      v19 = (__m128)LODWORD(v28);
      v14 = v22;
      v19.m128_f32[0] = (float)((float)(v28 * 0.0) + v27) + COERCE_FLOAT(LODWORD(left) ^ _xmm);
      v18.m128_f32[0] = (float)((float)(v27 * 0.0) + v28) + COERCE_FLOAT(LODWORD(top) ^ _xmm);
      v15 = _mm_unpacklo_ps(v19, v18).m128_u64[0];
      goto LABEL_9;
    }
  }
  if ( right == 0.0 || bottom == 0.0 )
  {
    v9 = -2003304441;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304441, 0x284u);
  }
  else
  {
    v9 = 0;
    *a2 = *(struct D2D_SIZE_F *)&v30.left;
  }
LABEL_15:
  Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(&v21);
  return v9;
}
