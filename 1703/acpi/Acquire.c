/*
 * XREFs of Acquire @ 0x1C001CB50
 * Callers:
 *     <none>
 * Callees:
 *     ValidateArgTypes @ 0x1C001A400 (ValidateArgTypes.c)
 *     PushFrame @ 0x1C001CCF0 (PushFrame.c)
 *     PrintDebugMessage @ 0x1C001CF28 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C001D034 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C001D178 (LogError.c)
 *     GetObjectPath @ 0x1C00233D0 (GetObjectPath.c)
 *     GetObjectTypeName @ 0x1C005D6E0 (GetObjectTypeName.c)
 */

__int64 __fastcall Acquire(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  char v6; // al
  __int64 v7; // rdx
  void *ObjectPath; // rsi
  int ObjectTypeName; // eax
  int v11; // r11d
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  v4 = ValidateArgTypes(a1, a2[10], 0, (__int64)"OI");
  if ( !v4 )
  {
    v5 = *(_QWORD *)(a2[10] + 16LL);
    v6 = gdwfAMLI;
    a2[8] = v5;
    if ( (v6 & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 112));
    if ( *(_WORD *)(a2[8] + 66LL) == 9 )
    {
      v4 = PushFrame(a1, 1179730753, 64, (unsigned int)ParseAcquire, (__int64)&v12);
      if ( !v4 )
      {
        v7 = v12;
        *(_QWORD *)(v12 + 32) = *(_QWORD *)(a2[8] + 96LL);
        *(_DWORD *)(v7 + 16) = (*(_WORD *)(a2[8] + 64LL) & 2 | 8) << 15;
        *(_WORD *)(v7 + 40) = *(_WORD *)(a2[10] + 56LL);
        *(_QWORD *)(v7 + 48) = a2[11];
        *(_QWORD *)(v7 + 56) = *(_QWORD *)(a2[8] + 16LL);
      }
    }
    else
    {
      v4 = -1072431095;
      LogError(3222536201LL);
      AcpiDiagTraceAmlError(a1, 3222536201LL);
      ObjectPath = (void *)GetObjectPath(a2[8]);
      ObjectTypeName = GetObjectTypeName(*(unsigned __int16 *)(a2[8] + 66LL));
      PrintDebugMessage(3, v11, ObjectTypeName, 0, 0LL);
      if ( ObjectPath )
        ExFreePoolWithTag(ObjectPath, 0);
    }
  }
  return v4;
}
