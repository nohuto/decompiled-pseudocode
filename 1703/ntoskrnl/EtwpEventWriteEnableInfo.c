/*
 * XREFs of EtwpEventWriteEnableInfo @ 0x14070D698
 * Callers:
 *     EtwpTracingProvEnableCallback @ 0x1405D65E0 (EtwpTracingProvEnableCallback.c)
 * Callees:
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

NTSTATUS __fastcall EtwpEventWriteEnableInfo(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v4; // rdx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-39h] BYREF
  char *v7; // [rsp+40h] [rbp-29h]
  __int64 v8; // [rsp+48h] [rbp-21h]
  __int64 v9; // [rsp+50h] [rbp-19h]
  __int64 v10; // [rsp+58h] [rbp-11h]
  __int64 v11; // [rsp+60h] [rbp-9h]
  __int64 v12; // [rsp+68h] [rbp-1h]
  __int64 v13; // [rsp+70h] [rbp+7h]
  __int64 v14; // [rsp+78h] [rbp+Fh]
  __int64 v15; // [rsp+80h] [rbp+17h]
  __int64 v16; // [rsp+88h] [rbp+1Fh]
  __int64 v17; // [rsp+90h] [rbp+27h]
  __int64 v18; // [rsp+98h] [rbp+2Fh]
  unsigned __int8 v19; // [rsp+E0h] [rbp+77h] BYREF

  v19 = a3;
  *(_QWORD *)&UserData.Size = 16LL;
  UserData.Ptr = a2 + 24;
  v4 = 32LL * a3;
  v7 = (char *)&v19;
  v8 = 1LL;
  v10 = 2LL;
  v9 = v4 + a2 + 118;
  v12 = 8LL;
  v11 = a2 + 32 * (a3 + 4LL);
  v14 = 8LL;
  v13 = v4 + a2 + 136;
  v16 = 1LL;
  v15 = v4 + a2 + 116;
  v18 = 4LL;
  v17 = v4 + a2 + 120;
  return EtwWrite(EtwpEventTracingProvRegHandle, &ETW_EVENT_ENABLE_INFO, 0LL, 7u, &UserData);
}
