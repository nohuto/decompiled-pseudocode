/*
 * XREFs of _CApplicationManager::_CApplicationManager_::_1_::dtor$1 @ 0x1801E6119
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::_CApplicationManager_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  wil::critical_section::~critical_section((LPCRITICAL_SECTION)(*(_QWORD *)(a2 + 64) + 400LL));
}
