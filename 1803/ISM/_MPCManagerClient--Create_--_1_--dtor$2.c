/*
 * XREFs of _MPCManagerClient::Create_::_1_::dtor$2 @ 0x1800E45DE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MPCManagerClient::Create_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<MPCManagerConnection,wil::err_exception_policy>::~com_ptr_t<MPCManagerConnection,wil::err_exception_policy>((__int64 *)(a2 + 160));
}
