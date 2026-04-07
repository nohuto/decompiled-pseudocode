/*
 * XREFs of ??_GCAtlasButton@@MEAAPEAXI@Z @ 0x180018B30
 * Callers:
 *     ?RemoveAllAtlasImages@CAtlasedRectsVisual@@QEAAXXZ @ 0x180024620 (-RemoveAllAtlasImages@CAtlasedRectsVisual@@QEAAXXZ.c)
 * Callees:
 *     ??1CAtlasButton@@MEAA@XZ @ 0x1800191CC (--1CAtlasButton@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180021060 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

CAtlasButton *__fastcall CAtlasButton::`scalar deleting destructor'(CAtlasButton *this, char a2)
{
  void (__fastcall *v4)(WPF::ProcessHeapImpl *__hidden, void *); // rax

  CAtlasButton::~CAtlasButton(this);
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
