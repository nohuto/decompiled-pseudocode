/*
 * XREFs of _WindowManagerBridge::OnAppViewEnumerationCompleted_::_1_::dtor$0 @ 0x1801EC6CB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall WindowManagerBridge::OnAppViewEnumerationCompleted_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a2 + 64));
}
