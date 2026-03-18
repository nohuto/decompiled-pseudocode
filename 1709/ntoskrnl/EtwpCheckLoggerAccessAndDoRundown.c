/*
 * XREFs of EtwpCheckLoggerAccessAndDoRundown @ 0x14074CCA4
 * Callers:
 *     EtwpEnableDisableSpecialGuids @ 0x1404EEB84 (EtwpEnableDisableSpecialGuids.c)
 *     EtwpCheckGuidAccessAndDoRundown @ 0x14074CB5C (EtwpCheckGuidAccessAndDoRundown.c)
 * Callees:
 *     EtwpStackRundown @ 0x140282000 (EtwpStackRundown.c)
 *     EtwpCheckLoggerControlAccess @ 0x14048E46C (EtwpCheckLoggerControlAccess.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1404921A4 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x14049227C (EtwpReleaseLoggerContext.c)
 *     EtwpLogKernelTraceRundown @ 0x14074D398 (EtwpLogKernelTraceRundown.c)
 *     EtwpLogPmcCounterRundown @ 0x14074D464 (EtwpLogPmcCounterRundown.c)
 */

__int64 __fastcall EtwpCheckLoggerAccessAndDoRundown(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  __int64 v7; // rax
  __int64 v8; // rbx
  int v9; // edi
  int v10; // r9d

  v7 = EtwpAcquireLoggerContextByLoggerId(a1, a2, 1);
  v8 = v7;
  if ( v7 )
  {
    v9 = EtwpCheckLoggerControlAccess(0x80u, v7);
    if ( v9 >= 0 )
    {
      if ( (*(_DWORD *)(v8 + 12) & 0x2000000) != 0 )
      {
        LOBYTE(v10) = a4;
        EtwpLogKernelTraceRundown(a1, a3, 32 * *(unsigned __int8 *)(v8 + 834) + a1 + 4208, v10, 0LL, 0);
      }
      if ( (*(_DWORD *)(v8 + 832) & 0x800) != 0 )
        EtwpLogPmcCounterRundown(v8, a3);
      if ( (*(_DWORD *)(v8 + 832) & 0x1000000) != 0 )
        EtwpStackRundown(*(_QWORD *)(v8 + 2144), a1, a3);
    }
    EtwpReleaseLoggerContext((unsigned int *)v8, 1);
  }
  else
  {
    return (unsigned int)-1073741162;
  }
  return (unsigned int)v9;
}
