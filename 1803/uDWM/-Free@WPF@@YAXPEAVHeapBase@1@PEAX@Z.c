/*
 * XREFs of ?Free@WPF@@YAXPEAVHeapBase@1@PEAX@Z @ 0x180038F50
 * Callers:
 *     ??1CDesktopManager@@EEAA@XZ @ 0x180074654 (--1CDesktopManager@@EEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall WPF::Free(struct _RTL_GENERIC_TABLE *Table, PVOID Buffer)
{
  void (__fastcall *v2)(WPF::ProcessHeapImpl *, void *); // rax

  v2 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v2 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, Buffer);
  else
    v2(WPF::g_pProcessHeap, Buffer);
}
