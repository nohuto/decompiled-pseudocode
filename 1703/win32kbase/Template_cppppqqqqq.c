/*
 * XREFs of Template_cppppqqqqq @ 0x1C00DB658
 * Callers:
 *     EtwTraceBeginSendMessage @ 0x1C007C5E0 (EtwTraceBeginSendMessage.c)
 * Callees:
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_cppppqqqqq(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        char a5,
        char a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char a10,
        char a11,
        char a12,
        char a13)
{
  int v14; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+40h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-B0h] BYREF
  char *v18; // [rsp+60h] [rbp-A0h]
  __int64 v19; // [rsp+68h] [rbp-98h]
  char *v20; // [rsp+70h] [rbp-90h]
  __int64 v21; // [rsp+78h] [rbp-88h]
  __int64 *v22; // [rsp+80h] [rbp-80h]
  __int64 v23; // [rsp+88h] [rbp-78h]
  __int64 *v24; // [rsp+90h] [rbp-70h]
  __int64 v25; // [rsp+98h] [rbp-68h]
  int *v26; // [rsp+A0h] [rbp-60h]
  __int64 v27; // [rsp+A8h] [rbp-58h]
  char *v28; // [rsp+B0h] [rbp-50h]
  __int64 v29; // [rsp+B8h] [rbp-48h]
  char *v30; // [rsp+C0h] [rbp-40h]
  __int64 v31; // [rsp+C8h] [rbp-38h]
  char *v32; // [rsp+D0h] [rbp-30h]
  __int64 v33; // [rsp+D8h] [rbp-28h]
  char *v34; // [rsp+E0h] [rbp-20h]
  __int64 v35; // [rsp+E8h] [rbp-18h]
  char v36; // [rsp+138h] [rbp+38h] BYREF

  v36 = a4;
  UserData.Ptr = (ULONGLONG)&v36;
  *(_QWORD *)&UserData.Size = 1LL;
  v14 = 0;
  v18 = &a5;
  v20 = &a6;
  v22 = &v15;
  v16 = 0LL;
  v24 = &v16;
  v26 = &v14;
  v28 = &a10;
  v30 = &a11;
  v32 = &a12;
  v34 = &a13;
  v15 = 0LL;
  v19 = 8LL;
  v21 = 8LL;
  v23 = 8LL;
  v25 = 8LL;
  v27 = 4LL;
  v29 = 4LL;
  v31 = 4LL;
  v33 = 4LL;
  v35 = 4LL;
  return EtwWrite(Microsoft_Windows_Win32kHandle, &BeginSendMessage, &W32kControlGuid, 0xAu, &UserData);
}
