/*
 * XREFs of CrmLogStateMonitorRundown @ 0x180034E60
 * Callers:
 *     CrmGlobalsRundown @ 0x180034D70 (CrmGlobalsRundown.c)
 * Callees:
 *     CrmStateMonitorLogDataGet @ 0x180005764 (CrmStateMonitorLogDataGet.c)
 *     CrmStateMonitorStateSizeGet @ 0x1800057E0 (CrmStateMonitorStateSizeGet.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

char __fastcall CrmLogStateMonitorRundown(__int64 a1)
{
  unsigned __int16 v2; // ax
  int v3; // r9d
  int v4; // r9d
  unsigned __int16 v5; // r10
  __int64 v7; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v8; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v9; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v10; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v11[12]; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v12; // [rsp+68h] [rbp-A0h]
  __int64 v13; // [rsp+70h] [rbp-98h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-90h] BYREF
  __int64 *v15; // [rsp+98h] [rbp-70h]
  __int64 v16; // [rsp+A0h] [rbp-68h]
  int *v17; // [rsp+A8h] [rbp-60h]
  __int64 v18; // [rsp+B0h] [rbp-58h]
  _BYTE *v19; // [rsp+B8h] [rbp-50h]
  int v20; // [rsp+C0h] [rbp-48h] BYREF
  int v21; // [rsp+C4h] [rbp-44h]
  __int64 *v22; // [rsp+C8h] [rbp-40h]
  __int64 v23; // [rsp+D0h] [rbp-38h]
  int *v24; // [rsp+D8h] [rbp-30h]
  __int64 v25; // [rsp+E0h] [rbp-28h]
  __int64 *v26; // [rsp+E8h] [rbp-20h]
  int v27; // [rsp+F0h] [rbp-18h] BYREF
  int v28; // [rsp+F4h] [rbp-14h]
  __int64 *v29; // [rsp+F8h] [rbp-10h]
  __int64 v30; // [rsp+100h] [rbp-8h]

  RtlAcquireSRWLockExclusive(a1 + 8);
  *(_DWORD *)(a1 + 16) = GetCurrentThreadId();
  CrmStateMonitorLogDataGet((const void **)a1, &v10, 0LL);
  *(_DWORD *)(a1 + 16) = 0;
  RtlReleaseSRWLockExclusive(a1 + 8);
  v2 = CrmStateMonitorStateSizeGet(*(_DWORD *)a1);
  if ( v3 <= 1 )
  {
    if ( dword_180092130 > 5u )
    {
      v9 = v13;
      v8 = v12;
      v15 = &v7;
      v17 = &v20;
      v19 = v11;
      v20 = v2;
      v27 = v2;
      v29 = &v8;
      LODWORD(v7) = v3;
      v16 = 4LL;
      v18 = 2LL;
      v21 = 0;
      v22 = &v9;
      v23 = 8LL;
      v24 = &v27;
      v25 = 2LL;
      v26 = &v10;
      v28 = 0;
      v30 = 8LL;
      LOBYTE(v2) = TlgWrite((TraceLoggingHProvider)&dword_180092130, &unk_18008407E, 0LL, 0LL, 9u, &pData);
    }
  }
  else if ( dword_180092130 > 5u )
  {
    LOBYTE(v2) = TlgKeywordOn((TraceLoggingHProvider)&dword_180092130, 0x400000000000uLL);
    if ( (_BYTE)v2 )
    {
      v8 = v13;
      v9 = v12;
      v15 = &v7;
      v17 = &v20;
      v19 = v11;
      v20 = v5;
      v27 = v5;
      v29 = &v9;
      LODWORD(v7) = v4;
      v16 = 4LL;
      v18 = 2LL;
      v21 = 0;
      v22 = &v8;
      v23 = 8LL;
      v24 = &v27;
      v25 = 2LL;
      v26 = &v10;
      v28 = 0;
      v30 = 8LL;
      LOBYTE(v2) = TlgWrite((TraceLoggingHProvider)&dword_180092130, &unk_18008401B, 0LL, 0LL, 9u, &pData);
    }
  }
  return v2;
}
