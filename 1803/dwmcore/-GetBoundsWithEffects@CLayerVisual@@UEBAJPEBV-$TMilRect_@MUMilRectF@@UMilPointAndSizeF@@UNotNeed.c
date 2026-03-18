/*
 * XREFs of ?GetBoundsWithEffects@CLayerVisual@@UEBAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18000A140
 * Callers:
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJXZ @ 0x18004DC40 (-ConvertInnerToOuterBounds@CVisual@@IEAAJXZ.c)
 * Callees:
 *     ?GetBoundsWithEffects@CVisual@@UEBAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180049FD0 (-GetBoundsWithEffects@CVisual@@UEBAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Re.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x18004F714 (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180064E70 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180065050 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCSpriteVisualContent@@XZ @ 0x18018A428 (-GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCSpriteVisualContent@@XZ.c)
 */

__int64 __fastcall CLayerVisual::GetBoundsWithEffects(CVisual *this, __int64 a2, struct D2D_RECT_F *a3)
{
  int BoundsWithEffects; // eax
  unsigned int v6; // ebx
  __int64 v7; // rcx
  float v9; // xmm6_4
  __int64 v10; // r10
  __int64 (__fastcall *v11)(__int64, _QWORD, float *, struct D2D_RECT_F *); // rax
  int v12; // eax
  float v13[2]; // [rsp+30h] [rbp-50h] BYREF
  float v14; // [rsp+38h] [rbp-48h] BYREF
  float v15[4]; // [rsp+40h] [rbp-40h]
  struct D2D_RECT_F v16; // [rsp+50h] [rbp-30h] BYREF

  BoundsWithEffects = CVisual::GetBoundsWithEffects(this);
  v6 = BoundsWithEffects;
  if ( BoundsWithEffects < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, BoundsWithEffects, 0x8Du);
    return v6;
  }
  v7 = *((_QWORD *)this + 65);
  if ( v7 )
  {
    v9 = *(float *)(v7 + 152);
    *(_QWORD *)v15 = *(_QWORD *)(v7 + 160);
    if ( CDropShadow::GetMaskForLayerVisualNoRef((CDropShadow *)v7) )
    {
      if ( CVisual::GetEffectiveSize(this, v13, &v14) )
      {
        v11 = *(__int64 (__fastcall **)(__int64, _QWORD, float *, struct D2D_RECT_F *))(*(_QWORD *)v10 + 168LL);
        v13[1] = v14;
        v12 = v11(v10, 0LL, v13, &v16);
        v6 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x9Du);
          return v6;
        }
      }
    }
    else
    {
      v16 = *a3;
    }
    if ( !IsEmpty(&v16) )
    {
      v16.left = (float)(v16.left - v9) + v15[0];
      v16.top = (float)(v16.top - v9) + v15[1];
      v16.right = (float)(v16.right + v9) + v15[0];
      v16.bottom = (float)(v16.bottom + v9) + v15[1];
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a3, &v16);
    }
  }
  return v6;
}
