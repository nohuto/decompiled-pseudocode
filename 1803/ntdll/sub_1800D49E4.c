/*
 * XREFs of sub_1800D49E4 @ 0x1800D49E4
 * Callers:
 *     sub_1800D48E4 @ 0x1800D48E4 (sub_1800D48E4.c)
 * Callees:
 *     RtlConvertSidToUnicodeString @ 0x180036C30 (RtlConvertSidToUnicodeString.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwQueryInformationToken @ 0x18009AEE0 (ZwQueryInformationToken.c)
 *     ZwOpenProcessTokenEx @ 0x18009B0C0 (ZwOpenProcessTokenEx.c)
 */

NTSTATUS __fastcall sub_1800D49E4(__int16 *a1)
{
  NTSTATUS result; // eax
  NTSTATUS v3; // edi
  unsigned __int64 v4; // rcx
  __int64 v5; // rax
  unsigned __int16 v6; // dx
  unsigned __int16 v7; // cx
  __int16 v8; // r8
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
      v4 = (unsigned __int16)*a1;
      UnicodeString.MaximumLength = a1[1] - v4;
      v5 = *((_QWORD *)a1 + 1);
      UnicodeString.Length = 0;
      UnicodeString.Buffer = (PWCH)(v5 + 2 * (v4 >> 1));
      result = RtlConvertSidToUnicodeString(&UnicodeString, TokenInformation[0], 0);
      if ( result >= 0 )
      {
        v6 = *a1;
        v7 = UnicodeString.Length + *a1;
        if ( (unsigned __int16)(UnicodeString.Length + v6) < v6 )
          v8 = -1;
        else
          v8 = UnicodeString.Length + *a1;
        *a1 = v8;
        if ( v7 < v6 )
          return -1073741789;
      }
    }
    else
    {
      return v3;
    }
  }
  return result;
}
