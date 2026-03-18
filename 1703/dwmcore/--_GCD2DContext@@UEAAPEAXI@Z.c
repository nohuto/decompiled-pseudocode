/*
 * XREFs of ??_GCD2DContext@@UEAAPEAXI@Z @ 0x180195F90
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CD2DContext@@UEAA@XZ @ 0x1800AE5D4 (--1CD2DContext@@UEAA@XZ.c)
 */

void **__fastcall CD2DContext::`scalar deleting destructor'(void **this, char a2)
{
  CD2DContext::~CD2DContext(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
