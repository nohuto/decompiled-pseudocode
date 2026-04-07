/*
 * XREFs of ?FreeTableData@?$CGenericTableMap@W4IMMERSIVE_COLOR_TYPE@@UColorData@ColorCache@@@@CAXPEAU_RTL_GENERIC_TABLE@@PEAX@Z @ 0x180075260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CGenericTableMap<enum IMMERSIVE_COLOR_TYPE,ColorCache::ColorData>::FreeTableData(
        struct _RTL_GENERIC_TABLE *Table,
        PVOID Buffer)
{
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, PVOID))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    Buffer);
}
