/*
 * XREFs of _AgileRegistrationList::Unregister_::_1_::dtor$1 @ 0x180198E70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AgileRegistrationList::Unregister_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a2 + 112));
}
