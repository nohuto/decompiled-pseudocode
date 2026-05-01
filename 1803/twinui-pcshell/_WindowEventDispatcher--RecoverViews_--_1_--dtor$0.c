/*
 * XREFs of _WindowEventDispatcher::RecoverViews_::_1_::dtor$0 @ 0x1801D7CC1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall WindowEventDispatcher::RecoverViews_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a2 + 96));
}
