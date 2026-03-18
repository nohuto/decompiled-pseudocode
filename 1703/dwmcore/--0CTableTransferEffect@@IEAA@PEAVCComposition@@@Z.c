/*
 * XREFs of ??0CTableTransferEffect@@IEAA@PEAVCComposition@@@Z @ 0x18016F480
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18005A0F8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z @ 0x180003434 (--0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800B3474 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@M$0A@@@QEAAJPEFBMI@Z @ 0x1800BF7F8 (-AddMultipleAndSet@-$DynArray@M$0A@@@QEAAJPEFBMI@Z.c)
 */

CTableTransferEffect *__fastcall CTableTransferEffect::CTableTransferEffect(
        CTableTransferEffect *this,
        struct CComposition *a2)
{
  __int64 v3; // rdi
  char *v4; // rbx

  CFilterEffect::CFilterEffect(this, a2, &CLSID_D2D1TableTransfer);
  v3 = 4LL;
  *(_QWORD *)this = &CTableTransferEffect::`vftable';
  v4 = (char *)this + 232;
  `vector constructor iterator'(
    (CTableTransferEffect *)((char *)this + 232),
    40LL,
    4LL,
    (void (__fastcall *)(CInputSinkStruct::InputQueueInfo *))DynArrayIA<float,2,0>::DynArrayIA<float,2,0>);
  do
  {
    DynArray<float,0>::AddMultipleAndSet((__int64)v4, &unk_1801FCF38, 2u);
    v4 += 40;
    --v3;
  }
  while ( v3 );
  return this;
}
