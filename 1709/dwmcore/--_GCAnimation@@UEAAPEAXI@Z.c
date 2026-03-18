/*
 * XREFs of ??_GCAnimation@@UEAAPEAXI@Z @ 0x18002D7A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAnimation@@UEAA@XZ @ 0x18002D6C0 (--1CAnimation@@UEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CAnimation *__fastcall CAnimation::`scalar deleting destructor'(CAnimation *this, char a2)
{
  CAnimation::~CAnimation(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
