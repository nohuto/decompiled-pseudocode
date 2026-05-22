/*
 * XREFs of _MPCManager::OnPeerConnected_::_1_::dtor$0 @ 0x1800E64DA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MPCManager::OnPeerConnected_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Microsoft::Bamo::BamoPeer,wil::err_exception_policy>::~com_ptr_t<Microsoft::Bamo::BamoPeer,wil::err_exception_policy>((__int64 *)(a2 + 96));
}
