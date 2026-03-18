/*
 * XREFs of Load @ 0x1C004F530
 * Callers:
 *     <none>
 * Callees:
 *     DereferenceObjectEx @ 0x1C0002FD4 (DereferenceObjectEx.c)
 *     AcpiDiagTraceAmlError @ 0x1C0006B18 (AcpiDiagTraceAmlError.c)
 *     ValidateArgTypes @ 0x1C0047D6C (ValidateArgTypes.c)
 *     ValidateTarget @ 0x1C0048320 (ValidateTarget.c)
 *     AMLIDebugger @ 0x1C0048460 (AMLIDebugger.c)
 *     LogError @ 0x1C004905C (LogError.c)
 *     PrintDebugMessage @ 0x1C0049830 (PrintDebugMessage.c)
 *     GetNameSpaceObject @ 0x1C004A1E0 (GetNameSpaceObject.c)
 *     LoadFieldUnitDDB @ 0x1C004A5F4 (LoadFieldUnitDDB.c)
 *     LoadMemDDB @ 0x1C004A7D0 (LoadMemDDB.c)
 */

__int64 __fastcall Load(_QWORD *Entry, __int64 a2)
{
  unsigned int v4; // ebx
  unsigned int NameSpaceObject; // eax
  __int64 v6; // rdi
  __int16 v7; // ax
  __int64 v8; // rdx
  unsigned int FieldUnitDDB; // eax
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  v11 = 0LL;
  v4 = ValidateArgTypes((__int64)Entry, *(_QWORD *)(a2 + 80), 0, "Z");
  if ( v4 )
    return v4;
  v4 = ValidateTarget((__int64)Entry, *(_QWORD *)(a2 + 80) + 40LL, 133, (__int64)&v12);
  if ( v4 )
    return v4;
  NameSpaceObject = GetNameSpaceObject(*(_BYTE **)(*(_QWORD *)(a2 + 80) + 32LL), Entry[10], (__int64)&v11, 0x80000000);
  v6 = v11;
  v4 = NameSpaceObject;
  if ( NameSpaceObject == -1073741772 )
  {
    LogError(-1073741772);
    AcpiDiagTraceAmlError((__int64)Entry, -1073741772);
    PrintDebugMessage(78, *(const void **)(*(_QWORD *)(a2 + 80) + 32LL), 0LL, 0LL, 0LL);
    goto LABEL_15;
  }
  if ( !NameSpaceObject )
  {
    v7 = *(_WORD *)(v11 + 66);
    if ( v7 != 10 || (v8 = *(_QWORD *)(v11 + 96), *(_BYTE *)(v8 + 12)) )
    {
      if ( v7 != 5 )
      {
        v4 = -1072431095;
        LogError(-1072431095);
        AcpiDiagTraceAmlError((__int64)Entry, -1072431095);
        PrintDebugMessage(79, *(const void **)(*(_QWORD *)(a2 + 80) + 32LL), 0LL, 0LL, 0LL);
LABEL_13:
        if ( (gdwfAMLIInit & 2) != 0 )
        {
          PrintDebugMessage(16, 0LL, 0LL, 0LL, 0LL);
          AMLIDebugger();
        }
        goto LABEL_15;
      }
      FieldUnitDDB = LoadFieldUnitDDB((__int64)Entry, v11 + 64, v12);
    }
    else
    {
      FieldUnitDDB = LoadMemDDB((__int64)Entry, *(const char **)v8, v12);
    }
    v4 = FieldUnitDDB;
    goto LABEL_13;
  }
LABEL_15:
  if ( v6 )
    DereferenceObjectEx(v6);
  return v4;
}
