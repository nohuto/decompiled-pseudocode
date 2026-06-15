/*
 * XREFs of _CAudioSessionManager::RevokeSessions_::_1_::dtor$0 @ 0x18007AAD5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioSessionManager::RevokeSessions_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)(a2 + 56));
}
