/*
 * XREFs of ??_ECInjectionAnimation@@UEAAPEAXI@Z @ 0x180168170
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CInjectionAnimation@@UEAA@XZ @ 0x180168144 (--1CInjectionAnimation@@UEAA@XZ.c)
 */

void **__fastcall CInjectionAnimation::`vector deleting destructor'(void **this, char a2)
{
  CInjectionAnimation::~CInjectionAnimation(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
