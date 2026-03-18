/*
 * XREFs of xxxUnlockMenuState @ 0x1C01EBBA0
 * Callers:
 *     xxxMNStartMenuState @ 0x1C01EB83C (xxxMNStartMenuState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall xxxUnlockMenuState(struct tagMENUSTATE *a1)
{
  return xxxUnlockMenuStateInternal(a1, 0);
}
