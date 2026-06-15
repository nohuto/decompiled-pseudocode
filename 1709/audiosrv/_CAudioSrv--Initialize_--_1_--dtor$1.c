/*
 * XREFs of _CAudioSrv::Initialize_::_1_::dtor$1 @ 0x180062299
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180033218 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall CAudioSrv::Initialize_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  operator delete(*(void **)(a2 + 48), (const struct std::nothrow_t *)&std::nothrow);
}
