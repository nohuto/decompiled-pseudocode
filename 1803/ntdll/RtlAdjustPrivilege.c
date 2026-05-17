/*
 * XREFs of RtlAdjustPrivilege @ 0x18007B4A0
 * Callers:
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008A690 (RtlpVerifyAndCommitUILanguageSettings.c)
 * Callees:
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwOpenThreadToken @ 0x18009AF40 (ZwOpenThreadToken.c)
 *     ZwAdjustPrivilegesToken @ 0x18009B2E0 (ZwAdjustPrivilegesToken.c)
 *     ZwOpenProcessToken @ 0x18009CED0 (ZwOpenProcessToken.c)
 */

__int64 __fastcall RtlAdjustPrivilege(unsigned int a1, bool a2, char a3, bool *a4)
{
  __int64 result; // rax
  int v8; // edi
  _QWORD v9[2]; // [rsp+30h] [rbp-40h] BYREF
  int v10; // [rsp+48h] [rbp-28h] BYREF
  __int64 v11; // [rsp+4Ch] [rbp-24h]
  int v12; // [rsp+54h] [rbp-1Ch]
  int v13; // [rsp+58h] [rbp-18h]
  int v14; // [rsp+64h] [rbp-Ch]

  if ( a3 == 1 )
    result = ZwOpenThreadToken(-2LL, 40LL, 0LL, v9);
  else
    result = ZwOpenProcessToken(-1LL, 40LL, v9);
  if ( (int)result >= 0 )
  {
    v9[1] = a1;
    v11 = a1;
    v10 = 1;
    v12 = a2 ? 2 : 0;
    v8 = ZwAdjustPrivilegesToken(v9[0], 0LL, &v10);
    ZwClose(v9[0]);
    if ( v8 == 262 )
      v8 = -1073741727;
    if ( v8 >= 0 )
    {
      if ( v13 )
        *a4 = (v14 & 2) != 0;
      else
        *a4 = a2;
    }
    return (unsigned int)v8;
  }
  return result;
}
