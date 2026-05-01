/*
 * XREFs of _ViewEventDispatcher::_HandleWindowDestroyed_::_1_::dtor$1 @ 0x1801EEAE1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ViewEventDispatcher::_HandleWindowDestroyed_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a2 + 104));
}
