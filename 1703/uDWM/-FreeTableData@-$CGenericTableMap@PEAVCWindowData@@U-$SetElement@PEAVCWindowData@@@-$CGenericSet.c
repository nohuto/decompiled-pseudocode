/*
 * XREFs of ?FreeTableData@?$CGenericTableMap@PEAVCWindowData@@U?$SetElement@PEAVCWindowData@@@?$CGenericSet@PEAVCWindowData@@@@@@CAXPEAU_RTL_GENERIC_TABLE@@PEAX@Z @ 0x180017030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CGenericTableMap<CWindowData *,CGenericSet<CWindowData *>::SetElement<CWindowData *>>::FreeTableData(
        struct _RTL_GENERIC_TABLE *Table,
        PVOID Buffer)
{
  void (__fastcall *v2)(WPF::ProcessHeapImpl *__hidden, void *); // rax

  v2 = *(void (__fastcall **)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v2 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, Buffer);
  else
    v2(WPF::g_pProcessHeap, Buffer);
}
