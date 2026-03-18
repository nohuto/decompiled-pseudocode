/*
 * XREFs of ??_ECCustomBlur@@MEAAPEAXI@Z @ 0x180189990
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CCustomBlur@@MEAA@XZ @ 0x1801898C0 (--1CCustomBlur@@MEAA@XZ.c)
 */

CCustomBlur *__fastcall CCustomBlur::`vector deleting destructor'(CCustomBlur *this, char a2)
{
  CCustomBlur::~CCustomBlur(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
