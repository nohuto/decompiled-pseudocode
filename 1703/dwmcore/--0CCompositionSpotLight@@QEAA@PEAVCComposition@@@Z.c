/*
 * XREFs of ??0CCompositionSpotLight@@QEAA@PEAVCComposition@@@Z @ 0x180173B30
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18005A0F8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CCompositionSpotLight *__fastcall CCompositionSpotLight::CCompositionSpotLight(
        CCompositionSpotLight *this,
        struct CComposition *a2)
{
  CCompositionSpotLight *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 9) = (char *)this + 104;
  *((_QWORD *)this + 10) = (char *)this + 104;
  *((_DWORD *)this + 22) = 1;
  *(_QWORD *)((char *)this + 92) = 1LL;
  *(_QWORD *)this = &CCompositionSpotLight::`vftable';
  *((_QWORD *)this + 25) = (char *)this + 232;
  *((_QWORD *)this + 26) = (char *)this + 232;
  *((_DWORD *)this + 54) = 2;
  *(_QWORD *)((char *)this + 220) = 2LL;
  *((_DWORD *)this + 28) = 1065353216;
  *((_DWORD *)this + 45) = 1065353216;
  *((_DWORD *)this + 44) = 1065353216;
  *((_DWORD *)this + 43) = 1065353216;
  *((_DWORD *)this + 42) = 1065353216;
  *((_DWORD *)this + 49) = 1065353216;
  *((_DWORD *)this + 48) = 1065353216;
  *((_DWORD *)this + 47) = 1065353216;
  *((_DWORD *)this + 46) = 1065353216;
  result = this;
  *((_DWORD *)this + 40) = 1057360530;
  *((_DWORD *)this + 41) = 1070141403;
  *((_DWORD *)this + 39) = -1082130432;
  *((_DWORD *)this + 36) = 1120403456;
  return result;
}
