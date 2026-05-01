/*
 * XREFs of _ViewEventDispatcher::OnShellHookMessage_::_1_::dtor$0 @ 0x1801EE7EC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ViewEventDispatcher::OnShellHookMessage_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a2 + 120));
}
