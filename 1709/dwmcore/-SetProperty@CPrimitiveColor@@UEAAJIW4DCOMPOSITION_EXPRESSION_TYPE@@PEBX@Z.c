/*
 * XREFs of ?SetProperty@CPrimitiveColor@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800B6550
 * Callers:
 *     ?UpdateAnimateValues@CAnimation@@UEAAXXZ @ 0x18002D090 (-UpdateAnimateValues@CAnimation@@UEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?OnColorChanged@CPrimitiveColor@@AEAAXXZ @ 0x1800B62CC (-OnColorChanged@CPrimitiveColor@@AEAAXXZ.c)
 */

__int64 __fastcall CPrimitiveColor::SetProperty(__int64 a1, int a2, int a3, float *a4)
{
  unsigned int v4; // ebx
  float v6; // xmm1_4
  int v7; // edx
  int v8; // edx
  int v9; // edx
  __int64 v10; // rax
  float *v11; // rcx

  v4 = 0;
  if ( a3 != 18 )
    goto LABEL_14;
  v6 = *a4;
  v7 = a2 - 1;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        if ( v9 != 1 )
          goto LABEL_14;
        v10 = 116LL;
      }
      else
      {
        v10 = 112LL;
      }
    }
    else
    {
      v10 = 108LL;
    }
  }
  else
  {
    v10 = 104LL;
  }
  v11 = (float *)(v10 + a1);
  if ( !v11 )
  {
LABEL_14:
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x49u);
    return v4;
  }
  if ( *v11 != v6 )
  {
    *v11 = v6;
    CPrimitiveColor::OnColorChanged((CPrimitiveColor *)(a1 - 8));
  }
  return v4;
}
