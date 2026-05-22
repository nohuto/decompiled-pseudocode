/*
 * XREFs of _Microsoft::Bamo::BamoConnection::CreateServer_MPCManagerConnection__::_1_::dtor$0 @ 0x1800E64E6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::Bamo::BamoConnection::CreateServer_MPCManagerConnection__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  wil::com_ptr_t<MPCManagerConnection,wil::err_exception_policy>::~com_ptr_t<MPCManagerConnection,wil::err_exception_policy>((__int64 *)(a2 + 152));
}
