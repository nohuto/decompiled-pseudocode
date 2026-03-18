/*
 * XREFs of RegEventHandler @ 0x1C0047ABC
 * Callers:
 *     AMLIRegEventHandler @ 0x1C0044038 (AMLIRegEventHandler.c)
 * Callees:
 *     AcpiDiagTraceAmlError @ 0x1C0006B18 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C004905C (LogError.c)
 *     PrintDebugMessage @ 0x1C0049830 (PrintDebugMessage.c)
 */

__int64 __fastcall RegEventHandler(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( *a1 && a2 )
  {
    LogError(3222536206LL);
    AcpiDiagTraceAmlError(0LL, -1072431090);
    PrintDebugMessage(165, 0, 0, 0, 0LL);
    return (unsigned int)-1072431090;
  }
  else
  {
    *a1 = a2;
    a1[1] = a3;
  }
  return v3;
}
