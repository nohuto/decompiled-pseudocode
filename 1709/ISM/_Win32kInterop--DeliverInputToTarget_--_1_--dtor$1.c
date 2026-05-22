/*
 * XREFs of _Win32kInterop::DeliverInputToTarget_::_1_::dtor$1 @ 0x1800CCD3A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Win32kInterop::DeliverInputToTarget_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  GestureSession::operator delete(*(void **)(a2 + 128));
}
