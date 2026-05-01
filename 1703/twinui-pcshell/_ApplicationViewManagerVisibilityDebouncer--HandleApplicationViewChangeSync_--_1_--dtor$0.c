/*
 * XREFs of _ApplicationViewManagerVisibilityDebouncer::HandleApplicationViewChangeSync_::_1_::dtor$0 @ 0x18019B038
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ApplicationViewManagerVisibilityDebouncer::HandleApplicationViewChangeSync_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)(a2 + 40));
}
