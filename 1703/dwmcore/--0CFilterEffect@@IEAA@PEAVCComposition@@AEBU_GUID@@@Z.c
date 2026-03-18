/*
 * XREFs of ??0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z @ 0x180003434
 * Callers:
 *     ??0CGaussianBlurEffect@@IEAA@PEAVCComposition@@@Z @ 0x180002AB0 (--0CGaussianBlurEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18005A0F8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ??0CAffineTransform2DEffect@@IEAA@PEAVCComposition@@@Z @ 0x180152F94 (--0CAffineTransform2DEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CArithmeticCompositeEffect@@IEAA@PEAVCComposition@@@Z @ 0x180152FE4 (--0CArithmeticCompositeEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CBrightnessEffect@@IEAA@PEAVCComposition@@@Z @ 0x180153020 (--0CBrightnessEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CColorMatrixEffect@@IEAA@PEAVCComposition@@@Z @ 0x180153064 (--0CColorMatrixEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CFloodEffect@@IEAA@PEAVCComposition@@@Z @ 0x18015313C (--0CFloodEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CShadowEffect@@IEAA@PEAVCComposition@@@Z @ 0x18015349C (--0CShadowEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CTableTransferEffect@@IEAA@PEAVCComposition@@@Z @ 0x18016F480 (--0CTableTransferEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CTurbulenceEffect@@IEAA@PEAVCComposition@@@Z @ 0x180179838 (--0CTurbulenceEffect@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CLinearTransferEffect@@IEAA@PEAVCComposition@@@Z @ 0x180179E20 (--0CLinearTransferEffect@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     <none>
 */

CFilterEffect *__fastcall CFilterEffect::CFilterEffect(
        CFilterEffect *this,
        struct CComposition *a2,
        const struct _GUID *a3)
{
  CFilterEffect *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CFilterEffect::`vftable';
  *((_QWORD *)this + 9) = &CDeviceResourceTable<CD2DEffect,CFilterEffect,ID2DContext>::`vftable';
  *((_QWORD *)this + 10) = this;
  *((_QWORD *)this + 11) = (char *)this + 120;
  *((_QWORD *)this + 12) = (char *)this + 120;
  *((_DWORD *)this + 26) = 2;
  *(_QWORD *)((char *)this + 108) = 2LL;
  result = this;
  *(GUID *)((char *)this + 136) = GUID_NULL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_DWORD *)this + 42) = 0;
  *((struct _GUID *)this + 11) = *a3;
  return result;
}
