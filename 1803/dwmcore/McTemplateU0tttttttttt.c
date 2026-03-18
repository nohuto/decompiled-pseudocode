/*
 * XREFs of McTemplateU0tttttttttt @ 0x1801F2514
 * Callers:
 *     ?CheckComputeScribbleSupport@CHwFullScreenRenderTarget@@AEAA_NXZ @ 0x1801F19A0 (-CheckComputeScribbleSupport@CHwFullScreenRenderTarget@@AEAA_NXZ.c)
 * Callees:
 *     McGenEventWriteUM @ 0x1800CF9CC (McGenEventWriteUM.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0tttttttttt(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12)
{
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+20h] [rbp-A9h] BYREF
  int *v14; // [rsp+30h] [rbp-99h]
  __int64 v15; // [rsp+38h] [rbp-91h]
  int *v16; // [rsp+40h] [rbp-89h]
  __int64 v17; // [rsp+48h] [rbp-81h]
  char *v18; // [rsp+50h] [rbp-79h]
  __int64 v19; // [rsp+58h] [rbp-71h]
  char *v20; // [rsp+60h] [rbp-69h]
  __int64 v21; // [rsp+68h] [rbp-61h]
  char *v22; // [rsp+70h] [rbp-59h]
  __int64 v23; // [rsp+78h] [rbp-51h]
  char *v24; // [rsp+80h] [rbp-49h]
  __int64 v25; // [rsp+88h] [rbp-41h]
  char *v26; // [rsp+90h] [rbp-39h]
  __int64 v27; // [rsp+98h] [rbp-31h]
  char *v28; // [rsp+A0h] [rbp-29h]
  __int64 v29; // [rsp+A8h] [rbp-21h]
  char *v30; // [rsp+B0h] [rbp-19h]
  __int64 v31; // [rsp+B8h] [rbp-11h]
  char *v32; // [rsp+C0h] [rbp-9h]
  __int64 v33; // [rsp+C8h] [rbp-1h]
  int v34; // [rsp+100h] [rbp+37h] BYREF
  int v35; // [rsp+108h] [rbp+3Fh] BYREF

  v35 = a4;
  v34 = a3;
  v15 = 4LL;
  v14 = &v34;
  v17 = 4LL;
  v16 = &v35;
  v19 = 4LL;
  v18 = &a5;
  v21 = 4LL;
  v20 = &a6;
  v23 = 4LL;
  v22 = &a7;
  v24 = &a8;
  v26 = &a9;
  v28 = &a10;
  v30 = &a11;
  v32 = &a12;
  v25 = 4LL;
  v27 = 4LL;
  v29 = 4LL;
  v31 = 4LL;
  v33 = 4LL;
  return McGenEventWriteUM(
           Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_COMPUTESCRIBBLE_UNSUPPORTEDCHECK,
           0xBu,
           &v13);
}
