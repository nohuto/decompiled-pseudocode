/*
 * XREFs of ?GetBoundsFromInputs@CShadowEffect@@MEBAXAEBV?$DynArray@UInputBoundsPair@@$0A@@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B6A30
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180064E70 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180065050 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

void __fastcall CShadowEffect::GetBoundsFromInputs(__int64 a1, __int64 a2, _OWORD *a3)
{
  struct D2D_RECT_F v3; // xmm0
  __int64 v4; // r9
  __int64 v5; // r10
  float *v6; // r11
  float v7; // xmm4_4
  int v8; // r9d
  struct D2D_RECT_F i; // [rsp+20h] [rbp-20h] BYREF

  v3 = (struct D2D_RECT_F)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v4 = 0LL;
  v5 = a2;
  *a3 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  for ( i = v3; (unsigned int)v4 < *(_DWORD *)(v5 + 24); v4 = (unsigned int)(v8 + 1) )
  {
    i = *(struct D2D_RECT_F *)(*(_QWORD *)v5 + 20 * v4 + 4);
    if ( !IsEmpty(&i) )
    {
      i.left = i.left - v7;
      i.top = i.top - v7;
      i.right = i.right + v7;
      i.bottom = i.bottom + v7;
    }
    TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v6, &i.left);
  }
}
