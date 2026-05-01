/*
 * XREFs of _ViewEventDispatcher::v_ShutdownServices_::_1_::dtor$0 @ 0x1801D121B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ViewEventDispatcher::v_ShutdownServices_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a2 + 64));
}
