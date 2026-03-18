/*
 * XREFs of ?GetPlaneOfVisual@CProjectedShadow@@CA?AUD2D_VECTOR_4F@@PEAVCVisual@@AEAVCMILMatrix@@@Z @ 0x1801B589C
 * Callers:
 *     ?AreCasterAndReceiverParallel@CProjectedShadow@@AEBA_NPEAVCDrawingContext@@@Z @ 0x1801B3D34 (-AreCasterAndReceiverParallel@CProjectedShadow@@AEBA_NPEAVCDrawingContext@@@Z.c)
 *     ?ProjectOntoAndLocalize@CProjectedShadow@@CA?AVCMILMatrix@@PEAVCDrawingContext@@PEAVCVisual@@1PEAVCCompositionLight@@@Z @ 0x1801B64B8 (-ProjectOntoAndLocalize@CProjectedShadow@@CA-AVCMILMatrix@@PEAVCDrawingContext@@PEAVCVisual@@1PE.c)
 * Callees:
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x18004F714 (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?GetRelativeOffset@CVisual@@QEBA_NPEAM00@Z @ 0x1801A7EA8 (-GetRelativeOffset@CVisual@@QEBA_NPEAM00@Z.c)
 *     ?CalculatePlane@D2DVectorHelper@@YA?AUD2D_VECTOR_4F@@AEBU2@00@Z @ 0x1801AE514 (-CalculatePlane@D2DVectorHelper@@YA-AUD2D_VECTOR_4F@@AEBU2@00@Z.c)
 *     ?Transform4DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_4F@@AEBU2@@Z @ 0x1801C7500 (-Transform4DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_4F@@AEBU2@@Z.c)
 */

struct D2D_VECTOR_4F *__fastcall CProjectedShadow::GetPlaneOfVisual(
        struct D2D_VECTOR_4F *__return_ptr retstr,
        struct CVisual *a2,
        struct CMILMatrix *a3)
{
  float v6; // xmm5_4
  float v7; // xmm4_4
  struct D2D_VECTOR_4F *v8; // r8
  struct D2D_VECTOR_4F v9; // xmm0
  struct D2D_VECTOR_4F v10; // xmm0
  struct D2D_VECTOR_4F *v11; // rax
  struct D2D_VECTOR_4F *v12; // r8
  struct D2D_VECTOR_4F *v13; // r9
  __int64 v14; // r10
  struct D2D_VECTOR_4F v15; // xmm0
  struct D2D_VECTOR_4F *result; // rax
  struct D2D_VECTOR_4F v17; // [rsp+20h] [rbp-60h] BYREF
  float v18; // [rsp+30h] [rbp-50h] BYREF
  float v19; // [rsp+34h] [rbp-4Ch] BYREF
  __int64 v20; // [rsp+38h] [rbp-48h] BYREF
  FLOAT v21; // [rsp+40h] [rbp-40h] BYREF
  struct D2D_VECTOR_4F v22; // [rsp+48h] [rbp-38h] BYREF
  struct D2D_VECTOR_4F v23; // [rsp+58h] [rbp-28h] BYREF
  struct D2D_VECTOR_4F v24; // [rsp+68h] [rbp-18h] BYREF

  CVisual::GetRelativeOffset(a2, (float *)&v20, (float *)&v20 + 1, &v21);
  CVisual::GetEffectiveSize(a2, &v18, &v19);
  v6 = v18;
  if ( v18 == 0.0 )
    v6 = FLOAT_1_0;
  v7 = v19;
  if ( v19 == 0.0 )
    v7 = FLOAT_1_0;
  v8 = &v22;
  *(_QWORD *)&v17.x = v20;
  v17.z = v21;
  v17.w = 1.0;
  v9 = v17;
  v17.w = 1.0;
  v17.y = v7 + *((float *)&v20 + 1);
  LODWORD(v17.x) = v20;
  v17.z = v21;
  v22 = v9;
  v10 = v17;
  v17.w = 1.0;
  v17.x = v6 + *(float *)&v20;
  v23 = v10;
  v17.z = v21;
  v24 = v17;
  do
  {
    v11 = CMILMatrix::Transform4DVector(a3, &v17, v8);
    v8 = v12 + 1;
    *v13 = *v11;
  }
  while ( v14 != 1 );
  v15 = *D2DVectorHelper::CalculatePlane(&v17, (__m128 *)&v22, (__m128 *)&v23, (__m128 *)&v24);
  result = retstr;
  *retstr = v15;
  return result;
}
