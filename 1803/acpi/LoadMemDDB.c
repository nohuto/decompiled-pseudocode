/*
 * XREFs of LoadMemDDB @ 0x1C004A7D0
 * Callers:
 *     Load @ 0x1C004F530 (Load.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 *     AcpiDiagTraceAmlError @ 0x1C0006B18 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C004905C (LogError.c)
 *     PrintDebugMessage @ 0x1C0049830 (PrintDebugMessage.c)
 *     LoadDDB @ 0x1C004A4D8 (LoadDDB.c)
 */

__int64 __fastcall LoadMemDDB(__int64 Entry, const char *a2, __int64 a3)
{
  int v6; // eax
  const void *v7; // rbp
  unsigned int v8; // ebx

  if ( ghValidateTable && (v6 = ghValidateTable(a2, qword_1C0068608), (v7 = (const void *)v6) != 0LL) )
  {
    v8 = -1072431079;
    LogError(-1072431079);
    AcpiDiagTraceAmlError(Entry, -1072431079);
    PrintDebugMessage(81, v7, 0LL, 0LL, 0LL);
  }
  else
  {
    return (unsigned int)LoadDDB((char *)Entry, a2, *(_QWORD *)(Entry + 80), a3);
  }
  return v8;
}
