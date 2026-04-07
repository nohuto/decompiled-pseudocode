/*
 * XREFs of ?OnSetPersistentDesktopColorEffect@CFullScreenMagnifier@@QEAAJAEBUMilColorTransform@@@Z @ 0x18006F4F8
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x180073338 (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UpdateColorTransform@CFullScreenMagnifier@@AEAAJXZ @ 0x18006F574 (-UpdateColorTransform@CFullScreenMagnifier@@AEAAJXZ.c)
 */

__int64 __fastcall CFullScreenMagnifier::OnSetPersistentDesktopColorEffect(
        CFullScreenMagnifier *this,
        const struct MilColorTransform *a2)
{
  int updated; // eax
  unsigned int v3; // ebx

  *(_OWORD *)((char *)this + 172) = *(_OWORD *)a2;
  *(_OWORD *)((char *)this + 188) = *((_OWORD *)a2 + 1);
  *(_OWORD *)((char *)this + 204) = *((_OWORD *)a2 + 2);
  *(_OWORD *)((char *)this + 220) = *((_OWORD *)a2 + 3);
  *(_OWORD *)((char *)this + 236) = *((_OWORD *)a2 + 4);
  *(_OWORD *)((char *)this + 252) = *((_OWORD *)a2 + 5);
  *((_DWORD *)this + 67) = *((_DWORD *)a2 + 24);
  updated = CFullScreenMagnifier::UpdateColorTransform(this);
  v3 = updated;
  if ( updated < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x16Eu);
  return v3;
}
