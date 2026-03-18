/*
 * XREFs of Template_qqbpqqp @ 0x1C0042D40
 * Callers:
 *     DpiDxgkDdiQueryDeviceDescriptor @ 0x1C0115FB0 (DpiDxgkDdiQueryDeviceDescriptor.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qqbpqqp(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        char a7,
        char a8,
        char a9,
        char a10)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-69h] BYREF
  int *v12; // [rsp+40h] [rbp-59h]
  __int64 v13; // [rsp+48h] [rbp-51h]
  __int64 v14; // [rsp+50h] [rbp-49h]
  int v15; // [rsp+58h] [rbp-41h]
  int v16; // [rsp+5Ch] [rbp-3Dh]
  char *v17; // [rsp+60h] [rbp-39h]
  __int64 v18; // [rsp+68h] [rbp-31h]
  char *v19; // [rsp+70h] [rbp-29h]
  __int64 v20; // [rsp+78h] [rbp-21h]
  char *v21; // [rsp+80h] [rbp-19h]
  __int64 v22; // [rsp+88h] [rbp-11h]
  char *v23; // [rsp+90h] [rbp-9h]
  __int64 v24; // [rsp+98h] [rbp-1h]
  int v25; // [rsp+E8h] [rbp+4Fh] BYREF

  v25 = a4;
  UserData.Ptr = (ULONGLONG)&v25;
  *(_QWORD *)&UserData.Size = 4LL;
  v12 = &a5;
  v14 = a6;
  v15 = a5;
  v17 = &a7;
  v19 = &a8;
  v21 = &a9;
  v23 = &a10;
  v13 = 4LL;
  v16 = 0;
  v18 = 8LL;
  v20 = 4LL;
  v22 = 4LL;
  v24 = 8LL;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, a2, 0LL, 7u, &UserData);
}
