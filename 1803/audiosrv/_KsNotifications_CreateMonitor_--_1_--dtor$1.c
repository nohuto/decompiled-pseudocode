/*
 * XREFs of _KsNotifications_CreateMonitor_::_1_::dtor$1 @ 0x180068679
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KsNotifications_CreateMonitor_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(*(_QWORD *)(a2 + 144));
}
