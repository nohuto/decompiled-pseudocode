/*
 * XREFs of McTemplateK0ppqqxqqqqqqqDR11DR11DR11DR11qqqqqqqqqq @ 0x1C0015AAC
 * Callers:
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAVDXGADAPTER@@I@Z @ 0x1C00CD300 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 * Callees:
 *     McGenEventWriteKM @ 0x1C000D744 (McGenEventWriteKM.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0ppqqxqqqqqqqDR11DR11DR11DR11qqqqqqqqqq(
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
        int a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19,
        char a20,
        char a21,
        char a22,
        char a23,
        char a24,
        char a25,
        char a26,
        char a27,
        char a28,
        char a29)
{
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v31; // [rsp+40h] [rbp-C0h]
  __int64 v32; // [rsp+48h] [rbp-B8h]
  char *v33; // [rsp+50h] [rbp-B0h]
  __int64 v34; // [rsp+58h] [rbp-A8h]
  char *v35; // [rsp+60h] [rbp-A0h]
  __int64 v36; // [rsp+68h] [rbp-98h]
  char *v37; // [rsp+70h] [rbp-90h]
  __int64 v38; // [rsp+78h] [rbp-88h]
  char *v39; // [rsp+80h] [rbp-80h]
  __int64 v40; // [rsp+88h] [rbp-78h]
  char *v41; // [rsp+90h] [rbp-70h]
  __int64 v42; // [rsp+98h] [rbp-68h]
  char *v43; // [rsp+A0h] [rbp-60h]
  __int64 v44; // [rsp+A8h] [rbp-58h]
  char *v45; // [rsp+B0h] [rbp-50h]
  __int64 v46; // [rsp+B8h] [rbp-48h]
  char *v47; // [rsp+C0h] [rbp-40h]
  __int64 v48; // [rsp+C8h] [rbp-38h]
  char *v49; // [rsp+D0h] [rbp-30h]
  __int64 v50; // [rsp+D8h] [rbp-28h]
  char *v51; // [rsp+E0h] [rbp-20h]
  __int64 v52; // [rsp+E8h] [rbp-18h]
  int *v53; // [rsp+F0h] [rbp-10h]
  __int64 v54; // [rsp+F8h] [rbp-8h]
  __int64 v55; // [rsp+100h] [rbp+0h]
  int v56; // [rsp+108h] [rbp+8h]
  int v57; // [rsp+10Ch] [rbp+Ch]
  __int64 v58; // [rsp+110h] [rbp+10h]
  int v59; // [rsp+118h] [rbp+18h]
  int v60; // [rsp+11Ch] [rbp+1Ch]
  __int64 v61; // [rsp+120h] [rbp+20h]
  int v62; // [rsp+128h] [rbp+28h]
  int v63; // [rsp+12Ch] [rbp+2Ch]
  __int64 v64; // [rsp+130h] [rbp+30h]
  int v65; // [rsp+138h] [rbp+38h]
  int v66; // [rsp+13Ch] [rbp+3Ch]
  char *v67; // [rsp+140h] [rbp+40h]
  __int64 v68; // [rsp+148h] [rbp+48h]
  char *v69; // [rsp+150h] [rbp+50h]
  __int64 v70; // [rsp+158h] [rbp+58h]
  char *v71; // [rsp+160h] [rbp+60h]
  __int64 v72; // [rsp+168h] [rbp+68h]
  char *v73; // [rsp+170h] [rbp+70h]
  __int64 v74; // [rsp+178h] [rbp+78h]
  char *v75; // [rsp+180h] [rbp+80h]
  __int64 v76; // [rsp+188h] [rbp+88h]
  char *v77; // [rsp+190h] [rbp+90h]
  __int64 v78; // [rsp+198h] [rbp+98h]
  char *v79; // [rsp+1A0h] [rbp+A0h]
  __int64 v80; // [rsp+1A8h] [rbp+A8h]
  char *v81; // [rsp+1B0h] [rbp+B0h]
  __int64 v82; // [rsp+1B8h] [rbp+B8h]
  char *v83; // [rsp+1C0h] [rbp+C0h]
  __int64 v84; // [rsp+1C8h] [rbp+C8h]
  char *v85; // [rsp+1D0h] [rbp+D0h]
  __int64 v86; // [rsp+1D8h] [rbp+D8h]
  __int64 v87; // [rsp+218h] [rbp+118h] BYREF

  v87 = a4;
  v31 = &v87;
  v33 = &a5;
  v35 = &a6;
  v37 = &a7;
  v39 = &a8;
  v41 = &a9;
  v43 = &a10;
  v45 = &a11;
  v47 = &a12;
  v49 = &a13;
  v51 = &a14;
  v53 = &a15;
  v55 = a16;
  v58 = a17;
  v61 = a18;
  v64 = a19;
  v67 = &a20;
  v69 = &a21;
  v71 = &a22;
  v73 = &a23;
  v75 = &a24;
  v77 = &a25;
  v79 = &a26;
  v81 = &a27;
  v83 = &a28;
  v32 = 8LL;
  v34 = 8LL;
  v36 = 4LL;
  v38 = 4LL;
  v40 = 8LL;
  v42 = 4LL;
  v44 = 4LL;
  v46 = 4LL;
  v48 = 4LL;
  v50 = 4LL;
  v52 = 4LL;
  v54 = 4LL;
  v56 = 4 * a15;
  v57 = 0;
  v59 = 4 * a15;
  v60 = 0;
  v62 = 4 * a15;
  v63 = 0;
  v65 = 4 * a15;
  v66 = 0;
  v68 = 4LL;
  v70 = 4LL;
  v72 = 4LL;
  v74 = 4LL;
  v76 = 4LL;
  v78 = 4LL;
  v80 = 4LL;
  v82 = 4LL;
  v84 = 4LL;
  v85 = &a29;
  v86 = 4LL;
  return McGenEventWriteKM(&DxgkControlGuid_Context, &EventSubmitPresentHistoryDetailed, 0LL, 0x1Bu, &v30);
}
