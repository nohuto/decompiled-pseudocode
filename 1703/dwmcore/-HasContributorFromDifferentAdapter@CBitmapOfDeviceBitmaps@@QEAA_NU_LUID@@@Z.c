/*
 * XREFs of ?HasContributorFromDifferentAdapter@CBitmapOfDeviceBitmaps@@QEAA_NU_LUID@@@Z @ 0x18019B3FC
 * Callers:
 *     ?SetBitmapAndContext@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEBVCColorKey@@PEBUD2DVector2@@PEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@AEBURealizationParameters@1@PEAV1@@Z @ 0x180044B68 (-SetBitmapAndContext@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@AEBV-$CDelayComputedBounds@UR.c)
 * Callees:
 *     ?CleanupInvalidSources@CBitmapOfDeviceBitmaps@@AEAAXXZ @ 0x1800B2458 (-CleanupInvalidSources@CBitmapOfDeviceBitmaps@@AEAAXXZ.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B3FEC (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 */

char __fastcall CBitmapOfDeviceBitmaps::HasContributorFromDifferentAdapter(
        CBitmapOfDeviceBitmaps *this,
        struct _LUID a2)
{
  char v4; // di
  unsigned int v5; // edx
  __int64 v6; // r10
  int v7; // edx
  __int64 v8; // r8
  unsigned int v9; // r9d

  v4 = 0;
  CBitmapOfDeviceBitmaps::CleanupInvalidSources(this);
  v5 = 0;
  if ( *((_DWORD *)this + 72) )
  {
    v6 = *((_QWORD *)this + 33);
    while ( TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty((_DWORD *)(96LL * v5 + v6 + 24))
         || a2 == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + v6 + 16) + 16LL) + 712LL) )
    {
      v5 = v7 + 1;
      if ( v5 >= v9 )
        return v4;
    }
    return 1;
  }
  return v4;
}
