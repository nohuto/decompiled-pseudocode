/*
 * XREFs of ?FreeTableData@?$CGenericTableMap@KVTokenToUpdateListRecord@CWindowNode@@@@CAXPEAU_RTL_GENERIC_TABLE@@PEAX@Z @ 0x18004EC20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CGenericTableMap<unsigned long,CWindowNode::TokenToUpdateListRecord>::FreeTableData(
        struct _RTL_GENERIC_TABLE *Table,
        PVOID Buffer)
{
  WPF::ProcessHeapImpl::Free(Buffer);
}
