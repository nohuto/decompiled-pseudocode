/*
 * XREFs of _WindowEventDispatcher::QueuePendingActivation_::_1_::dtor$10 @ 0x1801D7541
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall WindowEventDispatcher::QueuePendingActivation_::_1_::dtor_10(__int64 a1, __int64 a2)
{
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a2 + 120));
}
