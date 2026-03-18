/*
 * XREFs of ?PreUninitialize@CHidInput@@EEAAXXZ @ 0x1C0127A50
 * Callers:
 *     <none>
 * Callees:
 *     RIMRemoveInputOfType @ 0x1C00E55D0 (RIMRemoveInputOfType.c)
 */

void __fastcall CHidInput::PreUninitialize(char **this)
{
  RIMRemoveInputOfType(this[1], 0x3Cu);
}
