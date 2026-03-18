/*
 * XREFs of ACPITableLoadCallBack @ 0x1C0029E20
 * Callers:
 *     <none>
 * Callees:
 *     ACPIPowerScheduleDpc @ 0x1C0009B6C (ACPIPowerScheduleDpc.c)
 *     ACPIDeviceInternalSynchronizeRequest @ 0x1C000F83C (ACPIDeviceInternalSynchronizeRequest.c)
 *     ACPIGpeBuildWakeMasks @ 0x1C0013820 (ACPIGpeBuildWakeMasks.c)
 *     ACPIInternalMoveList @ 0x1C002B028 (ACPIInternalMoveList.c)
 *     Simulator_RefreshTree @ 0x1C005B8A8 (Simulator_RefreshTree.c)
 */

void __fastcall ACPITableLoadCallBack(_QWORD *a1, char a2)
{
  if ( !*((_BYTE *)AcpiInformation + 133) )
  {
    KeAcquireSpinLockAtDpcLevel(&GpeTableLock);
    KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
    ACPIGpeBuildWakeMasks(RootDeviceExtension);
    KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
    KeReleaseSpinLockFromDpcLevel(&GpeTableLock);
  }
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerQueueLock);
  if ( (__int64 *)AcpiPowerDelayedQueueList != &AcpiPowerDelayedQueueList )
  {
    ACPIInternalMoveList(&AcpiPowerDelayedQueueList, &AcpiPowerQueueList);
    ACPIPowerScheduleDpc();
  }
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerQueueLock);
  if ( !a2 )
  {
    if ( (int)ACPIDeviceInternalSynchronizeRequest(a1, (_SLIST_ENTRY *)ACPITableLoadNotifyPnp, 0LL) < 0 )
      KeBugCheckEx(0xA3u, 1uLL, 0x1100A2uLL, 0LL, 0LL);
    if ( g_SimulatorCallbackObject )
      Simulator_RefreshTree();
  }
}
