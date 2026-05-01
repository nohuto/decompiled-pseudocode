/*
 * XREFs of _ViewWrapperBase::RequestCloseAsync_::_1_::dtor$0 @ 0x1801EF4D8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ViewWrapperBase::RequestCloseAsync_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a2 + 64));
}
