/*
 * XREFs of ?ProjectOntoAndLocalize@CProjectedShadow@@CA?AVCMILMatrix@@PEAVCDrawingContext@@PEAVCVisual@@1PEAVCCompositionLight@@@Z @ 0x1801B64B8
 * Callers:
 *     ?CalculateCasterUVs@CProjectedShadow@@AEBA?AVMatrix3x3@@PEAVCDrawingContext@@@Z @ 0x1801B3F3C (-CalculateCasterUVs@CProjectedShadow@@AEBA-AVMatrix3x3@@PEAVCDrawingContext@@@Z.c)
 *     ?CalculateInsets@CProjectedShadow@@AEBAXPEAVCDrawingContext@@W4ShadowPath@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV4@AEAVInsets@@4@Z @ 0x1801B4160 (-CalculateInsets@CProjectedShadow@@AEBAXPEAVCDrawingContext@@W4ShadowPath@@AEBV-$TMilRect_@MUMil.c)
 *     ?GetTransformIntermediateProjectionMatrix@CProjectedShadow@@AEBA?AVCMILMatrix@@PEAVCDrawingContext@@@Z @ 0x1801B5D14 (-GetTransformIntermediateProjectionMatrix@CProjectedShadow@@AEBA-AVCMILMatrix@@PEAVCDrawingConte.c)
 *     ?IsShadowAxisAlignedRectToReceiver@CProjectedShadow@@AEBA_NPEAVCDrawingContext@@@Z @ 0x1801B619C (-IsShadowAxisAlignedRectToReceiver@CProjectedShadow@@AEBA_NPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A3CB8 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetLightPosition@CProjectedShadow@@CA?AUD2D_VECTOR_3F@@PEBVCDrawingContext@@PEBVCCompositionLight@@PEAVCVisual@@@Z @ 0x1801B5348 (-GetLightPosition@CProjectedShadow@@CA-AUD2D_VECTOR_3F@@PEBVCDrawingContext@@PEBVCCompositionLig.c)
 *     ?GetPlaneOfVisual@CProjectedShadow@@CA?AUD2D_VECTOR_4F@@PEAVCVisual@@AEAVCMILMatrix@@@Z @ 0x1801B589C (-GetPlaneOfVisual@CProjectedShadow@@CA-AUD2D_VECTOR_4F@@PEAVCVisual@@AEAVCMILMatrix@@@Z.c)
 *     ?GetProjectionMatrix@CProjectedShadow@@CA?AVCMILMatrix@@UD2D_VECTOR_3F@@UD2D_VECTOR_4F@@_N@Z @ 0x1801B5A00 (-GetProjectionMatrix@CProjectedShadow@@CA-AVCMILMatrix@@UD2D_VECTOR_3F@@UD2D_VECTOR_4F@@_N@Z.c)
 *     ?GetVisualToAnotherVisual@CProjectedShadow@@CA?AVCMILMatrix@@PEBVCDrawingContext@@PEAVCVisual@@1@Z @ 0x1801B5DC8 (-GetVisualToAnotherVisual@CProjectedShadow@@CA-AVCMILMatrix@@PEBVCDrawingContext@@PEAVCVisual@@1.c)
 */

__int64 __fastcall CProjectedShadow::ProjectOntoAndLocalize(
        __int64 a1,
        const struct CDrawingContext *a2,
        CVisual *a3,
        struct CVisual *a4,
        struct CCompositionLight *a5)
{
  struct D2D_VECTOR_4F v9; // xmm7
  struct D2D_VECTOR_3F *LightPosition; // rax
  __int64 v11; // xmm6_8
  FLOAT z; // ebx
  __int64 v13; // rax
  __int128 v14; // xmm1
  int v15; // ecx
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  struct D2D_VECTOR_3F v19; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v20; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v21; // [rsp+58h] [rbp-B0h]
  __int128 v22; // [rsp+68h] [rbp-A0h]
  __int128 v23; // [rsp+78h] [rbp-90h]
  int v24; // [rsp+88h] [rbp-80h]
  struct D2D_VECTOR_4F v25; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v26[80]; // [rsp+A8h] [rbp-60h] BYREF
  _DWORD v27[60]; // [rsp+F8h] [rbp-10h] BYREF

  v24 = 32085;
  v20 = _xmm;
  v21 = _xmm;
  v22 = _xmm;
  v23 = _xmm;
  v9 = (struct D2D_VECTOR_4F)_mm_loadu_si128((const __m128i *)CProjectedShadow::GetPlaneOfVisual(
                                                                &v25,
                                                                a4,
                                                                (struct CMILMatrix *)&v20));
  LightPosition = CProjectedShadow::GetLightPosition(&v19, a2, a5, a4);
  v11 = *(_QWORD *)&LightPosition->x;
  z = LightPosition->z;
  v13 = *(_QWORD *)a5;
  v27[42] = 0;
  v27[59] = 0;
  (*(void (__fastcall **)(struct CCompositionLight *, const struct CDrawingContext *, __int64, _DWORD *))(v13 + 176))(
    a5,
    a2,
    (__int64)a2 + 3472,
    v27);
  CProjectedShadow::GetVisualToAnotherVisual((__int64)&v20, (__int64)a2, a3, a4);
  v25 = v9;
  *(_QWORD *)&v19.x = v11;
  v19.z = z;
  CProjectedShadow::GetProjectionMatrix((__int64)v26, &v19.x, &v25.x, v27[0] == 2);
  v14 = v21;
  v15 = v24;
  *(_OWORD *)a1 = v20;
  v16 = v22;
  *(_OWORD *)(a1 + 16) = v14;
  v17 = v23;
  *(_OWORD *)(a1 + 32) = v16;
  *(_OWORD *)(a1 + 48) = v17;
  *(_DWORD *)(a1 + 64) = v15;
  CMILMatrix::Multiply((CMILMatrix *)a1, (const struct CMILMatrix *)v26);
  return a1;
}
