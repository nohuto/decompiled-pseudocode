/*
 * XREFs of CrmLogStateMonitorStop @ 0x18006A440
 * Callers:
 *     CrmStateMonitorCleanup @ 0x18006A644 (CrmStateMonitorCleanup.c)
 * Callees:
 *     CrmStateMonitorStateSizeGet @ 0x1800057E0 (CrmStateMonitorStateSizeGet.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

char __fastcall CrmLogStateMonitorStop(int *a1)
{
  unsigned __int16 v1; // ax
  int v2; // r9d
  __int64 v3; // r10
  __int64 v4; // rbx
  int v5; // r9d
  __int64 v6; // r10
  unsigned __int16 v7; // r11
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v11; // [rsp+30h] [rbp-D0h] BYREF
  int v12; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v13; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v14; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v16; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  int *v18; // [rsp+80h] [rbp-80h]
  __int64 v19; // [rsp+88h] [rbp-78h]
  _DWORD *v20; // [rsp+90h] [rbp-70h]
  __int64 v21; // [rsp+98h] [rbp-68h]
  __int64 v22; // [rsp+A0h] [rbp-60h]
  _DWORD v23[2]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 *v24; // [rsp+B0h] [rbp-50h]
  __int64 v25; // [rsp+B8h] [rbp-48h]
  _DWORD *v26; // [rsp+C0h] [rbp-40h]
  __int64 v27; // [rsp+C8h] [rbp-38h]
  __int64 v28; // [rsp+D0h] [rbp-30h]
  _DWORD v29[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 *v30; // [rsp+E0h] [rbp-20h]
  __int64 v31; // [rsp+E8h] [rbp-18h]
  EVENT_DATA_DESCRIPTOR v32; // [rsp+F0h] [rbp-10h] BYREF
  int *v33; // [rsp+110h] [rbp+10h]
  __int64 v34; // [rsp+118h] [rbp+18h]
  _DWORD *v35; // [rsp+120h] [rbp+20h]
  __int64 v36; // [rsp+128h] [rbp+28h]
  __int64 v37; // [rsp+130h] [rbp+30h]
  _DWORD v38[2]; // [rsp+138h] [rbp+38h] BYREF
  __int64 *v39; // [rsp+140h] [rbp+40h]
  __int64 v40; // [rsp+148h] [rbp+48h]
  _DWORD *v41; // [rsp+150h] [rbp+50h]
  __int64 v42; // [rsp+158h] [rbp+58h]
  __int64 v43; // [rsp+160h] [rbp+60h]
  _DWORD v44[2]; // [rsp+168h] [rbp+68h] BYREF
  __int64 *v45; // [rsp+170h] [rbp+70h]
  __int64 v46; // [rsp+178h] [rbp+78h]

  v1 = CrmStateMonitorStateSizeGet(*a1);
  v4 = MEMORY[0x7FFE0008];
  if ( v2 <= 1 )
  {
    if ( (unsigned int)dword_180092130 > 5 )
    {
      v9 = *(_QWORD *)(v3 + 40);
      v15 = *(_QWORD *)(v3 + 48);
      v33 = &v12;
      v35 = v38;
      v38[0] = v1;
      v44[0] = v1;
      v12 = v2;
      v45 = &v16;
      v16 = MEMORY[0x7FFE0008];
      v34 = 4LL;
      v36 = 2LL;
      v37 = v9;
      v38[1] = 0;
      v39 = &v15;
      v40 = 8LL;
      v41 = v44;
      v42 = 2LL;
      v43 = v9;
      v44[1] = 0;
      v46 = 8LL;
      LOBYTE(v1) = TlgWrite((TraceLoggingHProvider)&dword_180092130, &unk_180083FC0, 0LL, 0LL, 9u, &v32);
    }
  }
  else if ( (unsigned int)dword_180092130 > 5 )
  {
    LOBYTE(v1) = TlgKeywordOn((TraceLoggingHProvider)&dword_180092130, 0x400000000000uLL);
    if ( (_BYTE)v1 )
    {
      v8 = *(_QWORD *)(v6 + 40);
      v13 = *(_QWORD *)(v6 + 48);
      v18 = &v11;
      v20 = v23;
      v23[0] = v7;
      v29[0] = v7;
      v11 = v5;
      v30 = &v14;
      v14 = v4;
      v19 = 4LL;
      v21 = 2LL;
      v22 = v8;
      v23[1] = 0;
      v24 = &v13;
      v25 = 8LL;
      v26 = v29;
      v27 = 2LL;
      v28 = v8;
      v29[1] = 0;
      v31 = 8LL;
      LOBYTE(v1) = TlgWrite((TraceLoggingHProvider)&dword_180092130, &unk_1800840E1, 0LL, 0LL, 9u, &pData);
    }
  }
  return v1;
}
