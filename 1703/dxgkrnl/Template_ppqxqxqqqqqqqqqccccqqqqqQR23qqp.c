/*
 * XREFs of Template_ppqxqxqqqqqqqqqccccqqqqqQR23qqp @ 0x1C001401C
 * Callers:
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0110684 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PE.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C016D848 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1C016EBE8 (-ReportState@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_ppqxqxqqqqqqqqqccccqqqqqQR23qqp(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
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
        int a25,
        char a26,
        int a27,
        int a28,
        char a29,
        char a30,
        char a31)
{
  int v32; // [rsp+30h] [rbp-D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-C0h] BYREF
  char *v34; // [rsp+50h] [rbp-B0h]
  __int64 v35; // [rsp+58h] [rbp-A8h]
  char *v36; // [rsp+60h] [rbp-A0h]
  __int64 v37; // [rsp+68h] [rbp-98h]
  char *v38; // [rsp+70h] [rbp-90h]
  __int64 v39; // [rsp+78h] [rbp-88h]
  char *v40; // [rsp+80h] [rbp-80h]
  __int64 v41; // [rsp+88h] [rbp-78h]
  char *v42; // [rsp+90h] [rbp-70h]
  __int64 v43; // [rsp+98h] [rbp-68h]
  char *v44; // [rsp+A0h] [rbp-60h]
  __int64 v45; // [rsp+A8h] [rbp-58h]
  char *v46; // [rsp+B0h] [rbp-50h]
  __int64 v47; // [rsp+B8h] [rbp-48h]
  char *v48; // [rsp+C0h] [rbp-40h]
  __int64 v49; // [rsp+C8h] [rbp-38h]
  char *v50; // [rsp+D0h] [rbp-30h]
  __int64 v51; // [rsp+D8h] [rbp-28h]
  char *v52; // [rsp+E0h] [rbp-20h]
  __int64 v53; // [rsp+E8h] [rbp-18h]
  char *v54; // [rsp+F0h] [rbp-10h]
  __int64 v55; // [rsp+F8h] [rbp-8h]
  char *v56; // [rsp+100h] [rbp+0h]
  __int64 v57; // [rsp+108h] [rbp+8h]
  char *v58; // [rsp+110h] [rbp+10h]
  __int64 v59; // [rsp+118h] [rbp+18h]
  char *v60; // [rsp+120h] [rbp+20h]
  __int64 v61; // [rsp+128h] [rbp+28h]
  char *v62; // [rsp+130h] [rbp+30h]
  __int64 v63; // [rsp+138h] [rbp+38h]
  char *v64; // [rsp+140h] [rbp+40h]
  __int64 v65; // [rsp+148h] [rbp+48h]
  char *v66; // [rsp+150h] [rbp+50h]
  __int64 v67; // [rsp+158h] [rbp+58h]
  char *v68; // [rsp+160h] [rbp+60h]
  __int64 v69; // [rsp+168h] [rbp+68h]
  char *v70; // [rsp+170h] [rbp+70h]
  __int64 v71; // [rsp+178h] [rbp+78h]
  char *v72; // [rsp+180h] [rbp+80h]
  __int64 v73; // [rsp+188h] [rbp+88h]
  int *v74; // [rsp+190h] [rbp+90h]
  __int64 v75; // [rsp+198h] [rbp+98h]
  char *v76; // [rsp+1A0h] [rbp+A0h]
  __int64 v77; // [rsp+1A8h] [rbp+A8h]
  int *v78; // [rsp+1B0h] [rbp+B0h]
  __int64 v79; // [rsp+1B8h] [rbp+B8h]
  __int64 v80; // [rsp+1C0h] [rbp+C0h]
  int v81; // [rsp+1C8h] [rbp+C8h]
  int v82; // [rsp+1CCh] [rbp+CCh]
  char *v83; // [rsp+1D0h] [rbp+D0h]
  __int64 v84; // [rsp+1D8h] [rbp+D8h]
  char *v85; // [rsp+1E0h] [rbp+E0h]
  __int64 v86; // [rsp+1E8h] [rbp+E8h]
  char *v87; // [rsp+1F0h] [rbp+F0h]
  __int64 v88; // [rsp+1F8h] [rbp+F8h]
  __int64 v89; // [rsp+248h] [rbp+148h] BYREF

  v89 = a4;
  UserData.Ptr = (ULONGLONG)&v89;
  v32 = 0;
  v34 = &a5;
  v36 = &a6;
  v38 = &a7;
  v40 = &a8;
  v42 = &a9;
  v44 = &a10;
  v46 = &a11;
  v48 = &a12;
  v50 = &a13;
  v52 = &a14;
  v54 = &a15;
  v56 = &a16;
  v58 = &a17;
  v60 = &a18;
  v62 = &a19;
  v64 = &a20;
  v66 = &a21;
  v68 = &a22;
  v70 = &a23;
  v72 = &a24;
  v74 = &v32;
  v76 = &a26;
  v78 = &a27;
  v81 = 4 * a27;
  *(_QWORD *)&UserData.Size = 8LL;
  v35 = 8LL;
  v37 = 4LL;
  v39 = 8LL;
  v41 = 4LL;
  v43 = 8LL;
  v45 = 4LL;
  v47 = 4LL;
  v49 = 4LL;
  v51 = 4LL;
  v53 = 4LL;
  v55 = 4LL;
  v57 = 4LL;
  v59 = 4LL;
  v61 = 4LL;
  v63 = 1LL;
  v65 = 1LL;
  v67 = 1LL;
  v69 = 1LL;
  v71 = 4LL;
  v73 = 4LL;
  v75 = 4LL;
  v77 = 4LL;
  v79 = 4LL;
  v80 = 0LL;
  v82 = 0;
  v83 = &a29;
  v84 = 4LL;
  v85 = &a30;
  v86 = 4LL;
  v87 = &a31;
  v88 = 8LL;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, a2, 0LL, 0x1Cu, &UserData);
}
