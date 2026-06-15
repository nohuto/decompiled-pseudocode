/*
 * XREFs of _ATL::CComObject_CVADServer_::CreateInstance_::_1_::dtor$9 @ 0x18006A4BF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject_CVADServer_::CreateInstance_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(*(_QWORD *)(a2 + 272) + 440LL));
}
