/*
 * XREFs of xxxUnlockMenuState @ 0x1C01F7A30
 * Callers:
 *     xxxMNStartMenuState @ 0x1C01F7708 (xxxMNStartMenuState.c)
 * Callees:
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C01F6A78 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 */

__int64 __fastcall xxxUnlockMenuState(struct tagMENUSTATE *a1)
{
  return xxxUnlockMenuStateInternal(a1, 0);
}
