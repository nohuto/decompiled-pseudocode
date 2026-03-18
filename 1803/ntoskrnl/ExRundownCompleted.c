/*
 * XREFs of ExRundownCompleted @ 0x14008AE10
 * Callers:
 *     PfFileInfoNotify @ 0x14008D1A0 (PfFileInfoNotify.c)
 *     CmpTryToRundownHive @ 0x1400A1F10 (CmpTryToRundownHive.c)
 *     BgkNotifyDisplayOwnershipChange @ 0x140164C40 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkpDisableConsole @ 0x140231798 (BgkpDisableConsole.c)
 *     PspIoRateEntryInitialize @ 0x140530244 (PspIoRateEntryInitialize.c)
 *     PspRundownSingleProcess @ 0x1405322EC (PspRundownSingleProcess.c)
 *     CmpPerformUnloadKey @ 0x14054D0B4 (CmpPerformUnloadKey.c)
 *     CmShutdownSystem @ 0x1406EFFE4 (CmShutdownSystem.c)
 *     SmcStoreDelete @ 0x14079FBE0 (SmcStoreDelete.c)
 *     EtwpCoverageSamplerStop @ 0x1407B8748 (EtwpCoverageSamplerStop.c)
 *     PfInitializeSuperfetch @ 0x1408C032C (PfInitializeSuperfetch.c)
 *     EtwpInitializeCoverageSampler @ 0x1408C8D9C (EtwpInitializeCoverageSampler.c)
 * Callees:
 *     <none>
 */

void __stdcall ExRundownCompleted(PEX_RUNDOWN_REF RunRef)
{
  _InterlockedExchange64((volatile __int64 *)RunRef, 1LL);
}
