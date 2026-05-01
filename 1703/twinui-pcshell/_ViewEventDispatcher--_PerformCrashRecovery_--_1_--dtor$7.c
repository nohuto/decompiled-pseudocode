/*
 * XREFs of _ViewEventDispatcher::_PerformCrashRecovery_::_1_::dtor$7 @ 0x18019EAB4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ViewEventDispatcher::_PerformCrashRecovery_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a2 + 280));
}
