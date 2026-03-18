/*
 * XREFs of ??0CAffineTransform2DEffect@@IEAA@PEAVCComposition@@@Z @ 0x180152F94
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18005A0F8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z @ 0x180003434 (--0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z.c)
 */

CAffineTransform2DEffect *__fastcall CAffineTransform2DEffect::CAffineTransform2DEffect(
        CAffineTransform2DEffect *this,
        struct CComposition *a2)
{
  __int64 v2; // rcx
  CAffineTransform2DEffect *result; // rax

  CFilterEffect::CFilterEffect(this, a2, &CLSID_D2D12DAffineTransform);
  *(_QWORD *)v2 = &CAffineTransform2DEffect::`vftable';
  *(_QWORD *)(v2 + 216) = 1065353216LL;
  *(_QWORD *)(v2 + 228) = 1065353216LL;
  *(_DWORD *)(v2 + 240) = 1065353216;
  result = (CAffineTransform2DEffect *)v2;
  *(_QWORD *)(v2 + 208) = 0LL;
  *(_DWORD *)(v2 + 224) = 0;
  *(_DWORD *)(v2 + 236) = 0;
  return result;
}
