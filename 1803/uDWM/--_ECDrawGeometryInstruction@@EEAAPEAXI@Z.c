/*
 * XREFs of ??_ECDrawGeometryInstruction@@EEAAPEAXI@Z @ 0x1800153B0
 * Callers:
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180017D70 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 * Callees:
 *     ??1CDrawGeometryInstruction@@EEAA@XZ @ 0x180015434 (--1CDrawGeometryInstruction@@EEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180021060 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

CDrawGeometryInstruction *__fastcall CDrawGeometryInstruction::`vector deleting destructor'(
        CDrawGeometryInstruction *this,
        char a2)
{
  void (__fastcall *v4)(WPF::ProcessHeapImpl *__hidden, void *); // rax

  CDrawGeometryInstruction::~CDrawGeometryInstruction(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = *(void (__fastcall **)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v4 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      v4(WPF::g_pProcessHeap, this);
  }
  return this;
}
