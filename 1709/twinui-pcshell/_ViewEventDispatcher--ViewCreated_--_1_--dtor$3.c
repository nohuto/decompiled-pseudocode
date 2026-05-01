/*
 * XREFs of _ViewEventDispatcher::ViewCreated_::_1_::dtor$3 @ 0x1801EE577
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ViewEventDispatcher::ViewCreated_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a2 + 160));
}
