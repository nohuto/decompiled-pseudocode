/*
 * XREFs of ?CalculateCasterUVs@CProjectedShadow@@AEBA?AVMatrix3x3@@PEAVCDrawingContext@@@Z @ 0x1801B3F3C
 * Callers:
 *     ?GetBrushParameters@CProjectedShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801B4BA0 (-GetBrushParameters@CProjectedShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x18004F714 (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A3CB8 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x1800A3D90 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800A3E90 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?GetEffectiveShadowOffset@CProjectedShadowCaster@@QEBA?AUD2D_VECTOR_3F@@XZ @ 0x1801A0580 (-GetEffectiveShadowOffset@CProjectedShadowCaster@@QEBA-AUD2D_VECTOR_3F@@XZ.c)
 *     ?ProjectOntoAndLocalize@CProjectedShadow@@CA?AVCMILMatrix@@PEAVCDrawingContext@@PEAVCVisual@@1PEAVCCompositionLight@@@Z @ 0x1801B64B8 (-ProjectOntoAndLocalize@CProjectedShadow@@CA-AVCMILMatrix@@PEAVCDrawingContext@@PEAVCVisual@@1PE.c)
 */

_DWORD *__fastcall CProjectedShadow::CalculateCasterUVs(__int64 a1, _DWORD *a2, __int64 a3)
{
  CVisual *v5; // rbx
  __int64 v6; // rax
  float v7; // xmm4_4
  _DWORD *result; // rax
  int v9; // xmm1_4
  int v10; // xmm0_4
  int v11; // xmm1_4
  int v12; // xmm0_4
  int v13; // xmm1_4
  int v14; // xmm0_4
  int v15; // xmm1_4
  __int128 v16; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v17; // [rsp+40h] [rbp-C0h]
  __int128 v18; // [rsp+50h] [rbp-B0h]
  __int128 v19; // [rsp+60h] [rbp-A0h]
  int v20; // [rsp+70h] [rbp-90h]
  struct D2D_VECTOR_3F v21; // [rsp+80h] [rbp-80h] BYREF
  __int128 v22; // [rsp+90h] [rbp-70h] BYREF
  __int128 v23; // [rsp+A0h] [rbp-60h]
  __int128 v24; // [rsp+B0h] [rbp-50h]
  __int128 v25; // [rsp+C0h] [rbp-40h]
  int v26; // [rsp+D0h] [rbp-30h]
  _OWORD v27[4]; // [rsp+E0h] [rbp-20h] BYREF
  int v28; // [rsp+120h] [rbp+20h]
  _OWORD v29[4]; // [rsp+130h] [rbp+30h] BYREF
  int v30; // [rsp+170h] [rbp+70h]
  float v31; // [rsp+1A0h] [rbp+A0h] BYREF
  float v32; // [rsp+1A8h] [rbp+A8h] BYREF

  v5 = *(CVisual **)(*(_QWORD *)(a1 + 72) + 56LL);
  CProjectedShadow::ProjectOntoAndLocalize(
    v29,
    a3,
    *(_QWORD *)(*(_QWORD *)(a1 + 80) + 56LL),
    v5,
    *(_QWORD *)(*(_QWORD *)(a1 + 88) + 80LL));
  CProjectedShadowCaster::GetEffectiveShadowOffset(*(CProjectedShadowCaster **)(a1 + 72), &v21);
  v20 = 32085;
  v17 = _xmm;
  v18 = _xmm;
  v16 = _xmm;
  v19 = _xmm;
  CMILMatrix::Translate((CMILMatrix *)&v16, COERCE_FLOAT(LODWORD(v21.x) ^ _xmm), COERCE_FLOAT(LODWORD(v21.y) ^ _xmm));
  CVisual::GetEffectiveSize(v5, &v32, &v31);
  v6 = *(_QWORD *)(a1 + 72);
  v28 = 32085;
  v27[0] = _xmm;
  v7 = *(float *)(v6 + 92);
  v27[1] = _xmm;
  v27[2] = _xmm;
  v27[3] = _xmm;
  CMILMatrix::Scale(
    (CMILMatrix *)v27,
    1.0 / (float)((float)(v7 + v7) + v32),
    1.0 / (float)((float)(v7 + v7) + v31),
    1.0);
  v22 = v29[0];
  v26 = v30;
  v23 = v29[1];
  v24 = v29[2];
  v25 = v29[3];
  CMILMatrix::Multiply((CMILMatrix *)&v22, (const struct CMILMatrix *)&v16);
  v16 = v22;
  v17 = v23;
  v18 = v24;
  v20 = v26;
  v19 = v25;
  CMILMatrix::Multiply((CMILMatrix *)&v16, (const struct CMILMatrix *)v27);
  result = a2;
  v9 = DWORD1(v16);
  *a2 = v16;
  a2[2] = HIDWORD(v16);
  v10 = DWORD1(v17);
  a2[1] = v9;
  v11 = v17;
  a2[4] = v10;
  v12 = v19;
  a2[3] = v11;
  v13 = HIDWORD(v17);
  a2[6] = v12;
  v14 = HIDWORD(v19);
  a2[5] = v13;
  v15 = DWORD1(v19);
  a2[8] = v14;
  a2[7] = v15;
  return result;
}
