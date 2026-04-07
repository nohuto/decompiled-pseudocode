/*
 * XREFs of ??_GCTopLevelWindow@@MEAAPEAXI@Z @ 0x180024840
 * Callers:
 *     <none>
 * Callees:
 *     ??1CTopLevelWindow@@MEAA@XZ @ 0x18002AD8C (--1CTopLevelWindow@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x18002C830 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

CTopLevelWindow *__fastcall CTopLevelWindow::`scalar deleting destructor'(CTopLevelWindow *this, char a2)
{
  void (__fastcall *v4)(WPF::ProcessHeapImpl *__hidden, void *); // rax

  CTopLevelWindow::~CTopLevelWindow(this);
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
