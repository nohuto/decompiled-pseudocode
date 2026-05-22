/*
 * XREFs of _ComboButtonProcessor::Create_::_1_::dtor$3 @ 0x1800E966A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ComboButtonProcessor::Create_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  GestureSession::operator delete(*(void **)(a2 + 96));
}
