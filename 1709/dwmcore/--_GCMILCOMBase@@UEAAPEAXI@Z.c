/*
 * XREFs of ??_GCMILCOMBase@@UEAAPEAXI@Z @ 0x1801C84A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CMILCOMBase *__fastcall CMILCOMBase::`scalar deleting destructor'(CMILCOMBase *this, char a2)
{
  *(_QWORD *)this = &CMILCOMBase::`vftable';
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
