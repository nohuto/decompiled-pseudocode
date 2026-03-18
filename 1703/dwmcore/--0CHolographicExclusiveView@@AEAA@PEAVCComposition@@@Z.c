/*
 * XREFs of ??0CHolographicExclusiveView@@AEAA@PEAVCComposition@@@Z @ 0x1801A483C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18005A0F8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ?GetHolographicManager@CComposition@@QEAAPEAVCHolographicManager@@XZ @ 0x18013F660 (-GetHolographicManager@CComposition@@QEAAPEAVCHolographicManager@@XZ.c)
 */

CHolographicExclusiveView *__fastcall CHolographicExclusiveView::CHolographicExclusiveView(
        CHolographicExclusiveView *this,
        struct CComposition *a2)
{
  struct CHolographicManager **v3; // rcx

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  v3 = (struct CHolographicManager **)*((_QWORD *)this + 2);
  *(_QWORD *)this = &CHolographicExclusiveView::`vftable';
  *((_QWORD *)this + 7) = CComposition::GetHolographicManager(v3);
  return this;
}
