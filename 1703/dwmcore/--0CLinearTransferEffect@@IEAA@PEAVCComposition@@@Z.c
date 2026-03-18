/*
 * XREFs of ??0CLinearTransferEffect@@IEAA@PEAVCComposition@@@Z @ 0x180179E20
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18005A0F8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z @ 0x180003434 (--0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z.c)
 */

CLinearTransferEffect *__fastcall CLinearTransferEffect::CLinearTransferEffect(
        CLinearTransferEffect *this,
        struct CComposition *a2)
{
  __int64 v2; // rcx
  CLinearTransferEffect *result; // rax

  CFilterEffect::CFilterEffect(this, a2, &CLSID_D2D1LinearTransfer);
  *(_QWORD *)(v2 + 212) = 1065353216LL;
  *(_QWORD *)v2 = &CLinearTransferEffect::`vftable';
  result = (CLinearTransferEffect *)v2;
  *(_QWORD *)(v2 + 224) = 1065353216LL;
  *(_DWORD *)(v2 + 208) = 0;
  *(_DWORD *)(v2 + 220) = 0;
  *(_DWORD *)(v2 + 232) = 0;
  *(_DWORD *)(v2 + 244) = 0;
  *(_DWORD *)(v2 + 256) = 0;
  *(_QWORD *)(v2 + 236) = 1065353216LL;
  *(_QWORD *)(v2 + 248) = 1065353216LL;
  return result;
}
