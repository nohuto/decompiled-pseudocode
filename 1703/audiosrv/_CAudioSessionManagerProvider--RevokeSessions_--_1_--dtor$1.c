/*
 * XREFs of _CAudioSessionManagerProvider::RevokeSessions_::_1_::dtor$1 @ 0x18009580C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioSessionManagerProvider::RevokeSessions_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)(a2 + 80));
}
