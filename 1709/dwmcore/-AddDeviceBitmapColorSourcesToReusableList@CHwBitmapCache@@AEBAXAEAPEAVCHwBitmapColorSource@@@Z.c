/*
 * XREFs of ?AddDeviceBitmapColorSourcesToReusableList@CHwBitmapCache@@AEBAXAEAPEAVCHwBitmapColorSource@@@Z @ 0x1801AE968
 * Callers:
 *     ?ChooseBitmapColorSource@CHwBitmapCache@@AEAAJPEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapColorSource@@AEBUCacheContextParameters@4@AEAPEAV4@3@Z @ 0x1801AEAA8 (-ChooseBitmapColorSource@CHwBitmapCache@@AEAAJPEAVIBitmapSource@@AEAUCacheParameters@CHwBitmapCo.c)
 *     ?TryForLastUsedBitmapColorSource@CHwBitmapCache@@AEAAXAEBUCacheContextParameters@CHwBitmapColorSource@@AEAV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@PEAVCMILBrushBitmap@@AEAPEAV3@3@Z @ 0x1801AF410 (-TryForLastUsedBitmapColorSource@CHwBitmapCache@@AEAAXAEBUCacheContextParameters@CHwBitmapColorS.c)
 * Callees:
 *     ?AddToReusableRealizationSourceList@CHwBitmapColorSource@@QEAAXAEAPEAV1@@Z @ 0x1801B44E0 (-AddToReusableRealizationSourceList@CHwBitmapColorSource@@QEAAXAEAPEAV1@@Z.c)
 *     ?IsValid@CHwBitmapColorSource@@QEBA_NXZ @ 0x1801B5BA4 (-IsValid@CHwBitmapColorSource@@QEBA_NXZ.c)
 */

void __fastcall CHwBitmapCache::AddDeviceBitmapColorSourcesToReusableList(
        CHwBitmapCache *this,
        struct CHwBitmapColorSource **a2)
{
  CHwBitmapColorSource *i; // rbx
  CHwBitmapColorSource *v4; // rcx

  for ( i = (CHwBitmapColorSource *)*((_QWORD *)this + 61); i; i = (CHwBitmapColorSource *)*((_QWORD *)i + 43) )
  {
    if ( CHwBitmapColorSource::IsValid(i) )
      CHwBitmapColorSource::AddToReusableRealizationSourceList(v4, a2);
  }
}
