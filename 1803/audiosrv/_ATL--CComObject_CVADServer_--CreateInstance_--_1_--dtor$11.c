/*
 * XREFs of _ATL::CComObject_CVADServer_::CreateInstance_::_1_::dtor$11 @ 0x18006A4E5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComObject_CVADServer_::CreateInstance_::_1_::dtor_11(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioStreamPreStartContext,wil::err_returncode_policy>::~com_ptr_t<IAudioStreamPreStartContext,wil::err_returncode_policy>((__int64 *)(*(_QWORD *)(a2 + 272) + 464LL));
}
