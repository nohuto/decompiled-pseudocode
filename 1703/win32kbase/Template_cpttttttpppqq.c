/*
 * XREFs of Template_cpttttttpppqq @ 0x1C00DB99C
 * Callers:
 *     EtwTraceQueueInputMessage @ 0x1C007B388 (EtwTraceQueueInputMessage.c)
 *     EtwTraceEndDelegateInputCallback @ 0x1C0098200 (EtwTraceEndDelegateInputCallback.c)
 *     EtwTraceBeginDelegateInputCallback @ 0x1C0098260 (EtwTraceBeginDelegateInputCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_cpttttttpppqq(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        char a4,
        char a5,
        __int64 a6,
        __int64 a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13,
        char a14,
        char a15,
        char a16)
{
  int v17; // [rsp+30h] [rbp-D0h] BYREF
  int v18; // [rsp+38h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-C0h] BYREF
  char *v20; // [rsp+50h] [rbp-B0h]
  __int64 v21; // [rsp+58h] [rbp-A8h]
  int *v22; // [rsp+60h] [rbp-A0h]
  __int64 v23; // [rsp+68h] [rbp-98h]
  int *v24; // [rsp+70h] [rbp-90h]
  __int64 v25; // [rsp+78h] [rbp-88h]
  char *v26; // [rsp+80h] [rbp-80h]
  __int64 v27; // [rsp+88h] [rbp-78h]
  char *v28; // [rsp+90h] [rbp-70h]
  __int64 v29; // [rsp+98h] [rbp-68h]
  char *v30; // [rsp+A0h] [rbp-60h]
  __int64 v31; // [rsp+A8h] [rbp-58h]
  char *v32; // [rsp+B0h] [rbp-50h]
  __int64 v33; // [rsp+B8h] [rbp-48h]
  char *v34; // [rsp+C0h] [rbp-40h]
  __int64 v35; // [rsp+C8h] [rbp-38h]
  char *v36; // [rsp+D0h] [rbp-30h]
  __int64 v37; // [rsp+D8h] [rbp-28h]
  char *v38; // [rsp+E0h] [rbp-20h]
  __int64 v39; // [rsp+E8h] [rbp-18h]
  char *v40; // [rsp+F0h] [rbp-10h]
  __int64 v41; // [rsp+F8h] [rbp-8h]
  char *v42; // [rsp+100h] [rbp+0h]
  __int64 v43; // [rsp+108h] [rbp+8h]
  char v44; // [rsp+158h] [rbp+58h] BYREF

  v44 = a4;
  UserData.Ptr = (ULONGLONG)&v44;
  *(_QWORD *)&UserData.Size = 1LL;
  v18 = 0;
  v20 = &a5;
  v22 = &v17;
  v24 = &v18;
  v17 = 0;
  v26 = &a8;
  v28 = &a9;
  v30 = &a10;
  v32 = &a11;
  v34 = &a12;
  v36 = &a13;
  v38 = &a14;
  v40 = &a15;
  v42 = &a16;
  v21 = 8LL;
  v23 = 4LL;
  v25 = 4LL;
  v27 = 4LL;
  v29 = 4LL;
  v31 = 4LL;
  v33 = 4LL;
  v35 = 8LL;
  v37 = 8LL;
  v39 = 8LL;
  v41 = 4LL;
  v43 = 4LL;
  return EtwWrite(Microsoft_Windows_Win32kHandle, a2, &W32kControlGuid, 0xDu, &UserData);
}
