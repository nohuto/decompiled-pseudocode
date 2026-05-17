/*
 * XREFs of RtlCreateVirtualAccountSid @ 0x18005B1C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeAnsiString @ 0x18004F9F0 (RtlFreeAnsiString.c)
 *     RtlUpcaseUnicodeString @ 0x1800508F0 (RtlUpcaseUnicodeString.c)
 *     RtlInitializeSid @ 0x180057700 (RtlInitializeSid.c)
 *     A_SHAFinal @ 0x180057AB0 (A_SHAFinal.c)
 *     A_SHAUpdate @ 0x180058920 (A_SHAUpdate.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlCreateVirtualAccountSid(unsigned __int16 *a1, int a2, _DWORD *a3, _DWORD *a4)
{
  bool v6; // cf
  __int64 result; // rax
  int v8; // eax
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-49h] BYREF
  _DWORD v10[24]; // [rsp+30h] [rbp-39h] BYREF
  _DWORD v11[6]; // [rsp+90h] [rbp+27h] BYREF

  if ( !a1 || !a4 || (unsigned int)(a2 - 80) > 0x1F )
    return 3221225485LL;
  v6 = *a4 < 0x20u;
  *a4 = 32;
  if ( v6 )
    return 3221225507LL;
  result = RtlUpcaseUnicodeString((__int64)&UnicodeString, a1, 1);
  if ( (int)result >= 0 )
  {
    v10[21] = 0;
    v10[22] = 0;
    v10[16] = 1732584193;
    v10[17] = -271733879;
    v10[18] = -1732584194;
    v10[19] = 271733878;
    v10[20] = -1009589776;
    A_SHAUpdate((__int64)v10, (char *)UnicodeString.Buffer, UnicodeString.Length);
    A_SHAFinal(v10, (__int64)v11);
    RtlFreeAnsiString(&UnicodeString);
    RtlInitializeSid((__int64)a3, (__int64)&RtlpNtAuthority, 6u);
    v8 = v11[0];
    a3[2] = a2;
    a3[3] = v8;
    a3[4] = v11[1];
    a3[5] = v11[2];
    a3[6] = v11[3];
    a3[7] = v11[4];
    return 0LL;
  }
  return result;
}
