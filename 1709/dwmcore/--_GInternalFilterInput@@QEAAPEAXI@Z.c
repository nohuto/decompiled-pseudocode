/*
 * XREFs of ??_GInternalFilterInput@@QEAAPEAXI@Z @ 0x180162D30
 * Callers:
 *     ?EmptyFilterInputMap@CFilterEffect@@AEAAXXZ @ 0x180163970 (-EmptyFilterInputMap@CFilterEffect@@AEAAXXZ.c)
 *     ?ProcessUpdateInputs@CFilterEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FILTEREFFECT_UPDATEINPUTS@@PEBXI@Z @ 0x1801644C4 (-ProcessUpdateInputs@CFilterEffect@@QEAAJPEAVCResourceTable@@PEBUMILCMD_FILTEREFFECT_UPDATEINPUT.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

InternalFilterInput *__fastcall InternalFilterInput::`scalar deleting destructor'(InternalFilterInput *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 3);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  WPF::ProcessHeapImpl::Free(this);
  return this;
}
