/*
 * XREFs of _CApplicationManager::CreateInstance_::_1_::dtor$0 @ 0x180028762
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180027024 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall CApplicationManager::CreateInstance_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  operator delete(*(void **)(a2 + 80), (const struct std::nothrow_t *)0xA8);
}
