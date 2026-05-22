/*
 * XREFs of _MPCManagerClient::MPCManagerClient_::_1_::dtor$3 @ 0x1800E4670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MPCManagerClient::MPCManagerClient_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<MPCManagerConnection,wil::err_exception_policy>::~com_ptr_t<MPCManagerConnection,wil::err_exception_policy>((__int64 *)(*(_QWORD *)(a2 + 80) + 1056LL));
}
