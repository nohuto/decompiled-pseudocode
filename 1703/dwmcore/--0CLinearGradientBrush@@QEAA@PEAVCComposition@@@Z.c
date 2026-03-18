/*
 * XREFs of ??0CLinearGradientBrush@@QEAA@PEAVCComposition@@@Z @ 0x1800C0DC4
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18005A0F8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CSurfaceBrush@@QEAA@PEAVCComposition@@@Z @ 0x180037F10 (--0CSurfaceBrush@@QEAA@PEAVCComposition@@@Z.c)
 */

CLinearGradientBrush *__fastcall CLinearGradientBrush::CLinearGradientBrush(
        CLinearGradientBrush *this,
        struct CComposition *a2)
{
  __int64 v2; // rcx
  CLinearGradientBrush *result; // rax

  CSurfaceBrush::CSurfaceBrush(this, a2);
  *(_BYTE *)(v2 + 152) = 1;
  *(_QWORD *)(v2 + 136) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *(_QWORD *)(v2 + 56) = &CLinearGradientBrush::`vftable'{for `IVisualListenerInfoProvider'};
  result = (CLinearGradientBrush *)v2;
  *(_QWORD *)(v2 + 144) = _mm_unpacklo_ps((__m128)LODWORD(FLOAT_1_0), (__m128)0LL).m128_u64[0];
  *(_QWORD *)v2 = &CLinearGradientBrush::`vftable'{for `CContent'};
  return result;
}
