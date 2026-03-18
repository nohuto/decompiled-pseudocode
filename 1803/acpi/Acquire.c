/*
 * XREFs of Acquire @ 0x1C004FCE0
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
 */

__int64 __fastcall Acquire(__int64 a1, __int64 *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  char v6; // al
  void *ObjectPath; // rsi
  const void *ObjectTypeName; // rax
  const void *v9; // r11
  __int64 v10; // rdx
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  v4 = ValidateArgTypes(a1, a2[10], 0, "OI");
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
    if ( *(_WORD *)(v5 + 66) == 9 )
    {
      v4 = PushFrame(a1, 1179730753, 64LL, (__int64)ParseAcquire, &v12);
      if ( !v4 )
      {
        v10 = v12;
        *(_QWORD *)(v12 + 32) = *(_QWORD *)(a2[8] + 96);
        *(_DWORD *)(v10 + 16) = (*(_WORD *)(a2[8] + 64) & 2 | 8) << 15;
        *(_WORD *)(v10 + 40) = *(_WORD *)(a2[10] + 56);
        *(_QWORD *)(v10 + 48) = a2[11];
        *(_QWORD *)(v10 + 56) = *(_QWORD *)(a2[8] + 16);
      }
    }
    else
    {
      v4 = -1072431095;
      LogError(-1072431095);
      AcpiDiagTraceAmlError(a1, -1072431095);
      ObjectPath = (void *)GetObjectPath(a2[8]);
      ObjectTypeName = (const void *)GetObjectTypeName(*(unsigned __int16 *)(a2[8] + 66));
      PrintDebugMessage(3, v9, ObjectTypeName, 0LL, 0LL);
      if ( ObjectPath )
        ExFreePoolWithTag(ObjectPath, 0);
    }
  }
  return v4;
}
