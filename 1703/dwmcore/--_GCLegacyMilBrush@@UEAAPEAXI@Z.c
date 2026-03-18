/*
 * XREFs of ??_GCLegacyMilBrush@@UEAAPEAXI@Z @ 0x18014AC30
 * Callers:
 *     <none>
 * Callees:
 *     ??1CLegacyMilBrush@@UEAA@XZ @ 0x18004B188 (--1CLegacyMilBrush@@UEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CLegacyMilBrush *__fastcall CLegacyMilBrush::`scalar deleting destructor'(CLegacyMilBrush *this, char a2)
{
  CLegacyMilBrush::~CLegacyMilBrush(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
