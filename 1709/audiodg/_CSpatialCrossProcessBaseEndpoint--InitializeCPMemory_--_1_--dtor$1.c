/*
 * XREFs of _CSpatialCrossProcessBaseEndpoint::InitializeCPMemory_::_1_::dtor$1 @ 0x14005F624
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001D298 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall CSpatialCrossProcessBaseEndpoint::InitializeCPMemory_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  operator delete(*(void **)(a2 + 80));
}
