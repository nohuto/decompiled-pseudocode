/*
 * XREFs of Template_qqqqqqqq @ 0x180144520
 * Callers:
 *     ?EndOfFrame@CHwCallbackRendererEvents@@UEAAXPEAVCCounterManager@@@Z @ 0x1800C3B70 (-EndOfFrame@CHwCallbackRendererEvents@@UEAAXPEAVCCounterManager@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

ULONG __fastcall Template_qqqqqqqq(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-79h] BYREF
  int *v12; // [rsp+30h] [rbp-69h]
  __int64 v13; // [rsp+38h] [rbp-61h]
  char *v14; // [rsp+40h] [rbp-59h]
  __int64 v15; // [rsp+48h] [rbp-51h]
  char *v16; // [rsp+50h] [rbp-49h]
  __int64 v17; // [rsp+58h] [rbp-41h]
  char *v18; // [rsp+60h] [rbp-39h]
  __int64 v19; // [rsp+68h] [rbp-31h]
  char *v20; // [rsp+70h] [rbp-29h]
  __int64 v21; // [rsp+78h] [rbp-21h]
  char *v22; // [rsp+80h] [rbp-19h]
  __int64 v23; // [rsp+88h] [rbp-11h]
  char *v24; // [rsp+90h] [rbp-9h]
  __int64 v25; // [rsp+98h] [rbp-1h]
  int v26; // [rsp+E0h] [rbp+47h] BYREF
  int v27; // [rsp+E8h] [rbp+4Fh] BYREF

  v27 = a4;
  v26 = a3;
  UserData.Ptr = (ULONGLONG)&v26;
  *(_QWORD *)&UserData.Size = 4LL;
  v12 = &v27;
  v13 = 4LL;
  v14 = &a5;
  v15 = 4LL;
  v16 = &a6;
  v18 = &a7;
  v20 = &a8;
  v22 = &a9;
  v24 = &a10;
  v17 = 4LL;
  v19 = 4LL;
  v21 = 4LL;
  v23 = 4LL;
  v25 = 4LL;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, &ENDFRAME_HW_CALLBACK_RENDERER_STATS, 8u, &UserData);
}
