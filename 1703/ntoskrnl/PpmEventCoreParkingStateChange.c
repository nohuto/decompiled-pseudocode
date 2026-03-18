/*
 * XREFs of PpmEventCoreParkingStateChange @ 0x14023565C
 * Callers:
 *     PpmParkReportParkedCore @ 0x140237AB0 (PpmParkReportParkedCore.c)
 *     PpmParkReportUnparkedCore @ 0x140237B34 (PpmParkReportUnparkedCore.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

char __fastcall PpmEventCoreParkingStateChange(__int64 a1, char a2)
{
  _UNKNOWN **v2; // rax
  REGHANDLE v5; // rbx
  bool v6; // zf
  const EVENT_DESCRIPTOR *v7; // rdx
  const EVENT_DESCRIPTOR *v8; // rdx
  __int16 v10; // [rsp+48h] [rbp+7h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+Fh] BYREF
  __int16 *v12; // [rsp+60h] [rbp+1Fh]
  int v13; // [rsp+68h] [rbp+27h]
  int v14; // [rsp+6Ch] [rbp+2Bh]
  __int64 v15; // [rsp+70h] [rbp+2Fh]
  int v16; // [rsp+78h] [rbp+37h]
  int v17; // [rsp+7Ch] [rbp+3Bh]
  _UNKNOWN *retaddr; // [rsp+A0h] [rbp+5Fh] BYREF

  v2 = &retaddr;
  if ( PpmEtwRegistered )
  {
    v5 = PpmEtwHandle;
    v6 = a2 == 0;
    v7 = (const EVENT_DESCRIPTOR *)&PPM_ETW_PARK_CORE;
    if ( v6 )
      v7 = &PPM_ETW_UNPARK_CORE;
    LOBYTE(v2) = EtwEventEnabled(PpmEtwHandle, v7);
    if ( (_BYTE)v2 )
    {
      UserData.Reserved = 0;
      v14 = 0;
      v8 = (const EVENT_DESCRIPTOR *)&PPM_ETW_PARK_CORE;
      v17 = 0;
      UserData.Ptr = (ULONGLONG)&PpmCheckTime;
      v10 = *(unsigned __int8 *)(a1 + 208);
      v12 = &v10;
      v15 = a1 + 209;
      UserData.Size = 8;
      v13 = 2;
      v16 = 1;
      if ( !a2 )
        v8 = &PPM_ETW_UNPARK_CORE;
      LOBYTE(v2) = EtwWriteEx(v5, v8, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
  }
  return (char)v2;
}
