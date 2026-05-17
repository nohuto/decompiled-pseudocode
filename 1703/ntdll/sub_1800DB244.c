/*
 * XREFs of sub_1800DB244 @ 0x1800DB244
 * Callers:
 *     sub_1800DB144 @ 0x1800DB144 (sub_1800DB144.c)
 * Callees:
 *     RtlConvertSidToUnicodeString @ 0x180044360 (RtlConvertSidToUnicodeString.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwQueryInformationToken @ 0x1800A5720 (ZwQueryInformationToken.c)
 *     ZwOpenProcessTokenEx @ 0x1800A5900 (ZwOpenProcessTokenEx.c)
 */

int __fastcall sub_1800DB244(unsigned __int16 *a1)
{
  int result; // eax
  int InformationToken; // edi
  unsigned __int64 v4; // rcx
  __int64 v5; // rax
  unsigned __int16 v6; // cx
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-31h] BYREF
  PSID Sid; // [rsp+58h] [rbp-19h]

  result = ZwOpenProcessTokenEx();
  if ( result >= 0 )
  {
    InformationToken = ZwQueryInformationToken();
    ZwClose();
    if ( InformationToken >= 0 )
    {
      v4 = *a1;
      UnicodeString.MaximumLength = a1[1] - v4;
      v5 = *((_QWORD *)a1 + 1);
      UnicodeString.Length = 0;
      UnicodeString.Buffer = (wchar_t *)(v5 + 2 * (v4 >> 1));
      result = RtlConvertSidToUnicodeString(&UnicodeString, Sid, 0);
      if ( result >= 0 )
      {
        v6 = UnicodeString.Length + *a1;
        if ( v6 < *a1 )
        {
          *a1 = -1;
          return -1073741789;
        }
        else
        {
          *a1 = v6;
        }
      }
    }
    else
    {
      return InformationToken;
    }
  }
  return result;
}
