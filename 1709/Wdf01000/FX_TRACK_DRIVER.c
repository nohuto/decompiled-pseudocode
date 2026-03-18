/*
 * XREFs of FX_TRACK_DRIVER @ 0x1C003A43C
 * Callers:
 *     ?WorkItemHandler@FxWorkItem@@AEAAXXZ @ 0x1C001F97C (-WorkItemHandler@FxWorkItem@@AEAAXXZ.c)
 *     ?EventQueueWorker@FxEventQueue@@IEAAXXZ @ 0x1C00652A8 (-EventQueueWorker@FxEventQueue@@IEAAXXZ.c)
 *     ?DpcHandler@FxDpc@@QEAAXPEAU_KDPC@@PEAX1@Z @ 0x1C006EDA8 (-DpcHandler@FxDpc@@QEAAXPEAU_KDPC@@PEAX1@Z.c)
 *     ?WorkItemHandler@FxInterrupt@@QEAAXXZ @ 0x1C00A26E0 (-WorkItemHandler@FxInterrupt@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall FX_TRACK_DRIVER(_FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  if ( FxDriverGlobals->FxTrackDriverForMiniDumpLog )
    *(_FX_DRIVER_GLOBALS *volatile *)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                    + FxLibraryGlobals.DriverTracker.m_EntrySize * HIDWORD(KeGetPcr()[1].LockArray)) = FxDriverGlobals;
}
