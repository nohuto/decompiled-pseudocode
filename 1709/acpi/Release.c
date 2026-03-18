/*
 * XREFs of Release @ 0x1C0015300
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x1C000C6D0 (ValidateArgTypes.c)
 *     GetObjectPath @ 0x1C0012478 (GetObjectPath.c)
 *     PushFrame @ 0x1C0018B78 (PushFrame.c)
 *     PrintDebugMessage @ 0x1C002140C (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C0021518 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C0027DB8 (LogError.c)
 *     ReleaseASLMutex @ 0x1C002A3E0 (ReleaseASLMutex.c)
 *     GetObjectTypeName @ 0x1C005D4E0 (GetObjectTypeName.c)
 */

__int64 __fastcall Release(__int64 a1, __int64 *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  char v6; // al
  __int64 v7; // rax
  __int64 v8; // r14
  __int16 v9; // si
  __int64 v10; // r8
  __int64 v11; // rdx
  _QWORD *ObjectPath; // rsi
  int ObjectTypeName; // eax
  int v15; // r11d
  __int64 v16; // [rsp+68h] [rbp+10h] BYREF

  v4 = ValidateArgTypes(a1, a2[10], 0, "O");
  if ( !v4 )
  {
    v5 = *(_QWORD *)(a2[10] + 16);
    v6 = gdwfAMLI;
    a2[8] = v5;
    if ( (v6 & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 112));
    v7 = a2[8];
    v8 = *(_QWORD *)(v7 + 96);
    v9 = *(_WORD *)(v7 + 64) & 2;
    if ( *(_WORD *)(v7 + 66) == 9 )
    {
      v4 = PushFrame(a1, 1179403602, 56, (unsigned int)ParseRelease, (__int64)&v16);
      if ( v4 )
      {
        LOBYTE(v10) = v9 != 0;
        return (unsigned int)ReleaseASLMutex(a1, v8, v10);
      }
      else
      {
        v11 = v16;
        *(_QWORD *)(v16 + 32) = v8;
        *(_QWORD *)(v11 + 40) = a2[11];
        *(_QWORD *)(v11 + 48) = *(_QWORD *)(a2[8] + 16);
        if ( v9 )
          *(_DWORD *)(v11 + 16) = 0x10000;
      }
    }
    else
    {
      v4 = -1072431095;
      LogError(3222536201LL);
      AcpiDiagTraceAmlError(a1, 3222536201LL);
      ObjectPath = GetObjectPath(a2[8]);
      ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(a2[8] + 66));
      PrintDebugMessage(173, v15, ObjectTypeName, 0, 0LL);
      if ( ObjectPath )
        ExFreePoolWithTag(ObjectPath, 0);
    }
  }
  return v4;
}
