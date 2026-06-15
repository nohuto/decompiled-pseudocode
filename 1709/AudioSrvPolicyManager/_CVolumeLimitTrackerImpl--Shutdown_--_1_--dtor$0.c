/*
 * XREFs of _CVolumeLimitTrackerImpl::Shutdown_::_1_::dtor$0 @ 0x180028E8D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CVolumeLimitTrackerImpl::Shutdown_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)(a2 + 56));
}
