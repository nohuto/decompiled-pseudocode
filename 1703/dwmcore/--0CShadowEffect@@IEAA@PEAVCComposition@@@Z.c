/*
 * XREFs of ??0CShadowEffect@@IEAA@PEAVCComposition@@@Z @ 0x18015349C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18005A0F8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z @ 0x180003434 (--0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z.c)
 */

CShadowEffect *__fastcall CShadowEffect::CShadowEffect(CShadowEffect *this, struct CComposition *a2)
{
  CShadowEffect *v2; // rcx
  CShadowEffect *result; // rax

  CFilterEffect::CFilterEffect(this, a2, &CLSID_D2D1Shadow);
  *((_QWORD *)v2 + 26) = 1077936128LL;
  *((_QWORD *)v2 + 27) = 0LL;
  result = v2;
  *(_QWORD *)v2 = &CShadowEffect::`vftable';
  *((_QWORD *)v2 + 28) = 1065353216LL;
  return result;
}
