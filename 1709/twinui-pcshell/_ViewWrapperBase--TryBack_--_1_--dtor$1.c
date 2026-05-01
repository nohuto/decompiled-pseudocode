/*
 * XREFs of _ViewWrapperBase::TryBack_::_1_::dtor$1 @ 0x1801EF4CC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ViewWrapperBase::TryBack_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a2 + 80));
}
