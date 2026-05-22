/*
 * XREFs of _TouchProcessor::Create_::_1_::dtor$2 @ 0x1800E3DE7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TouchProcessor::Create_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  GestureSession::operator delete(*(void **)(a2 + 80));
}
