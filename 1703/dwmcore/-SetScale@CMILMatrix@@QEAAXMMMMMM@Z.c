/*
 * XREFs of ?SetScale@CMILMatrix@@QEAAXMMMMMM@Z @ 0x18009A7C0
 * Callers:
 *     ?GetRealization@CScaleTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180029470 (-GetRealization@CScaleTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?AppendSizePreferenceTransform@CCompositionSurfaceBitmap@@UEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCMILMatrix@@@Z @ 0x180037A90 (-AppendSizePreferenceTransform@CCompositionSurfaceBitmap@@UEAA_NAEBV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?CalculateTileBrushMapping@CTileBrushUtils@@SAXPEBVCMILMatrix@@0W4Enum@MilStretch@@W43MilHorizontalAlignment@@W43MilVerticalAlignment@@W43MilBrushMappingMode@@4PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@5MMPEAV8@6PEAV2@77PEAH@Z @ 0x18007D430 (-CalculateTileBrushMapping@CTileBrushUtils@@SAXPEBVCMILMatrix@@0W4Enum@MilStretch@@W43MilHorizon.c)
 *     ?GetRealization@CScaleTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18017AE80 (-GetRealization@CScaleTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x180180AA0 (-RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 * Callees:
 *     ?make_float4x4_scale@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@AEBUfloat3@123@0@Z @ 0x1800C5D28 (-make_float4x4_scale@Numerics@Foundation@Windows@@YA-AUfloat4x4@123@AEBUfloat3@123@0@Z.c)
 */

void __fastcall CMILMatrix::SetScale(CMILMatrix *this, float a2, float a3, float a4, float a5, float a6, float a7)
{
  _OWORD *v7; // rax
  __int64 v8; // r9
  __int128 v9; // xmm1
  _DWORD v10[3]; // [rsp+20h] [rbp-68h] BYREF
  _DWORD v11[3]; // [rsp+2Ch] [rbp-5Ch] BYREF
  __int64 v12; // [rsp+38h] [rbp-50h] BYREF

  *(float *)v10 = a5;
  *(float *)&v10[2] = a7;
  *(float *)&v10[1] = a6;
  *(float *)v11 = a2;
  *(float *)&v11[1] = a3;
  *(float *)&v11[2] = a4;
  v7 = (_OWORD *)((__int64 (__fastcall *)(__int64 *, _DWORD *, _DWORD *, CMILMatrix *))Windows::Foundation::Numerics::make_float4x4_scale)(
                   &v12,
                   v11,
                   v10,
                   this);
  *(_OWORD *)v8 = *v7;
  *(_OWORD *)(v8 + 16) = v7[1];
  *(_OWORD *)(v8 + 32) = v7[2];
  v9 = v7[3];
  *(_WORD *)(v8 + 64) = 15680;
  *(_OWORD *)(v8 + 48) = v9;
}
