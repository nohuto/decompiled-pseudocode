/*
 * XREFs of ??0CHolographicComposition@@IEAA@PEAVCComposition@@@Z @ 0x1801BCE8C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800930B8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ?GetHolographicManager@CComposition@@QEAAPEAVCHolographicManager@@XZ @ 0x180128048 (-GetHolographicManager@CComposition@@QEAAPEAVCHolographicManager@@XZ.c)
 */

CHolographicComposition *__fastcall CHolographicComposition::CHolographicComposition(
        CHolographicComposition *this,
        struct CHolographicManager **a2)
{
  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CHolographicComposition::`vftable';
  *((_QWORD *)this + 7) = CComposition::GetHolographicManager(a2);
  return this;
}
