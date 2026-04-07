/*
 * XREFs of ??_GHeapBase@WPF@@UEAAPEAXI@Z @ 0x1800A8680
 * Callers:
 *     AvDestroyProcessHeap @ 0x1800A86B8 (AvDestroyProcessHeap.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

WPF::HeapBase *__fastcall WPF::HeapBase::`scalar deleting destructor'(WPF::HeapBase *this, char a2)
{
  *(_QWORD *)this = &WPF::HeapBase::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
