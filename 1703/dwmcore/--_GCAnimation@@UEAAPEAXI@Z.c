/*
 * XREFs of ??_GCAnimation@@UEAAPEAXI@Z @ 0x1800BD4A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CAnimation@@UEAA@XZ @ 0x1800BD358 (--1CAnimation@@UEAA@XZ.c)
 */

CAnimation *__fastcall CAnimation::`scalar deleting destructor'(CAnimation *this, char a2)
{
  CAnimation::~CAnimation(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
