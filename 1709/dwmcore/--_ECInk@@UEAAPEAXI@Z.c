/*
 * XREFs of ??_ECInk@@UEAAPEAXI@Z @ 0x180146C10
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CInk@@UEAA@XZ @ 0x180146168 (--1CInk@@UEAA@XZ.c)
 */

void **__fastcall CInk::`vector deleting destructor'(void **this, char a2)
{
  CInk::~CInk(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
