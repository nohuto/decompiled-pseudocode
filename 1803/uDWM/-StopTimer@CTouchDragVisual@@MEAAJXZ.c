/*
 * XREFs of ?StopTimer@CTouchDragVisual@@MEAAJXZ @ 0x18006C260
 * Callers:
 *     <none>
 * Callees:
 *     ?UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18003DCC4 (-UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CTouchDragVisual::StopTimer(CTouchDragVisual *this)
{
  CTouchVisual::UnRegisterGlobalTimer(this);
  return 0LL;
}
