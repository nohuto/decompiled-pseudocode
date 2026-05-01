/*
 * XREFs of _WindowEventDispatcher::UnregisterForViewEvents_::_1_::dtor$1 @ 0x1801D9B84
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall WindowEventDispatcher::UnregisterForViewEvents_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a2 + 112));
}
