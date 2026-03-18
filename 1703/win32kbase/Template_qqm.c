/*
 * XREFs of Template_qqm @ 0x1C00DCB74
 * Callers:
 *     EtwTraceUserIsActive @ 0x1C0083150 (EtwTraceUserIsActive.c)
 * Callees:
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qqm(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, __int64 a6)
{
  int v7; // [rsp+30h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-48h] BYREF
  char *v9; // [rsp+48h] [rbp-38h]
  __int64 v10; // [rsp+50h] [rbp-30h]
  __int64 v11; // [rsp+58h] [rbp-28h]
  __int64 v12; // [rsp+60h] [rbp-20h]

  v7 = gSessionId;
  *(_QWORD *)&UserData.Size = 4LL;
  UserData.Ptr = (ULONGLONG)&v7;
  v9 = &a5;
  v11 = a6;
  v10 = 4LL;
  v12 = 8LL;
  return EtwWrite(Microsoft_Windows_Win32kHandle, &UserActiveEvent, &W32kControlGuid, 3u, &UserData);
}
