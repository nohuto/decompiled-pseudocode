/*
 * XREFs of ??0CLinearTransferEffect@@IEAA@PEAVCComposition@@@Z @ 0x180181DC4
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800930B8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CFilterEffect@@IEAA@PEAVCComposition@@@Z @ 0x180145B6C (--0CFilterEffect@@IEAA@PEAVCComposition@@@Z.c)
 */

CLinearTransferEffect *__fastcall CLinearTransferEffect::CLinearTransferEffect(
        CLinearTransferEffect *this,
        struct CComposition *a2)
{
  __int64 v2; // rcx
  CLinearTransferEffect *result; // rax

  CFilterEffect::CFilterEffect(this, a2);
  *(_QWORD *)(v2 + 180) = 1065353216LL;
  *(_QWORD *)v2 = &CLinearTransferEffect::`vftable';
  result = (CLinearTransferEffect *)v2;
  *(_QWORD *)(v2 + 192) = 1065353216LL;
  *(_DWORD *)(v2 + 176) = 0;
  *(_DWORD *)(v2 + 188) = 0;
  *(_DWORD *)(v2 + 200) = 0;
  *(_DWORD *)(v2 + 212) = 0;
  *(_DWORD *)(v2 + 224) = 0;
  *(_QWORD *)(v2 + 204) = 1065353216LL;
  *(_QWORD *)(v2 + 216) = 1065353216LL;
  return result;
}
