/*
 * XREFs of LoadMemDDB @ 0x1C00297D8
 * Callers:
 *     Load @ 0x1C00296F0 (Load.c)
 * Callees:
 *     PrintDebugMessage @ 0x1C001CF28 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C001D034 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C001D178 (LogError.c)
 *     LoadDDB @ 0x1C001D980 (LoadDDB.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LoadMemDDB(__int64 a1, const char *a2, __int64 a3)
{
  unsigned int v6; // ebx
  int v8; // eax
  const void *v9; // rbp

  if ( ghValidateTable && (v8 = ghValidateTable(a2, qword_1C00780A8), (v9 = (const void *)v8) != 0LL) )
  {
    v6 = -1072431079;
    LogError(-1072431079);
    AcpiDiagTraceAmlError(a1, -1072431079);
    PrintDebugMessage(81, v9, 0LL, 0LL, 0LL);
  }
  else
  {
    return (unsigned int)LoadDDB(a1, a2, *(_QWORD *)(a1 + 80), a3);
  }
  return v6;
}
