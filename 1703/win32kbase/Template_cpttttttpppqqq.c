/*
 * XREFs of Template_cpttttttpppqqq @ 0x1C00DBAF8
 * Callers:
 *     EtwTraceEndDelegatedInputWorker @ 0x1C0098180 (EtwTraceEndDelegatedInputWorker.c)
 *     EtwTraceBeginDelegatedInputWorker @ 0x1C00981C0 (EtwTraceBeginDelegatedInputWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_cpttttttpppqqq(
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
        __int64 a13,
        __int64 a14,
        __int64 a15,
        char a16,
        char a17)
{
  int v18; // [rsp+30h] [rbp-D0h] BYREF
  int v19; // [rsp+38h] [rbp-C8h] BYREF
  int v20; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-A0h] BYREF
  char *v24; // [rsp+70h] [rbp-90h]
  __int64 v25; // [rsp+78h] [rbp-88h]
  int *v26; // [rsp+80h] [rbp-80h]
  __int64 v27; // [rsp+88h] [rbp-78h]
  int *v28; // [rsp+90h] [rbp-70h]
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
  __int64 *v40; // [rsp+F0h] [rbp-10h]
  __int64 v41; // [rsp+F8h] [rbp-8h]
  __int64 *v42; // [rsp+100h] [rbp+0h]
  __int64 v43; // [rsp+108h] [rbp+8h]
  int *v44; // [rsp+110h] [rbp+10h]
  __int64 v45; // [rsp+118h] [rbp+18h]
  char *v46; // [rsp+120h] [rbp+20h]
  __int64 v47; // [rsp+128h] [rbp+28h]
  char *v48; // [rsp+130h] [rbp+30h]
  __int64 v49; // [rsp+138h] [rbp+38h]
  char v50; // [rsp+188h] [rbp+88h] BYREF

  v50 = a4;
  UserData.Ptr = (ULONGLONG)&v50;
  *(_QWORD *)&UserData.Size = 1LL;
  v20 = 0;
  v24 = &a5;
  v26 = &v18;
  v28 = &v19;
  v22 = 0LL;
  v30 = &a8;
  v32 = &a9;
  v34 = &a10;
  v36 = &a11;
  v38 = &a12;
  v40 = &v21;
  v42 = &v22;
  v44 = &v20;
  v46 = &a16;
  v48 = &a17;
  v21 = 0LL;
  v19 = 0;
  v18 = 0;
  v25 = 8LL;
  v27 = 4LL;
  v29 = 4LL;
  v31 = 4LL;
  v33 = 4LL;
  v35 = 4LL;
  v37 = 4LL;
  v39 = 8LL;
  v41 = 8LL;
  v43 = 8LL;
  v45 = 4LL;
  v47 = 4LL;
  v49 = 4LL;
  return EtwWrite(Microsoft_Windows_Win32kHandle, a2, &W32kControlGuid, 0xEu, &UserData);
}
