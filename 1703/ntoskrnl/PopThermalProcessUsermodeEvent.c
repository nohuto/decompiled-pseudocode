/*
 * XREFs of PopThermalProcessUsermodeEvent @ 0x1406CBBFC
 * Callers:
 *     NtPowerInformation @ 0x1404C2F2C (NtPowerInformation.c)
 * Callees:
 *     PopThermalWriteShutdownToRegistry @ 0x14022F6F4 (PopThermalWriteShutdownToRegistry.c)
 *     PopReleasePolicyLock @ 0x1404046BC (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1404046F8 (PopAcquirePolicyLock.c)
 *     PopDiagTraceUsermodeThermalEvent @ 0x1406CE344 (PopDiagTraceUsermodeThermalEvent.c)
 *     PopDiagTraceUsermodeTripPointExceeded @ 0x1406CE430 (PopDiagTraceUsermodeTripPointExceeded.c)
 *     PopSqmThermalUsermodeEvent @ 0x1406D6AF4 (PopSqmThermalUsermodeEvent.c)
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
