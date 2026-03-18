/*
 * XREFs of ?TraceLoggingTouchInjection@@YAXHHHK@Z @ 0x1C0197CD0
 * Callers:
 *     NtUserInitializeTouchInjection @ 0x1C01DC140 (NtUserInitializeTouchInjection.c)
 *     NtUserInjectTouchInput @ 0x1C01DC4A0 (NtUserInjectTouchInput.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00BA104 (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x1C00BADD4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

void __fastcall TraceLoggingTouchInjection(int a1, int a2, int a3)
{
  LPCGUID v3; // r9
  LPCGUID v4; // r8
  LPCGUID v5; // r9
  LPCGUID v6; // r8
  _DWORD v7[4]; // [rsp+30h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-9h] BYREF
  int *v10; // [rsp+70h] [rbp+7h]
  __int64 v11; // [rsp+78h] [rbp+Fh]
  int *v12; // [rsp+80h] [rbp+17h]
  __int64 v13; // [rsp+88h] [rbp+1Fh]
  _DWORD *v14; // [rsp+90h] [rbp+27h]
  __int64 v15; // [rsp+98h] [rbp+2Fh]
  int v16; // [rsp+D8h] [rbp+6Fh] BYREF
  int v17; // [rsp+E0h] [rbp+77h] BYREF

  v17 = a3;
  v16 = a2;
  if ( a1 == 1 )
  {
    if ( dword_1C0324850 > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C0324850, 0x200000000000uLL) )
      {
        TlgCreateSz(&pDesc, "InjectTouchInput");
        v11 = 4LL;
        v10 = &v16;
        v12 = &v17;
        v14 = v7;
        v13 = 4LL;
        v7[0] = (_DWORD)v3;
        v15 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1C0324850, &unk_1C02EB13B, v4, v3, 6u, &pData);
      }
    }
  }
  else if ( dword_1C0324850 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0324850, 0x200000000000uLL) )
  {
    TlgCreateSz(&pDesc, "InitializeTouchInjection");
    v11 = 4LL;
    v10 = &v16;
    v12 = &v17;
    v14 = v7;
    v13 = 4LL;
    v7[0] = (_DWORD)v5;
    v15 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C0324850, &unk_1C02EB13B, v6, v5, 6u, &pData);
  }
}
