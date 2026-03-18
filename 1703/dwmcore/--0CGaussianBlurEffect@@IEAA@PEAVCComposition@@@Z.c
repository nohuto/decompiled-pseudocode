/*
 * XREFs of ??0CGaussianBlurEffect@@IEAA@PEAVCComposition@@@Z @ 0x180002AB0
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18005A0F8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z @ 0x180003434 (--0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z.c)
 */

CGaussianBlurEffect *__fastcall CGaussianBlurEffect::CGaussianBlurEffect(
        CGaussianBlurEffect *this,
        struct CComposition *a2)
{
  CGaussianBlurEffect *v2; // rcx
  CGaussianBlurEffect *result; // rax

  CFilterEffect::CFilterEffect(this, a2, &CLSID_D2D1GaussianBlur);
  *((_DWORD *)v2 + 53) = 0;
  *((_DWORD *)v2 + 54) = 0;
  result = v2;
  *(_QWORD *)v2 = &CGaussianBlurEffect::`vftable';
  *((_DWORD *)v2 + 52) = 1077936128;
  return result;
}
