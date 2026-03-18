/*
 * XREFs of McTemplateK0pqqxpxqqqddddddddddddqqtq @ 0x1C0021210
 * Callers:
 *     ?DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C00791B8 (-DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 * Callees:
 *     McGenEventWriteKM @ 0x1C000D744 (McGenEventWriteKM.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0pqqxpxqqqddddddddddddqqtq(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        int a8,
        char a9,
        int a10,
        int a11,
        int a12,
        char a13,
        char a14,
        char a15,
        char a16,
        char a17,
        char a18,
        char a19,
        char a20,
        char a21,
        char a22,
        char a23,
        char a24)
{
  int v25; // [rsp+30h] [rbp-D0h] BYREF
  int v26; // [rsp+38h] [rbp-C8h] BYREF
  int v27; // [rsp+40h] [rbp-C0h] BYREF
  int v28; // [rsp+48h] [rbp-B8h] BYREF
  int v29; // [rsp+50h] [rbp-B0h] BYREF
  int v30; // [rsp+58h] [rbp-A8h] BYREF
  int v31; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v32; // [rsp+68h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v33; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v34; // [rsp+80h] [rbp-80h]
  __int64 v35; // [rsp+88h] [rbp-78h]
  char *v36; // [rsp+90h] [rbp-70h]
  __int64 v37; // [rsp+98h] [rbp-68h]
  char *v38; // [rsp+A0h] [rbp-60h]
  __int64 v39; // [rsp+A8h] [rbp-58h]
  char *v40; // [rsp+B0h] [rbp-50h]
  __int64 v41; // [rsp+B8h] [rbp-48h]
  __int64 *v42; // [rsp+C0h] [rbp-40h]
  __int64 v43; // [rsp+C8h] [rbp-38h]
  char *v44; // [rsp+D0h] [rbp-30h]
  __int64 v45; // [rsp+D8h] [rbp-28h]
  int *v46; // [rsp+E0h] [rbp-20h]
  __int64 v47; // [rsp+E8h] [rbp-18h]
  int *v48; // [rsp+F0h] [rbp-10h]
  __int64 v49; // [rsp+F8h] [rbp-8h]
  int *v50; // [rsp+100h] [rbp+0h]
  __int64 v51; // [rsp+108h] [rbp+8h]
  char *v52; // [rsp+110h] [rbp+10h]
  __int64 v53; // [rsp+118h] [rbp+18h]
  char *v54; // [rsp+120h] [rbp+20h]
  __int64 v55; // [rsp+128h] [rbp+28h]
  char *v56; // [rsp+130h] [rbp+30h]
  __int64 v57; // [rsp+138h] [rbp+38h]
  char *v58; // [rsp+140h] [rbp+40h]
  __int64 v59; // [rsp+148h] [rbp+48h]
  char *v60; // [rsp+150h] [rbp+50h]
  __int64 v61; // [rsp+158h] [rbp+58h]
  char *v62; // [rsp+160h] [rbp+60h]
  __int64 v63; // [rsp+168h] [rbp+68h]
  char *v64; // [rsp+170h] [rbp+70h]
  __int64 v65; // [rsp+178h] [rbp+78h]
  char *v66; // [rsp+180h] [rbp+80h]
  __int64 v67; // [rsp+188h] [rbp+88h]
  char *v68; // [rsp+190h] [rbp+90h]
  __int64 v69; // [rsp+198h] [rbp+98h]
  char *v70; // [rsp+1A0h] [rbp+A0h]
  __int64 v71; // [rsp+1A8h] [rbp+A8h]
  char *v72; // [rsp+1B0h] [rbp+B0h]
  __int64 v73; // [rsp+1B8h] [rbp+B8h]
  char *v74; // [rsp+1C0h] [rbp+C0h]
  __int64 v75; // [rsp+1C8h] [rbp+C8h]
  int *v76; // [rsp+1D0h] [rbp+D0h]
  __int64 v77; // [rsp+1D8h] [rbp+D8h]
  int *v78; // [rsp+1E0h] [rbp+E0h]
  __int64 v79; // [rsp+1E8h] [rbp+E8h]
  int *v80; // [rsp+1F0h] [rbp+F0h]
  __int64 v81; // [rsp+1F8h] [rbp+F8h]
  int *v82; // [rsp+200h] [rbp+100h]
  __int64 v83; // [rsp+208h] [rbp+108h]
  __int64 v84; // [rsp+248h] [rbp+148h] BYREF

  v84 = a4;
  v35 = 8LL;
  v31 = 0;
  v34 = &v84;
  v36 = &a5;
  v38 = &a6;
  v40 = &a7;
  v42 = &v32;
  v44 = &a9;
  v46 = &v25;
  v48 = &v26;
  v50 = &v27;
  v52 = &a13;
  v54 = &a14;
  v56 = &a15;
  v58 = &a16;
  v60 = &a17;
  v62 = &a18;
  v64 = &a19;
  v66 = &a20;
  v68 = &a21;
  v70 = &a22;
  v72 = &a23;
  v74 = &a24;
  v76 = &v28;
  v78 = &v29;
  v80 = &v30;
  v30 = 0;
  v29 = 0;
  v28 = 0;
  v27 = 0;
  v26 = 0;
  v25 = 0;
  v32 = 0LL;
  v37 = 4LL;
  v39 = 4LL;
  v41 = 8LL;
  v43 = 8LL;
  v45 = 8LL;
  v47 = 4LL;
  v49 = 4LL;
  v51 = 4LL;
  v53 = 4LL;
  v55 = 4LL;
  v57 = 4LL;
  v59 = 4LL;
  v61 = 4LL;
  v63 = 4LL;
  v65 = 4LL;
  v67 = 4LL;
  v69 = 4LL;
  v71 = 4LL;
  v73 = 4LL;
  v75 = 4LL;
  v77 = 4LL;
  v79 = 4LL;
  v81 = 4LL;
  v83 = 4LL;
  v82 = &v31;
  return McGenEventWriteKM(&DxgkControlGuid_Context, &MMIOFlipMultiPlaneOverlay, 0LL, 0x1Au, &v33);
}
