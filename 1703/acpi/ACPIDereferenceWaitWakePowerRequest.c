/*
 * XREFs of ACPIDereferenceWaitWakePowerRequest @ 0x1C001EA0C
 * Callers:
 *     ACPIDeviceCompleteRequest @ 0x1C000A974 (ACPIDeviceCompleteRequest.c)
 *     ACPIDeviceIrpWaitWakeRequestPending @ 0x1C001E8B0 (ACPIDeviceIrpWaitWakeRequestPending.c)
 *     ACPIDeviceCancelWaitWakeIrpCallBack @ 0x1C0048C20 (ACPIDeviceCancelWaitWakeIrpCallBack.c)
 * Callees:
 *     ACPIFreeWaitWakePowerRequest @ 0x1C0059770 (ACPIFreeWaitWakePowerRequest.c)
 *     ACPIWakeEmulationDisable @ 0x1C0059DE4 (ACPIWakeEmulationDisable.c)
 */

void __fastcall ACPIDereferenceWaitWakePowerRequest(__int64 a1)
{
  KIRQL v2; // al
  int v3; // ebx

  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v3 = --*(_DWORD *)(a1 + 112);
  KeReleaseSpinLock(&AcpiPowerLock, v2);
  if ( !v3 )
  {
    ACPIWakeEmulationDisable(a1);
    if ( KeGetCurrentIrql() <= 1u )
    {
      ACPIFreeWaitWakePowerRequest(a1);
    }
    else
    {
      *(_QWORD *)(a1 + 120) = 0LL;
      *(_QWORD *)(a1 + 136) = ACPIFreeWaitWakePowerRequest;
      *(_QWORD *)(a1 + 144) = a1;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 120), DelayedWorkQueue);
    }
  }
}
