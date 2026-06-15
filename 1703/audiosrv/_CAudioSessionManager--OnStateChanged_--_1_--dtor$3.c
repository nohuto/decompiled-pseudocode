/*
 * XREFs of _CAudioSessionManager::OnStateChanged_::_1_::dtor$3 @ 0x18005B193
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioSessionManager::OnStateChanged_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)(a2 + 128));
}
