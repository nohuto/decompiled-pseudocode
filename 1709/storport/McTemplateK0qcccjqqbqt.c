/*
 * XREFs of McTemplateK0qcccjqqbqt @ 0x1C0040F3C
 * Callers:
 *     StorEtwHwTimeoutDetectedEvent @ 0x1C00414D4 (StorEtwHwTimeoutDetectedEvent.c)
 * Callees:
 *     McGenEventWriteKM @ 0x1C0003DBC (McGenEventWriteKM.c)
 *     __security_check_cookie @ 0x1C001EEB0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0qcccjqqbqt(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        int a4,
        char a5,
        char a6,
        char a7,
        __int64 a8,
        char a9,
        int a10,
        __int64 a11,
        char a12,
        char a13)
{
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+30h] [rbp-B1h] BYREF
  int *v15; // [rsp+40h] [rbp-A1h]
  __int64 v16; // [rsp+48h] [rbp-99h]
  char *v17; // [rsp+50h] [rbp-91h]
  __int64 v18; // [rsp+58h] [rbp-89h]
  char *v19; // [rsp+60h] [rbp-81h]
  __int64 v20; // [rsp+68h] [rbp-79h]
  char *v21; // [rsp+70h] [rbp-71h]
  __int64 v22; // [rsp+78h] [rbp-69h]
  __int64 v23; // [rsp+80h] [rbp-61h]
  __int64 v24; // [rsp+88h] [rbp-59h]
  char *v25; // [rsp+90h] [rbp-51h]
  __int64 v26; // [rsp+98h] [rbp-49h]
  int *v27; // [rsp+A0h] [rbp-41h]
  __int64 v28; // [rsp+A8h] [rbp-39h]
  __int64 v29; // [rsp+B0h] [rbp-31h]
  int v30; // [rsp+B8h] [rbp-29h]
  int v31; // [rsp+BCh] [rbp-25h]
  char *v32; // [rsp+C0h] [rbp-21h]
  __int64 v33; // [rsp+C8h] [rbp-19h]
  char *v34; // [rsp+D0h] [rbp-11h]
  __int64 v35; // [rsp+D8h] [rbp-9h]
  int v36; // [rsp+118h] [rbp+37h] BYREF

  v36 = a4;
  v16 = 4LL;
  v31 = 0;
  v15 = &v36;
  v17 = &a5;
  v19 = &a6;
  v18 = 1LL;
  v21 = &a7;
  v23 = a8;
  v25 = &a9;
  v27 = &a10;
  v29 = a11;
  v30 = a10;
  v32 = &a12;
  v34 = &a13;
  v20 = 1LL;
  v22 = 1LL;
  v24 = 16LL;
  v26 = 4LL;
  v28 = 4LL;
  v33 = 4LL;
  v35 = 4LL;
  return McGenEventWriteKM(a1, &EventUnitHwTimeout, a3, 0xBu, &v14);
}
