/*
 * XREFs of ??_ECSharedSection@@UEAAPEAXI@Z @ 0x180058490
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CSharedSection@@UEAA@XZ @ 0x180058558 (--1CSharedSection@@UEAA@XZ.c)
 */

CSharedSection *__fastcall CSharedSection::`vector deleting destructor'(CSharedSection *this, char a2)
{
  CSharedSection::~CSharedSection(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
