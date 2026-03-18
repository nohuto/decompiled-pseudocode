/*
 * XREFs of ?GetLinearGradientRealization@CLinearGradientLegacyMilBrush@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCGradientColorData@@PEAVCMILBrushLinearGradient@@@Z @ 0x180181B44
 * Callers:
 *     ?GetBrushRealizationInternal@CLinearGradientLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x180181980 (-GetBrushRealizationInternal@CLinearGradientLegacyMilBrush@@UEAAJPEBULegacyMilBrushContext@@PEAP.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RealizeGradientPoints@CLinearGradientLegacyMilBrush@@QEAAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUMilPoint2F@@11@Z @ 0x180181C14 (-RealizeGradientPoints@CLinearGradientLegacyMilBrush@@QEAAXPEBV-$TMilRect_@MUMilRectF@@UMilPoint.c)
 *     ?SetWrapMode@CMILBrushGradient@@UEAAJW4Enum@MilGradientWrapMode@@@Z @ 0x1801CEFE0 (-SetWrapMode@CMILBrushGradient@@UEAAJW4Enum@MilGradientWrapMode@@@Z.c)
 *     ?CopyFrom@CGradientColorData@@QEAAJPEBV1@@Z @ 0x1801CF15C (-CopyFrom@CGradientColorData@@QEAAJPEBV1@@Z.c)
 */

__int64 __fastcall CLinearGradientLegacyMilBrush::GetLinearGradientRealization(
        __int64 a1,
        __int64 a2,
        const struct CGradientColorData *a3,
        __int64 a4)
{
  signed int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // xmm1_8
  signed int v10; // eax
  int v11; // eax
  __int64 v13; // [rsp+30h] [rbp-18h] BYREF
  __int64 v14; // [rsp+38h] [rbp-10h] BYREF
  __int64 v15; // [rsp+68h] [rbp+20h] BYREF

  CLinearGradientLegacyMilBrush::RealizeGradientPoints(a1, a2, &v15, &v13, &v14);
  v7 = CGradientColorData::CopyFrom((CGradientColorData *)(a4 + 152), a3);
  v8 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0xA6u);
  }
  else
  {
    v9 = v13;
    *(_QWORD *)(a4 + 124) = v15;
    *(_QWORD *)(a4 + 140) = v14;
    *(_QWORD *)(a4 + 132) = v9;
    v10 = CMILBrushGradient::SetWrapMode(a4 + 112);
    v8 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v10, 0xB2u);
    }
    else
    {
      *(_DWORD *)(a4 + 220) = *(_DWORD *)(a1 + 120);
      v11 = *(_DWORD *)(a4 + 120) + 1;
      if ( *(_DWORD *)(a4 + 120) == -1 )
        v11 = 1;
      v8 = 0;
      *(_DWORD *)(a4 + 120) = v11;
    }
  }
  return v8;
}
