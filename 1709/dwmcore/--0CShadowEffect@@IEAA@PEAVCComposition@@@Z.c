/*
 * XREFs of ??0CShadowEffect@@IEAA@PEAVCComposition@@@Z @ 0x180146004
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800930B8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CFilterEffect@@IEAA@PEAVCComposition@@@Z @ 0x180145B6C (--0CFilterEffect@@IEAA@PEAVCComposition@@@Z.c)
 */

CShadowEffect *__fastcall CShadowEffect::CShadowEffect(CShadowEffect *this, struct CComposition *a2)
{
  CShadowEffect *v2; // rcx
  CShadowEffect *result; // rax

  CFilterEffect::CFilterEffect(this, a2);
  *((_QWORD *)v2 + 22) = 1077936128LL;
  *((_QWORD *)v2 + 23) = 0LL;
  result = v2;
  *(_QWORD *)v2 = &CShadowEffect::`vftable';
  *((_QWORD *)v2 + 24) = 1065353216LL;
  return result;
}
