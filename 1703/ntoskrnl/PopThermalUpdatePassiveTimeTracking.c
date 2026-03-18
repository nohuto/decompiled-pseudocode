/*
 * XREFs of PopThermalUpdatePassiveTimeTracking @ 0x140578F68
 * Callers:
 *     PopThermalSxEntry @ 0x14013C6B4 (PopThermalSxEntry.c)
 *     PopCoolingTelemetryWorker @ 0x14022A06C (PopCoolingTelemetryWorker.c)
 *     PopThermalTelemetryWorker @ 0x14022F650 (PopThermalTelemetryWorker.c)
 *     PopThermalWorker @ 0x1405D7C20 (PopThermalWorker.c)
 *     PoSetThermalPassiveCooling @ 0x1406C6790 (PoSetThermalPassiveCooling.c)
 *     PopDeactiveThermalRequest @ 0x1406C69DC (PopDeactiveThermalRequest.c)
 *     PopOrphanCoolingExtension @ 0x1406C6B88 (PopOrphanCoolingExtension.c)
 *     PopThermalZoneRemove @ 0x1406CBDD0 (PopThermalZoneRemove.c)
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
