/*
 * XREFs of ?SetProperty@CProjectedShadowCaster@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801A0EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?SetBlurRadius@CProjectedShadowCaster@@AEAAXM@Z @ 0x1801A0D4C (-SetBlurRadius@CProjectedShadowCaster@@AEAAXM@Z.c)
 *     ?SetOpacityMultiplier@CProjectedShadowCaster@@AEAAXM@Z @ 0x1801A0E04 (-SetOpacityMultiplier@CProjectedShadowCaster@@AEAAXM@Z.c)
 */

__int64 __fastcall CProjectedShadowCaster::SetProperty(CProjectedShadowCaster *a1, int a2, int a3, float *a4)
{
  unsigned int v4; // ebx

  if ( a3 != 18 )
    goto LABEL_6;
  v4 = 0;
  if ( !a2 )
  {
    CProjectedShadowCaster::SetBlurRadius(a1, *a4);
    return v4;
  }
  if ( a2 != 4 )
  {
LABEL_6:
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x76u);
    return v4;
  }
  CProjectedShadowCaster::SetOpacityMultiplier(a1, *a4);
  return v4;
}
