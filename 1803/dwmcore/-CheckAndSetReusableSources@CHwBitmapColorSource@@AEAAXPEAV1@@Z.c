/*
 * XREFs of ?CheckAndSetReusableSources@CHwBitmapColorSource@@AEAAXPEAV1@@Z @ 0x1801EE6A8
 * Callers:
 *     ?DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@AEBVCHwBrushContext@@PEAPEAVCHwTexturedColorSource@@@Z @ 0x1801EF6AC (-DeriveFromBrushAndContext@CHwBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVCMILBrushBitmap@@A.c)
 *     ?SetBitmapAndContext@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEBVCColorKey@@PEBUD2DVector2@@PEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@AEBURealizationParameters@1@PEAV1@@Z @ 0x1801F08E8 (-SetBitmapAndContext@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@AEBV-$CDelayComputedBounds@UR.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??$ReleaseInterface@VCHwBitmapColorSource@@@@YAXAEAPEAVCHwBitmapColorSource@@@Z @ 0x1800CE214 (--$ReleaseInterface@VCHwBitmapColorSource@@@@YAXAEAPEAVCHwBitmapColorSource@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?CheckAndSetReusableSource@CHwBitmapColorSource@@AEAAXPEAV1@@Z @ 0x1801EE550 (-CheckAndSetReusableSource@CHwBitmapColorSource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CHwBitmapColorSource::CheckAndSetReusableSources(
        CMILRefCountBase **this,
        struct CHwBitmapColorSource *a2)
{
  struct CHwBitmapColorSource *v2; // rdi
  struct CHwBitmapColorSource *v4; // rbx

  v2 = a2;
  if ( a2 )
    (**(void (__fastcall ***)(struct CHwBitmapColorSource *))a2)(a2);
  ReleaseInterface<CHwBitmapColorSource>(this + 34);
  if ( v2 )
  {
    do
    {
      v4 = (struct CHwBitmapColorSource *)*((_QWORD *)v2 + 34);
      *((_QWORD *)v2 + 34) = 0LL;
      CHwBitmapColorSource::CheckAndSetReusableSource((CHwBitmapColorSource *)this, v2);
      CMILRefCountBase::Release(v2);
      v2 = v4;
    }
    while ( v4 );
  }
}
