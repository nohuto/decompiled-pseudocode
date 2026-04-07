/*
 * XREFs of ?Stop@CDirectTouchVisual@@UEAAXXZ @ 0x18006F060
 * Callers:
 *     <none>
 * Callees:
 *     ?StopTimer@CDirectTouchVisual@@MEAAJXZ @ 0x180040D90 (-StopTimer@CDirectTouchVisual@@MEAAJXZ.c)
 */

void __fastcall CDirectTouchVisual::Stop(CDirectTouchVisual *this)
{
  CDirectTouchVisual::StopTimer(this);
  CVisual::SetOpacity(this, 0.0);
}
