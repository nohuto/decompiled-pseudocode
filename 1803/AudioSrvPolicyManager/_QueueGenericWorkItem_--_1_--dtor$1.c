/*
 * XREFs of _QueueGenericWorkItem_::_1_::dtor$1 @ 0x1800378D2
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180035504 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall QueueGenericWorkItem_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  operator delete(*(void **)(a2 + 152), (const struct std::nothrow_t *)&std::nothrow);
}
