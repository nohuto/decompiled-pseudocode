/*
 * XREFs of ??0CEffectBrush@@IEAA@PEAVCComposition@@@Z @ 0x180083190
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800930B8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CEffectBrush *__fastcall CEffectBrush::CEffectBrush(CEffectBrush *this, struct CComposition *a2)
{
  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *(_QWORD *)this = &CEffectBrush::`vftable'{for `CContent'};
  *((_QWORD *)this + 7) = &CLinearGradientBrush::`vftable'{for `IVisualListenerInfoProvider'};
  *((_QWORD *)this + 10) = &CEffectBrush::`vftable';
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = (char *)this + 144;
  *((_QWORD *)this + 15) = (char *)this + 144;
  *((_DWORD *)this + 32) = 2;
  *(_QWORD *)((char *)this + 132) = 2LL;
  return this;
}
