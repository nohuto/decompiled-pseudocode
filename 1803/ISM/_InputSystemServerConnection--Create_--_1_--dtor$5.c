/*
 * XREFs of _InputSystemServerConnection::Create_::_1_::dtor$5 @ 0x1800E4244
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall InputSystemServerConnection::Create_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<MPCManagerConnection,wil::err_exception_policy>::~com_ptr_t<MPCManagerConnection,wil::err_exception_policy>((__int64 *)(a2 + 56));
}
