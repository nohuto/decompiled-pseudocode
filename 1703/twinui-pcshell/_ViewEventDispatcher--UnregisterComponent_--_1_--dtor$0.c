/*
 * XREFs of _ViewEventDispatcher::UnregisterComponent_::_1_::dtor$0 @ 0x18019E6C3
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ViewEventDispatcher::UnregisterComponent_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a2 + 104));
}
