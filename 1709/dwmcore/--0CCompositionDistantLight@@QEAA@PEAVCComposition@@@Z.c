/*
 * XREFs of ??0CCompositionDistantLight@@QEAA@PEAVCComposition@@@Z @ 0x18015AB54
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800930B8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CCompositionLight@@QEAA@PEAVCComposition@@_N@Z @ 0x1800B1570 (--0CCompositionLight@@QEAA@PEAVCComposition@@_N@Z.c)
 */

CCompositionDistantLight *__fastcall CCompositionDistantLight::CCompositionDistantLight(
        CCompositionDistantLight *this,
        struct CComposition *a2)
{
  CCompositionDistantLight *v2; // rcx
  CCompositionDistantLight *result; // rax

  CCompositionLight::CCompositionLight(this, a2, 0);
  *((_DWORD *)v2 + 48) = -1082130432;
  *((_DWORD *)v2 + 43) = 1065353216;
  *((_DWORD *)v2 + 42) = 1065353216;
  *((_DWORD *)v2 + 41) = 1065353216;
  *((_DWORD *)v2 + 40) = 1065353216;
  *((_DWORD *)v2 + 49) = 1065353216;
  result = v2;
  *(_QWORD *)v2 = &CCompositionDistantLight::`vftable';
  return result;
}
