/*
 * XREFs of _CAudioSessionManager::CreateAudioSession_::_1_::dtor$1 @ 0x18005B1EC
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180049338 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall CAudioSessionManager::CreateAudioSession_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  operator delete(*(void **)(a2 + 72), (const struct std::nothrow_t *)&std::nothrow);
}
