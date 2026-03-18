/*
 * XREFs of ??1CScanPipeline@@UEAA@XZ @ 0x1801AAFB8
 * Callers:
 *     ??1CFormatConverter@@UEAA@XZ @ 0x1801AAF60 (--1CFormatConverter@@UEAA@XZ.c)
 *     ??_GCScanPipeline@@UEAAPEAXI@Z @ 0x1801AB060 (--_GCScanPipeline@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
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
