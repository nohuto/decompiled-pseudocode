/*
 * XREFs of McTemplateU0qqqqqqqq @ 0x180125328
 * Callers:
 *     ?FrameEndedCommon@CTelemetryFrames@@CAX_N@Z @ 0x180010770 (-FrameEndedCommon@CTelemetryFrames@@CAX_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     McGenEventWriteUM @ 0x180120D58 (McGenEventWriteUM.c)
 */

ULONG __fastcall McTemplateU0qqqqqqqq(
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
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+20h] [rbp-79h] BYREF
  int *v12; // [rsp+30h] [rbp-69h]
  __int64 v13; // [rsp+38h] [rbp-61h]
  int *v14; // [rsp+40h] [rbp-59h]
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
  char *v26; // [rsp+A0h] [rbp+7h]
  __int64 v27; // [rsp+A8h] [rbp+Fh]
  int v28; // [rsp+E0h] [rbp+47h] BYREF
  int v29; // [rsp+E8h] [rbp+4Fh] BYREF

  v29 = a4;
  v28 = a3;
  v13 = 4LL;
  v12 = &v28;
  v15 = 4LL;
  v14 = &v29;
  v17 = 4LL;
  v16 = &a5;
  v19 = 4LL;
  v18 = &a6;
  v21 = 4LL;
  v20 = &a7;
  v22 = &a8;
  v24 = &a9;
  v26 = &a10;
  v23 = 4LL;
  v25 = 4LL;
  v27 = 4LL;
  return McGenEventWriteUM(&Microsoft_Windows_Dwm_Core_Provider_Context, &ENDFRAME_HW_CALLBACK_RENDERER_STATS, 9u, &v11);
}
