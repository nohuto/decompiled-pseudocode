/*
 * XREFs of Template_cppqp @ 0x1C00DB864
 * Callers:
 *     EtwTraceQueueInputMessage @ 0x1C007B388 (EtwTraceQueueInputMessage.c)
 *     EtwTraceRetrieveQueueEventMessage @ 0x1C007F4F0 (EtwTraceRetrieveQueueEventMessage.c)
 * Callees:
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_cppqp(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        char a4,
        char a5,
        char a6,
        char a7,
        char a8)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-39h] BYREF
  char *v10; // [rsp+40h] [rbp-29h]
  __int64 v11; // [rsp+48h] [rbp-21h]
  char *v12; // [rsp+50h] [rbp-19h]
  __int64 v13; // [rsp+58h] [rbp-11h]
  char *v14; // [rsp+60h] [rbp-9h]
  __int64 v15; // [rsp+68h] [rbp-1h]
  char *v16; // [rsp+70h] [rbp+7h]
  __int64 v17; // [rsp+78h] [rbp+Fh]
  char v18; // [rsp+C8h] [rbp+5Fh] BYREF

  v18 = a4;
  UserData.Ptr = (ULONGLONG)&v18;
  *(_QWORD *)&UserData.Size = 1LL;
  v10 = &a5;
  v11 = 8LL;
  v12 = &a6;
  v14 = &a7;
  v16 = &a8;
  v13 = 8LL;
  v15 = 4LL;
  v17 = 8LL;
  return EtwWrite(Microsoft_Windows_Win32kHandle, a2, &W32kControlGuid, 5u, &UserData);
}
