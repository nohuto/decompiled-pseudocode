/*
 * XREFs of ?CalculateTileBrushMapping@CTileBrushUtils@@SAXPEBVCMILMatrix@@0W4Enum@MilStretch@@W43MilHorizontalAlignment@@W43MilVerticalAlignment@@W43MilBrushMappingMode@@4PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@5MMPEAV8@6PEAV2@77PEAH@Z @ 0x1801BCC34
 * Callers:
 *     ?GetBrushRealizationInternal@CTileLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x1801A6270 (-GetBrushRealizationInternal@CTileLegacyMilBrush@@MEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBru.c)
 * Callees:
 *     ?SetScale@CMILMatrix@@QEAAXMMMMMM@Z @ 0x1800A3834 (-SetScale@CMILMatrix@@QEAAXMMMMMM@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800A3CB8 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x1800BE970 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?CalculateViewboxToViewportMapping@CTileBrushUtils@@SAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0W4Enum@MilStretch@@W43MilHorizontalAlignment@@W43MilVerticalAlignment@@PEAVCMILMatrix@@@Z @ 0x1800C5448 (-CalculateViewboxToViewportMapping@CTileBrushUtils@@SAXPEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?GetAbsoluteViewRectangles@CTileBrushUtils@@CAXW4Enum@MilBrushMappingMode@@0PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV4@2PEAH@Z @ 0x1801BCEB8 (-GetAbsoluteViewRectangles@CTileBrushUtils@@CAXW4Enum@MilBrushMappingMode@@0PEBV-$TMilRect_@MUMi.c)
 *     ?GetBrushTransform@CBrushTypeUtils@@SAXPEBVCMILMatrix@@0PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1801C38A8 (-GetBrushTransform@CBrushTypeUtils@@SAXPEBVCMILMatrix@@0PEBV-$TMilRect_@MUMilRectF@@UMilPointAnd.c)
 */

void __fastcall CTileBrushUtils::CalculateTileBrushMapping(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        float a10,
        float a11,
        float *a12,
        float *a13,
        __int64 a14,
        __int64 a15,
        struct CMILMatrix *a16,
        _DWORD *a17)
{
  __int128 v21; // xmm1
  int v22; // eax
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm1
  int v26; // eax
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  _OWORD v29[4]; // [rsp+48h] [rbp-C0h] BYREF
  int v30; // [rsp+88h] [rbp-80h]
  _OWORD v31[4]; // [rsp+98h] [rbp-70h] BYREF
  int v32; // [rsp+D8h] [rbp-30h]
  _BYTE v33[64]; // [rsp+E8h] [rbp-20h] BYREF
  int v34; // [rsp+128h] [rbp+20h]

  *a17 = 0;
  v30 = 0;
  v32 = 0;
  v34 = 0;
  CTileBrushUtils::GetAbsoluteViewRectangles(a6, a7, a8, a9, (__int64)a12, (__int64)a13, (__int64)a17);
  if ( !*a17 )
  {
    CMILMatrix::SetScale((CMILMatrix *)v29, a10, a11, 1.0, 0.0, 0.0, 0.0);
    CTileBrushUtils::CalculateViewboxToViewportMapping(a12, a13, a3, a4, a5, (__int64)v33);
    CMILMatrix::Multiply((CMILMatrix *)v29, (const struct CMILMatrix *)v33);
    CBrushTypeUtils::GetBrushTransform(a2, a1, a8, v31);
    CMILMatrix::Multiply((const struct CMILMatrix *)v29, (const struct CMILMatrix *)v31, a16);
    if ( a14 )
    {
      v21 = v29[1];
      v22 = v30;
      *(_OWORD *)a14 = v29[0];
      v23 = v29[2];
      *(_OWORD *)(a14 + 16) = v21;
      v24 = v29[3];
      *(_OWORD *)(a14 + 32) = v23;
      *(_OWORD *)(a14 + 48) = v24;
      *(_DWORD *)(a14 + 64) = v22;
    }
    if ( a15 )
    {
      v25 = v31[1];
      v26 = v32;
      *(_OWORD *)a15 = v31[0];
      v27 = v31[2];
      *(_OWORD *)(a15 + 16) = v25;
      v28 = v31[3];
      *(_OWORD *)(a15 + 32) = v27;
      *(_OWORD *)(a15 + 48) = v28;
      *(_DWORD *)(a15 + 64) = v26;
    }
  }
}
