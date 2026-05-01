/*
 * XREFs of ?RmpEnforcementEmptyProcessAndLog@@YAKPEAU_RM_ACTIVITY_HOST@@PEAXKKK@Z @ 0x180059C10
 * Callers:
 *     ?RmpEnforcementEmptyProcess@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x180059B80 (-RmpEnforcementEmptyProcess@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180014DC0 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     MemUtilEmptyProcess @ 0x18006CC2C (MemUtilEmptyProcess.c)
 */

__int64 __fastcall RmpEnforcementEmptyProcessAndLog(const WCHAR *a1, void *a2, int a3, int a4)
{
  unsigned int v7; // ebx
  __int64 v8; // r11
  int v9; // r9d
  __int64 v10; // r11
  unsigned int v12; // [rsp+30h] [rbp-81h] BYREF
  int v13; // [rsp+34h] [rbp-7Dh] BYREF
  int v14; // [rsp+38h] [rbp-79h] BYREF
  int v15; // [rsp+3Ch] [rbp-75h] BYREF
  __int64 v16; // [rsp+40h] [rbp-71h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-61h] BYREF
  int *v18; // [rsp+70h] [rbp-41h]
  __int64 v19; // [rsp+78h] [rbp-39h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+80h] [rbp-31h] BYREF
  int *v21; // [rsp+90h] [rbp-21h]
  __int64 v22; // [rsp+98h] [rbp-19h]
  __int64 *v23; // [rsp+A0h] [rbp-11h]
  __int64 v24; // [rsp+A8h] [rbp-9h]
  int *v25; // [rsp+B0h] [rbp-1h]
  __int64 v26; // [rsp+B8h] [rbp+7h]
  int *v27; // [rsp+C0h] [rbp+Fh]
  __int64 v28; // [rsp+C8h] [rbp+17h]

  v7 = MemUtilEmptyProcess(a2);
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x11uLL) )
  {
    v12 = v7;
    v18 = (int *)&v12;
    v19 = v8;
    TlgCreateWsz(&pDesc, a1 + 44);
    v9 = *((_DWORD *)a1 + 156);
    v21 = &v13;
    v16 = *((_QWORD *)a1 + 4);
    v23 = &v16;
    v25 = &v14;
    v27 = &v15;
    v13 = v9;
    v22 = v10;
    v24 = (unsigned int)(v10 + 4);
    v14 = a3;
    v26 = v10;
    v15 = a4;
    v28 = v10;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007EC71, 0LL, 0LL, v10 + 4, &pData);
  }
  return v7;
}
