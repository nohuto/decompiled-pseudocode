/*
 * XREFs of ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C0114098
 * Callers:
 *     ?CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z @ 0x1C0118708 (-CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C00084EC (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C000C6E8 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000CD1C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     IsInternalVideoOutput @ 0x1C000CD50 (IsInternalVideoOutput.c)
 *     ??1?$AutoBuffer@I@DMM@@UEAA@XZ @ 0x1C0010C10 (--1-$AutoBuffer@I@DMM@@UEAA@XZ.c)
 *     ??0DXGDIAGNOSTICS@@QEAA@IW4_POOL_TYPE@@@Z @ 0x1C0010F74 (--0DXGDIAGNOSTICS@@QEAA@IW4_POOL_TYPE@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C0010FE8 (-reset@-$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z.c)
 *     ??0DMMVIDEOPRESENTTARGETSET@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0011B90 (--0DMMVIDEOPRESENTTARGETSET@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0DMMVIDEOPRESENTSOURCESET@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0011EFC (--0DMMVIDEOPRESENTSOURCESET@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_ReadConfiguration@VIDPN_MGR@@AEAAJXZ @ 0x1C01135F8 (-_ReadConfiguration@VIDPN_MGR@@AEAAJXZ.c)
 *     ?_InitializeDmmClientInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x1C0113C1C (-_InitializeDmmClientInterfaces@VIDPN_MGR@@AEAAJXZ.c)
 *     ?_InitializeVidPnMiniportInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x1C0113E0C (-_InitializeVidPnMiniportInterfaces@VIDPN_MGR@@AEAAJXZ.c)
 *     ?_InitializeDxgPortDmmInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x1C0113F28 (-_InitializeDxgPortDmmInterfaces@VIDPN_MGR@@AEAAJXZ.c)
 *     ?_ReadTargetPriorityList@VIDPN_MGR@@AEAAJQEAXPEBU_UNICODE_STRING@@PEAV?$AutoBuffer@I@DMM@@@Z @ 0x1C0113FF8 (-_ReadTargetPriorityList@VIDPN_MGR@@AEAAJQEAXPEBU_UNICODE_STRING@@PEAV-$AutoBuffer@I@DMM@@@Z.c)
 *     DpiReadPnpRegistryValue @ 0x1C01147D0 (DpiReadPnpRegistryValue.c)
 *     DpiOpenPnpRegistryKey @ 0x1C01148F0 (DpiOpenPnpRegistryKey.c)
 *     ?_CreateAndInsertMonitorEventHandler@MONITOR_MGR@@QEAAJP6AJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z0PEAPEAUHDXGMONITOREVENT__@@@Z @ 0x1C0115414 (-_CreateAndInsertMonitorEventHandler@MONITOR_MGR@@QEAAJP6AJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN.c)
 *     ?DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z @ 0x1C011CA40 (-DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z.c)
 *     ??0Lockable@@QEAA@XZ @ 0x1C0122994 (--0Lockable@@QEAA@XZ.c)
 */

