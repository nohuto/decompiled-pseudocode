/*
 * XREFs of _CMonitor::CMonitor_::_1_::dtor$11 @ 0x1800A2D18
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMonitor::CMonitor_::_1_::dtor_11(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(*(_QWORD *)(a2 + 64) + 184LL));
}
