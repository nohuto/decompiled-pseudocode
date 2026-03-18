/*
 * XREFs of ?SetProperty@CPrimitiveColor@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800BD6A0
 * Callers:
 *     ?UpdateAnimateValues@CAnimation@@UEAA_NXZ @ 0x1800BC890 (-UpdateAnimateValues@CAnimation@@UEAA_NXZ.c)
 * Callees:
 *     ?OnColorChanged@CPrimitiveColor@@AEAAXXZ @ 0x1800244A8 (-OnColorChanged@CPrimitiveColor@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CPrimitiveColor::SetProperty(float *a1, int a2, int a3, float *a4)
{
  unsigned int v4; // ebx
  float v5; // xmm1_4
  int v6; // edx
  int v7; // edx
  int v8; // edx
  float *v9; // rax

  v4 = 0;
  if ( a3 != 18 )
    goto LABEL_14;
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
          goto LABEL_14;
        v9 = a1 + 29;
      }
      else
      {
        v9 = a1 + 28;
      }
    }
    else
    {
      v9 = a1 + 27;
    }
  }
  else
  {
    v9 = a1 + 26;
  }
  if ( !v9 )
  {
LABEL_14:
    v4 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x49u);
    return v4;
  }
  if ( *v9 != v5 )
  {
    *v9 = v5;
    CPrimitiveColor::OnColorChanged((CPrimitiveColor *)(a1 - 2));
  }
  return v4;
}
