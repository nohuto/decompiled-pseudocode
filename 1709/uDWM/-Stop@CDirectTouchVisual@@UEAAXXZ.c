/*
 * XREFs of ?Stop@CDirectTouchVisual@@UEAAXXZ @ 0x1800657C0
 * Callers:
 *     <none>
 * Callees:
 *     ?StopTimer@CDirectTouchVisual@@MEAAJXZ @ 0x180039770 (-StopTimer@CDirectTouchVisual@@MEAAJXZ.c)
 */

void __fastcall CDirectTouchVisual::Stop(CDirectTouchVisual *this)
{
  CDirectTouchVisual::StopTimer(this);
  CVisual::SetOpacity(this, 0.0);
}
