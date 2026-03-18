/*
 * XREFs of ??0CTableTransferEffect@@IEAA@PEAVCComposition@@@Z @ 0x1801765D0
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800930B8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180017080 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@M$0A@@@QEAAJPEFBMI@Z @ 0x1800B2C9C (-AddMultipleAndSet@-$DynArray@M$0A@@@QEAAJPEFBMI@Z.c)
 *     ??0CFilterEffect@@IEAA@PEAVCComposition@@@Z @ 0x180145B6C (--0CFilterEffect@@IEAA@PEAVCComposition@@@Z.c)
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
    DynArray<float,0>::AddMultipleAndSet((__int64)v4, &unk_18021AA18, 2u);
    v4 += 40;
    --v3;
  }
  while ( v3 );
  return this;
}
