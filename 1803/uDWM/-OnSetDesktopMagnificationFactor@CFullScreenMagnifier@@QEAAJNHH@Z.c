/*
 * XREFs of ?OnSetDesktopMagnificationFactor@CFullScreenMagnifier@@QEAAJNHH@Z @ 0x180075E60
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x180079C18 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ?UpdateSettings@CFullScreenMagnifier@@AEAAJNNN@Z @ 0x18003DF80 (-UpdateSettings@CFullScreenMagnifier@@AEAAJNNN@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CFullScreenMagnifier::OnSetDesktopMagnificationFactor(
        CFullScreenMagnifier *this,
        double a2,
        int a3,
        int a4)
{
  int updated; // eax
  unsigned int v5; // ebx

  updated = CFullScreenMagnifier::UpdateSettings(this, a2, (double)a3, (double)a4);
  v5 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x1ADu);
  return v5;
}
