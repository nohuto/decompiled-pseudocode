/*
 * XREFs of ?GetBoundsFromInputs@CFilterEffect@@MEBAXAEBV?$DynArray@UInputBoundsPair@@$0A@@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18018E230
 * Callers:
 *     ?GetBoundsFromInputs@CAffineTransform2DEffect@@MEBAXAEBV?$DynArray@UInputBoundsPair@@$0A@@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B0A10 (-GetBoundsFromInputs@CAffineTransform2DEffect@@MEBAXAEBV-$DynArray@UInputBoundsPair@@$0A@@@PEAV-.c)
 *     ?GetBoundsFromInputs@CArithmeticCompositeEffect@@MEBAXAEBV?$DynArray@UInputBoundsPair@@$0A@@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B1080 (-GetBoundsFromInputs@CArithmeticCompositeEffect@@MEBAXAEBV-$DynArray@UInputBoundsPair@@$0A@@@PEA.c)
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180065050 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

char __fastcall CFilterEffect::GetBoundsFromInputs(__int64 a1, __int64 a2, float *a3)
{
  __int64 v3; // r9
  float *v4; // r11
  __int64 v5; // r10
  char result; // al
  int v7; // r9d

  v3 = 0LL;
  v4 = a3;
  v5 = a2;
  for ( *(_OWORD *)a3 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
        (unsigned int)v3 < *(_DWORD *)(v5 + 24);
        v3 = (unsigned int)(v7 + 1) )
  {
    result = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(
               v4,
               (float *)(*(_QWORD *)v5 + 4 * (v3 + 4 * v3 + 1)));
  }
  return result;
}
