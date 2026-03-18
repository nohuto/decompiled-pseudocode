/*
 * XREFs of Template_qqqqqqqttQ3 @ 0x1C0025C10
 * Callers:
 *     ?DxgkCddLogEvent@@YAXIEPEAU_DXGKETW_PARAMS@@@Z @ 0x1C009DBA0 (-DxgkCddLogEvent@@YAXIEPEAU_DXGKETW_PARAMS@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qqqqqqqttQ3(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
        __int64 a13)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-B1h] BYREF
  char *v15; // [rsp+40h] [rbp-A1h]
  __int64 v16; // [rsp+48h] [rbp-99h]
  char *v17; // [rsp+50h] [rbp-91h]
  __int64 v18; // [rsp+58h] [rbp-89h]
  char *v19; // [rsp+60h] [rbp-81h]
  __int64 v20; // [rsp+68h] [rbp-79h]
  char *v21; // [rsp+70h] [rbp-71h]
  __int64 v22; // [rsp+78h] [rbp-69h]
  char *v23; // [rsp+80h] [rbp-61h]
  __int64 v24; // [rsp+88h] [rbp-59h]
  char *v25; // [rsp+90h] [rbp-51h]
  __int64 v26; // [rsp+98h] [rbp-49h]
  char *v27; // [rsp+A0h] [rbp-41h]
  __int64 v28; // [rsp+A8h] [rbp-39h]
  char *v29; // [rsp+B0h] [rbp-31h]
  __int64 v30; // [rsp+B8h] [rbp-29h]
  __int64 v31; // [rsp+C0h] [rbp-21h]
  __int64 v32; // [rsp+C8h] [rbp-19h]
  int v33; // [rsp+118h] [rbp+37h] BYREF

  v33 = a4;
  UserData.Ptr = (ULONGLONG)&v33;
  *(_QWORD *)&UserData.Size = 4LL;
  v15 = &a5;
  v16 = 4LL;
  v17 = &a6;
  v19 = &a7;
  v21 = &a8;
  v23 = &a9;
  v25 = &a10;
  v27 = &a11;
  v29 = &a12;
  v31 = a13;
  v18 = 4LL;
  v20 = 4LL;
  v22 = 4LL;
  v24 = 4LL;
  v26 = 4LL;
  v28 = 4LL;
  v30 = 4LL;
  v32 = 12LL;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, a2, 0LL, 0xAu, &UserData);
}
