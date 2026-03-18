/*
 * XREFs of ??_ECAttractionAccelerator@@UEAAPEAXI@Z @ 0x18017276C
 * Callers:
 *     ??_ECAttractionAccelerator@@W7EAAPEAXI@Z @ 0x1800C6690 (--_ECAttractionAccelerator@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CAttractionAccelerator *__fastcall CAttractionAccelerator::`vector deleting destructor'(
        CAttractionAccelerator *this,
        char a2)
{
  *((_QWORD *)this + 1) = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
