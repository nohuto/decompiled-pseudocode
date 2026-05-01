/*
 * XREFs of _TouchKeyboardExperienceManager::_TouchKeyboardExperienceManager_::_1_::dtor$12 @ 0x1801F62E6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TouchKeyboardExperienceManager::_TouchKeyboardExperienceManager_::_1_::dtor_12(__int64 a1, __int64 a2)
{
  wil::critical_section::~critical_section((LPCRITICAL_SECTION)(*(_QWORD *)(a2 + 64) + 336LL));
}
