/*
 * XREFs of ??_GCCounterManager@@QEAAPEAXI@Z @ 0x1801444F8
 * Callers:
 *     ?EnsurePerFrameInstance@CCounterManager@@SAJXZ @ 0x1800C8BFC (-EnsurePerFrameInstance@CCounterManager@@SAJXZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x18013EE78 (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void **__fastcall CCounterManager::`scalar deleting destructor'(void **this)
{
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 53);
  WPF::ProcessHeapImpl::Free(this);
  return this;
}
