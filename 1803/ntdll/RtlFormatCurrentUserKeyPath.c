/*
 * XREFs of RtlFormatCurrentUserKeyPath @ 0x180037F50
 * Callers:
 *     sub_18000AF44 @ 0x18000AF44 (sub_18000AF44.c)
 *     RtlOpenCurrentUser @ 0x18006F9B0 (RtlOpenCurrentUser.c)
 *     sub_18007BD78 @ 0x18007BD78 (sub_18007BD78.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x180011530 (RtlFreeUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x180034F00 (RtlAppendUnicodeToString.c)
 *     RtlLengthSidAsUnicodeString @ 0x180034FB0 (RtlLengthSidAsUnicodeString.c)
 *     RtlConvertSidToUnicodeString @ 0x180036C30 (RtlConvertSidToUnicodeString.c)
 *     sub_18003B5E0 @ 0x18003B5E0 (sub_18003B5E0.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwQueryInformationToken @ 0x18009AEE0 (ZwQueryInformationToken.c)
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
  __int64 v11; // [rsp+48h] [rbp-80h] BYREF
  PSID Sid[12]; // [rsp+50h] [rbp-78h] BYREF

  result = ZwQueryInformationToken(-6LL, 1LL, Sid, 88LL, &v11);
  if ( (int)result >= 0 )
  {
    result = RtlLengthSidAsUnicodeString((unsigned __int8 *)Sid[0], &v9);
    if ( (int)result >= 0 )
    {
      v3 = v9;
      UnicodeString->Length = 0;
      v4 = (unsigned __int16)(v3 + 34);
      UnicodeString->MaximumLength = v4;
      v5 = (wchar_t *)sub_18003B5E0(v4);
      UnicodeString->Buffer = v5;
      if ( v5 )
      {
        RtlAppendUnicodeToString(&UnicodeString->Length, L"\\REGISTRY\\USER\\");
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
