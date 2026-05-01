/*
 * XREFs of _WindowWrapperBase::SetCustomResourceSet_::_1_::dtor$0 @ 0x1801F36AD
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall WindowWrapperBase::SetCustomResourceSet_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a2 + 96));
}
