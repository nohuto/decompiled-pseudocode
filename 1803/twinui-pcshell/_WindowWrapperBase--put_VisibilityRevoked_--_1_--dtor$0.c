/*
 * XREFs of _WindowWrapperBase::put_VisibilityRevoked_::_1_::dtor$0 @ 0x1801F5716
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall WindowWrapperBase::put_VisibilityRevoked_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a2 + 64));
}
