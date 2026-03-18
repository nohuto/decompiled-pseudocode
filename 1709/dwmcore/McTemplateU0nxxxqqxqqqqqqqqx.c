/*
 * XREFs of McTemplateU0nxxxqqxqqqqqqqqx @ 0x18017CE68
 * Callers:
 *     ?ProcessSurfaceUpdate@CCompositionSurfaceInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x18004BDE0 (-ProcessSurfaceUpdate@CCompositionSurfaceInfo@@QEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     McGenEventWriteUM @ 0x180120D58 (McGenEventWriteUM.c)
 */

ULONG __fastcall McTemplateU0nxxxqqxqqqqqqqqx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        __int64 a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
        __int64 a13,
        char a14,
        char a15,
        char a16,
        __int64 a17,
        char a18)
{
  int v19; // [rsp+20h] [rbp-E0h] BYREF
  int v20; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v21; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v22; // [rsp+38h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B0h]
  __int64 v25; // [rsp+58h] [rbp-A8h]
  char *v26; // [rsp+60h] [rbp-A0h]
  __int64 v27; // [rsp+68h] [rbp-98h]
  char *v28; // [rsp+70h] [rbp-90h]
  __int64 v29; // [rsp+78h] [rbp-88h]
  __int64 *v30; // [rsp+80h] [rbp-80h]
  __int64 v31; // [rsp+88h] [rbp-78h]
  char *v32; // [rsp+90h] [rbp-70h]
  __int64 v33; // [rsp+98h] [rbp-68h]
  char *v34; // [rsp+A0h] [rbp-60h]
  __int64 v35; // [rsp+A8h] [rbp-58h]
  char *v36; // [rsp+B0h] [rbp-50h]
  __int64 v37; // [rsp+B8h] [rbp-48h]
  char *v38; // [rsp+C0h] [rbp-40h]
  __int64 v39; // [rsp+C8h] [rbp-38h]
  char *v40; // [rsp+D0h] [rbp-30h]
  __int64 v41; // [rsp+D8h] [rbp-28h]
  int *v42; // [rsp+E0h] [rbp-20h]
  __int64 v43; // [rsp+E8h] [rbp-18h]
  char *v44; // [rsp+F0h] [rbp-10h]
  __int64 v45; // [rsp+F8h] [rbp-8h]
  char *v46; // [rsp+100h] [rbp+0h]
  __int64 v47; // [rsp+108h] [rbp+8h]
  char *v48; // [rsp+110h] [rbp+10h]
  __int64 v49; // [rsp+118h] [rbp+18h]
  int *v50; // [rsp+120h] [rbp+20h]
  __int64 v51; // [rsp+128h] [rbp+28h]
  char *v52; // [rsp+130h] [rbp+30h]
  __int64 v53; // [rsp+138h] [rbp+38h]
  __int64 *v54; // [rsp+140h] [rbp+40h]
  __int64 v55; // [rsp+148h] [rbp+48h]

  v24 = a4;
  v22 = 0LL;
  v26 = &a5;
  v20 = 0;
  v28 = &a6;
  v19 = 0;
  v30 = &v21;
  v21 = 0LL;
  v32 = &a8;
  v25 = 8LL;
  v34 = &a9;
  v36 = &a10;
  v38 = &a11;
  v40 = &a12;
  v42 = &v19;
  v44 = &a14;
  v46 = &a15;
  v48 = &a16;
  v50 = &v20;
  v52 = &a18;
  v54 = &v22;
  v27 = 8LL;
  v29 = 8LL;
  v31 = 8LL;
  v33 = 4LL;
  v35 = 4LL;
  v37 = 8LL;
  v39 = 4LL;
  v41 = 4LL;
  v43 = 4LL;
  v45 = 4LL;
  v47 = 4LL;
  v49 = 4LL;
  v51 = 4LL;
  v53 = 4LL;
  v55 = 8LL;
  return McGenEventWriteUM(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_SURFACEUPDATE, 0x11u, &v23);
}
