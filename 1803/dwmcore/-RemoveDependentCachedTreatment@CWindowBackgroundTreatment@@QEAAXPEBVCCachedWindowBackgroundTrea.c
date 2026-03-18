/*
 * XREFs of ?RemoveDependentCachedTreatment@CWindowBackgroundTreatment@@QEAAXPEBVCCachedWindowBackgroundTreatment@@@Z @ 0x18000BC5C
 * Callers:
 *     ??1CCachedWindowBackgroundTreatment@@UEAA@XZ @ 0x180006804 (--1CCachedWindowBackgroundTreatment@@UEAA@XZ.c)
 *     ?Update@CCachedWindowBackgroundTreatment@@QEAAJPEAVCWindowBackgroundTreatment@@PEAVIImageSource@@AEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180006860 (-Update@CCachedWindowBackgroundTreatment@@QEAAJPEAVCWindowBackgroundTreatment@@PEAVIImageSource@.c)
 * Callees:
 *     <none>
 */

void __fastcall CWindowBackgroundTreatment::RemoveDependentCachedTreatment(
        CWindowBackgroundTreatment *this,
        const struct CCachedWindowBackgroundTreatment *a2)
{
  const struct CCachedWindowBackgroundTreatment **v2; // rax
  const struct CCachedWindowBackgroundTreatment **i; // rcx

  v2 = (const struct CCachedWindowBackgroundTreatment **)*((_QWORD *)this + 49);
  for ( i = (const struct CCachedWindowBackgroundTreatment **)*((_QWORD *)this + 48); i != v2 && *i != a2; ++i )
    ;
  if ( i != v2 )
  {
    memmove(i, i + 1, (char *)v2 - (char *)(i + 1));
    *((_QWORD *)this + 49) -= 8LL;
  }
}
