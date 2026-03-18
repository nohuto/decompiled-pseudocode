/*
 * XREFs of ??_G?$LocalMILObject@VCImmediateBrushRealizer@@@@UEAAPEAXI@Z @ 0x18007D740
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CLegacyMilBrushRealizer@@MEAA@XZ @ 0x18007D85C (--1CLegacyMilBrushRealizer@@MEAA@XZ.c)
 */

CLegacyMilBrushRealizer *__fastcall LocalMILObject<CImmediateBrushRealizer>::`scalar deleting destructor'(
        CLegacyMilBrushRealizer *lpMem,
        char a2)
{
  *(_QWORD *)lpMem = &CImmediateBrushRealizer::`vftable';
  CLegacyMilBrushRealizer::~CLegacyMilBrushRealizer(lpMem);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(lpMem);
  return lpMem;
}
