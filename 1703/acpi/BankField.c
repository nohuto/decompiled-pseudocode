/*
 * XREFs of BankField @ 0x1C005E380
 * Callers:
 *     <none>
 * Callees:
 *     HeapAlloc @ 0x1C00039C0 (HeapAlloc.c)
 *     DereferenceObjectEx @ 0x1C00156D8 (DereferenceObjectEx.c)
 *     GetNameSpaceObject @ 0x1C00171C0 (GetNameSpaceObject.c)
 *     ParseFieldList @ 0x1C0017F88 (ParseFieldList.c)
 *     CreateNameSpaceObject @ 0x1C00196F0 (CreateNameSpaceObject.c)
 *     PrintDebugMessage @ 0x1C001CF28 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C001D034 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C001D178 (LogError.c)
 *     memset @ 0x1C002CB80 (memset.c)
 */

__int64 __fastcall BankField(__int64 a1, __int64 a2)
{
  unsigned int NameSpaceObject; // ebx

  NameSpaceObject = GetNameSpaceObject(*(_BYTE **)(*(_QWORD *)(a2 + 80) + 32LL));
  if ( !NameSpaceObject )
  {
    NameSpaceObject = GetNameSpaceObject(*(_BYTE **)(*(_QWORD *)(a2 + 80) + 72LL));
    if ( !NameSpaceObject )
    {
      NameSpaceObject = -1072431095;
      if ( MEMORY[0x42] == 10 )
      {
        LogError(-1072431095);
        AcpiDiagTraceAmlError(a1, -1072431095);
        PrintDebugMessage(15, *(const void **)(*(_QWORD *)(a2 + 80) + 72LL), 0LL, 0LL, 0LL);
      }
      else
      {
        LogError(-1072431095);
        AcpiDiagTraceAmlError(a1, -1072431095);
        PrintDebugMessage(15, *(const void **)(*(_QWORD *)(a2 + 80) + 32LL), 0LL, 0LL, 0LL);
      }
    }
  }
  return NameSpaceObject;
}
