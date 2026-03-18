/*
 * XREFs of ?CheckAndSetReusableSources@CHwBitmapColorSource@@AEAAXPEAV1@@Z @ 0x180044B24
 * Callers:
 *     ?SetBitmapAndContext@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@AEBV?$CDelayComputedBounds@URealizationSampling@CoordinateSpace@@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEBVCColorKey@@PEBUD2DVector2@@PEBVMILMatrix3x2@@PEBUBitmapToXSpaceTransform@@AEBURealizationParameters@1@PEAV1@@Z @ 0x180044B68 (-SetBitmapAndContext@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@AEBV-$CDelayComputedBounds@UR.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18008F590 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??$ReleaseInterface@VCVisualTree@@@@YAXAEAPEAVCVisualTree@@@Z @ 0x1800B4714 (--$ReleaseInterface@VCVisualTree@@@@YAXAEAPEAVCVisualTree@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?CheckAndSetReusableSource@CHwBitmapColorSource@@AEAAXPEAV1@@Z @ 0x18019ED9C (-CheckAndSetReusableSource@CHwBitmapColorSource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CHwBitmapColorSource::CheckAndSetReusableSources(
        CHwBitmapColorSource *this,
        struct CHwBitmapColorSource *a2)
{
  struct CHwBitmapColorSource *v2; // rdi
  struct CHwBitmapColorSource *v4; // rbx

  v2 = a2;
  if ( a2 )
    (**(void (__fastcall ***)(struct CHwBitmapColorSource *))a2)(a2);
  ReleaseInterface<CVisualTree>((char *)this + 264);
  if ( v2 )
  {
    do
    {
      v4 = (struct CHwBitmapColorSource *)*((_QWORD *)v2 + 33);
      *((_QWORD *)v2 + 33) = 0LL;
      CHwBitmapColorSource::CheckAndSetReusableSource(this, v2);
      CMILRefCountBase::Release(v2);
      v2 = v4;
    }
    while ( v4 );
  }
}
