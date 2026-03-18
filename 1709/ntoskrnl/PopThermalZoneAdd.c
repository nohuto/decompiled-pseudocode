/*
 * XREFs of PopThermalZoneAdd @ 0x1407006D0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     KeInitializeTimer2 @ 0x1400B2730 (KeInitializeTimer2.c)
 *     KeInitializeIRTimer @ 0x14013033C (KeInitializeIRTimer.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x140243DD4 (PopThermalUpdateTelemetryClientCount.c)
 *     PopReleasePolicyLock @ 0x1404242E4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140424608 (PopAcquirePolicyLock.c)
 *     PopResetCurrentPolicies @ 0x1405B8D04 (PopResetCurrentPolicies.c)
 */

void __fastcall PopThermalZoneAdd(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  unsigned __int8 v4; // [rsp+40h] [rbp+8h] BYREF

  v2 = a1 + 296;
  if ( PopThermalPollingMode )
    KeInitializeIRTimer(v2, (__int64)PopThermalZoneTimerCallback, a1, &v4, 2);
  else
    KeInitializeTimer2(v2);
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
