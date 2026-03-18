/*
 * XREFs of ?PreUninitialize@CHidInput@@EEAAXXZ @ 0x1C00195F0
 * Callers:
 *     <none>
 * Callees:
 *     RIMRemoveInputOfType @ 0x1C0008F10 (RIMRemoveInputOfType.c)
 */

void __fastcall CHidInput::PreUninitialize(CHidInput *this)
{
  RIMRemoveInputOfType(*((_QWORD *)this + 1), 0x3Cu);
}
