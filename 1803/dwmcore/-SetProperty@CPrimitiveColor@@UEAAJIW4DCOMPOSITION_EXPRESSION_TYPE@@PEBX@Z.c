/*
 * XREFs of ?SetProperty@CPrimitiveColor@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18019E440
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?OnColorChanged@CPrimitiveColor@@AEAAXXZ @ 0x18019E2EC (-OnColorChanged@CPrimitiveColor@@AEAAXXZ.c)
 */

__int64 __fastcall CPrimitiveColor::SetProperty(__int64 a1, int a2, int a3, float *a4)
{
  float v5; // xmm1_4
  int v6; // edx
  int v7; // edx
  int v8; // edx
  __int64 v9; // rax
  unsigned int v10; // ebx
  float *v11; // rcx

  if ( a3 != 18 )
    goto LABEL_13;
  v5 = *a4;
  v6 = a2 - 1;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        if ( v8 != 1 )
        {
LABEL_13:
          v10 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x49u);
          return v10;
        }
        v9 = 116LL;
      }
      else
      {
        v9 = 112LL;
      }
    }
    else
    {
      v9 = 108LL;
    }
  }
  else
  {
    v9 = 104LL;
  }
  v10 = 0;
  v11 = (float *)(v9 + a1);
  if ( !v11 )
    goto LABEL_13;
  if ( *v11 != v5 )
  {
    *v11 = v5;
    CPrimitiveColor::OnColorChanged((CPrimitiveColor *)(a1 - 8));
  }
  return v10;
}
