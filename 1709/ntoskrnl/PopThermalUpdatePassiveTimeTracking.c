/*
 * XREFs of PopThermalUpdatePassiveTimeTracking @ 0x14070003C
 * Callers:
 *     PopCoolingTelemetryWorker @ 0x14023CF1C (PopCoolingTelemetryWorker.c)
 *     PopThermalSxEntry @ 0x140243B58 (PopThermalSxEntry.c)
 *     PopThermalTelemetryWorker @ 0x140243D30 (PopThermalTelemetryWorker.c)
 *     PoSetThermalPassiveCooling @ 0x1406F6BF0 (PoSetThermalPassiveCooling.c)
 *     PopDeactiveThermalRequest @ 0x1406F70BC (PopDeactiveThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x1406F7268 (PopOrphanCoolingExtension.c)
 *     PopThermalWorker @ 0x140700090 (PopThermalWorker.c)
 *     PopThermalZoneRemove @ 0x140700820 (PopThermalZoneRemove.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopThermalUpdatePassiveTimeTracking(__int64 a1, unsigned __int8 a2)
{
  int v2; // r9d
  __int64 v3; // rdx
  __int64 result; // rax

  if ( !*(_BYTE *)a1 )
  {
    v2 = 21;
    do
    {
      if ( a2 >= PopThermalTrackingThresholds[v2 - 1] )
        break;
      --v2;
    }
    while ( v2 );
    v3 = MEMORY[0xFFFFF78000000008];
    result = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 8LL * (unsigned int)(v2 - 1) + 16) += result;
    *(_QWORD *)(a1 + 8) = v3;
  }
  return result;
}
