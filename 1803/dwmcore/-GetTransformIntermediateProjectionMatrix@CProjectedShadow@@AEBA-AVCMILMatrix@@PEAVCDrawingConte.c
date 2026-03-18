/*
 * XREFs of ?GetTransformIntermediateProjectionMatrix@CProjectedShadow@@AEBA?AVCMILMatrix@@PEAVCDrawingContext@@@Z @ 0x1801B5D14
 * Callers:
 *     ?GenerateTransformIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801B484C (-GenerateTransformIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?SetTranslation@CMILMatrix@@QEAAXMMM@Z @ 0x18000F28C (-SetTranslation@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A3CB8 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?GetEffectiveShadowOffset@CProjectedShadowCaster@@QEBA?AUD2D_VECTOR_3F@@XZ @ 0x1801A0580 (-GetEffectiveShadowOffset@CProjectedShadowCaster@@QEBA-AUD2D_VECTOR_3F@@XZ.c)
 *     ?ProjectOntoAndLocalize@CProjectedShadow@@CA?AVCMILMatrix@@PEAVCDrawingContext@@PEAVCVisual@@1PEAVCCompositionLight@@@Z @ 0x1801B64B8 (-ProjectOntoAndLocalize@CProjectedShadow@@CA-AVCMILMatrix@@PEAVCDrawingContext@@PEAVCVisual@@1PE.c)
 */

__int64 __fastcall CProjectedShadow::GetTransformIntermediateProjectionMatrix(__int64 a1, __int64 a2)
{
  _QWORD *v3; // r8
  __int64 v4; // r10
  __int128 v5; // xmm1
  int v6; // eax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  struct D2D_VECTOR_3F v10; // [rsp+30h] [rbp-59h] BYREF
  _OWORD v11[4]; // [rsp+40h] [rbp-49h] BYREF
  int v12; // [rsp+80h] [rbp-9h]
  _BYTE v13[80]; // [rsp+90h] [rbp+7h] BYREF

  v12 = 0;
  CProjectedShadowCaster::GetEffectiveShadowOffset(*(CProjectedShadowCaster **)(a1 + 72), &v10);
  CMILMatrix::SetTranslation((CMILMatrix *)v11, v10.x, v10.y, v10.z);
  CProjectedShadow::ProjectOntoAndLocalize(
    v13,
    v4,
    *(_QWORD *)(v3[9] + 56LL),
    *(_QWORD *)(v3[10] + 56LL),
    *(_QWORD *)(v3[11] + 80LL));
  v5 = v11[1];
  v6 = v12;
  *(_OWORD *)a2 = v11[0];
  v7 = v11[2];
  *(_OWORD *)(a2 + 16) = v5;
  v8 = v11[3];
  *(_OWORD *)(a2 + 32) = v7;
  *(_OWORD *)(a2 + 48) = v8;
  *(_DWORD *)(a2 + 64) = v6;
  CMILMatrix::Multiply((CMILMatrix *)a2, (const struct CMILMatrix *)v13);
  return a2;
}
