/*
 * XREFs of _CMonitorManager::OnPropertyValueChanged_::_1_::dtor$1 @ 0x18003A0B8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMonitorManager::OnPropertyValueChanged_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<PropertyChangedContext>::~CAutoPtr<PropertyChangedContext>(a2 + 64);
}
