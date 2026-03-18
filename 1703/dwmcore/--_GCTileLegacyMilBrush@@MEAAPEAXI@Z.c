/*
 * XREFs of ??_GCTileLegacyMilBrush@@MEAAPEAXI@Z @ 0x180153F60
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CTileLegacyMilBrush@@MEAA@XZ @ 0x18007C3FC (--1CTileLegacyMilBrush@@MEAA@XZ.c)
 */

CTileLegacyMilBrush *__fastcall CTileLegacyMilBrush::`scalar deleting destructor'(CTileLegacyMilBrush *this, char a2)
{
  CTileLegacyMilBrush::~CTileLegacyMilBrush(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
