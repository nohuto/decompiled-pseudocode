/*
 * XREFs of _ViewEventDispatcher::IncrementPopupCount_::_1_::dtor$0 @ 0x1801EE978
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ViewEventDispatcher::IncrementPopupCount_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a2 + 80));
}
