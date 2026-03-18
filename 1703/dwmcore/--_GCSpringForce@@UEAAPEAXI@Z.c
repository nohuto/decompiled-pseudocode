/*
 * XREFs of ??_GCSpringForce@@UEAAPEAXI@Z @ 0x180188A74
 * Callers:
 *     ??_ECSpringForce@@W7EAAPEAXI@Z @ 0x1800D5EC0 (--_ECSpringForce@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CSpringForce *__fastcall CSpringForce::`scalar deleting destructor'(CSpringForce *this, char a2)
{
  *((_QWORD *)this + 1) = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
