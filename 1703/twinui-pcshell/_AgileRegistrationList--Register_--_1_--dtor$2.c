/*
 * XREFs of _AgileRegistrationList::Register_::_1_::dtor$2 @ 0x180198F49
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AgileRegistrationList::Register_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a2 + 96));
}
