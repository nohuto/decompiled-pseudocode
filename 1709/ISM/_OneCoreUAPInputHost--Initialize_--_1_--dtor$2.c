/*
 * XREFs of _OneCoreUAPInputHost::Initialize_::_1_::dtor$2 @ 0x1800CC5CF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall OneCoreUAPInputHost::Initialize_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  GestureSession::operator delete(*(void **)(a2 + 192));
}
