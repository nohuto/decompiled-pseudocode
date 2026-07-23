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

NTSTATUS __fastcall sub_1800DB244(unsigned __int16 *a1)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // edi
  unsigned __int64 v4; // rcx
  __int64 v5; // rax
  unsigned __int16 v6; // cx
  HANDLE TokenHandle; // [rsp+38h] [rbp-39h] BYREF
  _UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-31h] BYREF
  ULONG ReturnLength; // [rsp+50h] [rbp-21h] BYREF
  PSID TokenInformation[12]; // [rsp+58h] [rbp-19h] BYREF

  TokenHandle = 0LL;
  result = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, 0x200u, &TokenHandle);
  if ( result >= 0 )
  {
    v3 = ZwQueryInformationToken(TokenHandle, 1u, TokenInformation, 0x58u, &ReturnLength);
    ZwClose(TokenHandle);
    if ( v3 >= 0 )
    {
      v4 = *a1;
      UnicodeString.MaximumLength = a1[1] - v4;
      v5 = *((_QWORD *)a1 + 1);
      UnicodeString.Length = 0;
      UnicodeString.Buffer = (PWCH)(v5 + 2 * (v4 >> 1));
      result = RtlConvertSidToUnicodeString(&UnicodeString, TokenInformation[0], 0);
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
      return v3;
    }
  }
  return result;
}
