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

__int64 __fastcall RtlFormatCurrentUserKeyPath(PUNICODE_STRING UnicodeString)
{
  __int64 result; // rax
  unsigned __int16 v3; // di
  __int64 v4; // rcx
  wchar_t *v5; // rax
  wchar_t *Buffer; // rax
  unsigned __int64 v7; // rdx
  NTSTATUS v8; // edi
  int v9; // [rsp+30h] [rbp-98h] BYREF
  UNICODE_STRING UnicodeStringa; // [rsp+38h] [rbp-90h] BYREF
  PSID Sid[12]; // [rsp+50h] [rbp-78h] BYREF

  result = ZwQueryInformationToken(-6LL, 1LL, Sid);
  if ( (int)result >= 0 )
  {
    result = RtlLengthSidAsUnicodeString(Sid[0], &v9);
    if ( (int)result >= 0 )
    {
      v3 = v9;
      UnicodeString->Length = 0;
      v4 = (unsigned __int16)(v3 + 34);
      UnicodeString->MaximumLength = v4;
      v5 = (wchar_t *)sub_180043FE0(v4);
      UnicodeString->Buffer = v5;
      if ( v5 )
      {
        RtlAppendUnicodeToString(UnicodeString, L"\\REGISTRY\\USER\\");
        Buffer = UnicodeString->Buffer;
        v7 = (unsigned __int64)UnicodeString->Length >> 1;
        UnicodeStringa.MaximumLength = v3;
        UnicodeStringa.Length = 0;
        UnicodeStringa.Buffer = &Buffer[v7];
        v8 = RtlConvertSidToUnicodeString(&UnicodeStringa, Sid[0], 0);
        if ( v8 < 0 )
          RtlFreeUnicodeString(UnicodeString);
        else
          UnicodeString->Length += UnicodeStringa.Length;
        return (unsigned int)v8;
      }
      else
      {
        return 3221225495LL;
      }
    }
  }
  return result;
}
