/*
 * XREFs of ??0CTableTransferEffect@@IEAA@PEAVCComposition@@@Z @ 0x1801A5CF0
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002BD94 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArray@M$0A@@@QEAAJPEFBMI@Z @ 0x1800BCE4C (-AddMultipleAndSet@-$DynArray@M$0A@@@QEAAJPEFBMI@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800CD620 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??0CFilterEffect@@IEAA@PEAVCComposition@@@Z @ 0x18016D3E0 (--0CFilterEffect@@IEAA@PEAVCComposition@@@Z.c)
 */

CTableTransferEffect *__fastcall CTableTransferEffect::CTableTransferEffect(
        CTableTransferEffect *this,
        struct CComposition *a2)
{
  __int64 v3; // rsi
  char *v4; // rbx

  CFilterEffect::CFilterEffect(this, a2);
  v3 = 4LL;
  *(_QWORD *)this = &CTableTransferEffect::`vftable';
  v4 = (char *)this + 200;
  `vector constructor iterator'(
    (CTableTransferEffect *)((char *)this + 200),
    40LL,
    4LL,
    (__int64 (__fastcall *)(CInputSinkStruct::InputQueueInfo *__hidden))DynArrayIA<float,2,0>::DynArrayIA<float,2,0>);
  do
  {
    DynArray<float,0>::AddMultipleAndSet((__int64)v4, &unk_1802AD8F8, 2u);
    v4 += 40;
    --v3;
  }
  while ( v3 );
  return this;
}
