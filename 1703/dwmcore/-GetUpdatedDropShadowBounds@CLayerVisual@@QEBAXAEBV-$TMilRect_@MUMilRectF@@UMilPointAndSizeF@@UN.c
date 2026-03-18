/*
 * XREFs of ?GetUpdatedDropShadowBounds@CLayerVisual@@QEBAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180161A04
 * Callers:
 *     ?Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800145D8 (-Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006FBC0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18006FD70 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 */

char __fastcall CLayerVisual::GetUpdatedDropShadowBounds(__int64 a1, _OWORD *a2, _OWORD *a3)
{
  __int64 v3; // rax
  float *v4; // r8
  float v5; // xmm4_4
  float v7[4]; // [rsp+20h] [rbp-20h]
  __int128 v8; // [rsp+30h] [rbp-10h] BYREF

  *a3 = *a2;
  v3 = *(_QWORD *)(a1 + 496);
  if ( v3 )
  {
    if ( !*(_QWORD *)(v3 + 136) )
    {
      v8 = *a2;
      *(_QWORD *)v7 = *(_QWORD *)(v3 + 104);
      LOBYTE(v3) = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v8);
      if ( !(_BYTE)v3 )
      {
        *(float *)&v8 = (float)(*(float *)&v8 - v5) + v7[0];
        *((float *)&v8 + 1) = (float)(*((float *)&v8 + 1) - v5) + v7[1];
        *((float *)&v8 + 2) = (float)(*((float *)&v8 + 2) + v5) + v7[0];
        *((float *)&v8 + 3) = (float)(*((float *)&v8 + 3) + v5) + v7[1];
        LOBYTE(v3) = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v4, (float *)&v8);
      }
    }
  }
  return v3;
}
