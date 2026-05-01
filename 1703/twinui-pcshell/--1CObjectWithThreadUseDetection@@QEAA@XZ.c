/*
 * XREFs of ??1CObjectWithThreadUseDetection@@QEAA@XZ @ 0x180026D14
 * Callers:
 *     _CApplicationManager::_CApplicationManager_::_1_::dtor$1 @ 0x180197B28 (_CApplicationManager--_CApplicationManager_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall CObjectWithThreadUseDetection::~CObjectWithThreadUseDetection(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}
