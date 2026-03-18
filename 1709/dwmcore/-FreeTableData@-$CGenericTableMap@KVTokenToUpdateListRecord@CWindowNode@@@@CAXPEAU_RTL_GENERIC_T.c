/*
 * XREFs of ?FreeTableData@?$CGenericTableMap@KVTokenToUpdateListRecord@CWindowNode@@@@CAXPEAU_RTL_GENERIC_TABLE@@PEAX@Z @ 0x1800BD4A0
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
