/*
 * XREFs of McTemplateU0xqddddddddddddqqq @ 0x1801452BC
 * Callers:
 *     ?CheckMultiPlaneOverlaySupport@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@AEAV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x180140E68 (-CheckMultiPlaneOverlaySupport@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$0A@@@AEA.c)
 * Callees:
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     McGenEventWriteUM @ 0x180120D58 (McGenEventWriteUM.c)
 */

ULONG __fastcall McTemplateU0xqddddddddddddqqq(
        __int64 a1,
        __int64 a2,
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
        char a13,
        char a14,
        char a15,
        char a16,
        char a17,
        char a18,
        char a19)
{
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+20h] [rbp-E0h] BYREF
  __int64 *v21; // [rsp+30h] [rbp-D0h]
  __int64 v22; // [rsp+38h] [rbp-C8h]
  int *v23; // [rsp+40h] [rbp-C0h]
  __int64 v24; // [rsp+48h] [rbp-B8h]
  char *v25; // [rsp+50h] [rbp-B0h]
  __int64 v26; // [rsp+58h] [rbp-A8h]
  char *v27; // [rsp+60h] [rbp-A0h]
  __int64 v28; // [rsp+68h] [rbp-98h]
  char *v29; // [rsp+70h] [rbp-90h]
  __int64 v30; // [rsp+78h] [rbp-88h]
  char *v31; // [rsp+80h] [rbp-80h]
  __int64 v32; // [rsp+88h] [rbp-78h]
  char *v33; // [rsp+90h] [rbp-70h]
  __int64 v34; // [rsp+98h] [rbp-68h]
  char *v35; // [rsp+A0h] [rbp-60h]
  __int64 v36; // [rsp+A8h] [rbp-58h]
  char *v37; // [rsp+B0h] [rbp-50h]
  __int64 v38; // [rsp+B8h] [rbp-48h]
  char *v39; // [rsp+C0h] [rbp-40h]
  __int64 v40; // [rsp+C8h] [rbp-38h]
  char *v41; // [rsp+D0h] [rbp-30h]
  __int64 v42; // [rsp+D8h] [rbp-28h]
  char *v43; // [rsp+E0h] [rbp-20h]
  __int64 v44; // [rsp+E8h] [rbp-18h]
  char *v45; // [rsp+F0h] [rbp-10h]
  __int64 v46; // [rsp+F8h] [rbp-8h]
  char *v47; // [rsp+100h] [rbp+0h]
  __int64 v48; // [rsp+108h] [rbp+8h]
  char *v49; // [rsp+110h] [rbp+10h]
  __int64 v50; // [rsp+118h] [rbp+18h]
  char *v51; // [rsp+120h] [rbp+20h]
  __int64 v52; // [rsp+128h] [rbp+28h]
  char *v53; // [rsp+130h] [rbp+30h]
  __int64 v54; // [rsp+138h] [rbp+38h]
  __int64 v55; // [rsp+170h] [rbp+70h] BYREF
  int v56; // [rsp+178h] [rbp+78h] BYREF

  v56 = a4;
  v55 = a3;
  v22 = 8LL;
  v21 = &v55;
  v24 = 4LL;
  v23 = &v56;
  v26 = 4LL;
  v25 = &a5;
  v28 = 4LL;
  v27 = &a6;
  v30 = 4LL;
  v29 = &a7;
  v31 = &a8;
  v33 = &a9;
  v35 = &a10;
  v37 = &a11;
  v39 = &a12;
  v41 = &a13;
  v43 = &a14;
  v45 = &a15;
  v47 = &a16;
  v49 = &a17;
  v51 = &a18;
  v53 = &a19;
  v32 = 4LL;
  v34 = 4LL;
  v36 = 4LL;
  v38 = 4LL;
  v40 = 4LL;
  v42 = 4LL;
  v44 = 4LL;
  v46 = 4LL;
  v48 = 4LL;
  v50 = 4LL;
  v52 = 4LL;
  v54 = 4LL;
  return McGenEventWriteUM(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_OVERLAY_CHECKSUPPORT, 0x12u, &v20);
}
