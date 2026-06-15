/*
 * XREFs of _CAudioSessionManager::FinalRelease_::_1_::dtor$1 @ 0x1800B2109
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioSessionManager::FinalRelease_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)(a2 + 48));
}
