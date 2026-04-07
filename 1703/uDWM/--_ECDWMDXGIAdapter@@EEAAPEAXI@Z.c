/*
 * XREFs of ??_ECDWMDXGIAdapter@@EEAAPEAXI@Z @ 0x18000F260
 * Callers:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18000F200 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 * Callees:
 *     ??1CDWMDXGIAdapter@@EEAA@XZ @ 0x18000F650 (--1CDWMDXGIAdapter@@EEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x18002C830 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

CDWMDXGIAdapter *__fastcall CDWMDXGIAdapter::`vector deleting destructor'(CDWMDXGIAdapter *this, char a2)
{
  void (__fastcall *v4)(WPF::ProcessHeapImpl *__hidden, void *); // rax

  CDWMDXGIAdapter::~CDWMDXGIAdapter(this);
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
