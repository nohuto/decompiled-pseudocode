/*
 * XREFs of RtlInitializeGenericTableAvl @ 0x180086060
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1800ABDC0 (memset.c)
 */

void __cdecl RtlInitializeGenericTableAvl(
        PRTL_AVL_TABLE Table,
        PRTL_AVL_COMPARE_ROUTINE CompareRoutine,
        PRTL_AVL_ALLOCATE_ROUTINE AllocateRoutine,
        PRTL_AVL_FREE_ROUTINE FreeRoutine,
        PVOID TableContext)
{
  memset(Table, 0, sizeof(_RTL_AVL_TABLE));
  Table->CompareRoutine = CompareRoutine;
  Table->FreeRoutine = FreeRoutine;
  Table->TableContext = TableContext;
  Table->BalancedRoot.Parent = &Table->BalancedRoot;
  Table->AllocateRoutine = AllocateRoutine;
}
