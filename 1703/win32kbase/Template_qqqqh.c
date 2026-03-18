/*
 * XREFs of Template_qqqqh @ 0x1C00DCD4C
 * Callers:
 *     EtwTraceIdleActionExpiration @ 0x1C0092120 (EtwTraceIdleActionExpiration.c)
 * Callees:
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qqqqh(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, char a6, char a7, char a8)
{
  int v9; // [rsp+30h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-39h] BYREF
  char *v11; // [rsp+50h] [rbp-29h]
  __int64 v12; // [rsp+58h] [rbp-21h]
  char *v13; // [rsp+60h] [rbp-19h]
  __int64 v14; // [rsp+68h] [rbp-11h]
  char *v15; // [rsp+70h] [rbp-9h]
  __int64 v16; // [rsp+78h] [rbp-1h]
  char *v17; // [rsp+80h] [rbp+7h]
  __int64 v18; // [rsp+88h] [rbp+Fh]

  v9 = gSessionId;
  *(_QWORD *)&UserData.Size = 4LL;
  UserData.Ptr = (ULONGLONG)&v9;
  v11 = &a5;
  v13 = &a6;
  v15 = &a7;
  v17 = &a8;
  v12 = 4LL;
  v14 = 4LL;
  v16 = 4LL;
  v18 = 2LL;
  return EtwWrite(Microsoft_Windows_Win32kHandle, &IdleActionExpireEvent, &W32kControlGuid, 5u, &UserData);
}
