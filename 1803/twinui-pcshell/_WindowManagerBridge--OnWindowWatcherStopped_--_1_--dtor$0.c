/*
 * XREFs of _WindowManagerBridge::OnWindowWatcherStopped_::_1_::dtor$0 @ 0x1801ECE08
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall WindowManagerBridge::OnWindowWatcherStopped_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a2 + 104));
}
