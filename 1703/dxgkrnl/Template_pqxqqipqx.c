/*
 * XREFs of Template_pqxqqipqx @ 0x1C003BBF8
 * Callers:
 *     ?SignalVSyncEvent@BLTQUEUE@@AEAAXXZ @ 0x1C0103C8C (-SignalVSyncEvent@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 */

NTSTATUS Template_pqxqqipqx(__int64 a1, __int64 a2, __int64 a3, ...)
{
  int v4; // [rsp+30h] [rbp-D0h] BYREF
  int v5; // [rsp+38h] [rbp-C8h] BYREF
  int v6; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v7; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v8; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v9; // [rsp+58h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-A0h] BYREF
  int *v11; // [rsp+70h] [rbp-90h]
  __int64 v12; // [rsp+78h] [rbp-88h]
  __int64 *v13; // [rsp+80h] [rbp-80h]
  __int64 v14; // [rsp+88h] [rbp-78h]
  va_list v15; // [rsp+90h] [rbp-70h]
  __int64 v16; // [rsp+98h] [rbp-68h]
  int *v17; // [rsp+A0h] [rbp-60h]
  __int64 v18; // [rsp+A8h] [rbp-58h]
  va_list v19; // [rsp+B0h] [rbp-50h]
  __int64 v20; // [rsp+B8h] [rbp-48h]
  __int64 *v21; // [rsp+C0h] [rbp-40h]
  __int64 v22; // [rsp+C8h] [rbp-38h]
  int *v23; // [rsp+D0h] [rbp-30h]
  __int64 v24; // [rsp+D8h] [rbp-28h]
  __int64 *v25; // [rsp+E0h] [rbp-20h]
  __int64 v26; // [rsp+E8h] [rbp-18h]
  __int64 v27; // [rsp+138h] [rbp+38h] BYREF
  va_list va; // [rsp+138h] [rbp+38h]
  __int64 v29; // [rsp+140h] [rbp+40h]
  __int64 v30; // [rsp+148h] [rbp+48h]
  __int64 v31; // [rsp+150h] [rbp+50h] BYREF
  va_list va1; // [rsp+150h] [rbp+50h]
  __int64 v33; // [rsp+158h] [rbp+58h]
  va_list va2; // [rsp+160h] [rbp+60h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v27 = va_arg(va1, _QWORD);
  v29 = va_arg(va1, _QWORD);
  v30 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v31 = va_arg(va2, _QWORD);
  v33 = va_arg(va2, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  *(_QWORD *)&UserData.Size = 8LL;
  v9 = 0LL;
  v11 = &v4;
  v6 = 0;
  v13 = &v7;
  va_copy(v15, va1);
  v17 = &v5;
  va_copy(v19, va2);
  v21 = &v8;
  v23 = &v6;
  v25 = &v9;
  v8 = 0LL;
  v5 = 0;
  v7 = 0LL;
  v4 = 0;
  v12 = 4LL;
  v14 = 8LL;
  v16 = 4LL;
  v18 = 4LL;
  v20 = 8LL;
  v22 = 8LL;
  v24 = 4LL;
  v26 = 8LL;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, &EventVSyncDPC, 0LL, 9u, &UserData);
}
