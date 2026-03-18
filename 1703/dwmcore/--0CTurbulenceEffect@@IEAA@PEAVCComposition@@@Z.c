/*
 * XREFs of ??0CTurbulenceEffect@@IEAA@PEAVCComposition@@@Z @ 0x180179838
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18005A0F8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z @ 0x180003434 (--0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z.c)
 */

CTurbulenceEffect *__fastcall CTurbulenceEffect::CTurbulenceEffect(CTurbulenceEffect *this, struct CComposition *a2)
{
  __int64 v2; // rcx
  CTurbulenceEffect *result; // rax

  CFilterEffect::CFilterEffect(this, a2, &CLSID_D2D1Turbulence);
  *(_QWORD *)(v2 + 232) = 1LL;
  *(_QWORD *)v2 = &CTurbulenceEffect::`vftable';
  *(_DWORD *)(v2 + 216) = 1008981770;
  *(_QWORD *)(v2 + 220) = 1008981770LL;
  result = (CTurbulenceEffect *)v2;
  *(_QWORD *)(v2 + 208) = 0LL;
  *(_DWORD *)(v2 + 228) = 0;
  *(_QWORD *)(v2 + 240) = 0LL;
  return result;
}
