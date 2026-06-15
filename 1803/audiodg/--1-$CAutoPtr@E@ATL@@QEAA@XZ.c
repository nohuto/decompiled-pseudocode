/*
 * XREFs of ??1?$CAutoPtr@E@ATL@@QEAA@XZ @ 0x140041540
 * Callers:
 *     _SerializeDeviceGraphs_::_1_::dtor$0 @ 0x140042AE9 (_SerializeDeviceGraphs_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001C304 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall ATL::CAutoPtr<unsigned char>::~CAutoPtr<unsigned char>(void **a1)
{
  operator delete(*a1);
  *a1 = 0LL;
}
