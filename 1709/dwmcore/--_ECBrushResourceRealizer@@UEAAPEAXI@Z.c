/*
 * XREFs of ??_ECBrushResourceRealizer@@UEAAPEAXI@Z @ 0x18007B920
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CLegacyMilBrushRealizer@@MEAA@XZ @ 0x18007D85C (--1CLegacyMilBrushRealizer@@MEAA@XZ.c)
 */

CBrushResourceRealizer *__fastcall CBrushResourceRealizer::`vector deleting destructor'(
        CBrushResourceRealizer *this,
        char a2)
{
  *(_QWORD *)this = &CBrushResourceRealizer::`vftable';
  CLegacyMilBrushRealizer::~CLegacyMilBrushRealizer(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
