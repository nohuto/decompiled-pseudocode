/*
 * XREFs of ExRundownCompleted @ 0x1400ADB30
 * Callers:
 *     PfFileInfoNotify @ 0x140011F60 (PfFileInfoNotify.c)
 *     CmpTryToRundownHive @ 0x1400AFAE0 (CmpTryToRundownHive.c)
 *     HvSynchronizeAndDropTemporaryBins @ 0x140130A30 (HvSynchronizeAndDropTemporaryBins.c)
 *     BgkNotifyDisplayOwnershipChange @ 0x14013EC50 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkpDisableConsole @ 0x1401F4268 (BgkpDisableConsole.c)
 *     CmpPerformUnloadKey @ 0x14046E4FC (CmpPerformUnloadKey.c)
 *     PspRundownSingleProcess @ 0x1404DAA68 (PspRundownSingleProcess.c)
 *     PspIoRateEntryInitialize @ 0x14050B788 (PspIoRateEntryInitialize.c)
 *     CmShutdownSystem @ 0x14068BC1C (CmShutdownSystem.c)
 *     SmcStoreDelete @ 0x14073CBD8 (SmcStoreDelete.c)
 *     PfInitializeSuperfetch @ 0x14084EEE8 (PfInitializeSuperfetch.c)
 * Callees:
 *     <none>
 */

void __stdcall ExRundownCompleted(PEX_RUNDOWN_REF RunRef)
{
  _InterlockedExchange64((volatile __int64 *)RunRef, 1LL);
}
