/*
 * XREFs of LocalConvertSidToStringSidW @ 0x1406FB81C
 * Callers:
 *     SeConvertSidToStringSid @ 0x140248C90 (SeConvertSidToStringSid.c)
 *     LocalConvertAclToString @ 0x1406FA724 (LocalConvertAclToString.c)
 *     LocalGetStringForSid @ 0x1406FBB48 (LocalGetStringForSid.c)
 * Callees:
 *     RtlStringCbCopyNW @ 0x14013AB9C (RtlStringCbCopyNW.c)
 *     RtlConvertSidToUnicodeString @ 0x1404C06A0 (RtlConvertSidToUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     SddlpAlloc @ 0x14057FE50 (SddlpAlloc.c)
 */

NTSTATUS __fastcall LocalConvertSidToStringSidW(PSID Sid, wchar_t **a2)
{
  NTSTATUS result; // eax
  size_t Length; // rdi
  wchar_t *v5; // rax
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  if ( !Sid || !a2 )
    return -1073741811;
  result = RtlConvertSidToUnicodeString(&UnicodeString, Sid, 1u);
  if ( result >= 0 )
  {
    Length = UnicodeString.Length;
    v5 = (wchar_t *)SddlpAlloc(UnicodeString.Length + 2LL);
    *a2 = v5;
    if ( v5 )
    {
      result = RtlStringCbCopyNW(v5, Length + 2, UnicodeString.Buffer, Length);
      if ( result >= 0 )
      {
        RtlFreeUnicodeString(&UnicodeString);
        return 0;
      }
    }
    else
    {
      RtlFreeUnicodeString(&UnicodeString);
      return -1073741801;
    }
  }
  return result;
}
