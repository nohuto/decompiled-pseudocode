/*
 * XREFs of ??0CFloodEffect@@IEAA@PEAVCComposition@@@Z @ 0x18015313C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18005A0F8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z @ 0x180003434 (--0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z.c)
 */

CFloodEffect *__fastcall CFloodEffect::CFloodEffect(CFloodEffect *this, struct CComposition *a2)
{
  __int64 v2; // rcx
  CFloodEffect *result; // rax

  CFilterEffect::CFilterEffect(this, a2, &CLSID_D2D1Flood);
  *(_DWORD *)(v2 + 220) = 1065353216;
  *(_QWORD *)(v2 + 208) = 0LL;
  *(_DWORD *)(v2 + 216) = 0;
  result = (CFloodEffect *)v2;
  *(_QWORD *)v2 = &CFloodEffect::`vftable';
  return result;
}
