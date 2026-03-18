/*
 * XREFs of ??_GCLegacyMilBrushRealizer@@MEAAPEAXI@Z @ 0x180176A00
 * Callers:
 *     <none>
 * Callees:
 *     ??1CLegacyMilBrushRealizer@@MEAA@XZ @ 0x18004A8D0 (--1CLegacyMilBrushRealizer@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
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
