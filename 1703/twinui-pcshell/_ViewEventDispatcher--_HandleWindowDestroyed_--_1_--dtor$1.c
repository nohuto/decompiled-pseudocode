/*
 * XREFs of _ViewEventDispatcher::_HandleWindowDestroyed_::_1_::dtor$1 @ 0x18019E93A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ViewEventDispatcher::_HandleWindowDestroyed_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a2 + 32));
}
