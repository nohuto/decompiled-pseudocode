/*
 * XREFs of _RIMRawInputProvider::Initialize_::_1_::dtor$0 @ 0x1800E72F2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall RIMRawInputProvider::Initialize_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  GestureSession::operator delete(*(void **)(a2 + 128));
}
