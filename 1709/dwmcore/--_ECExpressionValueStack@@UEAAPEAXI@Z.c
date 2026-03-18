/*
 * XREFs of ??_ECExpressionValueStack@@UEAAPEAXI@Z @ 0x180183630
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void **__fastcall CExpressionValueStack::`vector deleting destructor'(void **this, char a2)
{
  *this = &CExpressionValueStack::`vftable';
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 3);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
