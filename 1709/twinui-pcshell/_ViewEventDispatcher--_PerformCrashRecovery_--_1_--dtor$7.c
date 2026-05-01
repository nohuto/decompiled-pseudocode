/*
 * XREFs of _ViewEventDispatcher::_PerformCrashRecovery_::_1_::dtor$7 @ 0x1801EEC5B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ViewEventDispatcher::_PerformCrashRecovery_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a2 + 112));
}
