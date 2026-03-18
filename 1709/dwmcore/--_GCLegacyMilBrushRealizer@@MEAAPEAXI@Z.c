/*
 * XREFs of ??_GCLegacyMilBrushRealizer@@MEAAPEAXI@Z @ 0x18017DBC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CLegacyMilBrushRealizer@@MEAA@XZ @ 0x18007D85C (--1CLegacyMilBrushRealizer@@MEAA@XZ.c)
 */

CLegacyMilBrushRealizer *__fastcall CLegacyMilBrushRealizer::`scalar deleting destructor'(
        CLegacyMilBrushRealizer *this,
        char a2)
{
  CLegacyMilBrushRealizer::~CLegacyMilBrushRealizer(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
