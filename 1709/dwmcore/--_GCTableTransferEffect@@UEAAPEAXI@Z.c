/*
 * XREFs of ??_GCTableTransferEffect@@UEAAPEAXI@Z @ 0x180176650
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x180046BF8 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??1CFilterEffect@@MEAA@XZ @ 0x1801460FC (--1CFilterEffect@@MEAA@XZ.c)
 */

CTableTransferEffect *__fastcall CTableTransferEffect::`scalar deleting destructor'(
        CTableTransferEffect *this,
        char a2)
{
  `vector destructor iterator'(
    (char *)this + 200,
    40LL,
    4LL,
    (void (__fastcall *)(CDrawListBitmap *))DynArrayIA<float,2,0>::~DynArrayIA<float,2,0>);
  CFilterEffect::~CFilterEffect(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
