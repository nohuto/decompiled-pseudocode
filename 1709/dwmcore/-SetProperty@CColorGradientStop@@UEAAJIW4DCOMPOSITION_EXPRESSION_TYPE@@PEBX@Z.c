/*
 * XREFs of ?SetProperty@CColorGradientStop@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180159DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetColor@CColorGradientStop@@IEAAXAEBU_D3DCOLORVALUE@@@Z @ 0x1800721C8 (-SetColor@CColorGradientStop@@IEAAXAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?SetOffset@CColorGradientStop@@IEAAXM@Z @ 0x180072230 (-SetOffset@CColorGradientStop@@IEAAXM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CColorGradientStop::SetProperty(
        CColorGradientStop *a1,
        int a2,
        int a3,
        const struct _D3DCOLORVALUE *a4)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( a3 == 18 )
  {
    if ( !a2 )
    {
      CColorGradientStop::SetOffset(a1, a4->r);
      return v4;
    }
LABEL_7:
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070057, 0x69u);
    return v4;
  }
  if ( a3 != 70 || a2 != 1 )
    goto LABEL_7;
  CColorGradientStop::SetColor(a1, a4);
  return v4;
}
