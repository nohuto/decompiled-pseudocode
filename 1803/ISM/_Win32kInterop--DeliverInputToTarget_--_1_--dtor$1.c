/*
 * XREFs of _Win32kInterop::DeliverInputToTarget_::_1_::dtor$1 @ 0x1800E3EA7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Win32kInterop::DeliverInputToTarget_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  GestureSession::operator delete(*(void **)(a2 + 48));
}
