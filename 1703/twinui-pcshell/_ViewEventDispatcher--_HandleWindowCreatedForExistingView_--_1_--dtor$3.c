/*
 * XREFs of _ViewEventDispatcher::_HandleWindowCreatedForExistingView_::_1_::dtor$3 @ 0x18019E8E6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ViewEventDispatcher::_HandleWindowCreatedForExistingView_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a2 + 120));
}
