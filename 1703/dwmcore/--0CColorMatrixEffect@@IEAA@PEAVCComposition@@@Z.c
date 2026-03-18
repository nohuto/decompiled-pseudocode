/*
 * XREFs of ??0CColorMatrixEffect@@IEAA@PEAVCComposition@@@Z @ 0x180153064
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18005A0F8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z @ 0x180003434 (--0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z.c)
 */

CColorMatrixEffect *__fastcall CColorMatrixEffect::CColorMatrixEffect(
        CColorMatrixEffect *this,
        struct CComposition *a2)
{
  __int64 v2; // rcx
  CColorMatrixEffect *result; // rax

  CFilterEffect::CFilterEffect(this, a2, &CLSID_D2D1ColorMatrix);
  result = (CColorMatrixEffect *)v2;
  *(_DWORD *)(v2 + 292) = 0;
  *(_OWORD *)(v2 + 208) = _xmm;
  *(_QWORD *)v2 = &CColorMatrixEffect::`vftable';
  *(_OWORD *)(v2 + 224) = _xmm;
  *(_DWORD *)(v2 + 288) = 1;
  *(_OWORD *)(v2 + 240) = _xmm;
  *(_OWORD *)(v2 + 256) = _xmm;
  *(_OWORD *)(v2 + 272) = 0LL;
  return result;
}
