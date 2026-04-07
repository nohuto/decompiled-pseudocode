/*
 * XREFs of ??_GCPopInstruction@@UEAAPEAXI@Z @ 0x180010E10
 * Callers:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180017D70 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?UpdateOcclusionHints@CTopLevelWindow@@QEAAJXZ @ 0x18001B940 (-UpdateOcclusionHints@CTopLevelWindow@@QEAAJXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180021060 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

CPopInstruction *__fastcall CPopInstruction::`scalar deleting destructor'(CPopInstruction *this, char a2)
{
  void (__fastcall *v3)(WPF::ProcessHeapImpl *__hidden, void *); // rax

  *(_QWORD *)this = &CBaseObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    v3 = *(void (__fastcall **)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v3 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      v3(WPF::g_pProcessHeap, this);
  }
  return this;
}
