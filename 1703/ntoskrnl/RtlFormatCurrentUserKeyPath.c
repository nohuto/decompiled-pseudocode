/*
 * XREFs of RtlFormatCurrentUserKeyPath @ 0x1404C0410
 * Callers:
 *     RtlpGetRegistryHandle @ 0x140556BB8 (RtlpGetRegistryHandle.c)
 *     RtlOpenCurrentUser @ 0x140587D30 (RtlOpenCurrentUser.c)
 *     _RegRtlOpenPredefinedKey @ 0x1405D1300 (_RegRtlOpenPredefinedKey.c)
 *     AslRegistryBuildUserPath @ 0x1405D6F60 (AslRegistryBuildUserPath.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x14004BFF0 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwQueryInformationToken @ 0x14017E360 (ZwQueryInformationToken.c)
 *     RtlConvertSidToUnicodeString @ 0x1404C06A0 (RtlConvertSidToUnicodeString.c)
 *     ExpAllocateStringRoutine @ 0x1404C1D30 (ExpAllocateStringRoutine.c)
 *     RtlLengthSidAsUnicodeString @ 0x1404C25CC (RtlLengthSidAsUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 */

NTSTATUS __stdcall RtlFormatCurrentUserKeyPath(PUNICODE_STRING KeyPath)
{
  NTSTATUS result; // eax
  unsigned __int16 v3; // di
  __int64 v4; // rcx
  wchar_t *StringRoutine; // rax
  wchar_t *Buffer; // rax
  unsigned __int64 v7; // rdx
  int v8; // edi
  ULONG StringLength; // [rsp+30h] [rbp-98h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-90h] BYREF
  ULONG ReturnLength; // [rsp+48h] [rbp-80h] BYREF
  PSID Sid[12]; // [rsp+50h] [rbp-78h] BYREF

  result = ZwQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFALL, TokenUser, Sid, 0x58u, &ReturnLength);
  if ( result >= 0 )
  {
    result = RtlLengthSidAsUnicodeString(Sid[0], &StringLength);
    if ( result >= 0 )
    {
      v3 = StringLength;
      KeyPath->Length = 0;
      v4 = (unsigned __int16)(v3 + 34);
      KeyPath->MaximumLength = v4;
      StringRoutine = (wchar_t *)ExpAllocateStringRoutine(v4);
      KeyPath->Buffer = StringRoutine;
      if ( StringRoutine )
      {
        RtlAppendUnicodeToString(KeyPath, L"\\REGISTRY\\USER\\");
        Buffer = KeyPath->Buffer;
        v7 = (unsigned __int64)KeyPath->Length >> 1;
        UnicodeString.MaximumLength = v3;
        UnicodeString.Length = 0;
        UnicodeString.Buffer = &Buffer[v7];
        v8 = RtlConvertSidToUnicodeString(&UnicodeString, Sid[0], 0);
        if ( v8 < 0 )
          RtlFreeUnicodeString(KeyPath);
        else
          KeyPath->Length += UnicodeString.Length;
        return v8;
      }
      else
      {
        return -1073741801;
      }
    }
  }
  return result;
}
