/*
 * XREFs of ??_GCMonitorTreeAssociation@@UEAAPEAXI@Z @ 0x1801301C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void **__fastcall CMonitorTreeAssociation::`scalar deleting destructor'(void **this, char a2)
{
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 2);
  *this = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
