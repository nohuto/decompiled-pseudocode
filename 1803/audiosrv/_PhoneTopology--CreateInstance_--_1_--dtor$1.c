/*
 * XREFs of _PhoneTopology::CreateInstance_::_1_::dtor$1 @ 0x1800689CB
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180061038 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall PhoneTopology::CreateInstance_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  operator delete(*(void **)(a2 + 88), (const struct std::nothrow_t *)0x520);
}
