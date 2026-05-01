/*
 * XREFs of CrmLogStateMonitorStateSet @ 0x180005620
 * Callers:
 *     CrmStateMonitorStateSet @ 0x180005574 (CrmStateMonitorStateSet.c)
 * Callees:
 *     CrmStateMonitorStateSizeGet @ 0x1800057E0 (CrmStateMonitorStateSizeGet.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

char __fastcall CrmLogStateMonitorStateSet(_DWORD *a1, unsigned __int64 a2)
{
  _DWORD *v2; // r10
  _BOOL8 v3; // r8
  unsigned __int16 v4; // ax
  int v5; // r9d
  __int64 v6; // r10
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // r10
  unsigned __int16 v10; // r11
  int v12; // [rsp+30h] [rbp-69h] BYREF
  __int64 v13; // [rsp+38h] [rbp-61h] BYREF
  _QWORD v14[2]; // [rsp+40h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-49h] BYREF
  int *v16; // [rsp+70h] [rbp-29h]
  __int64 v17; // [rsp+78h] [rbp-21h]
  int *v18; // [rsp+80h] [rbp-19h]
  __int64 v19; // [rsp+88h] [rbp-11h]
  __int64 v20; // [rsp+90h] [rbp-9h]
  int v21; // [rsp+98h] [rbp-1h] BYREF
  int v22; // [rsp+9Ch] [rbp+3h]
  __int64 *v23; // [rsp+A0h] [rbp+7h]
  __int64 v24; // [rsp+A8h] [rbp+Fh]
  int *v25; // [rsp+B0h] [rbp+17h]
  __int64 v26; // [rsp+B8h] [rbp+1Fh]
  __int64 v27; // [rsp+C0h] [rbp+27h]
  int v28; // [rsp+C8h] [rbp+2Fh] BYREF
  int v29; // [rsp+CCh] [rbp+33h]
  __int64 *v30; // [rsp+D0h] [rbp+37h]
  __int64 v31; // [rsp+D8h] [rbp+3Fh]

  v2 = (_DWORD *)a2;
  v3 = *a1 > 1;
  if ( *a1 == 4 )
  {
    a2 = *(_DWORD *)a2 / 0x14u;
    v3 = *v2 == 20 * (_DWORD)a2;
  }
  v4 = CrmStateMonitorStateSizeGet((unsigned int)*a1, a2, v3);
  if ( v7 )
  {
    if ( dword_180092130 > 5u )
    {
      LOBYTE(v4) = TlgKeywordOn((TraceLoggingHProvider)&dword_180092130, 0x400000000000uLL);
      if ( (_BYTE)v4 )
      {
        v13 = *(_QWORD *)(v9 + 32);
        v14[0] = *(_QWORD *)(v9 + 24);
        v16 = &v12;
        v18 = &v21;
        v20 = v9 + 12;
        v21 = v10;
        v28 = v10;
        v30 = v14;
        v12 = v8;
        v17 = 4LL;
        v19 = 2LL;
        v22 = 0;
        v23 = &v13;
        v24 = 8LL;
        v25 = &v28;
        v26 = 2LL;
        v27 = v9;
        v29 = 0;
        v31 = 8LL;
        LOBYTE(v4) = TlgWrite((TraceLoggingHProvider)&dword_180092130, &unk_180083F21, 0LL, 0LL, 9u, &pData);
      }
    }
  }
  else if ( dword_180092130 > 5u )
  {
    v14[0] = *(_QWORD *)(v6 + 32);
    v13 = *(_QWORD *)(v6 + 24);
    v16 = &v12;
    v18 = &v21;
    v20 = v6 + 12;
    v21 = v4;
    v28 = v4;
    v30 = &v13;
    v12 = v5;
    v17 = 4LL;
    v19 = 2LL;
    v22 = 0;
    v23 = v14;
    v24 = 8LL;
    v25 = &v28;
    v26 = 2LL;
    v27 = v6;
    v29 = 0;
    v31 = 8LL;
    LOBYTE(v4) = TlgWrite((TraceLoggingHProvider)&dword_180092130, &unk_18008418F, 0LL, 0LL, 9u, &pData);
  }
  return v4;
}
