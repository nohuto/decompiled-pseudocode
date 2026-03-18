/*
 * XREFs of Release @ 0x1C004F7F0
 * Callers:
 *     <none>
 * Callees:
 *     PushFrame @ 0x1C0003314 (PushFrame.c)
 *     GetObjectPath @ 0x1C00036E8 (GetObjectPath.c)
 *     AcpiDiagTraceAmlError @ 0x1C0006B18 (AcpiDiagTraceAmlError.c)
 *     GetObjectTypeName @ 0x1C0046D68 (GetObjectTypeName.c)
 *     ValidateArgTypes @ 0x1C0047D6C (ValidateArgTypes.c)
 *     LogError @ 0x1C004905C (LogError.c)
 *     PrintDebugMessage @ 0x1C0049830 (PrintDebugMessage.c)
 *     ReleaseASLMutex @ 0x1C004EF98 (ReleaseASLMutex.c)
 */

__int64 __fastcall Release(__int64 a1, __int64 *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  char v6; // al
  __int64 v7; // r14
  __int16 v8; // si
  void *ObjectPath; // rsi
  const void *ObjectTypeName; // rax
  const void *v11; // r11
  __int64 v12; // rdx
  __int64 v14; // [rsp+68h] [rbp+10h] BYREF

  v4 = ValidateArgTypes(a1, a2[10], 0, "O");
  if ( !v4 )
  {
    v5 = *(_QWORD *)(a2[10] + 16);
    v6 = gdwfAMLI;
    a2[8] = v5;
    if ( (v6 & 4) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 112));
      v5 = a2[8];
    }
    v7 = *(_QWORD *)(v5 + 96);
    v8 = *(_WORD *)(v5 + 64) & 2;
    if ( *(_WORD *)(v5 + 66) == 9 )
    {
      v4 = PushFrame(a1, 1179403602, 56LL, (__int64)ParseRelease, &v14);
      if ( v4 )
      {
        return (unsigned int)ReleaseASLMutex(a1, v7, v8 != 0);
      }
      else
      {
        v12 = v14;
        *(_QWORD *)(v14 + 32) = v7;
        *(_QWORD *)(v12 + 40) = a2[11];
        *(_QWORD *)(v12 + 48) = *(_QWORD *)(a2[8] + 16);
        if ( v8 )
          *(_DWORD *)(v12 + 16) = 0x10000;
      }
    }
    else
    {
      v4 = -1072431095;
      LogError(-1072431095);
      AcpiDiagTraceAmlError(a1, -1072431095);
      ObjectPath = (void *)GetObjectPath(a2[8]);
      ObjectTypeName = (const void *)GetObjectTypeName(*(unsigned __int16 *)(a2[8] + 66));
      PrintDebugMessage(173, v11, ObjectTypeName, 0LL, 0LL);
      if ( ObjectPath )
        ExFreePoolWithTag(ObjectPath, 0);
    }
  }
  return v4;
}
