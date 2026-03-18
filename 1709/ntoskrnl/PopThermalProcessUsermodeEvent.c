/*
 * XREFs of PopThermalProcessUsermodeEvent @ 0x1406FFE6C
 * Callers:
 *     NtPowerInformation @ 0x1404E90A0 (NtPowerInformation.c)
 * Callees:
 *     PopThermalWriteShutdownToRegistry @ 0x140243E60 (PopThermalWriteShutdownToRegistry.c)
 *     PopReleasePolicyLock @ 0x1404242E4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140424608 (PopAcquirePolicyLock.c)
 *     PopDiagTraceUsermodeThermalEvent @ 0x140705850 (PopDiagTraceUsermodeThermalEvent.c)
 *     PopDiagTraceUsermodeTripPointExceeded @ 0x14070593C (PopDiagTraceUsermodeTripPointExceeded.c)
 *     PopSqmThermalUsermodeEvent @ 0x14070CD70 (PopSqmThermalUsermodeEvent.c)
 */

__int64 __fastcall PopThermalProcessUsermodeEvent(__int64 a1)
{
  __int64 v2; // r9
  __int16 v3; // ax
  _WORD v5[4]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v6; // [rsp+38h] [rbp-10h]

  PopDiagTraceUsermodeThermalEvent();
  if ( *(_DWORD *)a1 )
  {
    if ( *(_DWORD *)a1 == 1 )
    {
      PopDiagTraceUsermodeTripPointExceeded(*(unsigned __int16 *)(a1 + 12), a1 + 14, *(unsigned int *)(a1 + 8), 0LL);
      PopSqmThermalUsermodeEvent(*(unsigned __int16 *)(a1 + 12), a1 + 14, *(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 4), 0);
      PopAcquirePolicyLock();
      PopThermalHibernateInitiated = 1;
      PopReleasePolicyLock();
    }
  }
  else
  {
    LOBYTE(v2) = 1;
    PopDiagTraceUsermodeTripPointExceeded(*(unsigned __int16 *)(a1 + 12), a1 + 14, *(unsigned int *)(a1 + 8), v2);
    PopSqmThermalUsermodeEvent(*(unsigned __int16 *)(a1 + 12), a1 + 14, *(_DWORD *)(a1 + 8), *(_DWORD *)(a1 + 4), 1);
    v3 = 2 * *(_WORD *)(a1 + 12);
    v6 = a1 + 14;
    v5[0] = v3;
    v5[1] = v3;
    PopThermalWriteShutdownToRegistry((__int64)v5);
  }
  return 0LL;
}
