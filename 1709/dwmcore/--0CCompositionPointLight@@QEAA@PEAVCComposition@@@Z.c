/*
 * XREFs of ??0CCompositionPointLight@@QEAA@PEAVCComposition@@@Z @ 0x18015BF04
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800930B8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CCompositionLight@@QEAA@PEAVCComposition@@_N@Z @ 0x1800B1570 (--0CCompositionLight@@QEAA@PEAVCComposition@@_N@Z.c)
 */

CCompositionPointLight *__fastcall CCompositionPointLight::CCompositionPointLight(
        CCompositionPointLight *this,
        struct CComposition *a2)
{
  CCompositionPointLight *v2; // rcx
  CCompositionPointLight *result; // rax

  CCompositionLight::CCompositionLight(this, a2, 0);
  *((_DWORD *)v2 + 52) = 1120403456;
  *((_DWORD *)v2 + 40) = 1065353216;
  *((_DWORD *)v2 + 46) = 1065353216;
  *((_DWORD *)v2 + 45) = 1065353216;
  *((_DWORD *)v2 + 44) = 1065353216;
  *((_DWORD *)v2 + 43) = 1065353216;
  *((_DWORD *)v2 + 53) = 1065353216;
  result = v2;
  *(_QWORD *)v2 = &CCompositionPointLight::`vftable';
  return result;
}
