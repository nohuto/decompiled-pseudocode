/*
 * XREFs of ?Stop@CTouchPressHoldVisual@@UEAAXXZ @ 0x1800A5B30
 * Callers:
 *     ??1CTouchPressHoldVisual@@MEAA@XZ @ 0x1800A5540 (--1CTouchPressHoldVisual@@MEAA@XZ.c)
 * Callees:
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180017D70 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18003DCC4 (-UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?SetETWAnimation@CTouchPressHoldVisual@@AEAAXW4TPHANIM@1@@Z @ 0x1800A569C (-SetETWAnimation@CTouchPressHoldVisual@@AEAAXW4TPHANIM@1@@Z.c)
 *     ?StopAllTimelines@CTouchPressHoldVisual@@IEAAXXZ @ 0x1800A5B68 (-StopAllTimelines@CTouchPressHoldVisual@@IEAAXXZ.c)
 */

void __fastcall CTouchPressHoldVisual::Stop(CTouchPressHoldVisual *this)
{
  CTouchVisual *v2; // rcx

  CRenderDataVisual::ClearInstructions(this);
  CTouchPressHoldVisual::StopAllTimelines(this);
  CTouchVisual::UnRegisterGlobalTimer(v2);
  CTouchPressHoldVisual::SetETWAnimation((__int64)this, 0);
  CVisual::SetOpacity(this, 0.0);
}
