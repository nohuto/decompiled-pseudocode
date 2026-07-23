/*
 * XREFs of RtlInitializeGenericTableAvl @ 0x14004D3E0
 * Callers:
 *     PiPnpRtlBeginOperation @ 0x14048823C (PiPnpRtlBeginOperation.c)
 *     PiDqQueryCreate @ 0x1404B9250 (PiDqQueryCreate.c)
 *     PiDmObjectManagerInit @ 0x1405BDD24 (PiDmObjectManagerInit.c)
 *     VfAvlInitializeTreeEx @ 0x1407622E4 (VfAvlInitializeTreeEx.c)
 *     PiInitializeDDBCache @ 0x1407FAE70 (PiInitializeDDBCache.c)
 *     PiDcInit @ 0x1407FBA58 (PiDcInit.c)
 *     IoInitSystemPreDrivers @ 0x1407FD20C (IoInitSystemPreDrivers.c)
 *     PopPowerRequestInit @ 0x14082399C (PopPowerRequestInit.c)
 *     PpInitSystem @ 0x1408253B4 (PpInitSystem.c)
 *     PiSwInit @ 0x140825FEC (PiSwInit.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 */

void __stdcall RtlInitializeGenericTableAvl(
        PRTL_AVL_TABLE Table,
        PRTL_AVL_COMPARE_ROUTINE CompareRoutine,
        PRTL_AVL_ALLOCATE_ROUTINE AllocateRoutine,
        PRTL_AVL_FREE_ROUTINE FreeRoutine,
        PVOID TableContext)
{
  memset(Table, 0, sizeof(_RTL_AVL_TABLE));
  Table->CompareRoutine = (_RTL_GENERIC_COMPARE_RESULTS (__fastcall *)(_RTL_AVL_TABLE *, void *, void *))CompareRoutine;
  Table->FreeRoutine = (void (__fastcall *)(_RTL_AVL_TABLE *, void *))FreeRoutine;
  Table->TableContext = TableContext;
  Table->BalancedRoot.Parent = &Table->BalancedRoot;
  Table->AllocateRoutine = (void *(__fastcall *)(_RTL_AVL_TABLE *, unsigned int))AllocateRoutine;
}
