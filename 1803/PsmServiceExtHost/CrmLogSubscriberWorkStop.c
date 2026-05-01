/*
 * XREFs of CrmLogSubscriberWorkStop @ 0x18006A19C
 * Callers:
 *     CrmRpcSrvWorkStop @ 0x18006E370 (CrmRpcSrvWorkStop.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

char __fastcall CrmLogSubscriberWorkStop(__int64 a1)
{
  __int64 v1; // rax
  int v2; // r10d
  __int64 v3; // r9
  int v4; // r10d
  __int64 v5; // rax
  __int64 v6; // rax
  int v8; // [rsp+30h] [rbp-9h] BYREF
  __int64 v9; // [rsp+38h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp+7h] BYREF
  __int64 *v11; // [rsp+60h] [rbp+27h]
  int v12; // [rsp+68h] [rbp+2Fh]
  int v13; // [rsp+6Ch] [rbp+33h]
  int *v14; // [rsp+70h] [rbp+37h]
  int v15; // [rsp+78h] [rbp+3Fh]
  int v16; // [rsp+7Ch] [rbp+43h]

  v1 = *(_QWORD *)(a1 + 64);
  v2 = *(_DWORD *)(v1 + 8);
  if ( v2 <= 15 )
  {
    if ( (unsigned int)dword_180092130 > 5 )
    {
      v6 = *(_QWORD *)(a1 + 32);
      v13 = 0;
      v16 = 0;
      v9 = v6;
      v11 = &v9;
      v14 = &v8;
      v15 = 4;
      v8 = v2;
      v12 = 8;
      LOBYTE(v1) = TlgWrite((TraceLoggingHProvider)&dword_180092130, &unk_180083D31, 0LL, 0LL, 4u, &pData);
    }
  }
  else if ( (unsigned int)dword_180092130 > 5 )
  {
    LOBYTE(v1) = TlgKeywordOn((TraceLoggingHProvider)&dword_180092130, 0x400000000000uLL);
    if ( (_BYTE)v1 )
    {
      v5 = *(_QWORD *)(v3 + 32);
      v13 = 0;
      v16 = 0;
      v9 = v5;
      v11 = &v9;
      v14 = &v8;
      v15 = 4;
      v8 = v4;
      v12 = 8;
      LOBYTE(v1) = TlgWrite((TraceLoggingHProvider)&dword_180092130, &unk_180083E69, 0LL, 0LL, 4u, &pData);
    }
  }
  return v1;
}
