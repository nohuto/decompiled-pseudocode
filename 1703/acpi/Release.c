/*
 * XREFs of Release @ 0x1C001D360
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x1C001A400 (ValidateArgTypes.c)
 *     PushFrame @ 0x1C001CCF0 (PushFrame.c)
 *     PrintDebugMessage @ 0x1C001CF28 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C001D034 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C001D178 (LogError.c)
 *     GetObjectPath @ 0x1C00233D0 (GetObjectPath.c)
 *     ReleaseASLMutex @ 0x1C0029494 (ReleaseASLMutex.c)
 *     GetObjectTypeName @ 0x1C005D6E0 (GetObjectTypeName.c)
 */

__int64 __fastcall Release(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // esi
  __int64 v5; // rcx
  char v6; // al
  __int64 v7; // rax
  __int64 v8; // r14
  bool v9; // di
  __int64 v10; // r8
  __int64 v11; // rdx
  void *ObjectPath; // rdi
  const void *ObjectTypeName; // rax
  const void *v15; // r11
  __int64 v16; // [rsp+58h] [rbp+10h] BYREF

  v4 = ValidateArgTypes(a1, a2[10], 0, (__int64)"O");
  if ( !v4 )
  {
    v5 = *(_QWORD *)(a2[10] + 16LL);
    v6 = gdwfAMLI;
    a2[8] = v5;
    if ( (v6 & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 112));
    v7 = a2[8];
    v8 = *(_QWORD *)(v7 + 96);
    v9 = (*(_BYTE *)(v7 + 64) & 2) != 0;
    if ( *(_WORD *)(v7 + 66) == 9 )
    {
      v4 = PushFrame(a1, 1179403602, 0x38u, (__int64)ParseRelease, &v16);
      if ( v4 )
      {
        LOBYTE(v10) = v9;
        return (unsigned int)ReleaseASLMutex(a1, v8, v10);
      }
      else
      {
        v11 = v16;
        *(_QWORD *)(v16 + 32) = v8;
        *(_QWORD *)(v11 + 40) = a2[11];
        *(_QWORD *)(v11 + 48) = *(_QWORD *)(a2[8] + 16LL);
        if ( v9 )
          *(_DWORD *)(v11 + 16) = 0x10000;
      }
    }
    else
    {
      v4 = -1072431095;
      LogError(-1072431095);
      AcpiDiagTraceAmlError(a1, -1072431095);
      ObjectPath = (void *)GetObjectPath(a2[8]);
      ObjectTypeName = (const void *)GetObjectTypeName(*(unsigned __int16 *)(a2[8] + 66LL));
      PrintDebugMessage(173, v15, ObjectTypeName, 0LL, 0LL);
      if ( ObjectPath )
        ExFreePoolWithTag(ObjectPath, 0);
    }
  }
  return v4;
}
