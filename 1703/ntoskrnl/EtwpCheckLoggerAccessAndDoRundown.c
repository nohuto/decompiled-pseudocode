/*
 * XREFs of EtwpCheckLoggerAccessAndDoRundown @ 0x14070FFFC
 * Callers:
 *     EtwpEnableDisableSpecialGuids @ 0x140553FF8 (EtwpEnableDisableSpecialGuids.c)
 *     EtwpCheckGuidAccessAndDoRundown @ 0x14070FEBC (EtwpCheckGuidAccessAndDoRundown.c)
 * Callees:
 *     EtwpStackRundown @ 0x1402583B0 (EtwpStackRundown.c)
 *     EtwpCheckLoggerControlAccess @ 0x1404F1C84 (EtwpCheckLoggerControlAccess.c)
 *     EtwpReleaseLoggerContext @ 0x1404F2B5C (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1404F2C44 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpLogKernelTraceRundown @ 0x1407102D0 (EtwpLogKernelTraceRundown.c)
 *     EtwpLogPmcCounterRundown @ 0x14071038C (EtwpLogPmcCounterRundown.c)
 */

__int64 __fastcall EtwpCheckLoggerAccessAndDoRundown(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  unsigned int *v6; // rax
  unsigned int *v7; // rbx
  int v8; // edi
  int v9; // r8d

  v6 = EtwpAcquireLoggerContextByLoggerId(a1, a2, 1);
  v7 = v6;
  if ( v6 )
  {
    v8 = EtwpCheckLoggerControlAccess(0x80u, (__int64)v6);
    if ( v8 >= 0 )
    {
      if ( (v7[3] & 0x2000000) != 0 )
      {
        LOBYTE(v9) = a4;
        EtwpLogKernelTraceRundown(a3, (unsigned int)&EtwpGroupMasks + 32 * *((unsigned __int8 *)v7 + 818), v9, 0, 0);
      }
      if ( (v7[204] & 0x800) != 0 )
        EtwpLogPmcCounterRundown(v7, a3);
      if ( (v7[204] & 0x1000000) != 0 )
        EtwpStackRundown(*((_QWORD *)v7 + 105), a3);
    }
    EtwpReleaseLoggerContext(v7, 1);
  }
  else
  {
    return (unsigned int)-1073741162;
  }
  return (unsigned int)v8;
}
