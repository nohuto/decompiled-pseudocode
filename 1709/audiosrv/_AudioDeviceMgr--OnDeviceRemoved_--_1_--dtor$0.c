/*
 * XREFs of _AudioDeviceMgr::OnDeviceRemoved_::_1_::dtor$0 @ 0x1800E7822
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180033218 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall AudioDeviceMgr::OnDeviceRemoved_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  operator delete(*(void **)(a2 + 80), (const struct std::nothrow_t *)0x10);
}
