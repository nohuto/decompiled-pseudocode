/*
 * XREFs of Load @ 0x1C0012BC0
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x1C000C6D0 (ValidateArgTypes.c)
 *     LoadMemDDB @ 0x1C0012F1C (LoadMemDDB.c)
 *     DereferenceObjectEx @ 0x1C001B118 (DereferenceObjectEx.c)
 *     GetNameSpaceObject @ 0x1C001B6A4 (GetNameSpaceObject.c)
 *     ValidateTarget @ 0x1C00208D4 (ValidateTarget.c)
 *     PrintDebugMessage @ 0x1C002140C (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0021518 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0027DB8 (LogError.c)
 *     AMLIDebugger @ 0x1C005DC30 (AMLIDebugger.c)
 *     LoadFieldUnitDDB @ 0x1C005ECF8 (LoadFieldUnitDDB.c)
 */

__int64 __fastcall Load(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  unsigned int NameSpaceObject; // eax
  unsigned int MemDDB; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  v4 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, "Z");
  if ( !v4 )
  {
    v4 = ValidateTarget(a1, *(_QWORD *)(a2 + 80) + 40LL, 133LL, &v11);
    if ( !v4 )
    {
      NameSpaceObject = GetNameSpaceObject(*(void **)(*(_QWORD *)(a2 + 80) + 32LL));
      v4 = NameSpaceObject;
      if ( NameSpaceObject == -1073741772 )
      {
        LogError(3221225524LL);
        AcpiDiagTraceAmlError(a1, 3221225524LL);
        PrintDebugMessage(78, *(_QWORD *)(*(_QWORD *)(a2 + 80) + 32LL), 0, 0, 0LL);
        return v4;
      }
      if ( !NameSpaceObject )
      {
        if ( MEMORY[0x42] == 10 && *(_BYTE *)(MEMORY[0x60] + 12LL) == (_BYTE)NameSpaceObject )
        {
          MemDDB = LoadMemDDB(a1, *MEMORY[0x60], v11);
        }
        else
        {
          if ( MEMORY[0x42] != 5 )
          {
            v4 = -1072431095;
            LogError(3222536201LL);
            AcpiDiagTraceAmlError(a1, 3222536201LL);
            PrintDebugMessage(79, *(_QWORD *)(*(_QWORD *)(a2 + 80) + 32LL), 0, 0, 0LL);
LABEL_9:
            if ( (gdwfAMLIInit & 2) != 0 )
            {
              PrintDebugMessage(16, 0, 0, 0, 0LL);
              AMLIDebugger(v9, v8, v10);
            }
            return v4;
          }
          MemDDB = LoadFieldUnitDDB(a1, 64LL, v11);
        }
        v4 = MemDDB;
        goto LABEL_9;
      }
    }
  }
  return v4;
}
