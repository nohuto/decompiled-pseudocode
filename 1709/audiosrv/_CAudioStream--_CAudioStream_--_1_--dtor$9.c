/*
 * XREFs of _CAudioStream::_CAudioStream_::_1_::dtor$9 @ 0x1800393DC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioStream::_CAudioStream_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)(*(_QWORD *)(a2 + 80) + 200LL));
}
