/*
 * XREFs of Template_qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx @ 0x180140CD0
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800666B0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x180067C20 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 *     ?Trace@CFrameInfo@@QEAAXK_K00@Z @ 0x18013433C (-Trace@CFrameInfo@@QEAAXK_K00@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

ULONG __fastcall Template_qxqxxxqxxxxqxxxxxxxxxxqqqxqxxxx(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8,
        __int64 a9,
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
        char a28,
        char a29,
        char a30,
        __int64 a31,
        __int64 a32,
        __int64 a33)
{
  int v34; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v35; // [rsp+28h] [rbp-D8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v37; // [rsp+40h] [rbp-C0h]
  __int64 v38; // [rsp+48h] [rbp-B8h]
  char *v39; // [rsp+50h] [rbp-B0h]
  __int64 v40; // [rsp+58h] [rbp-A8h]
  char *v41; // [rsp+60h] [rbp-A0h]
  __int64 v42; // [rsp+68h] [rbp-98h]
  char *v43; // [rsp+70h] [rbp-90h]
  __int64 v44; // [rsp+78h] [rbp-88h]
  char *v45; // [rsp+80h] [rbp-80h]
  __int64 v46; // [rsp+88h] [rbp-78h]
  int *v47; // [rsp+90h] [rbp-70h]
  __int64 v48; // [rsp+98h] [rbp-68h]
  char *v49; // [rsp+A0h] [rbp-60h]
  __int64 v50; // [rsp+A8h] [rbp-58h]
  char *v51; // [rsp+B0h] [rbp-50h]
  __int64 v52; // [rsp+B8h] [rbp-48h]
  char *v53; // [rsp+C0h] [rbp-40h]
  __int64 v54; // [rsp+C8h] [rbp-38h]
  char *v55; // [rsp+D0h] [rbp-30h]
  __int64 v56; // [rsp+D8h] [rbp-28h]
  char *v57; // [rsp+E0h] [rbp-20h]
  __int64 v58; // [rsp+E8h] [rbp-18h]
  char *v59; // [rsp+F0h] [rbp-10h]
  __int64 v60; // [rsp+F8h] [rbp-8h]
  char *v61; // [rsp+100h] [rbp+0h]
  __int64 v62; // [rsp+108h] [rbp+8h]
  char *v63; // [rsp+110h] [rbp+10h]
  __int64 v64; // [rsp+118h] [rbp+18h]
  char *v65; // [rsp+120h] [rbp+20h]
  __int64 v66; // [rsp+128h] [rbp+28h]
  char *v67; // [rsp+130h] [rbp+30h]
  __int64 v68; // [rsp+138h] [rbp+38h]
  char *v69; // [rsp+140h] [rbp+40h]
  __int64 v70; // [rsp+148h] [rbp+48h]
  char *v71; // [rsp+150h] [rbp+50h]
  __int64 v72; // [rsp+158h] [rbp+58h]
  char *v73; // [rsp+160h] [rbp+60h]
  __int64 v74; // [rsp+168h] [rbp+68h]
  char *v75; // [rsp+170h] [rbp+70h]
  __int64 v76; // [rsp+178h] [rbp+78h]
  char *v77; // [rsp+180h] [rbp+80h]
  __int64 v78; // [rsp+188h] [rbp+88h]
  char *v79; // [rsp+190h] [rbp+90h]
  __int64 v80; // [rsp+198h] [rbp+98h]
  char *v81; // [rsp+1A0h] [rbp+A0h]
  __int64 v82; // [rsp+1A8h] [rbp+A8h]
  char *v83; // [rsp+1B0h] [rbp+B0h]
  __int64 v84; // [rsp+1B8h] [rbp+B8h]
  char *v85; // [rsp+1C0h] [rbp+C0h]
  __int64 v86; // [rsp+1C8h] [rbp+C8h]
  char *v87; // [rsp+1D0h] [rbp+D0h]
  __int64 v88; // [rsp+1D8h] [rbp+D8h]
  char *v89; // [rsp+1E0h] [rbp+E0h]
  __int64 v90; // [rsp+1E8h] [rbp+E8h]
  __int64 *v91; // [rsp+1F0h] [rbp+F0h]
  __int64 v92; // [rsp+1F8h] [rbp+F8h]
  __int64 *v93; // [rsp+200h] [rbp+100h]
  __int64 v94; // [rsp+208h] [rbp+108h]
  __int64 *v95; // [rsp+210h] [rbp+110h]
  __int64 v96; // [rsp+218h] [rbp+118h]
  int v97; // [rsp+260h] [rbp+160h] BYREF
  __int64 v98; // [rsp+268h] [rbp+168h] BYREF

  v98 = a4;
  v97 = a3;
  v34 = 1;
  UserData.Ptr = (ULONGLONG)&v97;
  a33 = 0LL;
  v37 = &v98;
  v39 = &a5;
  v41 = &a6;
  v43 = &a7;
  v45 = &a8;
  v47 = &v34;
  v49 = &a10;
  v51 = &a11;
  v53 = &a12;
  v55 = &a13;
  v57 = &a14;
  v59 = &a15;
  v61 = &a16;
  v63 = &a17;
  v65 = &a18;
  v67 = &a19;
  v69 = &a20;
  v71 = &a21;
  v73 = &a22;
  v75 = &a23;
  v77 = &a24;
  v79 = &a25;
  v81 = &a26;
  v83 = &a27;
  a32 = 0LL;
  v35 = 0LL;
  *(_QWORD *)&UserData.Size = 4LL;
  v38 = 8LL;
  v40 = 4LL;
  v42 = 8LL;
  v44 = 8LL;
  v46 = 8LL;
  v48 = 4LL;
  v50 = 8LL;
  v52 = 8LL;
  v54 = 8LL;
  v56 = 8LL;
  v58 = 4LL;
  v60 = 8LL;
  v62 = 8LL;
  v64 = 8LL;
  v66 = 8LL;
  v68 = 8LL;
  v70 = 8LL;
  v72 = 8LL;
  v74 = 8LL;
  v76 = 8LL;
  v78 = 8LL;
  v80 = 4LL;
  v82 = 4LL;
  v84 = 4LL;
  v85 = &a28;
  v86 = 8LL;
  v87 = &a29;
  v88 = 4LL;
  v89 = &a30;
  v91 = &v35;
  v93 = &a32;
  v95 = &a33;
  v90 = 8LL;
  v92 = 8LL;
  v94 = 8LL;
  v96 = 8LL;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_SCHEDULE_FRAMEINFO, 0x1Fu, &UserData);
}
