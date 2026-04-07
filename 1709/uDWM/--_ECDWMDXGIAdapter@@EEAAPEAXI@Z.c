/*
 * XREFs of ??_ECDWMDXGIAdapter@@EEAAPEAXI@Z @ 0x180033430
 * Callers:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x1800333D0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180020D70 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ??1CDWMDXGIAdapter@@EEAA@XZ @ 0x180033820 (--1CDWMDXGIAdapter@@EEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

CDWMDXGIAdapter *__fastcall CDWMDXGIAdapter::`vector deleting destructor'(CDWMDXGIAdapter *this, char a2)
{
  void (__fastcall *v4)(WPF::ProcessHeapImpl *, void *); // rax

  CDWMDXGIAdapter::~CDWMDXGIAdapter(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v4 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      v4(WPF::g_pProcessHeap, this);
  }
  return this;
}
