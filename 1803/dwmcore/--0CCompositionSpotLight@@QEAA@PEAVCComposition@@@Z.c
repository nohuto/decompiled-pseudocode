/*
 * XREFs of ??0CCompositionSpotLight@@QEAA@PEAVCComposition@@@Z @ 0x18002AAC0
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002BD94 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CCompositionLight@@QEAA@PEAVCComposition@@_N@Z @ 0x18002A608 (--0CCompositionLight@@QEAA@PEAVCComposition@@_N@Z.c)
 */

CCompositionSpotLight *__fastcall CCompositionSpotLight::CCompositionSpotLight(
        CCompositionSpotLight *this,
        struct CComposition *a2)
{
  __int64 v2; // rcx
  CCompositionSpotLight *result; // rax

  CCompositionLight::CCompositionLight(this, a2, 0);
  *(_QWORD *)v2 = &CCompositionSpotLight::`vftable';
  *(_DWORD *)(v2 + 192) = 0;
  *(_QWORD *)(v2 + 168) = v2 + 200;
  *(_QWORD *)(v2 + 176) = v2 + 200;
  *(_DWORD *)(v2 + 184) = 2;
  *(_DWORD *)(v2 + 188) = 2;
  *(_DWORD *)(v2 + 248) = 1065353216;
  *(_DWORD *)(v2 + 228) = 1065353216;
  *(_DWORD *)(v2 + 224) = 1065353216;
  *(_DWORD *)(v2 + 220) = 1065353216;
  *(_DWORD *)(v2 + 216) = 1065353216;
  *(_DWORD *)(v2 + 244) = 1065353216;
  *(_DWORD *)(v2 + 240) = 1065353216;
  *(_DWORD *)(v2 + 236) = 1065353216;
  *(_DWORD *)(v2 + 232) = 1065353216;
  *(_DWORD *)(v2 + 300) = 1065353216;
  *(_DWORD *)(v2 + 304) = 1065353216;
  result = (CCompositionSpotLight *)v2;
  *(_DWORD *)(v2 + 284) = 1057360530;
  *(_DWORD *)(v2 + 288) = 1070141403;
  *(_DWORD *)(v2 + 280) = -1082130432;
  *(_DWORD *)(v2 + 268) = 1120403456;
  return result;
}
