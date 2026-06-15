/*
 * XREFs of _CAudioResourceManager::DestroyStream_::_1_::dtor$7 @ 0x1800384B5
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180033218 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall CAudioResourceManager::DestroyStream_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  operator delete(*(void **)(a2 + 144), (const struct std::nothrow_t *)&std::nothrow);
}
