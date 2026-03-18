/*
 * XREFs of ??_GCLegacyMilBrush@@UEAAPEAXI@Z @ 0x180146C40
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CLegacyMilBrush@@UEAA@XZ @ 0x18007DB78 (--1CLegacyMilBrush@@UEAA@XZ.c)
 */

CLegacyMilBrush *__fastcall CLegacyMilBrush::`scalar deleting destructor'(CLegacyMilBrush *this, char a2)
{
  CLegacyMilBrush::~CLegacyMilBrush(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
