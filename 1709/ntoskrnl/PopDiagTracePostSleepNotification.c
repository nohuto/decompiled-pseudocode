/*
 * XREFs of PopDiagTracePostSleepNotification @ 0x1404395A0
 * Callers:
 *     NtSetSystemPowerState @ 0x140437F10 (NtSetSystemPowerState.c)
 * Callees:
 *     EtwWrite @ 0x140087CA0 (EtwWrite.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     PopDiagInterruptTimeToSystemTime @ 0x140438FC4 (PopDiagInterruptTimeToSystemTime.c)
 */

NTSTATUS __fastcall PopDiagTracePostSleepNotification(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  char v7; // r10
  __int64 v8; // r11
  NTSTATUS result; // eax
  int v10; // [rsp+38h] [rbp-61h] BYREF
  int v11; // [rsp+3Ch] [rbp-5Dh] BYREF
  __int64 v12; // [rsp+40h] [rbp-59h] BYREF
  _QWORD v13[2]; // [rsp+48h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-41h] BYREF
  int *v15; // [rsp+68h] [rbp-31h]
  __int64 v16; // [rsp+70h] [rbp-29h]
  int *v17; // [rsp+78h] [rbp-21h]
  __int64 v18; // [rsp+80h] [rbp-19h]
  __int64 *v19; // [rsp+88h] [rbp-11h]
  __int64 v20; // [rsp+90h] [rbp-9h]
  _QWORD *v21; // [rsp+98h] [rbp-1h]
  __int64 v22; // [rsp+A0h] [rbp+7h]
  int *v23; // [rsp+A8h] [rbp+Fh]
  __int64 v24; // [rsp+B0h] [rbp+17h]
  int *v25; // [rsp+B8h] [rbp+1Fh]
  __int64 v26; // [rsp+C0h] [rbp+27h]
  int v27; // [rsp+E8h] [rbp+4Fh] BYREF
  int v28; // [rsp+F0h] [rbp+57h] BYREF
  int v29; // [rsp+F8h] [rbp+5Fh] BYREF

  v29 = a3;
  v28 = a2;
  v27 = a1;
  v7 = 0;
  v12 = 0LL;
  v13[0] = 0LL;
  v10 = 0;
  v11 = 0;
  v8 = 4LL;
  if ( a6 )
  {
    if ( a6 == -1 )
    {
      v10 = 4;
    }
    else if ( a6 == -2 )
    {
      v10 = 5;
    }
    else
    {
      v10 = *(_DWORD *)(a6 + 8);
    }
  }
  result = a7;
  if ( a7 )
  {
    if ( a7 == -1 )
    {
      v11 = 4;
    }
    else if ( a7 == -2 )
    {
      v11 = 5;
    }
    else
    {
      result = *(_DWORD *)(a7 + 8);
      v11 = result;
    }
  }
  if ( a4 )
    result = PopDiagInterruptTimeToSystemTime(a4, &v12);
  if ( a5 )
    result = PopDiagInterruptTimeToSystemTime(a5, v13);
  if ( PopDiagHandleRegistered != v7 )
  {
    UserData.Ptr = (ULONGLONG)&v27;
    *(_QWORD *)&UserData.Size = v8;
    v15 = &v28;
    v16 = v8;
    v17 = &v29;
    v18 = v8;
    v19 = &v12;
    v21 = v13;
    v23 = &v10;
    v25 = &v11;
    v20 = 8LL;
    v22 = 8LL;
    v24 = v8;
    v26 = v8;
    return EtwWrite(PopDiagHandle, &POP_ETW_EVENT_POSTSLEEP_NOTIFICATION, 0LL, 7u, &UserData);
  }
  return result;
}
