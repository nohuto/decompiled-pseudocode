/*
 * XREFs of ?GetUpdatedDropShadowBounds@CLayerVisual@@QEBAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18016FEC8
 * Callers:
 *     ?Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800809DC (-Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036770 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180036790 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCSpriteVisualContent@@XZ @ 0x180160B84 (-GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCSpriteVisualContent@@XZ.c)
 */

void __fastcall CLayerVisual::GetUpdatedDropShadowBounds(__int64 a1, _OWORD *a2, float *a3)
{
  CDropShadow *v6; // rcx
  __int64 v7; // rax
  float v8; // xmm4_4
  float v9[4]; // [rsp+20h] [rbp-20h]
  __int128 v10; // [rsp+30h] [rbp-10h] BYREF

  *(_OWORD *)a3 = *a2;
  v6 = *(CDropShadow **)(a1 + 512);
  if ( v6 && !CDropShadow::GetMaskForLayerVisualNoRef(v6) )
  {
    v7 = *(_QWORD *)(a1 + 512);
    v10 = *a2;
    *(_QWORD *)v9 = *(_QWORD *)(v7 + 168);
    if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v10) )
    {
      *(float *)&v10 = (float)(*(float *)&v10 - v8) + v9[0];
      *((float *)&v10 + 1) = (float)(*((float *)&v10 + 1) - v8) + v9[1];
      *((float *)&v10 + 2) = (float)(*((float *)&v10 + 2) + v8) + v9[0];
      *((float *)&v10 + 3) = (float)(*((float *)&v10 + 3) + v8) + v9[1];
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a3, (float *)&v10);
    }
  }
}
