/*
 * XREFs of Load @ 0x1C00296F0
 * Callers:
 *     <none>
 * Callees:
 *     DereferenceObjectEx @ 0x1C00156D8 (DereferenceObjectEx.c)
 *     GetNameSpaceObject @ 0x1C00171C0 (GetNameSpaceObject.c)
 *     ValidateArgTypes @ 0x1C001A400 (ValidateArgTypes.c)
 *     ValidateTarget @ 0x1C001B7DC (ValidateTarget.c)
 *     PrintDebugMessage @ 0x1C001CF28 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C001D034 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C001D178 (LogError.c)
 *     LoadMemDDB @ 0x1C00297D8 (LoadMemDDB.c)
 *     AMLIDebugger @ 0x1C005BEF8 (AMLIDebugger.c)
 *     LoadFieldUnitDDB @ 0x1C005E15C (LoadFieldUnitDDB.c)
 */

__int64 __fastcall Load(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  unsigned int NameSpaceObject; // eax
  unsigned int MemDDB; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  v4 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, (__int64)"Z");
  if ( !v4 )
  {
    v4 = ValidateTarget(a1, *(_QWORD *)(a2 + 80) + 40LL, 0x85u, &v12);
    if ( !v4 )
    {
      NameSpaceObject = GetNameSpaceObject(*(_BYTE **)(*(_QWORD *)(a2 + 80) + 32LL));
      v4 = NameSpaceObject;
      if ( NameSpaceObject == -1073741772 )
      {
        LogError(-1073741772);
        AcpiDiagTraceAmlError(a1, -1073741772);
        PrintDebugMessage(78, *(const void **)(*(_QWORD *)(a2 + 80) + 32LL), 0LL, 0LL, 0LL);
        return v4;
      }
      if ( !NameSpaceObject )
      {
        if ( MEMORY[0x42] == 10 && *(_BYTE *)(MEMORY[0x60] + 12LL) == (_BYTE)NameSpaceObject )
        {
          MemDDB = LoadMemDDB(a1, *MEMORY[0x60], v12);
        }
        else
        {
          if ( MEMORY[0x42] != 5 )
          {
            v4 = -1072431095;
            LogError(-1072431095);
            AcpiDiagTraceAmlError(a1, -1072431095);
            PrintDebugMessage(79, *(const void **)(*(_QWORD *)(a2 + 80) + 32LL), 0LL, 0LL, 0LL);
LABEL_9:
            if ( (gdwfAMLIInit & 2) != 0 )
            {
              PrintDebugMessage(16, 0LL, 0LL, 0LL, 0LL);
              AMLIDebugger(v9, v8, v10, v11);
            }
            return v4;
          }
          MemDDB = LoadFieldUnitDDB(a1, 64LL, v12);
        }
        v4 = MemDDB;
        goto LABEL_9;
      }
    }
  }
  return v4;
}
