/*
 * XREFs of LoadMemDDB @ 0x1C0012F1C
 * Callers:
 *     Load @ 0x1C0012BC0 (Load.c)
 * Callees:
 *     LoadDDB @ 0x1C001524C (LoadDDB.c)
 *     PrintDebugMessage @ 0x1C002140C (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0021518 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0027DB8 (LogError.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LoadMemDDB(void *a1, __int64 a2)
{
  unsigned int v3; // ebx
  int v5; // ebp

  if ( ghValidateTable && (v5 = ghValidateTable(a2, qword_1C007A158)) != 0 )
  {
    v3 = -1072431079;
    LogError(3222536217LL);
    AcpiDiagTraceAmlError(a1, 3222536217LL);
    PrintDebugMessage(81, v5, 0, 0, 0LL);
  }
  else
  {
    return (unsigned int)LoadDDB(a1);
  }
  return v3;
}
