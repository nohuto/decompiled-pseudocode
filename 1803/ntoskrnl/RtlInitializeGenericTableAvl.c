/*
 * XREFs of RtlInitializeGenericTableAvl @ 0x14006E4D0
 * Callers:
 *     PiPnpRtlBeginOperation @ 0x1405097B4 (PiPnpRtlBeginOperation.c)
 *     PiDqQueryCreate @ 0x140575044 (PiDqQueryCreate.c)
 *     PiDmObjectManagerInit @ 0x1406312A8 (PiDmObjectManagerInit.c)
 *     VfAvlInitializeTreeEx @ 0x14080F2F0 (VfAvlInitializeTreeEx.c)
 *     PiSwInit @ 0x14089F42C (PiSwInit.c)
 *     IoInitSystemPreDrivers @ 0x1408A1BE4 (IoInitSystemPreDrivers.c)
 *     PiDcInit @ 0x1408A488C (PiDcInit.c)
 *     PiInitializeDDBCache @ 0x1408A4FEC (PiInitializeDDBCache.c)
 *     PopPowerRequestInit @ 0x1408C5EB8 (PopPowerRequestInit.c)
 *     PopStatsInitPowerRequestLibrary @ 0x1408C60B4 (PopStatsInitPowerRequestLibrary.c)
 *     PpInitSystem @ 0x1408C8AC4 (PpInitSystem.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
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
