/*
 * XREFs of ?GetProperty@CInteractionTracker@@MEAAJIPEAVCExpressionValue@@@Z @ 0x18016BCE0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@AEBA_NXZ @ 0x18016AFB8 (-AreInteractionAnimationsAlive@CInteractionTracker@@AEBA_NXZ.c)
 *     ?GetCurrentVelocity@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18016BA00 (-GetCurrentVelocity@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?GetNaturalEndpoint@CScrollAnimation@@QEBAMXZ @ 0x180188DF0 (-GetNaturalEndpoint@CScrollAnimation@@QEBAMXZ.c)
 */

__int64 __fastcall CInteractionTracker::GetProperty(
        CInteractionTracker *this,
        unsigned int a2,
        struct CExpressionValue *a3)
{
  __m128 v3; // xmm0
  unsigned int v4; // esi
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // edx
  int v14; // xmm0_4
  int v15; // eax
  unsigned int v16; // edx
  unsigned int v17; // edx
  unsigned int v18; // edx
  unsigned int v19; // edx
  unsigned int v20; // edx
  unsigned int v21; // edx
  char v22; // al
  float NaturalEndpoint; // xmm0_4
  __m128 v24; // xmm6
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rcx
  float v28; // xmm0_4
  __int64 v29; // xmm0_8
  __int64 v31; // [rsp+30h] [rbp-28h]
  int v32; // [rsp+38h] [rbp-20h]

  v4 = 0;
  if ( a2 > 0x33 )
  {
    v16 = a2 - 53;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( !v17 )
      {
        if ( CInteractionTracker::AreInteractionAnimationsAlive(this) )
          NaturalEndpoint = CScrollAnimation::GetNaturalEndpoint(*(CScrollAnimation **)(v26 + 384));
        else
          NaturalEndpoint = *(float *)(v26 + 112);
LABEL_34:
        *(float *)a3 = NaturalEndpoint;
        *((_DWORD *)a3 + 16) = 18;
LABEL_44:
        *((_BYTE *)a3 + 68) = 1;
        return v4;
      }
      v18 = v17 - 1;
      if ( v18 )
      {
        v19 = v18 - 1;
        if ( v19 )
        {
          v20 = v19 - 1;
          if ( !v20 )
          {
            v22 = *((_BYTE *)this + 620) & 1;
            *((_DWORD *)a3 + 16) = 17;
            *(_BYTE *)a3 = v22;
            goto LABEL_21;
          }
          v21 = v20 - 1;
          if ( v21 )
          {
            if ( v21 == 3 )
            {
              v14 = *((_DWORD *)this + 37);
              goto LABEL_18;
            }
            goto LABEL_29;
          }
          *((_DWORD *)a3 + 16) = 52;
          *(_QWORD *)a3 = *(_QWORD *)((char *)this + 100);
          v15 = *((_DWORD *)this + 27);
LABEL_20:
          *((_DWORD *)a3 + 2) = v15;
          goto LABEL_21;
        }
        NaturalEndpoint = CInteractionTracker::GetCurrentVelocity(this);
        goto LABEL_34;
      }
      v3.m128_f32[0] = CInteractionTracker::GetCurrentVelocity(this);
      v24 = v3;
      v3.m128_f32[0] = CInteractionTracker::GetCurrentVelocity(this);
      v25 = 0;
      *(_QWORD *)a3 = _mm_unpacklo_ps(v3, v24).m128_u64[0];
    }
    else
    {
      if ( CInteractionTracker::AreInteractionAnimationsAlive(this) )
      {
        LODWORD(v31) = CScrollAnimation::GetNaturalEndpoint(*(CScrollAnimation **)(v27 + 392));
        v28 = CScrollAnimation::GetNaturalEndpoint(*((CScrollAnimation **)this + 50));
        v25 = v32;
        *((float *)&v31 + 1) = v28;
        v29 = v31;
      }
      else
      {
        v29 = *(_QWORD *)(v27 + 64);
        v25 = *(_DWORD *)(v27 + 72);
      }
      *(_QWORD *)a3 = v29;
    }
    *((_DWORD *)a3 + 2) = v25;
    *((_DWORD *)a3 + 16) = 52;
    goto LABEL_44;
  }
  if ( a2 == 51 )
    goto LABEL_17;
  v7 = a2 - 1;
  if ( !v7 )
  {
    *((_DWORD *)a3 + 16) = 52;
    *(_QWORD *)a3 = *((_QWORD *)this + 8);
    v15 = *((_DWORD *)this + 18);
    goto LABEL_20;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
LABEL_17:
    v14 = *((_DWORD *)this + 28);
    goto LABEL_18;
  }
  v9 = v8 - 18;
  if ( !v9 )
  {
    *((_DWORD *)a3 + 16) = 52;
    *(_QWORD *)a3 = *(_QWORD *)((char *)this + 76);
    v15 = *((_DWORD *)this + 21);
    goto LABEL_20;
  }
  v10 = v9 - 3;
  if ( !v10 )
  {
    *((_DWORD *)a3 + 16) = 52;
    *(_QWORD *)a3 = *((_QWORD *)this + 11);
    v15 = *((_DWORD *)this + 24);
    goto LABEL_20;
  }
  v11 = v10 - 3;
  if ( !v11 )
  {
    v14 = *((_DWORD *)this + 29);
    goto LABEL_18;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    v14 = *((_DWORD *)this + 30);
    goto LABEL_18;
  }
  v13 = v12 - 22;
  if ( !v13 )
  {
    v14 = *((_DWORD *)this + 16);
    goto LABEL_18;
  }
  if ( v13 != 1 )
  {
LABEL_29:
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x506u);
    return v4;
  }
  v14 = *((_DWORD *)this + 17);
LABEL_18:
  *(_DWORD *)a3 = v14;
  *((_DWORD *)a3 + 16) = 18;
LABEL_21:
  *((_BYTE *)a3 + 68) = 1;
  return v4;
}
