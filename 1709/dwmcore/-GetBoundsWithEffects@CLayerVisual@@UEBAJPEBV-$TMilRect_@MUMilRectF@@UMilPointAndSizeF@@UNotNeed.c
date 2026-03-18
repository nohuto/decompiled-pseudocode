/*
 * XREFs of ?GetBoundsWithEffects@CLayerVisual@@UEBAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800837C0
 * Callers:
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJXZ @ 0x18004FDC0 (-ConvertInnerToOuterBounds@CVisual@@IEAAJXZ.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036770 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180036790 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x180050F3C (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ?GetBoundsWithEffects@CVisual@@UEBAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800525C0 (-GetBoundsWithEffects@CVisual@@UEBAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Re.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCSpriteVisualContent@@XZ @ 0x180160B84 (-GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCSpriteVisualContent@@XZ.c)
 */

__int64 __fastcall CLayerVisual::GetBoundsWithEffects(CVisual *this, _OWORD *a2, float *a3)
{
  signed int BoundsWithEffects; // eax
  unsigned int v6; // ebx
  __int64 v7; // rcx
  float v9; // xmm6_4
  __int64 v10; // r10
  __int64 (__fastcall *v11)(__int64, _QWORD, float *, __int128 *); // rax
  signed int v12; // eax
  float v13[2]; // [rsp+30h] [rbp-50h] BYREF
  float v14; // [rsp+38h] [rbp-48h] BYREF
  float v15[4]; // [rsp+40h] [rbp-40h]
  __int128 v16; // [rsp+50h] [rbp-30h] BYREF

  BoundsWithEffects = CVisual::GetBoundsWithEffects(this, a2, a3);
  v6 = BoundsWithEffects;
  if ( BoundsWithEffects < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, BoundsWithEffects, 0x8Du);
    return v6;
  }
  v7 = *((_QWORD *)this + 64);
  if ( v7 )
  {
    v9 = *(float *)(v7 + 160);
    *(_QWORD *)v15 = *(_QWORD *)(v7 + 168);
    if ( CDropShadow::GetMaskForLayerVisualNoRef((CDropShadow *)v7) )
    {
      if ( CVisual::GetEffectiveSize(this, v13, &v14) )
      {
        v11 = *(__int64 (__fastcall **)(__int64, _QWORD, float *, __int128 *))(*(_QWORD *)v10 + 168LL);
        v13[1] = v14;
        v12 = v11(v10, 0LL, v13, &v16);
        v6 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x9Du);
          return v6;
        }
      }
    }
    else
    {
      v16 = *(_OWORD *)a3;
    }
    if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v16) )
    {
      *(float *)&v16 = (float)(*(float *)&v16 - v9) + v15[0];
      *((float *)&v16 + 1) = (float)(*((float *)&v16 + 1) - v9) + v15[1];
      *((float *)&v16 + 2) = (float)(*((float *)&v16 + 2) + v9) + v15[0];
      *((float *)&v16 + 3) = (float)(*((float *)&v16 + 3) + v9) + v15[1];
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a3, (float *)&v16);
    }
  }
  return v6;
}
