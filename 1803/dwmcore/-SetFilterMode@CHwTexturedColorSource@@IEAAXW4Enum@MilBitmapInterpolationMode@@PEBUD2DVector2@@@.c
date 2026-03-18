/*
 * XREFs of ?SetFilterMode@CHwTexturedColorSource@@IEAAXW4Enum@MilBitmapInterpolationMode@@PEBUD2DVector2@@@Z @ 0x1801E7104
 * Callers:
 *     ??0CHwSolidColorTextureSource@@AEAA@PEAVCD3DDeviceLevel1@@@Z @ 0x1801E9F04 (--0CHwSolidColorTextureSource@@AEAA@PEAVCD3DDeviceLevel1@@@Z.c)
 *     ?DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@AEBVCHwBrushContext@@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1801EF6AC (-DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@A.c)
 *     ?SetBitmapAndContext@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEBVCColorKey@@PEBUD2DVector2@@PEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@AEBURealizationParameters@1@PEAV1@@Z @ 0x1801F08E8 (-SetBitmapAndContext@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@AEBV-$CDelayComputedBounds@UR.c)
 *     ?SetBrushAndContext@CHwLinearGradientColorSource@@QEAAJPEAVCMILBrushGradient@@PEBVCMILMatrix@@PEBUCContextState@@@Z @ 0x1801F7604 (-SetBrushAndContext@CHwLinearGradientColorSource@@QEAAJPEAVCMILBrushGradient@@PEBVCMILMatrix@@PE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwTexturedColorSource::SetFilterMode(__int64 a1, int a2, _QWORD *a3)
{
  __int64 result; // rax

  if ( a2 )
  {
    if ( a2 == 4 )
    {
      result = 3LL;
    }
    else if ( a2 == 5 )
    {
      result = *(unsigned int *)(*(_QWORD *)(a1 + 16) + 800LL);
    }
    else
    {
      result = 2LL;
    }
  }
  else
  {
    result = 1LL;
  }
  *(_DWORD *)(a1 + 24) = result;
  if ( a3 )
  {
    *(_QWORD *)(a1 + 36) = *a3;
  }
  else
  {
    *(_DWORD *)(a1 + 36) = 0;
    *(_DWORD *)(a1 + 40) = 0;
  }
  return result;
}
