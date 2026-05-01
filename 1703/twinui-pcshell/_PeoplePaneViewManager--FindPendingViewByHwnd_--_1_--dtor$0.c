/*
 * XREFs of _PeoplePaneViewManager::FindPendingViewByHwnd_::_1_::dtor$0 @ 0x18019DC16
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PeoplePaneViewManager::FindPendingViewByHwnd_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a2 + 64));
}
