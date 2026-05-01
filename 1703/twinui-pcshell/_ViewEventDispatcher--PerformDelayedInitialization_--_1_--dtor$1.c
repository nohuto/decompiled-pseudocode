/*
 * XREFs of _ViewEventDispatcher::PerformDelayedInitialization_::_1_::dtor$1 @ 0x18019E59D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ViewEventDispatcher::PerformDelayedInitialization_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a2 + 56));
}
