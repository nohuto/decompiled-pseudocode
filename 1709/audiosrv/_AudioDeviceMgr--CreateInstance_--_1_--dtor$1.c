/*
 * XREFs of _AudioDeviceMgr::CreateInstance_::_1_::dtor$1 @ 0x1800E6CF4
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180033218 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall AudioDeviceMgr::CreateInstance_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  operator delete(*(void **)(a2 + 80), (const struct std::nothrow_t *)0x128);
}
