/*
 * XREFs of _CProcessSubmixProxy::_CProcessSubmixProxy_::_1_::dtor$1 @ 0x180038631
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CProcessSubmixProxy::_CProcessSubmixProxy_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(*(_QWORD *)(a2 + 64) + 48LL));
}
