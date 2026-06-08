/*
 * XREFs of ProcLibTracePepPerfDomain @ 0x1C00074AC
 * Callers:
 *     ProcLibTraceControlCallback @ 0x1C0023AE0 (ProcLibTraceControlCallback.c)
 *     PepQueryPerfDomainInfo @ 0x1C003363C (PepQueryPerfDomainInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0003BD0 (__security_check_cookie.c)
 */

BOOLEAN __fastcall ProcLibTracePepPerfDomain(__int64 a1, char a2)
{
  const EVENT_DESCRIPTOR *v3; // rbx
  BOOLEAN result; // al
  int v5; // eax
  int v6; // [rsp+30h] [rbp-29h] BYREF
  int v7; // [rsp+34h] [rbp-25h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-19h] BYREF
  __int64 v9; // [rsp+50h] [rbp-9h]
  int v10; // [rsp+58h] [rbp-1h]
  int v11; // [rsp+5Ch] [rbp+3h]
  int *v12; // [rsp+60h] [rbp+7h]
  int v13; // [rsp+68h] [rbp+Fh]
  int v14; // [rsp+6Ch] [rbp+13h]
  int *v15; // [rsp+70h] [rbp+17h]
  int v16; // [rsp+78h] [rbp+1Fh]
  int v17; // [rsp+7Ch] [rbp+23h]
  __int64 v18; // [rsp+80h] [rbp+27h]
  int v19; // [rsp+88h] [rbp+2Fh]
  int v20; // [rsp+8Ch] [rbp+33h]
  __int64 v21; // [rsp+90h] [rbp+37h]
  int v22; // [rsp+98h] [rbp+3Fh]
  int v23; // [rsp+9Ch] [rbp+43h]

  v3 = (const EVENT_DESCRIPTOR *)&PPM_ETW_PEP_PERF_DOMAIN_INFO;
  if ( a2 )
    v3 = &PPM_ETW_PEP_PERF_DOMAIN_INFO_RUNDOWN;
  result = EtwEventEnabled((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, v3);
  if ( result )
  {
    v5 = *(unsigned __int8 *)(a1 + 57);
    UserData.Reserved = 0;
    v11 = 0;
    v14 = 0;
    v17 = 0;
    v20 = 0;
    v23 = 0;
    v6 = v5;
    v7 = *(unsigned __int8 *)(a1 + 58);
    UserData.Ptr = a1 + 36;
    v9 = a1 + 56;
    v12 = &v6;
    v15 = &v7;
    v18 = a1 + 60;
    v21 = a1 + 64;
    UserData.Size = 4;
    v13 = 4;
    v16 = 4;
    v19 = 4;
    v22 = 4;
    v10 = 1;
    return EtwWrite((REGHANDLE)WPP_MAIN_CB.Queue.ListEntry.Blink, v3, 0LL, 6u, &UserData);
  }
  return result;
}
