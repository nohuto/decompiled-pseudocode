/*
 * XREFs of Template_qqqqqqq @ 0x1C0014F1C
 * Callers:
 *     DxgkPresentMultiPlaneOverlay @ 0x1C01BAA50 (DxgkPresentMultiPlaneOverlay.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qqqqqqq(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
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
  int v24; // [rsp+E8h] [rbp+4Fh] BYREF

  v24 = a4;
  UserData.Ptr = (ULONGLONG)&v24;
  *(_QWORD *)&UserData.Size = 4LL;
  v12 = &a5;
  v13 = 4LL;
  v14 = &a6;
  v15 = 4LL;
  v16 = &a7;
  v18 = &a8;
  v20 = &a9;
  v22 = &a10;
  v17 = 4LL;
  v19 = 4LL;
  v21 = 4LL;
  v23 = 4LL;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, &PresentMultiPlaneOverlay, 0LL, 7u, &UserData);
}
