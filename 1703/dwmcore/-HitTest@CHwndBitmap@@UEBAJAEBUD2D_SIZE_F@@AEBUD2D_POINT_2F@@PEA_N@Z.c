/*
 * XREFs of ?HitTest@CHwndBitmap@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x180164CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBoundsInternal@CHwndBitmap@@AEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800200DC (-GetBoundsInternal@CHwndBitmap@@AEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006FBC0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

__int64 __fastcall CHwndBitmap::HitTest(
        CHwndBitmap *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  int BoundsInternal; // eax
  unsigned int v7; // ebx
  float y; // xmm1_4
  float v10[4]; // [rsp+30h] [rbp-28h] BYREF

  *a4 = 0;
  BoundsInternal = CHwndBitmap::GetBoundsInternal((__int64)this - 16, (__int64)v10);
  v7 = BoundsInternal;
  if ( BoundsInternal < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, BoundsInternal, 0x1A9u);
  }
  else if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(v10) )
  {
    y = a3->y;
    if ( y >= v10[1] && v10[3] > y && a3->x >= v10[0] && v10[2] > a3->x )
      *a4 = 1;
  }
  return v7;
}
