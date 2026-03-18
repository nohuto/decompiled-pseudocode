/*
 * XREFs of ??0CCompositionAmbientLight@@QEAA@PEAVCComposition@@@Z @ 0x1800B12A8
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800930B8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CCompositionLight@@QEAA@PEAVCComposition@@_N@Z @ 0x1800B1570 (--0CCompositionLight@@QEAA@PEAVCComposition@@_N@Z.c)
 */

CCompositionAmbientLight *__fastcall CCompositionAmbientLight::CCompositionAmbientLight(
        CCompositionAmbientLight *this,
        struct CComposition *a2)
{
  CCompositionAmbientLight *v2; // rcx
  CCompositionAmbientLight *result; // rax

  CCompositionLight::CCompositionLight(this, a2, 1);
  *((_DWORD *)v2 + 43) = 1065353216;
  *((_DWORD *)v2 + 42) = 1065353216;
  *((_DWORD *)v2 + 41) = 1065353216;
  *((_DWORD *)v2 + 40) = 1065353216;
  *((_DWORD *)v2 + 44) = 1065353216;
  result = v2;
  *(_QWORD *)v2 = &CCompositionAmbientLight::`vftable';
  return result;
}
