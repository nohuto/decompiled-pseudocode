/*
 * XREFs of ?IsCasterInBetweenLightAndReceiver@CProjectedShadow@@AEAA_NPEBVCDrawingContext@@@Z @ 0x1801B5EDC
 * Callers:
 *     ?DrawAsDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1801B4550 (-DrawAsDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_.c)
 * Callees:
 *     ?SetTranslation@CMILMatrix@@QEAAXMMM@Z @ 0x18000F28C (-SetTranslation@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x18004F714 (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A3CB8 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1800CD5B4 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?GetLocalToLightAsCameraMatrix@CProjectedShadow@@AEAA?AVCMILMatrix@@PEBVCDrawingContext@@PEAVCVisual@@@Z @ 0x1801B5528 (-GetLocalToLightAsCameraMatrix@CProjectedShadow@@AEAA-AVCMILMatrix@@PEBVCDrawingContext@@PEAVCVi.c)
 *     ?GetVisualToAnotherVisual@CProjectedShadow@@CA?AVCMILMatrix@@PEBVCDrawingContext@@PEAVCVisual@@1@Z @ 0x1801B5DC8 (-GetVisualToAnotherVisual@CProjectedShadow@@CA-AVCMILMatrix@@PEBVCDrawingContext@@PEAVCVisual@@1.c)
 *     ??0CVisualDepthGeometry@@QEAA@PEAVCVisual@@AEAVCMILMatrix@@@Z @ 0x1801C24D8 (--0CVisualDepthGeometry@@QEAA@PEAVCVisual@@AEAVCMILMatrix@@@Z.c)
 *     ??0CVisualDepthGeometry@@QEAA@Ufloat2@Numerics@Foundation@Windows@@AEAVCMILMatrix@@@Z @ 0x1801C2534 (--0CVisualDepthGeometry@@QEAA@Ufloat2@Numerics@Foundation@Windows@@AEAVCMILMatrix@@@Z.c)
 *     ?GetRelativeOrder@CVisualDepthGeometry@@QEBA?AW4RelativeOrder@@AEBV1@@Z @ 0x1801C2C28 (-GetRelativeOrder@CVisualDepthGeometry@@QEBA-AW4RelativeOrder@@AEBV1@@Z.c)
 */

bool __fastcall CProjectedShadow::IsCasterInBetweenLightAndReceiver(
        CProjectedShadow *this,
        const struct CDrawingContext *a2)
{
  const struct CDrawingContext *v2; // rbx
  struct CVisual *v4; // rsi
  CVisual *v5; // rdi
  __int64 v6; // rcx
  __m128 v7; // xmm7
  __m128 v8; // xmm6
  float v9; // xmm1_4
  unsigned int v11; // [rsp+28h] [rbp-E0h] BYREF
  unsigned int v12; // [rsp+2Ch] [rbp-DCh] BYREF
  __int128 v13; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v14; // [rsp+48h] [rbp-C0h]
  __int128 v15; // [rsp+58h] [rbp-B0h]
  __int128 v16; // [rsp+68h] [rbp-A0h]
  int v17; // [rsp+78h] [rbp-90h]
  __int128 v18; // [rsp+88h] [rbp-80h] BYREF
  __int128 v19; // [rsp+98h] [rbp-70h]
  __int128 v20; // [rsp+A8h] [rbp-60h]
  __int128 v21; // [rsp+B8h] [rbp-50h]
  int v22; // [rsp+C8h] [rbp-40h]
  _BYTE v23[80]; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v24[84]; // [rsp+128h] [rbp+20h] BYREF
  char v25[108]; // [rsp+17Ch] [rbp+74h] BYREF
  _BYTE v26[84]; // [rsp+1E8h] [rbp+E0h] BYREF
  char v27[108]; // [rsp+23Ch] [rbp+134h] BYREF

  v2 = a2;
  v4 = *(struct CVisual **)(*((_QWORD *)this + 9) + 56LL);
  v5 = *(CVisual **)(*((_QWORD *)this + 10) + 56LL);
  CProjectedShadow::GetLocalToLightAsCameraMatrix((__int64)this, (__int64)v23, a2, v4);
  CProjectedShadow::GetVisualToAnotherVisual((__int64)&v18, (__int64)v2, v5, v4);
  v13 = v18;
  v14 = v19;
  v15 = v20;
  v16 = v21;
  v17 = v22;
  CMILMatrix::Multiply((CMILMatrix *)&v13, (const struct CMILMatrix *)v23);
  CVisualDepthGeometry::CVisualDepthGeometry((CVisualDepthGeometry *)v26, v5, (struct CMILMatrix *)&v13);
  CVisual::GetEffectiveSize(v4, (float *)&v11, (float *)&v12);
  v6 = *((_QWORD *)this + 9);
  v7 = (__m128)v11;
  v8 = (__m128)v12;
  v17 = 0;
  v9 = *(float *)(v6 + 92);
  v7.m128_f32[0] = *(float *)&v11 + (float)(v9 + v9);
  v8.m128_f32[0] = *(float *)&v12 + (float)(v9 + v9);
  CMILMatrix::SetTranslation(
    (CMILMatrix *)&v13,
    COERCE_FLOAT(LODWORD(v9) ^ _xmm),
    COERCE_FLOAT(LODWORD(v9) ^ _xmm),
    0.0);
  v18 = v13;
  v19 = v14;
  v20 = v15;
  v21 = v16;
  v22 = v17;
  CMILMatrix::Multiply((CMILMatrix *)&v18, (const struct CMILMatrix *)v23);
  CVisualDepthGeometry::CVisualDepthGeometry(v24, _mm_unpacklo_ps(v7, v8).m128_u64[0], &v18);
  LOBYTE(v2) = (unsigned int)CVisualDepthGeometry::GetRelativeOrder(v26, v24) != 0;
  `vector destructor iterator'(v25, 16LL, 4LL, dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly);
  `vector destructor iterator'(v27, 16LL, 4LL, dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly);
  return (char)v2;
}
