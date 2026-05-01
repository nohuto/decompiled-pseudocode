/*
 * XREFs of _CAppViewManager::DragEnter_::_1_::dtor$9 @ 0x1801998CF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAppViewManager::DragEnter_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a2 + 48));
}
