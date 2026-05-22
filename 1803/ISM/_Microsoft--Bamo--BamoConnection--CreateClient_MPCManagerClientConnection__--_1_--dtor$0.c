/*
 * XREFs of _Microsoft::Bamo::BamoConnection::CreateClient_MPCManagerClientConnection__::_1_::dtor$0 @ 0x1800E46D2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::Bamo::BamoConnection::CreateClient_MPCManagerClientConnection__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  wil::com_ptr_t<MPCManagerConnection,wil::err_exception_policy>::~com_ptr_t<MPCManagerConnection,wil::err_exception_policy>((__int64 *)(a2 + 128));
}
