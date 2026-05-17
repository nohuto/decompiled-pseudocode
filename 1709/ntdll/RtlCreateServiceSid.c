/*
 * XREFs of RtlCreateServiceSid @ 0x180057990
 * Callers:
 *     RtlAppxIsFileOwnedByTrustedInstaller @ 0x1800CF020 (RtlAppxIsFileOwnedByTrustedInstaller.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x18004F9F0 (RtlFreeAnsiString.c)
 *     RtlUpcaseUnicodeString @ 0x1800508F0 (RtlUpcaseUnicodeString.c)
 *     RtlInitializeSid @ 0x180057700 (RtlInitializeSid.c)
 *     A_SHAFinal @ 0x180057AB0 (A_SHAFinal.c)
 *     A_SHAUpdate @ 0x180058920 (A_SHAUpdate.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlCreateServiceSid(unsigned __int16 *a1, _DWORD *a2, _DWORD *a3)
{
  bool v4; // cf
  __int64 result; // rax
  int v6; // eax
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-39h] BYREF
  _BYTE v8[64]; // [rsp+30h] [rbp-29h] BYREF
  int v9; // [rsp+70h] [rbp+17h]
  int v10; // [rsp+74h] [rbp+1Bh]
  int v11; // [rsp+78h] [rbp+1Fh]
  int v12; // [rsp+7Ch] [rbp+23h]
  int v13; // [rsp+80h] [rbp+27h]
  int v14; // [rsp+84h] [rbp+2Bh]
  int v15; // [rsp+88h] [rbp+2Fh]
  int v16; // [rsp+90h] [rbp+37h]
  int v17; // [rsp+94h] [rbp+3Bh]
  int v18; // [rsp+98h] [rbp+3Fh]
  int v19; // [rsp+9Ch] [rbp+43h]
  int v20; // [rsp+A0h] [rbp+47h]

  if ( !a1 || !a3 )
    return 3221225485LL;
  v4 = *a3 < 0x20u;
  *a3 = 32;
  if ( v4 )
    return 3221225507LL;
  result = RtlUpcaseUnicodeString((__int64)&UnicodeString, a1, 1);
  if ( (int)result >= 0 )
  {
    v14 = 0;
    v15 = 0;
    v9 = 1732584193;
    v10 = -271733879;
    v11 = -1732584194;
    v12 = 271733878;
    v13 = -1009589776;
    A_SHAUpdate(v8, UnicodeString.Buffer, UnicodeString.Length);
    A_SHAFinal(v8);
    RtlFreeAnsiString(&UnicodeString);
    RtlInitializeSid((__int64)a2, (__int64)&RtlpNtAuthority, 6u);
    v6 = v16;
    a2[2] = 80;
    a2[3] = v6;
    a2[4] = v17;
    a2[5] = v18;
    a2[6] = v19;
    a2[7] = v20;
    return 0LL;
  }
  return result;
}
