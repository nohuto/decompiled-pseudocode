/*
 * XREFs of ??0CCompositionDistantLight@@QEAA@PEAVCComposition@@@Z @ 0x180173314
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18005A0F8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     <none>
 */

CCompositionDistantLight *__fastcall CCompositionDistantLight::CCompositionDistantLight(
        CCompositionDistantLight *this,
        struct CComposition *a2)
{
  CCompositionDistantLight *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 9) = (char *)this + 104;
  *((_QWORD *)this + 10) = (char *)this + 104;
  *((_DWORD *)this + 22) = 1;
  *(_QWORD *)((char *)this + 92) = 1LL;
  *(_QWORD *)this = &CCompositionDistantLight::`vftable';
  *((_DWORD *)this + 31) = 1065353216;
  *((_DWORD *)this + 30) = 1065353216;
  *((_DWORD *)this + 29) = 1065353216;
  *((_DWORD *)this + 28) = 1065353216;
  result = this;
  *((_DWORD *)this + 36) = -1082130432;
  return result;
}
