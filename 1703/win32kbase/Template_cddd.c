/*
 * XREFs of Template_cddd @ 0x1C00DB264
 * Callers:
 *     EtwTraceEndInjectMouse @ 0x1C008C500 (EtwTraceEndInjectMouse.c)
 *     EtwTraceBeginInjectMouse @ 0x1C008C540 (EtwTraceBeginInjectMouse.c)
 * Callees:
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_cddd(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        char a4,
        char a5,
        char a6,
        char a7)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-21h] BYREF
  char *v9; // [rsp+40h] [rbp-11h]
  __int64 v10; // [rsp+48h] [rbp-9h]
  char *v11; // [rsp+50h] [rbp-1h]
  __int64 v12; // [rsp+58h] [rbp+7h]
  char *v13; // [rsp+60h] [rbp+Fh]
  __int64 v14; // [rsp+68h] [rbp+17h]
  char v15; // [rsp+B8h] [rbp+67h] BYREF

  v15 = a4;
  UserData.Ptr = (ULONGLONG)&v15;
  *(_QWORD *)&UserData.Size = 1LL;
  v10 = 4LL;
  v9 = &a5;
  v11 = &a6;
  v13 = &a7;
  v12 = 4LL;
  v14 = 4LL;
  return EtwWrite(Microsoft_Windows_Win32kHandle, a2, &W32kControlGuid, 4u, &UserData);
}
