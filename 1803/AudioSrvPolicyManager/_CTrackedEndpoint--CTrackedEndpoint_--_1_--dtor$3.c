/*
 * XREFs of _CTrackedEndpoint::CTrackedEndpoint_::_1_::dtor$3 @ 0x180037AB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CTrackedEndpoint::CTrackedEndpoint_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioProcessNotification>::~CComPtr<IAudioProcessNotification>((__int64 *)(*(_QWORD *)(a2 + 80)
                                                                                                + 80LL));
}
