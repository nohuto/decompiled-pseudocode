/*
 * XREFs of ?CopyFrom@CGradientColorData@@QEAAJPEBV1@@Z @ 0x1801B2D74
 * Callers:
 *     ?GetLinearGradientRealization@CLinearGradientLegacyMilBrush@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCGradientColorData@@PEAVCMILBrushLinearGradient@@@Z @ 0x18017B8C4 (-GetLinearGradientRealization@CLinearGradientLegacyMilBrush@@QEAAJPEBV-$TMilRect_@MUMilRectF@@UM.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CGradientColorData::CopyFrom(CGradientColorData *this, const struct CGradientColorData *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax

  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 14) = 0;
  v4 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this, 0x10u, *((_DWORD *)a2 + 6), *(_QWORD *)a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x9Fu);
    goto LABEL_5;
  }
  v6 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 32, 4u, *((_DWORD *)a2 + 14), *((_QWORD *)a2 + 4));
  v5 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xA0u);
LABEL_5:
    *((_DWORD *)this + 6) = 0;
    *((_DWORD *)this + 14) = 0;
  }
  return v5;
}
