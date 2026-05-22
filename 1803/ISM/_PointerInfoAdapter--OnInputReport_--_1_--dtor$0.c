/*
 * XREFs of _PointerInfoAdapter::OnInputReport_::_1_::dtor$0 @ 0x1800E6CDE
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall PointerInfoAdapter::OnInputReport_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  operator delete(*(void **)(a2 + 64));
}
