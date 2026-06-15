/*
 * XREFs of _CMonitor::CMonitor_::_1_::dtor$12 @ 0x1800A2D2B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMonitor::CMonitor_::_1_::dtor_12(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(*(_QWORD *)(a2 + 64) + 192LL));
}
