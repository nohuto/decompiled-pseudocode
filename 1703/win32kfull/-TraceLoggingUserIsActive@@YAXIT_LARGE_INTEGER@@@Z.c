/*
 * XREFs of ?TraceLoggingUserIsActive@@YAXIT_LARGE_INTEGER@@@Z @ 0x1C00BA140
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00BADD4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingUserIsActive(int a1, union _LARGE_INTEGER a2)
{
  const GUID *v2; // r8
  const GUID *v3; // r9
  int v4; // [rsp+30h] [rbp-39h] BYREF
  int v5; // [rsp+34h] [rbp-35h] BYREF
  union _LARGE_INTEGER v6; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  union _LARGE_INTEGER *v8; // [rsp+60h] [rbp-9h]
  __int64 v9; // [rsp+68h] [rbp-1h]
  int *v10; // [rsp+70h] [rbp+7h]
  __int64 v11; // [rsp+78h] [rbp+Fh]
  int *v12; // [rsp+80h] [rbp+17h]
  __int64 v13; // [rsp+88h] [rbp+1Fh]
  int *v14; // [rsp+90h] [rbp+27h]
  __int64 v15; // [rsp+98h] [rbp+2Fh]
  int v16; // [rsp+D0h] [rbp+67h] BYREF

  v16 = a1;
  v6 = a2;
  if ( dword_1C0324850 > 5u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C0324850, 0x200000000000uLL) )
    {
      v9 = 8LL;
      v8 = &v6;
      v10 = &v16;
      v12 = &v4;
      v11 = 4LL;
      v4 = 12;
      v13 = 4LL;
      v14 = &v5;
      v5 = gSessionId;
      v15 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C0324850, &unk_1C02EB0E7, v2, v3, 6u, &pData);
    }
  }
}
