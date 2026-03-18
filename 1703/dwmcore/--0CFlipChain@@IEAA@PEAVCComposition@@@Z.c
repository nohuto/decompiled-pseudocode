/*
 * XREFs of ??0CFlipChain@@IEAA@PEAVCComposition@@@Z @ 0x18016388C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18005A0F8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CFlipChain *__fastcall CFlipChain::CFlipChain(CFlipChain *this, struct CComposition *a2)
{
  unsigned int v2; // eax

  *((_QWORD *)this + 4) = a2;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *(_QWORD *)this = &CFlipChain::`vftable'{for `IPixelFormat'};
  *((_QWORD *)this + 1) = &CFlipChain::`vftable'{for `IImageSource'};
  *((_QWORD *)this + 2) = &CFlipChain::`vftable'{for `CContent'};
  *((_QWORD *)this + 11) = &CFlipChain::`vftable';
  v2 = CFlipChain::s_ulTokenIdCounter;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 40) = 0;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_DWORD *)this + 62) = 0;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_BYTE *)this + 281) = 0;
  *((_QWORD *)this + 34) = 0LL;
  *((_BYTE *)this + 281) = 1;
  *((_DWORD *)this + 50) = v2;
  CFlipChain::s_ulTokenIdCounter = v2 + 1;
  return this;
}
