/*
 * XREFs of ?GetBoundsWithEffects@CLayerVisual@@UEBAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180014040
 * Callers:
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJXZ @ 0x180088340 (-ConvertInnerToOuterBounds@CVisual@@IEAAJXZ.c)
 * Callees:
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x180012FCC (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006FBC0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18006FD70 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?GetBoundsWithEffects@CVisual@@UEBAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180086400 (-GetBoundsWithEffects@CVisual@@UEBAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Re.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLayerVisual::GetBoundsWithEffects(CVisual *this, __int64 a2, __int128 *a3)
{
  int BoundsWithEffects; // eax
  unsigned int v6; // ebx
  __int64 v7; // r8
  __int64 v9; // r10
  float v10; // xmm6_4
  __int64 v11; // r10
  __int64 (__fastcall *v12)(__int64, _QWORD, float *, __int128 *); // rax
  int v13; // eax
  float v14[2]; // [rsp+30h] [rbp-50h] BYREF
  float v15; // [rsp+38h] [rbp-48h] BYREF
  float v16[4]; // [rsp+40h] [rbp-40h]
  __int128 v17; // [rsp+50h] [rbp-30h] BYREF

  BoundsWithEffects = CVisual::GetBoundsWithEffects(this);
  v6 = BoundsWithEffects;
  if ( BoundsWithEffects < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, BoundsWithEffects, 0x8Du);
    return v6;
  }
  v7 = *((_QWORD *)this + 62);
  if ( v7 )
  {
    v9 = *(_QWORD *)(v7 + 136);
    v10 = *(float *)(v7 + 96);
    *(_QWORD *)v16 = *(_QWORD *)(v7 + 104);
    if ( v9 )
    {
      if ( CVisual::GetEffectiveSize(this, v14, &v15) )
      {
        v12 = *(__int64 (__fastcall **)(__int64, _QWORD, float *, __int128 *))(*(_QWORD *)v11 + 152LL);
        v14[1] = v15;
        v13 = v12(v11, 0LL, v14, &v17);
        v6 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x9Du);
          return v6;
        }
      }
    }
    else
    {
      v17 = *a3;
    }
    if ( !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(&v17) )
    {
      *(float *)&v17 = (float)(*(float *)&v17 - v10) + v16[0];
      *((float *)&v17 + 1) = (float)(*((float *)&v17 + 1) - v10) + v16[1];
      *((float *)&v17 + 2) = (float)(*((float *)&v17 + 2) + v10) + v16[0];
      *((float *)&v17 + 3) = (float)(*((float *)&v17 + 3) + v10) + v16[1];
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a3, &v17);
    }
  }
  return v6;
}
