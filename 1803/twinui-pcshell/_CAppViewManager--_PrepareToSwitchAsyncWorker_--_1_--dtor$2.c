/*
 * XREFs of _CAppViewManager::_PrepareToSwitchAsyncWorker_::_1_::dtor$2 @ 0x180126C13
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAppViewManager::_PrepareToSwitchAsyncWorker_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a2 + 88));
}
