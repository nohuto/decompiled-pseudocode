/*
 * XREFs of PopThermalUpdatePassiveTimeTracking @ 0x1405EA674
 * Callers:
 *     PopThermalSxEntry @ 0x14014DA64 (PopThermalSxEntry.c)
 *     PopCoolingTelemetryWorker @ 0x1402744FC (PopCoolingTelemetryWorker.c)
 *     PopThermalTelemetryWorker @ 0x140278E60 (PopThermalTelemetryWorker.c)
 *     PopThermalWorker @ 0x140643860 (PopThermalWorker.c)
 *     PoSetThermalPassiveCooling @ 0x14075E630 (PoSetThermalPassiveCooling.c)
 *     PopDeactiveThermalRequest @ 0x14075E88C (PopDeactiveThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x14075EA38 (PopOrphanCoolingExtension.c)
 *     PopThermalZoneRemove @ 0x140763260 (PopThermalZoneRemove.c)
 * Callees:
 *     <none>
 */

void __fastcall PopThermalUpdatePassiveTimeTracking(__int64 a1, unsigned __int8 a2)
{
  int v3; // r9d
  int v4; // ebx
  unsigned __int8 v5; // cl
  int v6; // eax
  __int64 v7; // rdx

  if ( !*(_BYTE *)a1 )
  {
    v3 = 21;
    do
    {
      v4 = v3;
      v5 = PopThermalTrackingThresholds[v3 - 1];
      if ( a2 >= v5 )
        break;
      --v3;
    }
    while ( v3 );
    v6 = v4 - 1;
    if ( a2 >= v5 )
      v6 = v4;
    v7 = MEMORY[0xFFFFF78000000008];
    *(_QWORD *)(a1 + 8LL * (unsigned int)(v6 - 1) + 16) += MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 8) = v7;
  }
}
