/*
 * XREFs of ??1critical_section@wil@@QEAA@XZ @ 0x180027484
 * Callers:
 *     _CApplicationManager::_CApplicationManager_::_1_::dtor$1 @ 0x1801E6119 (_CApplicationManager--_CApplicationManager_--_1_--dtor$1.c)
 *     _TouchKeyboardExperienceManager::_TouchKeyboardExperienceManager_::_1_::dtor$12 @ 0x1801F62E6 (_TouchKeyboardExperienceManager--_TouchKeyboardExperienceManager_--_1_--dtor$12.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall wil::critical_section::~critical_section(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
