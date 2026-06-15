/*
 * XREFs of _ATL::CDacl::Copy_::_1_::dtor$2 @ 0x180080E84
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180033218 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall ATL::CDacl::Copy_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  operator delete(*(void **)(a2 + 128), (const struct std::nothrow_t *)0x98);
}
