/*
 * XREFs of ?PreUninitialize@CHidInput@@EEAAXXZ @ 0x1C004ECF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CHidInput::PreUninitialize(CHidInput *this)
{
  RIMRemoveInputOfType(*((_QWORD *)this + 1), 60LL);
}
