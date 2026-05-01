/*
 * XREFs of ?RmpSystemQueryCompressionProcessPrivateWorkingSet@@YAJPEA_K@Z @ 0x18002DF14
 * Callers:
 *     ?RmpTelemetryLogPartitionState@@YAJPEAU_RM_PARTITION@@PEAX@Z @ 0x18002D610 (-RmpTelemetryLogPartitionState@@YAJPEAU_RM_PARTITION@@PEAX@Z.c)
 *     ?RmpMemoryMonitorEmptySystemStore@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1@Z @ 0x18005E204 (-RmpMemoryMonitorEmptySystemStore@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 * Callees:
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 */

NTSTATUS __fastcall RmpSystemQueryCompressionProcessPrivateWorkingSet(unsigned __int64 *a1)
{
  NTSTATUS result; // eax
  _DWORD SystemInformation[2]; // [rsp+20h] [rbp-58h] BYREF
  int *v4; // [rsp+28h] [rbp-50h]
  int v5; // [rsp+30h] [rbp-48h]
  int v6; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int64 v7; // [rsp+40h] [rbp-38h]

  memset_0(&v6, 0, 0x28uLL);
  v6 = 3;
  SystemInformation[0] = 1;
  SystemInformation[1] = 22;
  v4 = &v6;
  v5 = 40;
  result = NtQuerySystemInformation(
             SystemVerifierFaultsInformation|SystemLocksInformation,
             SystemInformation,
             0x18u,
             0LL);
  if ( result >= 0 )
  {
    *a1 = v7;
    return 0;
  }
  return result;
}
