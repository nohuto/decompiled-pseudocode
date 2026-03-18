/*
 * XREFs of Template_cppppqq @ 0x1C00DB4A4
 * Callers:
 *     EtwTraceWakePump @ 0x1C0045320 (EtwTraceWakePump.c)
 *     EtwTraceQueueMessage @ 0x1C007B2B0 (EtwTraceQueueMessage.c)
 *     EtwTraceBeginRetrieveSendMessage @ 0x1C007E600 (EtwTraceBeginRetrieveSendMessage.c)
 * Callees:
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_cppppqq(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        char a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-69h] BYREF
  char *v12; // [rsp+40h] [rbp-59h]
  __int64 v13; // [rsp+48h] [rbp-51h]
  char *v14; // [rsp+50h] [rbp-49h]
  __int64 v15; // [rsp+58h] [rbp-41h]
  char *v16; // [rsp+60h] [rbp-39h]
  __int64 v17; // [rsp+68h] [rbp-31h]
  char *v18; // [rsp+70h] [rbp-29h]
  __int64 v19; // [rsp+78h] [rbp-21h]
  char *v20; // [rsp+80h] [rbp-19h]
  __int64 v21; // [rsp+88h] [rbp-11h]
  char *v22; // [rsp+90h] [rbp-9h]
  __int64 v23; // [rsp+98h] [rbp-1h]
  char v24; // [rsp+E8h] [rbp+4Fh] BYREF

  v24 = a4;
  UserData.Ptr = (ULONGLONG)&v24;
  *(_QWORD *)&UserData.Size = 1LL;
  v12 = &a5;
  v13 = 8LL;
  v14 = &a6;
  v16 = &a7;
  v18 = &a8;
  v20 = &a9;
  v22 = &a10;
  v15 = 8LL;
  v17 = 8LL;
  v19 = 8LL;
  v21 = 4LL;
  v23 = 4LL;
  return EtwWrite(Microsoft_Windows_Win32kHandle, a2, &W32kControlGuid, 7u, &UserData);
}
