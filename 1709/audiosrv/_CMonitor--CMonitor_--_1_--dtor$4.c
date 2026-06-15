/*
 * XREFs of _CMonitor::CMonitor_::_1_::dtor$4 @ 0x1800A2C9F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMonitor::CMonitor_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(*(_QWORD *)(a2 + 64) + 88LL));
}
