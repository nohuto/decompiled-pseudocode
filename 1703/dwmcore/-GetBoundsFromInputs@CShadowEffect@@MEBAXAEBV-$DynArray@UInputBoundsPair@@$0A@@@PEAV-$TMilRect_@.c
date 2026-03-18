/*
 * XREFs of ?GetBoundsFromInputs@CShadowEffect@@MEBAXAEBV?$DynArray@UInputBoundsPair@@$0A@@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180179560
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006FBC0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18006FD70 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

void __fastcall CShadowEffect::GetBoundsFromInputs(__int64 a1, __int64 a2, _OWORD *a3)
{
  __int128 v3; // xmm0
  __int64 v4; // r9
  __int64 v5; // r10
  float *v6; // r11
  float v7; // xmm4_4
  int v8; // r9d
  __int128 i; // [rsp+20h] [rbp-20h] BYREF

  v3 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v4 = 0LL;
  v5 = a2;
  *a3 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  for ( i = v3; (unsigned int)v4 < *(_DWORD *)(v5 + 24); v4 = (unsigned int)(v8 + 1) )
  {
    i = *(_OWORD *)(*(_QWORD *)v5 + 20 * v4 + 4);
    if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&i) )
    {
      *(float *)&i = *(float *)&i - v7;
      *((float *)&i + 1) = *((float *)&i + 1) - v7;
      *((float *)&i + 2) = *((float *)&i + 2) + v7;
      *((float *)&i + 3) = *((float *)&i + 3) + v7;
    }
    TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v6, (float *)&i);
  }
}
