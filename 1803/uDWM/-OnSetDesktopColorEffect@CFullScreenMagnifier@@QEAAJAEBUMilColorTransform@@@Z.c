/*
 * XREFs of ?OnSetDesktopColorEffect@CFullScreenMagnifier@@QEAAJAEBUMilColorTransform@@@Z @ 0x180075DF0
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x180079C18 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UpdateColorTransform@CFullScreenMagnifier@@AEAAJXZ @ 0x180075F94 (-UpdateColorTransform@CFullScreenMagnifier@@AEAAJXZ.c)
 */

__int64 __fastcall CFullScreenMagnifier::OnSetDesktopColorEffect(
        CFullScreenMagnifier *this,
        const struct MilColorTransform *a2)
{
  int updated; // eax
  unsigned int v3; // ebx

  *(_OWORD *)((char *)this + 72) = *(_OWORD *)a2;
  *(_OWORD *)((char *)this + 88) = *((_OWORD *)a2 + 1);
  *(_OWORD *)((char *)this + 104) = *((_OWORD *)a2 + 2);
  *(_OWORD *)((char *)this + 120) = *((_OWORD *)a2 + 3);
  *(_OWORD *)((char *)this + 136) = *((_OWORD *)a2 + 4);
  *(_OWORD *)((char *)this + 152) = *((_OWORD *)a2 + 5);
  *((_DWORD *)this + 42) = *((_DWORD *)a2 + 24);
  updated = CFullScreenMagnifier::UpdateColorTransform(this);
  v3 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x111u);
  return v3;
}
