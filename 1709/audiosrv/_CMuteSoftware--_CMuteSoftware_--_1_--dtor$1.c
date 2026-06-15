/*
 * XREFs of _CMuteSoftware::_CMuteSoftware_::_1_::dtor$1 @ 0x18006C186
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMuteSoftware::_CMuteSoftware_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(*(_QWORD *)(a2 + 64) + 40LL));
}