VIDPN_MGR *__fastcall VIDPN_MGR::VIDPN_MGR(VIDPN_MGR *this, struct ADAPTER_DISPLAY *const a2)
{
  DXGDIAGNOSTICS *v2; // rsi
  VIDPN_MGR *v3; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  void **v8; // rcx
  char *v9; // r12
  char *v10; // r15
  DMMVIDEOPRESENTSOURCESET *v11; // rax
  DMMVIDEOPRESENTSOURCESET *v12; // rax
  __int64 v13; // rcx
  DMMVIDEOPRESENTTARGETSET *v14; // rax
  DMMVIDEOPRESENTTARGETSET *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int (__high *v19)(void *, unsigned int, void *, enum MONITOR_EVENT, unsigned __int64, enum _DMM_VIDPN_MONITOR_TYPE, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *); // rdx
  __int64 v20; // rcx
  __int64 v21; // r14
  __int64 v22; // r8
  __int64 v23; // r9
  _QWORD *v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // r13d
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rcx
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // r15
  __int64 v49; // rcx
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // r15
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // r14
  __int64 v69; // rdx
  void *v70; // r8
  __int64 v71; // r9
  __int64 v72; // rbx
  _QWORD *v73; // r14
  MONITOR_MGR *v74; // rcx
  int inserted; // ebx
  DXGDIAGNOSTICS *v76; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // rbx
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // r14
  __int64 v97; // rax
  __int64 v98; // rdx
  __int64 v99; // rax
  HANDLE v100; // rcx
  void ***v101; // rcx
  __int64 v102; // rax
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // r9
  __int64 v107; // r14
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // r8
  __int64 v113; // r9
  __int64 v114; // r14
  _QWORD *v115; // rbx
  __int64 v116; // r8
  __int64 v117; // r9
  __int64 v118; // rcx
  __int64 v119; // rdx
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // r8
  __int64 v125; // r9
  unsigned __int64 v126; // r15
  __int64 v127; // rax
  unsigned __int64 v128; // r15
  unsigned int v129; // r12d
  __int64 v130; // rdi
  __int64 v131; // r14
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v133; // rdx
  __int64 v134; // rcx
  __int64 v135; // r8
  __int64 v136; // r9
  struct DMMVIDEOPRESENTTARGET *v137; // r13
  __int64 v138; // rax
  __int64 v139; // rax
  __int64 v140; // rax
  _QWORD *v141; // r14
  unsigned int *i; // r14
  __int64 v143; // rax
  __int64 v144; // rdx
  __int64 v145; // rcx
  __int64 v146; // r8
  __int64 v147; // r9
  __int64 v148; // r14
  unsigned __int64 v149; // r15
  __int64 v150; // rax
  unsigned __int64 v151; // r15
  unsigned int v152; // r12d
  __int64 v153; // rdi
  __int64 v154; // r14
  struct DMMVIDEOPRESENTTARGET *v155; // rax
  __int64 v156; // rdx
  __int64 v157; // rcx
  __int64 v158; // r8
  __int64 v159; // r9
  struct DMMVIDEOPRESENTTARGET *v160; // r13
  __int64 v161; // rax
  __int64 v162; // rax
  __int64 v163; // rax
  __int64 v164; // rdx
  __int64 v165; // rcx
  __int64 v166; // r8
  __int64 v167; // r9
  __int64 v168; // r14
  __int64 v169; // rax
  HANDLE v170; // rcx
  __int64 v171; // rax
  __int64 v172; // r14
  __int64 v173; // rdx
  __int64 v174; // rcx
  __int64 v175; // r8
  __int64 v176; // r9
  __int64 v177; // rdx
  __int64 v178; // rcx
  __int64 v179; // r8
  __int64 v180; // r9
  __int64 v181; // r15
  __int64 v182; // rax
  __int64 v183; // rdx
  __int64 v184; // rcx
  __int64 v185; // r8
  __int64 v186; // r9
  __int64 v187; // r15
  __int64 v188; // rax
  __int64 v189; // rax
  __int64 v190; // rax
  __int64 v191; // rax
  __int64 v192; // rdx
  __int64 v193; // rcx
  __int64 v194; // r8
  __int64 v195; // r9
  __int64 v196; // r14
  __int64 v197; // rax
  __int64 v198; // rax
  unsigned int v199; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  VIDPN_MGR *v201; // [rsp+50h] [rbp-B0h]
  _QWORD *InputBuffer; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v203; // [rsp+60h] [rbp-A0h]
  _QWORD *v204; // [rsp+68h] [rbp-98h] BYREF
  __int64 v205; // [rsp+70h] [rbp-90h]
  struct _UNICODE_STRING v206; // [rsp+78h] [rbp-88h] BYREF
  struct _UNICODE_STRING v207; // [rsp+88h] [rbp-78h] BYREF
  void **v208; // [rsp+98h] [rbp-68h] BYREF
  __int128 v209; // [rsp+A0h] [rbp-60h]
  void **v210; // [rsp+B0h] [rbp-50h]
  __int64 v211; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v212; // [rsp+C0h] [rbp-40h]
  int v213; // [rsp+C8h] [rbp-38h]
  void **v214; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v215; // [rsp+D8h] [rbp-28h]
  void **v216; // [rsp+E8h] [rbp-18h]
  __int64 v217; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v218; // [rsp+F8h] [rbp-8h]
  int v219; // [rsp+100h] [rbp+0h]
  _OWORD v220[2]; // [rsp+108h] [rbp+8h] BYREF
  int v221; // [rsp+128h] [rbp+28h]
  wchar_t v222; // [rsp+12Ch] [rbp+2Ch]
  _OWORD v223[3]; // [rsp+130h] [rbp+30h] BYREF

  v201 = this;
  v2 = 0LL;
  *(_QWORD *)this = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  v3 = this;
  Lockable::Lockable((VIDPN_MGR *)((char *)this + 16));
  *((_DWORD *)v3 + 14) = 0;
  *(_QWORD *)v3 = &VIDPN_MGR::`vftable'{for `ContainedBy<ADAPTER_DISPLAY>'};
  v8 = &DoublyLinkedList<DMMVIDPN>::`vftable';
  *((_QWORD *)v3 + 2) = &VIDPN_MGR::`vftable'{for `Lockable'};
  v9 = (char *)v3 + 72;
  *((_QWORD *)v3 + 6) = &VIDPN_MGR::`vftable'{for `FallibleConstruction'};
  v10 = (char *)v3 + 80;
  *((_QWORD *)v3 + 9) = 0LL;
  *((_QWORD *)v3 + 10) = 0LL;
  *((_QWORD *)v3 + 11) = 0LL;
  *((_QWORD *)v3 + 12) = &Set<DMMVIDPN>::`vftable';
  *((_DWORD *)v3 + 28) = 0;
  *((_QWORD *)v3 + 13) = &DoublyLinkedList<DMMVIDPN>::`vftable';
  *((_QWORD *)v3 + 17) = 0LL;
  *((_QWORD *)v3 + 16) = (char *)v3 + 120;
  *((_QWORD *)v3 + 15) = (char *)v3 + 120;
  *((_DWORD *)v3 + 36) = 2;
  *((_QWORD *)v3 + 19) = &Queue<VIDPN_MGR::COMMITVIDPNREQUEST>::`vftable';
  *((_QWORD *)v3 + 20) = &DoublyLinkedList<VIDPN_MGR::COMMITVIDPNREQUEST>::`vftable';
  *((_DWORD *)v3 + 42) = 0;
  *((_QWORD *)v3 + 24) = 0LL;
  *((_QWORD *)v3 + 23) = (char *)v3 + 176;
  *((_QWORD *)v3 + 22) = (char *)v3 + 176;
  *((_DWORD *)v3 + 50) = 2;
  *((_QWORD *)v3 + 26) = 30LL;
  *((_QWORD *)v3 + 27) = &Set<DMMVIDPN>::`vftable';
  *((_DWORD *)v3 + 58) = 0;
  *((_QWORD *)v3 + 28) = &DoublyLinkedList<DMMVIDPN>::`vftable';
  *((_QWORD *)v3 + 32) = 0LL;
  *((_QWORD *)v3 + 31) = (char *)v3 + 240;
  *((_QWORD *)v3 + 30) = (char *)v3 + 240;
  *((_DWORD *)v3 + 66) = 2;
  *((_QWORD *)v3 + 34) = 5LL;
  *((_QWORD *)v3 + 35) = &Queue<VIDPN_MGR::COMMITVIDPNREQUEST>::`vftable';
  *((_QWORD *)v3 + 36) = &DoublyLinkedList<VIDPN_MGR::COMMITVIDPNREQUEST>::`vftable';
  *((_DWORD *)v3 + 74) = 0;
  *((_QWORD *)v3 + 40) = 0LL;
  *((_QWORD *)v3 + 39) = (char *)v3 + 304;
  *((_QWORD *)v3 + 38) = (char *)v3 + 304;
  *((_DWORD *)v3 + 82) = 2;
  *((_QWORD *)v3 + 42) = 40LL;
  *((_QWORD *)v3 + 43) = 0LL;
  *((_QWORD *)v3 + 44) = 0LL;
  *((_QWORD *)v3 + 45) = 0LL;
  *((_QWORD *)v3 + 46) = 0LL;
  *((_QWORD *)v3 + 47) = 0LL;
  *((_QWORD *)v3 + 48) = 0LL;
  *((_QWORD *)v3 + 49) = 0LL;
  *((_QWORD *)v3 + 50) = 0LL;
  *((_QWORD *)v3 + 51) = 0LL;
  *((_QWORD *)v3 + 52) = 0LL;
  *((_QWORD *)v3 + 53) = 0LL;
  *((_QWORD *)v3 + 54) = 0LL;
  *((_QWORD *)v3 + 55) = 0LL;
  *((_QWORD *)v3 + 56) = 0LL;
  *((_BYTE *)v3 + 456) = 0;
  *((_QWORD *)v3 + 58) = 0LL;
  *((_DWORD *)v3 + 118) = 0;
  *((_QWORD *)v3 + 62) = 0LL;
  *((_DWORD *)v3 + 121) = -1;
  *((_DWORD *)v3 + 122) = -1;
  if ( !a2 )
  {
    v78 = WdLogNewEntry5_WdAssertion(&DoublyLinkedList<DMMVIDPN>::`vftable', v5, v6, v7);
    WdLogEvent5_WdAssertion(v78);
  }
  *((_DWORD *)v3 + 16) = 1;
  if ( a2 )
  {
    if ( *((_QWORD *)v3 + 1) )
    {
      v80 = WdLogNewEntry5_WdAssertion(v8, v5, v6, v7);
      WdLogEvent5_WdAssertion(v80);
    }
    *((_QWORD *)v3 + 1) = a2;
  }
  else
  {
    v79 = WdLogNewEntry5_WdError(v8, v5);
    *(_QWORD *)(v79 + 24) = v3;
    *(_QWORD *)(v79 + 32) = *((_QWORD *)v3 + 1);
    WdLogEvent5_WdError(v79);
  }
  if ( *((_DWORD *)v3 + 8) != 2 )
  {
    v81 = WdLogNewEntry5_WdError(v8, v5);
    *(_QWORD *)(v81 + 24) = v3;
    WdLogEvent5_WdError(v81);
    *((_DWORD *)v3 + 14) = *((_DWORD *)v3 + 6);
    return v3;
  }
  v11 = (DMMVIDEOPRESENTSOURCESET *)operator new(0x70uLL, 0x4E506456u, PagedPool);
  if ( v11 )
    v12 = DMMVIDEOPRESENTSOURCESET::DMMVIDEOPRESENTSOURCESET(v11, v3);
  else
    v12 = 0LL;
  auto_rc<DMMVIDEOPRESENTTARGETSET>::reset((__int64 *)v3 + 9, (__int64)v12);
  if ( !*(_QWORD *)v9
    || ((v14 = (DMMVIDEOPRESENTTARGETSET *)operator new(0x80uLL, 0x4E506456u, PagedPool)) == 0LL
      ? (v15 = 0LL)
      : (v15 = DMMVIDEOPRESENTTARGETSET::DMMVIDEOPRESENTTARGETSET(v14, v3)),
        auto_rc<DMMVIDEOPRESENTTARGETSET>::reset((__int64 *)v3 + 10, (__int64)v15),
        !*(_QWORD *)v10) )
  {
    v82 = WdLogNewEntry5_WdLowResource(v13);
    WdLogEvent5_WdLowResource(v82);
    *((_DWORD *)v3 + 14) = -1073741801;
    return v3;
  }
  LODWORD(v21) = VIDPN_MGR::_ReadConfiguration((unsigned __int64)v3, v16, v17, v18);
  if ( (int)v21 < 0
    || (LODWORD(v21) = VIDPN_MGR::_InitializeDxgPortDmmInterfaces(v3), (int)v21 < 0)
    || (LODWORD(v21) = VIDPN_MGR::_InitializeVidPnMiniportInterfaces(v3), (int)v21 < 0) )
  {
LABEL_70:
    v85 = WdLogNewEntry5_WdError(v20, v19);
    if ( !*((_QWORD *)v3 + 1) )
    {
      v88 = WdLogNewEntry5_WdAssertion(v84, v83, v86, v87);
      WdLogEvent5_WdAssertion(v88);
    }
    v89 = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
LABEL_74:
    *(_QWORD *)(v85 + 24) = v89;
    WdLogEvent5_WdError(v85);
    *((_DWORD *)v3 + 14) = v21;
    return v3;
  }
  _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)v9 + 72LL), 1u);
  v24 = *(_QWORD **)v9;
  v203 = 0LL;
  if ( v24 == (_QWORD *)-112LL )
    InputBuffer = 0LL;
  else
    InputBuffer = v24;
  v203 = *((_QWORD *)v3 + 43);
  if ( !*((_QWORD *)v3 + 1) )
  {
    v91 = WdLogNewEntry5_WdAssertion(v20, v19, v22, v23);
    WdLogEvent5_WdAssertion(v91);
  }
  v27 = DxgkCallDriverIoControl(
          *(PDEVICE_OBJECT *)(*(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL) + 192LL),
          0x23204Fu,
          &InputBuffer,
          0x10u,
          0LL,
          0,
          1u,
          0LL);
  if ( v27 < 0 )
    goto LABEL_76;
  if ( !v24[5] )
  {
    v107 = WdLogNewEntry5_WdError(v26, v25);
    if ( !*((_QWORD *)v3 + 1) )
    {
      v108 = WdLogNewEntry5_WdAssertion(v104, v103, v105, v106);
      WdLogEvent5_WdAssertion(v108);
    }
    *(_QWORD *)(v107 + 24) = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
    WdLogEvent5_WdError(v107);
    *((_DWORD *)v3 + 14) = -1071774936;
    goto LABEL_84;
  }
  ReferenceCounted::Release((ReferenceCounted *)(v24 + 8), v25);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v10 + 72LL));
  v24 = *(_QWORD **)v10;
  v205 = 0LL;
  if ( v24 == (_QWORD *)-112LL )
    v204 = 0LL;
  else
    v204 = v24;
  v205 = *((_QWORD *)v3 + 44);
  if ( !*((_QWORD *)v3 + 1) )
  {
    v109 = WdLogNewEntry5_WdAssertion(v29, v28, v30, v31);
    WdLogEvent5_WdAssertion(v109);
  }
  v27 = DxgkCallDriverIoControl(
          *(PDEVICE_OBJECT *)(*(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL) + 192LL),
          0x232053u,
          &v204,
          0x10u,
          0LL,
          0,
          1u,
          0LL);
  if ( v27 < 0 )
  {
LABEL_76:
    v96 = WdLogNewEntry5_WdError(v26, v25);
    if ( !*((_QWORD *)v3 + 1) )
    {
      v97 = WdLogNewEntry5_WdAssertion(v93, v92, v94, v95);
      WdLogEvent5_WdAssertion(v97);
    }
    *(_QWORD *)(v96 + 24) = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
    WdLogEvent5_WdError(v96);
    *((_DWORD *)v3 + 14) = v27;
LABEL_81:
    if ( !v24 )
      return v3;
LABEL_84:
    ReferenceCounted::Release((ReferenceCounted *)(v24 + 8), v98);
    return v3;
  }
  if ( !v24[5] )
  {
    v114 = WdLogNewEntry5_WdError(v26, v25);
    if ( !*((_QWORD *)v3 + 1) )
    {
      v102 = WdLogNewEntry5_WdAssertion(v111, v110, v112, v113);
      WdLogEvent5_WdAssertion(v102);
    }
    *(_QWORD *)(v114 + 24) = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
    WdLogEvent5_WdError(v114);
    *((_DWORD *)v3 + 14) = -1071774935;
    goto LABEL_84;
  }
  NextTarget = (const struct DMMVIDEOPRESENTTARGET *)v24[3];
  if ( NextTarget == (const struct DMMVIDEOPRESENTTARGET *)(v24 + 3) )
    goto LABEL_34;
  NextTarget = (const struct DMMVIDEOPRESENTTARGET *)((char *)NextTarget - 8);
  if ( !NextTarget )
    goto LABEL_34;
  do
  {
    if ( IsInternalVideoOutput(*((_DWORD *)NextTarget + 20)) )
      break;
    NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v24, NextTarget, v33, v34);
  }
  while ( NextTarget );
  if ( NextTarget )
    v35 = *((_DWORD *)NextTarget + 6);
  else
LABEL_34:
    v35 = -1;
  *((_DWORD *)v3 + 122) = v35;
  ReferenceCounted::Release((ReferenceCounted *)(v24 + 8), (__int64)NextTarget);
  v39 = *(_QWORD *)v10;
  if ( *(_QWORD *)(*(_QWORD *)v10 + 40LL) >= *(_QWORD *)(*(_QWORD *)v9 + 40LL) )
  {
    if ( !*((_QWORD *)v3 + 1) )
    {
      v121 = WdLogNewEntry5_WdAssertion(v39, v36, v37, v38);
      WdLogEvent5_WdAssertion(v121);
    }
    v40 = DpiOpenPnpRegistryKey(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL) + 192LL), 1LL, 131097LL, &Handle);
    v21 = v40;
    if ( v40 < 0 )
    {
      v85 = WdLogNewEntry5_WdError(v42, v41);
      if ( !*((_QWORD *)v3 + 1) )
      {
        v90 = WdLogNewEntry5_WdAssertion(v123, v122, v124, v125);
        WdLogEvent5_WdAssertion(v90);
      }
      v89 = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
      *(_QWORD *)(v85 + 32) = v21;
      goto LABEL_74;
    }
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v10 + 72LL));
    v24 = *(_QWORD **)v10;
    v221 = *(_DWORD *)L"st";
    v222 = aTargetpriority[18];
    v206.Buffer = (wchar_t *)v220;
    v220[0] = *(_OWORD *)L"TargetPriorityList";
    v210 = &DMM::AutoBuffer<unsigned int>::`vftable'{for `NonReferenceCounted'};
    *(_DWORD *)&v206.Length = 2490404;
    v220[1] = *(_OWORD *)L"iorityList";
    v208 = &DMM::AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>::`vftable'{for `SetElement'};
    v209 = 0LL;
    v211 = 0LL;
    v212 = 0LL;
    v213 = 3;
    v43 = VIDPN_MGR::_ReadTargetPriorityList(v42, Handle, &v206, (__int64)&v208);
    v48 = v43;
    if ( v43 >= 0 )
    {
      v126 = v212;
      if ( !v212 )
      {
        v127 = WdLogNewEntry5_WdAssertion(v45, v44, v46, v47);
        WdLogEvent5_WdAssertion(v127);
      }
      v128 = v126 >> 2;
      v129 = 0;
      if ( v128 )
      {
        v130 = v211;
        v131 = 0LL;
        do
        {
          TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(
                         (DMMVIDEOPRESENTTARGETSET *)v24,
                         *(unsigned int *)(v130 + 4 * v131),
                         v46,
                         v47);
          v137 = TargetById;
          if ( TargetById )
          {
            if ( *((_DWORD *)TargetById + 29) == -1 )
            {
              *((_DWORD *)TargetById + 29) = v129;
              v140 = WdLogNewEntry5_WdTrace(v134, v133, v135, v136);
              *(_QWORD *)(v140 + 24) = v131;
              v45 = *((unsigned int *)v137 + 6);
              *(_QWORD *)(v140 + 32) = v45;
            }
            else
            {
              v139 = WdLogNewEntry5_WdError(v134, v133);
              *(_QWORD *)(v139 + 24) = *((unsigned int *)v137 + 6);
              WdLogEvent5_WdError(v139);
            }
          }
          else
          {
            v138 = WdLogNewEntry5_WdWarning(v134, v133, v135, v136);
            *(_QWORD *)(v138 + 24) = *(unsigned int *)(v130 + 4 * v131);
            *(_QWORD *)(v138 + 32) = v131;
            WdLogEvent5_WdWarning(v138);
          }
          v131 = ++v129;
        }
        while ( v129 < v128 );
        v3 = v201;
      }
      v141 = (_QWORD *)v24[3];
      if ( v141 != v24 + 3 )
      {
        for ( i = (unsigned int *)(v141 - 1);
              i;
              i = (unsigned int *)DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                                    (DMMVIDEOPRESENTTARGETSET *)v24,
                                    (const struct DMMVIDEOPRESENTTARGET *const)i,
                                    v46,
                                    v47) )
        {
          if ( i[29] == -1 )
          {
            v143 = WdLogNewEntry5_WdWarning(v45, v44, v46, v47);
            *(_QWORD *)(v143 + 24) = i[6];
            WdLogEvent5_WdWarning(v143);
          }
        }
      }
    }
    else if ( v43 != -1073741275 )
    {
      v148 = WdLogNewEntry5_WdError(v45, v44);
      if ( !*((_QWORD *)v3 + 1) )
      {
        v99 = WdLogNewEntry5_WdAssertion(v145, v144, v146, v147);
        WdLogEvent5_WdAssertion(v99);
      }
      *(_QWORD *)(v148 + 24) = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
      *(_QWORD *)(v148 + 32) = v48;
      WdLogEvent5_WdError(v148);
      v100 = Handle;
      *((_DWORD *)v3 + 14) = v48;
      ZwClose(v100);
      v101 = &v208;
LABEL_80:
      DMM::AutoBuffer<unsigned int>::~AutoBuffer<unsigned int>(v101);
      goto LABEL_81;
    }
    DMM::AutoBuffer<unsigned int>::~AutoBuffer<unsigned int>(&v208);
    v207.Buffer = (wchar_t *)v223;
    v223[0] = *(_OWORD *)L"TargetForcePriorityList";
    *(_DWORD *)&v207.Length = 3145774;
    v214 = &DMM::AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>::`vftable'{for `SetElement'};
    v223[1] = *(_OWORD *)L"rcePriorityList";
    v216 = &DMM::AutoBuffer<unsigned int>::`vftable'{for `NonReferenceCounted'};
    v223[2] = *(_OWORD *)L"ityList";
    v217 = 0LL;
    v218 = 0LL;
    v215 = 0LL;
    v219 = 3;
    v50 = VIDPN_MGR::_ReadTargetPriorityList(v49, Handle, &v207, (__int64)&v214);
    v55 = v50;
    if ( v50 >= 0 )
    {
      v149 = v218;
      if ( !v218 )
      {
        v150 = WdLogNewEntry5_WdAssertion(v52, v51, v53, v54);
        WdLogEvent5_WdAssertion(v150);
      }
      v151 = v149 >> 2;
      v152 = 0;
      if ( v151 )
      {
        v153 = v217;
        v154 = 0LL;
        do
        {
          v155 = DMMVIDEOPRESENTTARGETSET::GetTargetById(
                   (DMMVIDEOPRESENTTARGETSET *)v24,
                   *(unsigned int *)(v153 + 4 * v154),
                   v53,
                   v54);
          v160 = v155;
          if ( v155 )
          {
            if ( *((_DWORD *)v155 + 30) == -1 )
            {
              *((_DWORD *)v155 + 30) = v152;
              v163 = WdLogNewEntry5_WdTrace(v157, v156, v158, v159);
              *(_QWORD *)(v163 + 24) = v154;
              *(_QWORD *)(v163 + 32) = *((unsigned int *)v160 + 6);
            }
            else
            {
              v162 = WdLogNewEntry5_WdError(v157, v156);
              *(_QWORD *)(v162 + 24) = *((unsigned int *)v160 + 6);
              WdLogEvent5_WdError(v162);
            }
          }
          else
          {
            v161 = WdLogNewEntry5_WdWarning(v157, v156, v158, v159);
            *(_QWORD *)(v161 + 24) = *(unsigned int *)(v153 + 4 * v154);
            *(_QWORD *)(v161 + 32) = v154;
            WdLogEvent5_WdWarning(v161);
          }
          v154 = ++v152;
        }
        while ( v152 < v151 );
        v3 = v201;
      }
LABEL_43:
      DMM::AutoBuffer<unsigned int>::~AutoBuffer<unsigned int>(&v214);
      ZwClose(Handle);
      v199 = -1;
      if ( !*((_QWORD *)v3 + 1) )
      {
        v171 = WdLogNewEntry5_WdAssertion(v57, v56, v58, v59);
        WdLogEvent5_WdAssertion(v171);
      }
      if ( (int)DpiReadPnpRegistryValue(
                  *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL) + 192LL),
                  L"DefaultSimulatedTarget",
                  &v199,
                  4LL,
                  1) < 0
        || (v172 = v199, v199 == -1) )
      {
        v68 = WdLogNewEntry5_WdTrace(v61, v60, v62, v63);
        if ( !*((_QWORD *)v3 + 1) )
        {
          v189 = WdLogNewEntry5_WdAssertion(v65, v64, v66, v67);
          WdLogEvent5_WdAssertion(v189);
        }
        v69 = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
        *(_QWORD *)(v68 + 24) = v69;
      }
      else if ( DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v24, v199, v62, v63) )
      {
        v181 = WdLogNewEntry5_WdTrace(v174, v173, v175, v176);
        *(_QWORD *)(v181 + 24) = v172;
        if ( !*((_QWORD *)v3 + 1) )
        {
          v182 = WdLogNewEntry5_WdAssertion(v178, v177, v179, v180);
          WdLogEvent5_WdAssertion(v182);
        }
        v69 = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
        *(_QWORD *)(v181 + 32) = v69;
        *((_DWORD *)v3 + 121) = v172;
      }
      else
      {
        v187 = WdLogNewEntry5_WdError(v174, v173);
        *(_QWORD *)(v187 + 24) = v172;
        if ( !*((_QWORD *)v3 + 1) )
        {
          v188 = WdLogNewEntry5_WdAssertion(v184, v183, v185, v186);
          WdLogEvent5_WdAssertion(v188);
        }
        *(_QWORD *)(v187 + 32) = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
        WdLogEvent5_WdError(v187);
      }
      if ( v24 )
        ReferenceCounted::Release((ReferenceCounted *)(v24 + 8), v69);
      LODWORD(v21) = VIDPN_MGR::_InitializeDmmClientInterfaces(v3);
      if ( (int)v21 >= 0 )
      {
        if ( !*((_QWORD *)v3 + 1) )
        {
          v190 = WdLogNewEntry5_WdAssertion(v20, v19, v70, v71);
          WdLogEvent5_WdAssertion(v190);
        }
        v72 = *((_QWORD *)v3 + 1);
        v73 = (_QWORD *)((char *)v3 + 464);
        if ( !v72 || v3 == (VIDPN_MGR *)-464LL )
        {
          inserted = -1073741811;
        }
        else
        {
          *v73 = 0LL;
          v74 = *(MONITOR_MGR **)(v72 + 96);
          if ( !v74 )
          {
            v191 = WdLogNewEntry5_WdError(0LL, v19);
            *(_QWORD *)(v191 + 24) = *(_QWORD *)(v72 + 16);
            WdLogEvent5_WdError(v191);
            inserted = -1073741811;
LABEL_139:
            v196 = WdLogNewEntry5_WdError(v20, v19);
            if ( !*((_QWORD *)v3 + 1) )
            {
              v197 = WdLogNewEntry5_WdAssertion(v193, v192, v194, v195);
              WdLogEvent5_WdAssertion(v197);
            }
            *(_QWORD *)(v196 + 24) = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
            WdLogEvent5_WdError(v196);
            *((_DWORD *)v3 + 14) = inserted;
            return v3;
          }
          inserted = MONITOR_MGR::_CreateAndInsertMonitorEventHandler(
                       v74,
                       v19,
                       v70,
                       (struct HDXGMONITOREVENT__ **)v3 + 58);
        }
        if ( inserted >= 0 )
        {
          if ( !*v73 )
          {
            v198 = WdLogNewEntry5_WdAssertion(v20, v19, v70, v71);
            WdLogEvent5_WdAssertion(v198);
          }
          v76 = (DXGDIAGNOSTICS *)operator new(0x28uLL, 0x4E506456u, PagedPool);
          if ( v76 )
            v2 = DXGDIAGNOSTICS::DXGDIAGNOSTICS(v76, 0x8000u, PagedPool);
          *((_QWORD *)v3 + 62) = v2;
          *((_DWORD *)v3 + 16) = 2;
          return v3;
        }
        goto LABEL_139;
      }
      goto LABEL_70;
    }
    if ( v50 == -1073741275 )
      goto LABEL_43;
    v168 = WdLogNewEntry5_WdError(v52, v51);
    if ( !*((_QWORD *)v3 + 1) )
    {
      v169 = WdLogNewEntry5_WdAssertion(v165, v164, v166, v167);
      WdLogEvent5_WdAssertion(v169);
    }
    *(_QWORD *)(v168 + 24) = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
    *(_QWORD *)(v168 + 32) = v55;
    WdLogEvent5_WdError(v168);
    v170 = Handle;
    *((_DWORD *)v3 + 14) = v55;
    ZwClose(v170);
    v101 = &v214;
    goto LABEL_80;
  }
  v115 = (_QWORD *)WdLogNewEntry5_WdError(v39, v36);
  v115[3] = *(_QWORD *)(*(_QWORD *)v10 + 40LL);
  v118 = *(_QWORD *)v9;
  v119 = *(_QWORD *)(*(_QWORD *)v9 + 40LL);
  v115[4] = v119;
  if ( !*((_QWORD *)v3 + 1) )
  {
    v120 = WdLogNewEntry5_WdAssertion(v118, v119, v116, v117);
    WdLogEvent5_WdAssertion(v120);
  }
  v115[5] = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
  WdLogEvent5_WdError(v115);
  *((_DWORD *)v3 + 14) = -1071774938;
  return v3;
}
