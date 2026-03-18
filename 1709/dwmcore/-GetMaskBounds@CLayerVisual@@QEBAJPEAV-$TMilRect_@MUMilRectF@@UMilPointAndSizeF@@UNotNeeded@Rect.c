/*
 * XREFs of ?GetMaskBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18016FDDC
 * Callers:
 *     ?GetShadowBounds@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800832C0 (-GetShadowBounds@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Re.c)
 *     ?CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV3@2@Z @ 0x18016F9C8 (-CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatr.c)
 * Callees:
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x180050F3C (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetBoundsWithLayerEffect@CLayerVisual@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800834F8 (-GetBoundsWithLayerEffect@CLayerVisual@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNot.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCSpriteVisualContent@@XZ @ 0x180160B84 (-GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCSpriteVisualContent@@XZ.c)
 */

__int64 __fastcall CLayerVisual::GetMaskBounds(CVisual *this, float *a2)
{
  __int128 v2; // xmm0
  unsigned int v4; // ebx
  CDropShadow *v6; // rcx
  __int64 v7; // r10
  __int64 (__fastcall *v8)(__int64, _QWORD, __int128 *, float *); // rax
  signed int v9; // eax
  signed int BoundsWithLayerEffect; // eax
  float v12; // [rsp+30h] [rbp-20h] BYREF
  __int128 v13; // [rsp+38h] [rbp-18h] BYREF

  v2 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v4 = 0;
  *(_OWORD *)a2 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v6 = (CDropShadow *)*((_QWORD *)this + 64);
  v13 = v2;
  if ( v6 )
  {
    if ( CDropShadow::GetMaskForLayerVisualNoRef(v6) )
    {
      if ( CVisual::GetEffectiveSize(this, (float *)&v13, &v12) )
      {
        v8 = *(__int64 (__fastcall **)(__int64, _QWORD, __int128 *, float *))(*(_QWORD *)v7 + 168LL);
        *((float *)&v13 + 1) = v12;
        v9 = v8(v7, 0LL, &v13, a2);
        v4 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x152u);
      }
    }
    else
    {
      BoundsWithLayerEffect = CLayerVisual::GetBoundsWithLayerEffect(this, a2);
      v4 = BoundsWithLayerEffect;
      if ( BoundsWithLayerEffect < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, BoundsWithLayerEffect, 0x157u);
    }
  }
  return v4;
}
