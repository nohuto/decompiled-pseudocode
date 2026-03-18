/*
 * XREFs of ??0CHolographicExclusiveView@@AEAA@PEAVCComposition@@@Z @ 0x1801BD59C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800930B8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ?GetHolographicManager@CComposition@@QEAAPEAVCHolographicManager@@XZ @ 0x180128048 (-GetHolographicManager@CComposition@@QEAAPEAVCHolographicManager@@XZ.c)
 */

CHolographicExclusiveView *__fastcall CHolographicExclusiveView::CHolographicExclusiveView(
        CHolographicExclusiveView *this,
        struct CComposition *a2)
{
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *(_QWORD *)this = &CHolographicExclusiveView::`vftable';
  InitializeSRWLock((PSRWLOCK)this + 50);
  *((_QWORD *)this + 7) = CComposition::GetHolographicManager(*((struct CHolographicManager ***)this + 2));
  return this;
}
