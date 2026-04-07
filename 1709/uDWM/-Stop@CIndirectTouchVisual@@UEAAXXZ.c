/*
 * XREFs of ?Stop@CIndirectTouchVisual@@UEAAXXZ @ 0x180092160
 * Callers:
 *     ??1CIndirectTouchVisual@@MEAA@XZ @ 0x180091984 (--1CIndirectTouchVisual@@MEAA@XZ.c)
 * Callees:
 *     ?UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x180039F70 (-UnRegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 *     ?SetETWAnimation@CIndirectTouchVisual@@AEAAXW4ITANIM@1@@Z @ 0x180091BE8 (-SetETWAnimation@CIndirectTouchVisual@@AEAAXW4ITANIM@1@@Z.c)
 *     ?StopAllTimelines@CIndirectTouchVisual@@IEAAXXZ @ 0x180092190 (-StopAllTimelines@CIndirectTouchVisual@@IEAAXXZ.c)
 */

void __fastcall CIndirectTouchVisual::Stop(CIndirectTouchVisual *this)
{
  CTouchVisual *v2; // rcx

  CIndirectTouchVisual::StopAllTimelines(this);
  CTouchVisual::UnRegisterGlobalTimer(v2);
  CIndirectTouchVisual::SetETWAnimation((__int64)this, 0);
  CVisual::SetOpacity(this, 0.0);
}
