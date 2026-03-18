/*
 * XREFs of ??0CCompositionPointLight@@QEAA@PEAVCComposition@@@Z @ 0x1801736A8
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18005A0F8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CCompositionPointLight *__fastcall CCompositionPointLight::CCompositionPointLight(
        CCompositionPointLight *this,
        struct CComposition *a2)
{
  CCompositionPointLight *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 9) = (char *)this + 104;
  *((_QWORD *)this + 10) = (char *)this + 104;
  *((_DWORD *)this + 22) = 1;
  *(_QWORD *)((char *)this + 92) = 1LL;
  *(_QWORD *)this = &CCompositionPointLight::`vftable';
  *((_DWORD *)this + 28) = 1065353216;
  *((_DWORD *)this + 34) = 1065353216;
  *((_DWORD *)this + 33) = 1065353216;
  *((_DWORD *)this + 32) = 1065353216;
  *((_DWORD *)this + 31) = 1065353216;
  result = this;
  *((_DWORD *)this + 40) = 1120403456;
  return result;
}
