/*
 * XREFs of _CSubmixImpl::_CSubmixImpl_::_1_::dtor$7 @ 0x140020D29
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSubmixImpl::_CSubmixImpl_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(*(_QWORD *)(a2 + 112) + 224LL);
}
