/*
 * XREFs of _AudioDeviceMgr::AudioDeviceMgr_::_1_::dtor$6 @ 0x1800E6645
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AudioDeviceMgr::AudioDeviceMgr_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(*(_QWORD *)(a2 + 64) + 88LL));
}
