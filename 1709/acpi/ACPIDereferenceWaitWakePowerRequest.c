/*
 * XREFs of ACPIDereferenceWaitWakePowerRequest @ 0x1C00101CC
 * Callers:
 *     ACPIDeviceCancelWaitWakeIrpCallBack @ 0x1C0001810 (ACPIDeviceCancelWaitWakeIrpCallBack.c)
 *     ACPIDeviceCompleteRequest @ 0x1C0005908 (ACPIDeviceCompleteRequest.c)
 *     ACPIDeviceIrpWaitWakeRequestPending @ 0x1C0010070 (ACPIDeviceIrpWaitWakeRequestPending.c)
 * Callees:
 *     ACPIFreeWaitWakePowerRequest @ 0x1C00018A0 (ACPIFreeWaitWakePowerRequest.c)
 *     ACPIWakeEmulationDisable @ 0x1C0001918 (ACPIWakeEmulationDisable.c)
 */

void __fastcall ACPIDereferenceWaitWakePowerRequest(char *Entry)
{
  KIRQL v2; // al
  int v3; // ebx

  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v3 = --*((_DWORD *)Entry + 28);
  KeReleaseSpinLock(&AcpiPowerLock, v2);
  if ( !v3 )
  {
    ACPIWakeEmulationDisable((__int64)Entry);
    if ( KeGetCurrentIrql() > 1u )
    {
      *((_QWORD *)Entry + 15) = 0LL;
      *((_QWORD *)Entry + 17) = ACPIFreeWaitWakePowerRequest;
      *((_QWORD *)Entry + 18) = Entry;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(Entry + 120), DelayedWorkQueue);
    }
    else
    {
      ACPIFreeWaitWakePowerRequest((char **)Entry);
    }
  }
}
