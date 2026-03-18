/*
 * XREFs of ?FreeTableData@?$CGenericTableMap@IVCAnimationSourceMapEntry@@@@CAXPEAU_RTL_GENERIC_TABLE@@PEAX@Z @ 0x1800C0BD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CGenericTableMap<unsigned int,CAnimationSourceMapEntry>::FreeTableData(
        struct _RTL_GENERIC_TABLE *Table,
        PVOID Buffer)
{
  if ( Buffer )
    HeapFree(WPF::g_processHeap, 0, Buffer);
}
