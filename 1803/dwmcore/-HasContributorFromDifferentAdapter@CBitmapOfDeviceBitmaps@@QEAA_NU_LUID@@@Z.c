/*
 * XREFs of ?HasContributorFromDifferentAdapter@CBitmapOfDeviceBitmaps@@QEAA_NU_LUID@@@Z @ 0x1801E94B0
 * Callers:
 *     ?SetBitmapAndContext@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEBVCColorKey@@PEBUD2DVector2@@PEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@AEBURealizationParameters@1@PEAV1@@Z @ 0x1801F08E8 (-SetBitmapAndContext@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@AEBV-$CDelayComputedBounds@UR.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800839A8 (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?CleanupInvalidSources@CBitmapOfDeviceBitmaps@@AEAAXXZ @ 0x1800CC4DC (-CleanupInvalidSources@CBitmapOfDeviceBitmaps@@AEAAXXZ.c)
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
  if ( *((_DWORD *)this + 84) )
  {
    v6 = *((_QWORD *)this + 39);
    while ( TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty((_DWORD *)(96LL * v5 + v6 + 24))
         || a2 == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + v6 + 16) + 16LL) + 728LL) )
    {
      v5 = v7 + 1;
      if ( v5 >= v9 )
        return v4;
    }
    return 1;
  }
  return v4;
}
