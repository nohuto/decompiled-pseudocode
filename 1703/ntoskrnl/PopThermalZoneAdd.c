/*
 * XREFs of PopThermalZoneAdd @ 0x1405D6970
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeIRTimer @ 0x14003B120 (KeInitializeIRTimer.c)
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 *     KeInitializeTimer2 @ 0x14012A690 (KeInitializeTimer2.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x140168740 (PopThermalUpdateTelemetryClientCount.c)
 *     PopReleasePolicyLock @ 0x1404046BC (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1404046F8 (PopAcquirePolicyLock.c)
 *     PopResetCurrentPolicies @ 0x1405C3544 (PopResetCurrentPolicies.c)
 */

void __fastcall PopThermalZoneAdd(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  int v4; // [rsp+40h] [rbp+8h] BYREF

  v2 = a1 + 296;
  if ( PopThermalPollingMode )
  {
    v4 = 262152;
    KeInitializeIRTimer(v2, (__int64)PopThermalZoneTimerCallback, a1, (unsigned __int8 *)&v4, 2);
  }
  else
  {
    KeInitializeTimer2(v2, (__int64)PopThermalZoneTimerCallback, a1, 0LL);
  }
  v3 = *(_QWORD *)(a1 + 56);
  *(_WORD *)(a1 + 69) = -1;
  *(_DWORD *)(a1 + 80) = 100;
  *(_DWORD *)(a1 + 84) = 100;
  *(_BYTE *)(a1 + 64) = 6;
  *(_BYTE *)(a1 + 67) = 2;
  *(_DWORD *)(a1 + 76) = 1000;
  *(_DWORD *)(v3 + 48) = -1073741667;
  LODWORD(v3) = PopThermalZoneNextId;
  *(_DWORD *)(a1 + 496) = PopThermalZoneNextId;
  *(_DWORD *)(a1 + 216) = 100;
  PopThermalZoneNextId = v3 + 1;
  KeInitializeEvent((PRKEVENT)(a1 + 448), NotificationEvent, 0);
  KeInitializeEvent((PRKEVENT)(a1 + 472), NotificationEvent, 0);
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)(a1 + 280) = PopThermalWorker;
  *(_QWORD *)(a1 + 288) = a1;
  *(_QWORD *)(a1 + 512) = MEMORY[0xFFFFF78000000008];
  *(_QWORD *)(a1 + 432) = 0LL;
  *(_QWORD *)(a1 + 440) = 0LL;
  *(_QWORD *)(a1 + 432) = 0LL;
  if ( ++PopThermalZoneCount == 1 )
  {
    PopAcquirePolicyLock();
    if ( BYTE13(PopCapabilities) != 1 )
    {
      BYTE13(PopCapabilities) = 1;
      PopResetCurrentPolicies();
    }
    PopReleasePolicyLock();
  }
  PopThermalUpdateTelemetryClientCount(1);
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 264), DelayedWorkQueue);
}
