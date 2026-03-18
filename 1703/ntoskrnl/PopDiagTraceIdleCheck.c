/*
 * XREFs of PopDiagTraceIdleCheck @ 0x140071288
 * Callers:
 *     PopCheckForIdleness @ 0x140070D60 (PopCheckForIdleness.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceIdleCheck(__int64 a1, int a2, int a3)
{
  _UNKNOWN **v3; // rax
  REGHANDLE v4; // rbx
  int v6; // [rsp+48h] [rbp-59h] BYREF
  int v7; // [rsp+50h] [rbp-51h] BYREF
  BOOL v8; // [rsp+54h] [rbp-4Dh] BYREF
  BOOL v9; // [rsp+58h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-39h] BYREF
  int *v11; // [rsp+78h] [rbp-29h]
  __int64 v12; // [rsp+80h] [rbp-21h]
  int *v13; // [rsp+88h] [rbp-19h]
  __int64 v14; // [rsp+90h] [rbp-11h]
  int *v15; // [rsp+98h] [rbp-9h]
  __int64 v16; // [rsp+A0h] [rbp-1h]
  int *v17; // [rsp+A8h] [rbp+7h]
  __int64 v18; // [rsp+B0h] [rbp+Fh]
  BOOL *v19; // [rsp+B8h] [rbp+17h]
  __int64 v20; // [rsp+C0h] [rbp+1Fh]
  BOOL *v21; // [rsp+C8h] [rbp+27h]
  __int64 v22; // [rsp+D0h] [rbp+2Fh]
  _UNKNOWN *retaddr; // [rsp+100h] [rbp+5Fh] BYREF
  int v24; // [rsp+110h] [rbp+6Fh] BYREF
  int v25; // [rsp+118h] [rbp+77h] BYREF

  v3 = &retaddr;
  v25 = a3;
  v24 = a2;
  v6 = 0;
  if ( PopDiagHandleRegistered )
  {
    v4 = PopDiagHandle;
    LOBYTE(v3) = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_IDLE_CHECK);
    if ( (_BYTE)v3 )
    {
      v7 = 0;
      *(_QWORD *)&UserData.Size = 4LL;
      v8 = dword_14034B0A8 >= (unsigned int)dword_14034B0AC;
      v12 = 4LL;
      v9 = dword_14033B6D0 != 0;
      v14 = 4LL;
      UserData.Ptr = (ULONGLONG)&v6;
      v16 = 4LL;
      v11 = &v24;
      v13 = &v25;
      v15 = &dword_14034B0A8;
      v17 = &v7;
      v19 = &v8;
      v21 = &v9;
      v18 = 4LL;
      v20 = 4LL;
      v22 = 4LL;
      LOBYTE(v3) = EtwWriteEx(v4, &POP_ETW_EVENT_IDLE_CHECK, 0LL, 0, 0LL, 0LL, 7u, &UserData);
    }
  }
  return (char)v3;
}
