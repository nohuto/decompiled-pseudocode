/*
 * XREFs of ?ndisConvertInterruptTimeToLocalTime@@YAX_KPEAT_LARGE_INTEGER@@@Z @ 0x1C0077E30
 * Callers:
 *     ?NdisTraceLoggingNicAutoPowerSaver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K1K1KPEAU_NDIS_NAPS_TELEMETRY_REASON_DATA@@KPEAU_NDIS_NAPS_TELEMETRY_OID_DATA@@@Z @ 0x1C0076C74 (-NdisTraceLoggingNicAutoPowerSaver@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K1K1KPEAU_NDIS_NAPS_TELEMETRY.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisConvertInterruptTimeToLocalTime(__int64 a1, union _LARGE_INTEGER *a2)
{
  LARGE_INTEGER SystemTime; // [rsp+30h] [rbp+8h] BYREF

  SystemTime.QuadPart = ndisLastCsEntryTime + MEMORY[0xFFFFF78000000014] - MEMORY[0xFFFFF78000000008];
  ExSystemTimeToLocalTime(&SystemTime, a2);
}
