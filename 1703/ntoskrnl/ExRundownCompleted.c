/*
 * XREFs of ExRundownCompleted @ 0x1401161E0
 * Callers:
 *     HvSynchronizeAndDropTemporaryBins @ 0x14003B8EC (HvSynchronizeAndDropTemporaryBins.c)
 *     PfFileInfoNotify @ 0x14005F400 (PfFileInfoNotify.c)
 *     CmpTryToRundownHive @ 0x14007EC54 (CmpTryToRundownHive.c)
 *     BgkNotifyDisplayOwnershipChange @ 0x140140280 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkpDisableConsole @ 0x1401EEB68 (BgkpDisableConsole.c)
 *     CmpPerformUnloadKey @ 0x1404CB738 (CmpPerformUnloadKey.c)
 *     PspRundownSingleProcess @ 0x140546EDC (PspRundownSingleProcess.c)
 *     PspIoRateEntryInitialize @ 0x14054C92C (PspIoRateEntryInitialize.c)
 *     CmShutdownSystem @ 0x14066270C (CmShutdownSystem.c)
 *     SmcStoreDelete @ 0x1407048D4 (SmcStoreDelete.c)
 *     PfInitializeSuperfetch @ 0x14081DA88 (PfInitializeSuperfetch.c)
 * Callees:
 *     <none>
 */

void __stdcall ExRundownCompleted(PEX_RUNDOWN_REF RunRef)
{
  _InterlockedExchange64((volatile __int64 *)RunRef, 1LL);
}
