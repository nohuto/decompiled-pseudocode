/*
 * XREFs of ??_GCProcessAttribution@@UEAAPEAXI@Z @ 0x1801292A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CProcessAttribution@@UEAA@XZ @ 0x180129210 (--1CProcessAttribution@@UEAA@XZ.c)
 */

CProcessAttribution *__fastcall CProcessAttribution::`scalar deleting destructor'(CProcessAttribution *this, char a2)
{
  CProcessAttribution::~CProcessAttribution(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
