/*
 * XREFs of _CProcess::CreateInstance_::_1_::dtor$0 @ 0x180036DD5
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180035504 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall CProcess::CreateInstance_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  operator delete(*(void **)(a2 + 160), (const struct std::nothrow_t *)0x2F8);
}
