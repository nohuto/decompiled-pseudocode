/*
 * XREFs of ??0CAliasedClip@@QEAA@PEBUMilRectF@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x1800C37B4
 * Callers:
 *     ??0CContextState@@QEAA@_N@Z @ 0x1800C36FC (--0CContextState@@QEAA@_N@Z.c)
 * Callees:
 *     ?RoundWithHalvesDown@@YAXAEBUMilRectF@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800174D4 (-RoundWithHalvesDown@@YAXAEBUMilRectF@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

CAliasedClip *__fastcall CAliasedClip::CAliasedClip(
        CAliasedClip *this,
        const struct MilRectF *a2,
        enum D2D1_ANTIALIAS_MODE a3)
{
  if ( a2 )
  {
    *(_DWORD *)this = 0;
    if ( a3 == D2D1_ANTIALIAS_MODE_ALIASED )
      *(_OWORD *)((char *)this + 4) = *(_OWORD *)a2;
    else
      RoundWithHalvesDown((float *)a2, (float *)this + 1);
  }
  else
  {
    *(_DWORD *)this = 1;
  }
  return this;
}
