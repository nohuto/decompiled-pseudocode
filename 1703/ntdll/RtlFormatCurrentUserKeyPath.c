/*
 * XREFs of RtlFormatCurrentUserKeyPath @ 0x1800410E0
 * Callers:
 *     RtlOpenCurrentUser @ 0x18003B960 (RtlOpenCurrentUser.c)
 *     sub_180056CCC @ 0x180056CCC (sub_180056CCC.c)
 *     sub_18007FE68 @ 0x18007FE68 (sub_18007FE68.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x18001F9F0 (RtlFreeUnicodeString.c)
 *     sub_180043FE0 @ 0x180043FE0 (sub_180043FE0.c)
 *     RtlLengthSidAsUnicodeString @ 0x180044000 (RtlLengthSidAsUnicodeString.c)
 *     RtlConvertSidToUnicodeString @ 0x180044360 (RtlConvertSidToUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x180044AB0 (RtlAppendUnicodeToString.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwQueryInformationToken @ 0x1800A5720 (ZwQueryInformationToken.c)
 */

NTSTATUS __cdecl RtlFormatCurrentUserKeyPath(PUNICODE_STRING CurrentUserKeyPath)
{
  NTSTATUS result; // eax
  USHORT v3; // di
  __int64 v4; // rcx
  WCHAR *v5; // rax
  PWCH Buffer; // rax
  unsigned __int64 v7; // rdx
  int v8; // edi
  ULONG StringLength; // [rsp+30h] [rbp-98h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-90h] BYREF
  ULONG ReturnLength; // [rsp+48h] [rbp-80h] BYREF
  PSID Sid[12]; // [rsp+50h] [rbp-78h] BYREF

  result = ZwQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFALL, 1u, Sid, 0x58u, &ReturnLength);
  if ( result >= 0 )
  {
    result = RtlLengthSidAsUnicodeString(Sid[0], &StringLength);
    if ( result >= 0 )
    {
      v3 = StringLength;
      CurrentUserKeyPath->Length = 0;
      v4 = (unsigned __int16)(v3 + 34);
      CurrentUserKeyPath->MaximumLength = v4;
      v5 = (WCHAR *)sub_180043FE0(v4);
      CurrentUserKeyPath->Buffer = v5;
      if ( v5 )
      {
        RtlAppendUnicodeToString(CurrentUserKeyPath, L"\\REGISTRY\\USER\\");
        Buffer = CurrentUserKeyPath->Buffer;
        v7 = (unsigned __int64)CurrentUserKeyPath->Length >> 1;
        UnicodeString.MaximumLength = v3;
        UnicodeString.Length = 0;
        UnicodeString.Buffer = &Buffer[v7];
        v8 = RtlConvertSidToUnicodeString(&UnicodeString, Sid[0], 0);
        if ( v8 < 0 )
          RtlFreeUnicodeString(CurrentUserKeyPath);
        else
          CurrentUserKeyPath->Length += UnicodeString.Length;
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
