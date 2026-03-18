/*
 * XREFs of ?GetProperty@CCompositionSpotLight@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1800A0BF0
 * Callers:
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x1800A1DF0 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CCompositionSpotLight::GetProperty(
        CCompositionSpotLight *this,
        unsigned int a2,
        struct CExpressionValue *a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // edx
  float v5; // xmm0_4
  unsigned int v6; // edx
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // edx
  float v10; // xmm0_4
  unsigned int v12; // edx
  unsigned int v13; // edx
  unsigned int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // edx
  __int128 v17; // xmm0
  __m128 v18; // xmm1
  __m128 v19; // xmm2
  int v20; // xmm0_4

  v3 = 0;
  if ( a2 > 9 )
  {
    v6 = a2 - 10;
    if ( !v6 )
    {
      v5 = *((float *)this + 74);
      goto LABEL_11;
    }
    v7 = v6 - 1;
    if ( !v7 )
    {
      v18 = (__m128)*((unsigned int *)this + 46);
      v19 = (__m128)*((unsigned int *)this + 47);
      v20 = *((_DWORD *)this + 48);
      goto LABEL_25;
    }
    v8 = v7 - 1;
    if ( !v8 )
    {
      v5 = *((float *)this + 53);
      goto LABEL_11;
    }
    v9 = v8 - 1;
    if ( !v9 )
    {
      v10 = *((float *)this + 53);
LABEL_10:
      v5 = v10 * 57.295776;
      goto LABEL_11;
    }
    v16 = v9 - 1;
    if ( v16 )
    {
      if ( v16 == 1 )
      {
        v5 = *((float *)this + 75);
        goto LABEL_11;
      }
      goto LABEL_32;
    }
    *((_DWORD *)a3 + 16) = 70;
    v17 = *(_OWORD *)((char *)this + 232);
LABEL_22:
    *(_OWORD *)a3 = v17;
    goto LABEL_12;
  }
  if ( a2 == 9 )
  {
    *((_DWORD *)a3 + 16) = 70;
    v17 = *(_OWORD *)((char *)this + 216);
    goto LABEL_22;
  }
  v4 = a2 - 2;
  if ( v4 )
  {
    v12 = v4 - 1;
    if ( !v12 )
    {
      v5 = *((float *)this + 41);
      goto LABEL_11;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      v5 = *((float *)this + 42);
      goto LABEL_11;
    }
    v14 = v13 - 2;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( !v15 )
      {
        v5 = *((float *)this + 52);
        goto LABEL_11;
      }
      if ( v15 == 1 )
      {
        v10 = *((float *)this + 52);
        goto LABEL_10;
      }
LABEL_32:
      v3 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0xA5u);
      return v3;
    }
    v18 = (__m128)*((unsigned int *)this + 49);
    v19 = (__m128)*((unsigned int *)this + 50);
    v20 = *((_DWORD *)this + 51);
LABEL_25:
    *(_QWORD *)a3 = _mm_unpacklo_ps(v18, v19).m128_u64[0];
    *((_DWORD *)a3 + 2) = v20;
    *((_DWORD *)a3 + 16) = 52;
    goto LABEL_12;
  }
  v5 = *((float *)this + 40);
LABEL_11:
  *(float *)a3 = v5;
  *((_DWORD *)a3 + 16) = 18;
LABEL_12:
  *((_BYTE *)a3 + 68) = 1;
  return v3;
}
