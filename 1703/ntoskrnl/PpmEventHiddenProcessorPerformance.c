/*
 * XREFs of PpmEventHiddenProcessorPerformance @ 0x14041DA74
 * Callers:
 *     PpmEventTraceProcessorPerformance @ 0x1406D3F34 (PpmEventTraceProcessorPerformance.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

char __fastcall PpmEventHiddenProcessorPerformance(__int64 a1, int a2, int a3, int a4)
{
  _UNKNOWN **v4; // rax
  REGHANDLE v6; // rbx
  __int16 v7; // ax
  __int16 v9; // [rsp+38h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-29h] BYREF
  __int64 v11; // [rsp+58h] [rbp-19h]
  int v12; // [rsp+60h] [rbp-11h]
  int v13; // [rsp+64h] [rbp-Dh]
  int *v14; // [rsp+68h] [rbp-9h]
  int v15; // [rsp+70h] [rbp-1h]
  int v16; // [rsp+74h] [rbp+3h]
  int *v17; // [rsp+78h] [rbp+7h]
  int v18; // [rsp+80h] [rbp+Fh]
  int v19; // [rsp+84h] [rbp+13h]
  int *v20; // [rsp+88h] [rbp+17h]
  int v21; // [rsp+90h] [rbp+1Fh]
  int v22; // [rsp+94h] [rbp+23h]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+5Fh] BYREF
  int v24; // [rsp+E0h] [rbp+6Fh] BYREF
  int v25; // [rsp+E8h] [rbp+77h] BYREF
  int v26; // [rsp+F0h] [rbp+7Fh] BYREF

  v4 = &retaddr;
  v26 = a4;
  v25 = a3;
  v24 = a2;
  if ( PpmEtwRegistered )
  {
    v6 = PpmEtwHandle;
    LOBYTE(v4) = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_HIDDEN_PROCESSOR_CURRENT_PERF_RUNDOWN);
    if ( (_BYTE)v4 )
    {
      v7 = *(unsigned __int8 *)(a1 + 208);
      UserData.Reserved = 0;
      v13 = 0;
      v16 = 0;
      v19 = 0;
      v22 = 0;
      v9 = v7;
      UserData.Ptr = (ULONGLONG)&v9;
      v11 = a1 + 209;
      v14 = &v24;
      v17 = &v25;
      v20 = &v26;
      v15 = 4;
      v18 = 4;
      v21 = 4;
      UserData.Size = 2;
      v12 = 1;
      LOBYTE(v4) = EtwWrite(v6, &PPM_ETW_HIDDEN_PROCESSOR_CURRENT_PERF_RUNDOWN, 0LL, 5u, &UserData);
    }
  }
  return (char)v4;
}
