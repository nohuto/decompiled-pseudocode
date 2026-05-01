/*
 * XREFs of _WindowEventDispatcher::WindowAdded_::_1_::dtor$2 @ 0x1801DA519
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall WindowEventDispatcher::WindowAdded_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a2 + 64));
}
