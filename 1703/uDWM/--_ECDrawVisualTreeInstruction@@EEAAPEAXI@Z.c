/*
 * XREFs of ??_ECDrawVisualTreeInstruction@@EEAAPEAXI@Z @ 0x18003B1D0
 * Callers:
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x18001F120 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x18002C830 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

CDrawVisualTreeInstruction *__fastcall CDrawVisualTreeInstruction::`vector deleting destructor'(
        CDrawVisualTreeInstruction *this,
        char a2)
{
  CBaseObject *v4; // rcx
  void (__fastcall *v5)(WPF::ProcessHeapImpl *, void *); // rax

  *(_QWORD *)this = &CDrawVisualTreeInstruction::`vftable';
  v4 = (CBaseObject *)*((_QWORD *)this + 2);
  if ( v4 )
  {
    CBaseObject::Release(v4);
    *((_QWORD *)this + 2) = 0LL;
  }
  *(_QWORD *)this = &CBaseObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    v5 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v5 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      v5(WPF::g_pProcessHeap, this);
  }
  return this;
}
