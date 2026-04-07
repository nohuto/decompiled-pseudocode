/*
 * XREFs of ??_GCButton@@MEAAPEAXI@Z @ 0x18001F9C0
 * Callers:
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x180019770 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 * Callees:
 *     ??1CButton@@MEAA@XZ @ 0x1800205F4 (--1CButton@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x18002C830 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

CButton *__fastcall CButton::`scalar deleting destructor'(CButton *this, char a2)
{
  void (__fastcall *v4)(WPF::ProcessHeapImpl *__hidden, void *); // rax

  CButton::~CButton(this);
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
