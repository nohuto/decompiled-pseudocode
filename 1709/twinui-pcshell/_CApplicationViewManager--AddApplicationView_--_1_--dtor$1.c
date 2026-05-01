/*
 * XREFs of _CApplicationViewManager::AddApplicationView_::_1_::dtor$1 @ 0x1801E97CB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationViewManager::AddApplicationView_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a2 + 96));
}
