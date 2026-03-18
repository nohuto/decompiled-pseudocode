/*
 * XREFs of McTemplateK0pqqxpxqqqddddddddddddqqtq @ 0x1C00299F0
 * Callers:
 *     VidSchiExecuteMmIoFlip @ 0x1C000D930 (VidSchiExecuteMmIoFlip.c)
 *     ?VidSchiLogMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEBU_VIDSCH_CALL_EXECUTE_FLIP@@W4_VIDSCH_FLIP_STATUS@@@Z @ 0x1C0027964 (-VidSchiLogMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEBU_.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00161E0 (__security_check_cookie.c)
 *     McGenEventWriteKM @ 0x1C0023E78 (McGenEventWriteKM.c)
 */

NTSTATUS __fastcall McTemplateK0pqqxpxqqqddddddddddddqqtq(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
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
        char a19,
        char a20,
        char a21,
        char a22,
        char a23,
        char a24,
        char a25,
        char a26,
        char a27,
        char a28)
{
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v30; // [rsp+40h] [rbp-C0h]
  __int64 v31; // [rsp+48h] [rbp-B8h]
  char *v32; // [rsp+50h] [rbp-B0h]
  __int64 v33; // [rsp+58h] [rbp-A8h]
  char *v34; // [rsp+60h] [rbp-A0h]
  __int64 v35; // [rsp+68h] [rbp-98h]
  char *v36; // [rsp+70h] [rbp-90h]
  __int64 v37; // [rsp+78h] [rbp-88h]
  char *v38; // [rsp+80h] [rbp-80h]
  __int64 v39; // [rsp+88h] [rbp-78h]
  char *v40; // [rsp+90h] [rbp-70h]
  __int64 v41; // [rsp+98h] [rbp-68h]
  char *v42; // [rsp+A0h] [rbp-60h]
  __int64 v43; // [rsp+A8h] [rbp-58h]
  char *v44; // [rsp+B0h] [rbp-50h]
  __int64 v45; // [rsp+B8h] [rbp-48h]
  char *v46; // [rsp+C0h] [rbp-40h]
  __int64 v47; // [rsp+C8h] [rbp-38h]
  char *v48; // [rsp+D0h] [rbp-30h]
  __int64 v49; // [rsp+D8h] [rbp-28h]
  char *v50; // [rsp+E0h] [rbp-20h]
  __int64 v51; // [rsp+E8h] [rbp-18h]
  char *v52; // [rsp+F0h] [rbp-10h]
  __int64 v53; // [rsp+F8h] [rbp-8h]
  char *v54; // [rsp+100h] [rbp+0h]
  __int64 v55; // [rsp+108h] [rbp+8h]
  char *v56; // [rsp+110h] [rbp+10h]
  __int64 v57; // [rsp+118h] [rbp+18h]
  char *v58; // [rsp+120h] [rbp+20h]
  __int64 v59; // [rsp+128h] [rbp+28h]
  char *v60; // [rsp+130h] [rbp+30h]
  __int64 v61; // [rsp+138h] [rbp+38h]
  char *v62; // [rsp+140h] [rbp+40h]
  __int64 v63; // [rsp+148h] [rbp+48h]
  char *v64; // [rsp+150h] [rbp+50h]
  __int64 v65; // [rsp+158h] [rbp+58h]
  char *v66; // [rsp+160h] [rbp+60h]
  __int64 v67; // [rsp+168h] [rbp+68h]
  char *v68; // [rsp+170h] [rbp+70h]
  __int64 v69; // [rsp+178h] [rbp+78h]
  char *v70; // [rsp+180h] [rbp+80h]
  __int64 v71; // [rsp+188h] [rbp+88h]
  char *v72; // [rsp+190h] [rbp+90h]
  __int64 v73; // [rsp+198h] [rbp+98h]
  char *v74; // [rsp+1A0h] [rbp+A0h]
  __int64 v75; // [rsp+1A8h] [rbp+A8h]
  char *v76; // [rsp+1B0h] [rbp+B0h]
  __int64 v77; // [rsp+1B8h] [rbp+B8h]
  char *v78; // [rsp+1C0h] [rbp+C0h]
  __int64 v79; // [rsp+1C8h] [rbp+C8h]
  __int64 v80; // [rsp+208h] [rbp+108h] BYREF

  v80 = a4;
  v31 = 8LL;
  v30 = &v80;
  v33 = 4LL;
  v32 = &a5;
  v35 = 4LL;
  v34 = &a6;
  v37 = 8LL;
  v36 = &a7;
  v38 = &a8;
  v40 = &a9;
  v42 = &a10;
  v44 = &a11;
  v46 = &a12;
  v48 = &a13;
  v50 = &a14;
  v52 = &a15;
  v54 = &a16;
  v56 = &a17;
  v58 = &a18;
  v60 = &a19;
  v62 = &a20;
  v64 = &a21;
  v66 = &a22;
  v68 = &a23;
  v70 = &a24;
  v72 = &a25;
  v74 = &a26;
  v76 = &a27;
  v78 = &a28;
  v39 = 8LL;
  v41 = 8LL;
  v43 = 4LL;
  v45 = 4LL;
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
  return McGenEventWriteKM(&DxgkControlGuid_Context, &MMIOFlipMultiPlaneOverlay, a3, 0x1Au, &v29);
}
