/*
 * XREFs of ??_GCDrawImageInstruction@@EEAAPEAXI@Z @ 0x180013CB0
 * Callers:
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180015080 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180020D70 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

CDrawImageInstruction *__fastcall CDrawImageInstruction::`scalar deleting destructor'(
        CDrawImageInstruction *this,
        char a2)
{
  CBaseObject *v4; // rcx
  void (__fastcall *v5)(WPF::ProcessHeapImpl *__hidden, void *); // rax

  *(_QWORD *)this = &CDrawImageInstruction::`vftable';
  v4 = (CBaseObject *)*((_QWORD *)this + 4);
  if ( v4 )
  {
    CBaseObject::Release(v4);
    *((_QWORD *)this + 4) = 0LL;
  }
  *(_QWORD *)this = &CBaseObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    v5 = *(void (__fastcall **)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v5 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      v5(WPF::g_pProcessHeap, this);
  }
  return this;
}
