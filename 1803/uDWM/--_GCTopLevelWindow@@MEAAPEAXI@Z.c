/*
 * XREFs of ??_GCTopLevelWindow@@MEAAPEAXI@Z @ 0x180019470
 * Callers:
 *     <none>
 * Callees:
 *     ??1CTopLevelWindow@@MEAA@XZ @ 0x18001F50C (--1CTopLevelWindow@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180021060 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
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
