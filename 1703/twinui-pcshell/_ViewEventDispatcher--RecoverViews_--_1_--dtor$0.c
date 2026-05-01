/*
 * XREFs of _ViewEventDispatcher::RecoverViews_::_1_::dtor$0 @ 0x18019E70B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ViewEventDispatcher::RecoverViews_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a2 + 40));
}
