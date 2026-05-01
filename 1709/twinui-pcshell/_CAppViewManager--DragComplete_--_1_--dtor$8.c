/*
 * XREFs of _CAppViewManager::DragComplete_::_1_::dtor$8 @ 0x1801E82C3
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAppViewManager::DragComplete_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a2 + 144));
}
