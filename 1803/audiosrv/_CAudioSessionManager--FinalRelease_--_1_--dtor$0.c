/*
 * XREFs of _CAudioSessionManager::FinalRelease_::_1_::dtor$0 @ 0x1800B20FD
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioSessionManager::FinalRelease_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::~CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>((void **)(a2 + 64));
}
