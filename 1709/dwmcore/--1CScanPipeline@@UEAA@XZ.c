/*
 * XREFs of ??1CScanPipeline@@UEAA@XZ @ 0x1801C5604
 * Callers:
 *     ??1CFormatConverter@@UEAA@XZ @ 0x1801C55AC (--1CFormatConverter@@UEAA@XZ.c)
 *     ??_GCScanPipeline@@UEAAPEAXI@Z @ 0x1801C56B0 (--_GCScanPipeline@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CScanPipeline::~CScanPipeline(void **this)
{
  *this = &CScanPipeline::`vftable';
  WPF::ProcessHeapImpl::Free(this[80]);
  this[80] = 0LL;
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 74);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 67);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 1);
}
