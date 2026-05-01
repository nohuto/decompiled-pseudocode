/*
 * XREFs of CrmLogRegistrationUpdate @ 0x180005954
 * Callers:
 *     CrmRegistrationUpdate @ 0x180005820 (CrmRegistrationUpdate.c)
 *     CrmGlobalsSubscriberRundownHelper @ 0x180034F08 (CrmGlobalsSubscriberRundownHelper.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

char __fastcall CrmLogRegistrationUpdate(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        int a9)
{
  int v12; // r11d
  BOOL v13; // ecx
  int v14; // eax
  int v15; // r9d
  int v16; // r10d
  int v17; // r11d
  bool v19; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v20[3]; // [rsp+39h] [rbp-CFh] BYREF
  int v21; // [rsp+3Ch] [rbp-CCh] BYREF
  int v22; // [rsp+40h] [rbp-C8h] BYREF
  int v23; // [rsp+44h] [rbp-C4h] BYREF
  int v24; // [rsp+48h] [rbp-C0h] BYREF
  int v25; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v26; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v27[2]; // [rsp+58h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-A0h] BYREF
  int *v29; // [rsp+88h] [rbp-80h]
  __int64 v30; // [rsp+90h] [rbp-78h]
  int *v31; // [rsp+98h] [rbp-70h]
  __int64 v32; // [rsp+A0h] [rbp-68h]
  bool *v33; // [rsp+A8h] [rbp-60h]
  __int64 v34; // [rsp+B0h] [rbp-58h]
  bool *v35; // [rsp+B8h] [rbp-50h]
  __int64 v36; // [rsp+C0h] [rbp-48h]
  int *v37; // [rsp+C8h] [rbp-40h]
  __int64 v38; // [rsp+D0h] [rbp-38h]
  int *v39; // [rsp+D8h] [rbp-30h]
  __int64 v40; // [rsp+E0h] [rbp-28h]
  int *v41; // [rsp+E8h] [rbp-20h]
  __int64 v42; // [rsp+F0h] [rbp-18h]
  __int64 *v43; // [rsp+F8h] [rbp-10h]
  __int64 v44; // [rsp+100h] [rbp-8h]
  __int64 *v45; // [rsp+108h] [rbp+0h]
  __int64 v46; // [rsp+110h] [rbp+8h]

  v12 = *((_DWORD *)&unk_18006F4D4 + 66 * a1);
  v13 = a5 != a6 && (a6 == v12 || a5 == v12);
  v14 = a1 > 3;
  if ( ((a9 | v13) & v14) != 0 )
  {
    if ( dword_180092130 > 5u )
    {
      LOBYTE(v14) = TlgKeywordOn((TraceLoggingHProvider)&dword_180092130, 0x400000000000uLL);
      if ( (_BYTE)v14 )
      {
        v31 = &v22;
        v26 = a7;
        v19 = a3 != 0;
        v33 = &v19;
        v27[0] = a8;
        v35 = v20;
        v29 = &v21;
        v37 = &v23;
        v21 = a1;
        v39 = &v24;
        v20[0] = v15 != 0;
        v22 = a2;
        v41 = &v25;
        v45 = v27;
        v23 = v17;
        v24 = v16;
        v25 = a6;
        v30 = 4LL;
        v32 = 4LL;
        v34 = 1LL;
        v36 = 1LL;
        v38 = 4LL;
        v40 = 4LL;
        v42 = 4LL;
        v43 = &v26;
        v44 = 8LL;
        v46 = 8LL;
        LOBYTE(v14) = TlgWrite((TraceLoggingHProvider)&dword_180092130, &unk_18008428E, 0LL, 0LL, 0xBu, &pData);
      }
    }
  }
  else if ( dword_180092130 > 5u )
  {
    v31 = &v24;
    v27[0] = a7;
    v20[0] = a3 != 0;
    v33 = v20;
    v26 = a8;
    v35 = &v19;
    v29 = &v25;
    v37 = &v23;
    v25 = a1;
    v39 = &v22;
    v19 = a4 != 0;
    v24 = a2;
    v41 = &v21;
    v45 = &v26;
    v23 = v12;
    v22 = a5;
    v21 = a6;
    v30 = 4LL;
    v32 = 4LL;
    v34 = 1LL;
    v36 = 1LL;
    v38 = 4LL;
    v40 = 4LL;
    v42 = 4LL;
    v43 = v27;
    v44 = 8LL;
    v46 = 8LL;
    LOBYTE(v14) = TlgWrite((TraceLoggingHProvider)&dword_180092130, &unk_1800841EE, 0LL, 0LL, 0xBu, &pData);
  }
  return v14;
}
