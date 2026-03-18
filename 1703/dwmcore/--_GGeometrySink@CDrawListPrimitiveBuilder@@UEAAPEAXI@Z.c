/*
 * XREFs of ??_GGeometrySink@CDrawListPrimitiveBuilder@@UEAAPEAXI@Z @ 0x18015B6C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void **__fastcall CDrawListPrimitiveBuilder::GeometrySink::`scalar deleting destructor'(void **this, char a2)
{
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 17);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 5);
  *this = &CMILCOMBase::`vftable';
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
