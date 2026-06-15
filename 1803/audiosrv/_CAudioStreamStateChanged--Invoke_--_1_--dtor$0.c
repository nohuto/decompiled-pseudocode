/*
 * XREFs of _CAudioStreamStateChanged::Invoke_::_1_::dtor$0 @ 0x18006A410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioStreamStateChanged::Invoke_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<CAudioSessionManager>::~CComPtr<CAudioSessionManager>(*(_QWORD *)(a2 + 88));
}
