/*
 * XREFs of ?GetLightPosition@CProjectedShadow@@CA?AUD2D_VECTOR_3F@@PEBVCDrawingContext@@PEBVCCompositionLight@@PEAVCVisual@@@Z @ 0x1801B5348
 * Callers:
 *     ?GetLocalToLightAsCameraMatrix@CProjectedShadow@@AEAA?AVCMILMatrix@@PEBVCDrawingContext@@PEAVCVisual@@@Z @ 0x1801B5528 (-GetLocalToLightAsCameraMatrix@CProjectedShadow@@AEAA-AVCMILMatrix@@PEBVCDrawingContext@@PEAVCVi.c)
 *     ?ProjectOntoAndLocalize@CProjectedShadow@@CA?AVCMILMatrix@@PEAVCDrawingContext@@PEAVCVisual@@1PEAVCCompositionLight@@@Z @ 0x1801B64B8 (-ProjectOntoAndLocalize@CProjectedShadow@@CA-AVCMILMatrix@@PEAVCDrawingContext@@PEAVCVisual@@1PE.c)
 * Callees:
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetVisualToAnotherVisual@CProjectedShadow@@CA?AVCMILMatrix@@PEBVCDrawingContext@@PEAVCVisual@@1@Z @ 0x1801B5DC8 (-GetVisualToAnotherVisual@CProjectedShadow@@CA-AVCMILMatrix@@PEBVCDrawingContext@@PEAVCVisual@@1.c)
 *     ?Transform4DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_4F@@AEBU2@@Z @ 0x1801C7500 (-Transform4DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_4F@@AEBU2@@Z.c)
 */

struct D2D_VECTOR_3F *__fastcall CProjectedShadow::GetLightPosition(
        struct D2D_VECTOR_3F *__return_ptr retstr,
        const struct CDrawingContext *a2,
        const struct CCompositionLight *a3,
        struct CVisual *a4)
{
  __int64 v4; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // xmm0_8
  __m128i v12; // xmm1
  __m128 v13; // xmm2
  FLOAT z; // eax
  struct D2D_VECTOR_4F v16; // [rsp+30h] [rbp-D0h] BYREF
  struct D2D_VECTOR_4F v17; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v18[80]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v19[80]; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD v20[60]; // [rsp+F0h] [rbp-10h] BYREF

  v4 = *(_QWORD *)a3;
  v20[42] = 0;
  v20[59] = 0;
  (*(void (__fastcall **)(const struct CCompositionLight *, const struct CDrawingContext *, char *, _DWORD *))(v4 + 176))(
    a3,
    a2,
    (char *)a2 + 3472,
    v20);
  v9 = (*(__int64 (__fastcall **)(const struct CCompositionLight *))(*(_QWORD *)a3 + 168LL))(a3);
  CProjectedShadow::GetVisualToAnotherVisual(v18, a2, v9, a4);
  v10 = (*(__int64 (__fastcall **)(const struct CCompositionLight *))(*(_QWORD *)a3 + 168LL))(a3);
  CProjectedShadow::GetVisualToAnotherVisual(v19, a2, a4, v10);
  if ( v20[0] == 2 )
  {
    LODWORD(v16.x) = v20[9];
    LODWORD(v16.y) = v20[10];
    LODWORD(v16.z) = v20[11];
    v16.w = FLOAT_1_0;
    CMILMatrix::Transform4DVector((CMILMatrix *)v18, &v17, &v16);
    v16.z = v17.z;
    v11 = *(_QWORD *)&v17.x;
  }
  else
  {
    v16 = (struct D2D_VECTOR_4F)_xmm;
    v12 = _mm_loadu_si128((const __m128i *)CMILMatrix::Transform4DVector((CMILMatrix *)v19, &v17, &v16));
    LODWORD(v16.w) = v12.m128i_i32[3];
    v16.x = *(float *)v12.m128i_i32 - (float)(*(float *)&v20[12] * 100.0);
    v16.y = *(float *)&v12.m128i_i32[1] - (float)(*(float *)&v20[13] * 100.0);
    v16.z = *(float *)&v12.m128i_i32[2] - (float)(*(float *)&v20[14] * 100.0);
    v13 = (__m128)_mm_loadu_si128((const __m128i *)CMILMatrix::Transform4DVector((CMILMatrix *)v18, &v17, &v16));
    LODWORD(v16.z) = _mm_shuffle_ps(v13, v13, 170).m128_u32[0];
    v11 = _mm_unpacklo_ps(v13, _mm_shuffle_ps(v13, v13, 85)).m128_u64[0];
  }
  z = v16.z;
  *(_QWORD *)&retstr->x = v11;
  retstr->z = z;
  return retstr;
}
