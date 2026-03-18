/*
 * XREFs of ??0CCompositionSpotLight@@QEAA@PEAVCComposition@@@Z @ 0x1800A0D90
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800930B8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CCompositionLight@@QEAA@PEAVCComposition@@_N@Z @ 0x1800B1570 (--0CCompositionLight@@QEAA@PEAVCComposition@@_N@Z.c)
 */

CCompositionSpotLight *__fastcall CCompositionSpotLight::CCompositionSpotLight(
        CCompositionSpotLight *this,
        struct CComposition *a2)
{
  __int64 v2; // rcx
  CCompositionSpotLight *result; // rax

  CCompositionLight::CCompositionLight(this, a2, 0);
  *(_QWORD *)v2 = &CCompositionSpotLight::`vftable';
  *(_DWORD *)(v2 + 272) = 0;
  *(_QWORD *)(v2 + 248) = v2 + 280;
  *(_QWORD *)(v2 + 256) = v2 + 280;
  *(_DWORD *)(v2 + 264) = 2;
  *(_DWORD *)(v2 + 268) = 2;
  *(_DWORD *)(v2 + 160) = 1065353216;
  *(_DWORD *)(v2 + 228) = 1065353216;
  *(_DWORD *)(v2 + 224) = 1065353216;
  *(_DWORD *)(v2 + 220) = 1065353216;
  *(_DWORD *)(v2 + 216) = 1065353216;
  *(_DWORD *)(v2 + 244) = 1065353216;
  *(_DWORD *)(v2 + 240) = 1065353216;
  *(_DWORD *)(v2 + 236) = 1065353216;
  *(_DWORD *)(v2 + 232) = 1065353216;
  *(_DWORD *)(v2 + 296) = 1065353216;
  *(_DWORD *)(v2 + 300) = 1065353216;
  result = (CCompositionSpotLight *)v2;
  *(_DWORD *)(v2 + 208) = 1057360530;
  *(_DWORD *)(v2 + 212) = 1070141403;
  *(_DWORD *)(v2 + 204) = -1082130432;
  *(_DWORD *)(v2 + 192) = 1120403456;
  return result;
}
