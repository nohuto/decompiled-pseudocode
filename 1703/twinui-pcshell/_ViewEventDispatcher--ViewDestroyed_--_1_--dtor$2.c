/*
 * XREFs of _ViewEventDispatcher::ViewDestroyed_::_1_::dtor$2 @ 0x18019E3ED
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ViewEventDispatcher::ViewDestroyed_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a2 + 48));
}
