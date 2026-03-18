/*
 * XREFs of ?FreeTableData@?$CGenericTableMap@IVPropertyMapEntry@@@@CAXPEAU_RTL_GENERIC_TABLE@@PEAX@Z @ 0x1800B9F20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CGenericTableMap<unsigned int,PropertyMapEntry>::FreeTableData(
        struct _RTL_GENERIC_TABLE *Table,
        PVOID Buffer)
{
  if ( Buffer )
    HeapFree(WPF::g_processHeap, 0, Buffer);
}
