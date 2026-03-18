/*
 * XREFs of RegEventHandler @ 0x1C00271A0
 * Callers:
 *     AMLIRegEventHandler @ 0x1C0026FB4 (AMLIRegEventHandler.c)
 * Callees:
 *     PrintDebugMessage @ 0x1C001CF28 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C001D034 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C001D178 (LogError.c)
 */

__int64 __fastcall RegEventHandler(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( *a1 && a2 )
  {
    LogError(-1072431090);
    AcpiDiagTraceAmlError(0LL, -1072431090);
    PrintDebugMessage(165, 0LL, 0LL, 0LL, 0LL);
    return (unsigned int)-1072431090;
  }
  else
  {
    *a1 = a2;
    a1[1] = a3;
  }
  return v3;
}
