/*
 * XREFs of ??0CArithmeticCompositeEffect@@IEAA@PEAVCComposition@@@Z @ 0x180152FE4
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18005A0F8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z @ 0x180003434 (--0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z.c)
 */

CArithmeticCompositeEffect *__fastcall CArithmeticCompositeEffect::CArithmeticCompositeEffect(
        CArithmeticCompositeEffect *this,
        struct CComposition *a2)
{
  __int64 v2; // rcx
  CArithmeticCompositeEffect *result; // rax

  CFilterEffect::CFilterEffect(this, a2, &CLSID_D2D1ArithmeticComposite);
  *(_QWORD *)(v2 + 208) = 1065353216LL;
  *(_QWORD *)(v2 + 216) = 0LL;
  *(_DWORD *)(v2 + 224) = 0;
  result = (CArithmeticCompositeEffect *)v2;
  *(_QWORD *)v2 = &CArithmeticCompositeEffect::`vftable';
  return result;
}
