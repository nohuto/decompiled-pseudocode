/*
 * XREFs of ?FreeTableData@?$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@CAXPEAU_RTL_GENERIC_TABLE@@PEAX@Z @ 0x18007DB60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::FreeTableData(
        struct _RTL_GENERIC_TABLE *Table,
        PVOID Buffer)
{
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, PVOID))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    Buffer);
}
