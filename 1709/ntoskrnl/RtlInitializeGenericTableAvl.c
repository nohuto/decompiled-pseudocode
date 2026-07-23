/*
 * XREFs of RtlInitializeGenericTableAvl @ 0x1400DF9E0
 * Callers:
 *     PiPnpRtlBeginOperation @ 0x140526B30 (PiPnpRtlBeginOperation.c)
 *     PiDqQueryCreate @ 0x14054C834 (PiDqQueryCreate.c)
 *     PiDmObjectManagerInit @ 0x1405CD918 (PiDmObjectManagerInit.c)
 *     VfAvlInitializeTreeEx @ 0x1407A22C0 (VfAvlInitializeTreeEx.c)
 *     PiSwInit @ 0x14083E730 (PiSwInit.c)
 *     PiInitializeDDBCache @ 0x14083F7CC (PiInitializeDDBCache.c)
 *     PiDcInit @ 0x140840394 (PiDcInit.c)
 *     IoInitSystemPreDrivers @ 0x140841C30 (IoInitSystemPreDrivers.c)
 *     PopPowerRequestInit @ 0x140853E60 (PopPowerRequestInit.c)
 *     PopStatsInitPowerRequestLibrary @ 0x14085405C (PopStatsInitPowerRequestLibrary.c)
 *     PpInitSystem @ 0x1408567D4 (PpInitSystem.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
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
