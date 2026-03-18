/*
 * XREFs of ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C020F214
 * Callers:
 *     ?CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z @ 0x1C0211BE0 (-CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z.c)
 * Callees:
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0002E20 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0002E6C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C0002EA0 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004630 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     ??0DXGDIAGNOSTICS@@QEAA@IW4_POOL_TYPE@@@Z @ 0x1C0032648 (--0DXGDIAGNOSTICS@@QEAA@IW4_POOL_TYPE@@@Z.c)
 *     ??0DMMVIDEOPRESENTSOURCESET@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00434C4 (--0DMMVIDEOPRESENTSOURCESET@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0DMMVIDEOPRESENTTARGETSET@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0043590 (--0DMMVIDEOPRESENTTARGETSET@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??1?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ @ 0x1C0043668 (--1-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@UEAA@XZ.c)
 *     ?reset@?$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C00451E4 (-reset@-$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z.c)
 *     ?DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z @ 0x1C01A88F4 (-DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z.c)
 *     DpiOpenPnpRegistryKey @ 0x1C01EFBD0 (DpiOpenPnpRegistryKey.c)
 *     DpiReadPnpRegistryValue @ 0x1C01EFEF8 (DpiReadPnpRegistryValue.c)
 *     ?_InitializeDmmClientInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x1C0217898 (-_InitializeDmmClientInterfaces@VIDPN_MGR@@AEAAJXZ.c)
 *     ?_InitializeDxgPortDmmInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x1C0217AB8 (-_InitializeDxgPortDmmInterfaces@VIDPN_MGR@@AEAAJXZ.c)
 *     ?_InitializeVidPnMiniportInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x1C0217B8C (-_InitializeVidPnMiniportInterfaces@VIDPN_MGR@@AEAAJXZ.c)
 *     ?_ReadConfiguration@VIDPN_MGR@@AEAAJXZ @ 0x1C02181E4 (-_ReadConfiguration@VIDPN_MGR@@AEAAJXZ.c)
 *     ?_ReadTargetPriorityList@VIDPN_MGR@@AEAAJQEAXPEBU_UNICODE_STRING@@PEAV?$AutoBuffer@I@DMM@@@Z @ 0x1C02185DC (-_ReadTargetPriorityList@VIDPN_MGR@@AEAAJQEAXPEBU_UNICODE_STRING@@PEAV-$AutoBuffer@I@DMM@@@Z.c)
 *     ??0Lockable@@QEAA@XZ @ 0x1C0220CF4 (--0Lockable@@QEAA@XZ.c)
 *     MonitorRegisterMonitorEventCallback @ 0x1C022EE38 (MonitorRegisterMonitorEventCallback.c)
 */

VIDPN_MGR *__fastcall VIDPN_MGR::VIDPN_MGR(VIDPN_MGR *this, struct ADAPTER_DISPLAY *const a2)
{
  DXGDIAGNOSTICS *v2; // rsi
  VIDPN_MGR *v3; // rdi
  void **v5; // rcx
  char *v6; // r13
  char *v7; // r12
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  DMMVIDEOPRESENTSOURCESET *v12; // rax
  DMMVIDEOPRESENTSOURCESET *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  DMMVIDEOPRESENTTARGETSET *v16; // rax
  DMMVIDEOPRESENTTARGETSET *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  int v29; // r15d
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r14
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // r14
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r14
  __int64 v43; // rax
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rdx
  _QWORD *v45; // rcx
  int v46; // eax
  __int64 v47; // rcx
  _QWORD *v48; // rbx
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  int v54; // eax
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rax
  int v59; // eax
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r15
  unsigned __int64 v63; // r15
  __int64 v64; // rax
  unsigned __int64 v65; // r15
  unsigned int v66; // r12d
  __int64 v67; // rdi
  __int64 v68; // r14
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  struct DMMVIDEOPRESENTTARGET *v74; // r13
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  _QWORD *v78; // rdx
  unsigned int *v79; // r14
  _QWORD *v80; // rcx
  __int64 v81; // rax
  __int64 v82; // rcx
  int v83; // eax
  __int64 v84; // rcx
  __int64 v85; // r15
  unsigned __int64 v86; // r15
  __int64 v87; // rax
  unsigned __int64 v88; // r15
  unsigned int v89; // r12d
  __int64 v90; // rdi
  __int64 v91; // r14
  struct DMMVIDEOPRESENTTARGET *v92; // rax
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  struct DMMVIDEOPRESENTTARGET *v97; // r13
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rcx
  __int64 v101; // r14
  __int64 v102; // rax
  HANDLE v103; // rcx
  void ***v104; // rcx
  __int64 v105; // rax
  __int64 v106; // rax
  __int64 v107; // rcx
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // r8
  __int64 v113; // r9
  __int64 v114; // r14
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // r8
  __int64 v118; // r9
  __int64 v119; // rcx
  __int64 v120; // r15
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 v124; // rcx
  __int64 v125; // r14
  __int64 v126; // rax
  HANDLE v127; // rcx
  __int64 v128; // rcx
  __int64 v129; // r15
  __int64 v130; // rax
  __int64 v131; // rax
  __int64 v132; // rax
  __int64 v133; // rcx
  __int64 v134; // r14
  __int64 v135; // rax
  __int64 v136; // rdx
  __int64 v137; // r8
  __int64 v138; // rcx
  __int64 v139; // rax
  __int64 v140; // rax
  DXGDIAGNOSTICS *v141; // rax
  unsigned int v143; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  VIDPN_MGR *v145; // [rsp+50h] [rbp-B0h]
  _QWORD *InputBuffer; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v147; // [rsp+60h] [rbp-A0h]
  _QWORD *v148; // [rsp+68h] [rbp-98h] BYREF
  __int64 v149; // [rsp+70h] [rbp-90h]
  int v150; // [rsp+78h] [rbp-88h] BYREF
  _OWORD *v151; // [rsp+80h] [rbp-80h]
  int v152; // [rsp+88h] [rbp-78h] BYREF
  _OWORD *v153; // [rsp+90h] [rbp-70h]
  void **v154; // [rsp+98h] [rbp-68h] BYREF
  __int128 v155; // [rsp+A0h] [rbp-60h]
  void **v156; // [rsp+B0h] [rbp-50h]
  __int64 v157; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v158; // [rsp+C0h] [rbp-40h]
  int v159; // [rsp+C8h] [rbp-38h]
  void **v160; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v161; // [rsp+D8h] [rbp-28h]
  void **v162; // [rsp+E8h] [rbp-18h]
  __int64 v163; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v164; // [rsp+F8h] [rbp-8h]
  int v165; // [rsp+100h] [rbp+0h]
  _OWORD v166[2]; // [rsp+108h] [rbp+8h] BYREF
  int v167; // [rsp+128h] [rbp+28h]
  wchar_t v168; // [rsp+12Ch] [rbp+2Ch]
  _OWORD v169[3]; // [rsp+130h] [rbp+30h] BYREF

  v145 = this;
  v2 = 0LL;
  *(_QWORD *)this = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *((_QWORD *)this + 1) = 0LL;
  v3 = this;
  Lockable::Lockable((VIDPN_MGR *)((char *)this + 16));
  *((_DWORD *)v3 + 14) = 0;
  *(_QWORD *)v3 = &VIDPN_MGR::`vftable'{for `ContainedBy<ADAPTER_DISPLAY>'};
  v5 = &DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::`vftable';
  *((_QWORD *)v3 + 2) = &VIDPN_MGR::`vftable'{for `Lockable'};
  v6 = (char *)v3 + 72;
  *((_QWORD *)v3 + 6) = &VIDPN_MGR::`vftable'{for `FallibleConstruction'};
  v7 = (char *)v3 + 80;
  *((_QWORD *)v3 + 9) = 0LL;
  *((_QWORD *)v3 + 10) = 0LL;
  *((_QWORD *)v3 + 11) = 0LL;
  *((_QWORD *)v3 + 12) = &Set<DMMVIDPN>::`vftable';
  *((_DWORD *)v3 + 28) = 0;
  *((_QWORD *)v3 + 13) = &DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::`vftable';
  *((_QWORD *)v3 + 17) = 0LL;
  *((_QWORD *)v3 + 16) = (char *)v3 + 120;
  *((_QWORD *)v3 + 15) = (char *)v3 + 120;
  *((_DWORD *)v3 + 36) = 2;
  *((_QWORD *)v3 + 19) = &Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::`vftable';
  *((_QWORD *)v3 + 20) = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::`vftable';
  *((_DWORD *)v3 + 42) = 0;
  *((_QWORD *)v3 + 24) = 0LL;
  *((_QWORD *)v3 + 23) = (char *)v3 + 176;
  *((_QWORD *)v3 + 22) = (char *)v3 + 176;
  *((_DWORD *)v3 + 50) = 2;
  *((_QWORD *)v3 + 26) = 30LL;
  *((_QWORD *)v3 + 27) = &Set<DMMVIDPN>::`vftable';
  *((_DWORD *)v3 + 58) = 0;
  *((_QWORD *)v3 + 28) = &DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::`vftable';
  *((_QWORD *)v3 + 32) = 0LL;
  *((_QWORD *)v3 + 31) = (char *)v3 + 240;
  *((_QWORD *)v3 + 30) = (char *)v3 + 240;
  *((_DWORD *)v3 + 66) = 2;
  *((_QWORD *)v3 + 34) = 5LL;
  *((_QWORD *)v3 + 35) = 0LL;
  *((_QWORD *)v3 + 36) = &Queue<DMM::AutoBuffer<_DMM_COMMITVIDPNREQUEST_SERIALIZATION>>::`vftable';
  *((_QWORD *)v3 + 37) = &DoublyLinkedList<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>,DoubleLinkedListElementDeleter<DMM::AutoBuffer<_DMM_VIDPN_SERIALIZATION>>>::`vftable';
  *((_DWORD *)v3 + 76) = 0;
  *((_QWORD *)v3 + 41) = 0LL;
  *((_QWORD *)v3 + 40) = (char *)v3 + 312;
  *((_QWORD *)v3 + 39) = (char *)v3 + 312;
  *((_DWORD *)v3 + 84) = 2;
  *((_QWORD *)v3 + 43) = 40LL;
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
  *((_QWORD *)v3 + 57) = 0LL;
  *((_BYTE *)v3 + 464) = 0;
  *((_QWORD *)v3 + 59) = 0LL;
  *((_DWORD *)v3 + 120) = 0;
  *((_DWORD *)v3 + 123) = -1;
  *((_DWORD *)v3 + 124) = -1;
  *((_QWORD *)v3 + 63) = 0LL;
  if ( !a2 )
  {
    v8 = WdLogNewEntry5_WdAssertion(&DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::`vftable');
    WdLogEvent5_WdAssertion(v8);
  }
  *((_DWORD *)v3 + 16) = 1;
  if ( a2 )
  {
    if ( *((_QWORD *)v3 + 1) )
    {
      v10 = WdLogNewEntry5_WdAssertion(v5);
      WdLogEvent5_WdAssertion(v10);
    }
    *((_QWORD *)v3 + 1) = a2;
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v9 + 24) = v3;
    *(_QWORD *)(v9 + 32) = *((_QWORD *)v3 + 1);
    WdLogEvent5_WdError(v9);
  }
  if ( *((_DWORD *)v3 + 8) != 2 )
  {
    v11 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v11 + 24) = v3;
    WdLogEvent5_WdError(v11);
    *((_DWORD *)v3 + 14) = *((_DWORD *)v3 + 6);
    return v3;
  }
  v12 = (DMMVIDEOPRESENTSOURCESET *)operator new[](0x70uLL, 0x4E506456u, PagedPool);
  if ( v12 )
    v13 = DMMVIDEOPRESENTSOURCESET::DMMVIDEOPRESENTSOURCESET(v12, v3);
  else
    v13 = 0LL;
  auto_rc<DMMVIDEOPRESENTTARGETSET>::reset((__int64 *)v3 + 9, (__int64)v13);
  if ( !*(_QWORD *)v6
    || ((v16 = (DMMVIDEOPRESENTTARGETSET *)operator new[](0x80uLL, 0x4E506456u, PagedPool)) == 0LL
      ? (v17 = 0LL)
      : (v17 = DMMVIDEOPRESENTTARGETSET::DMMVIDEOPRESENTTARGETSET(v16, v3)),
        auto_rc<DMMVIDEOPRESENTTARGETSET>::reset((__int64 *)v3 + 10, (__int64)v17),
        !*(_QWORD *)v7) )
  {
    v15 = WdLogNewEntry5_WdLowResource(v14);
    WdLogEvent5_WdLowResource(v15);
    *((_DWORD *)v3 + 14) = -1073741801;
    return v3;
  }
  LODWORD(v19) = VIDPN_MGR::_ReadConfiguration(v3);
  if ( (int)v19 < 0 )
    goto LABEL_20;
  LODWORD(v19) = VIDPN_MGR::_InitializeDxgPortDmmInterfaces(v3);
  if ( (int)v19 < 0 )
    goto LABEL_20;
  LODWORD(v19) = VIDPN_MGR::_InitializeVidPnMiniportInterfaces(v3);
  if ( (int)v19 < 0 )
    goto LABEL_20;
  _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)v6 + 72LL), 1u);
  v25 = *(_QWORD **)v6;
  InputBuffer = 0LL;
  v147 = 0LL;
  if ( v25 == (_QWORD *)-112LL )
    InputBuffer = 0LL;
  else
    InputBuffer = v25;
  v26 = *((_QWORD *)v3 + 1);
  v147 = *((_QWORD *)v3 + 44);
  if ( !v26 )
  {
    v27 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v27);
    v26 = *((_QWORD *)v3 + 1);
  }
  v29 = DxgkCallDriverIoControl(
          *(PDEVICE_OBJECT *)(*(_QWORD *)(v26 + 16) + 192LL),
          0x23204Fu,
          &InputBuffer,
          0x10u,
          0LL,
          0,
          1u,
          0LL);
  if ( v29 < 0 )
    goto LABEL_32;
  if ( !v25[5] )
  {
    v34 = WdLogNewEntry5_WdError(v28);
    v35 = *((_QWORD *)v3 + 1);
    v36 = v34;
    if ( !v35 )
    {
      v37 = WdLogNewEntry5_WdAssertion(0LL);
      WdLogEvent5_WdAssertion(v37);
      v35 = *((_QWORD *)v3 + 1);
    }
    *(_QWORD *)(v36 + 24) = *(_QWORD *)(v35 + 16);
    WdLogEvent5_WdError(v36);
    *((_DWORD *)v3 + 14) = -1071774936;
    goto LABEL_36;
  }
  ReferenceCounted::Release((ReferenceCounted *)(v25 + 8));
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v7 + 72LL));
  v25 = *(_QWORD **)v7;
  v148 = 0LL;
  v149 = 0LL;
  if ( v25 == (_QWORD *)-112LL )
    v148 = 0LL;
  else
    v148 = v25;
  v38 = *((_QWORD *)v3 + 1);
  v149 = *((_QWORD *)v3 + 45);
  if ( !v38 )
  {
    v39 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v39);
    v38 = *((_QWORD *)v3 + 1);
  }
  v29 = DxgkCallDriverIoControl(
          *(PDEVICE_OBJECT *)(*(_QWORD *)(v38 + 16) + 192LL),
          0x232053u,
          &v148,
          0x10u,
          0LL,
          0,
          1u,
          0LL);
  if ( v29 < 0 )
  {
LABEL_32:
    v30 = WdLogNewEntry5_WdError(v28);
    v31 = *((_QWORD *)v3 + 1);
    v32 = v30;
    if ( !v31 )
    {
      v33 = WdLogNewEntry5_WdAssertion(0LL);
      WdLogEvent5_WdAssertion(v33);
      v31 = *((_QWORD *)v3 + 1);
    }
    *(_QWORD *)(v32 + 24) = *(_QWORD *)(v31 + 16);
    WdLogEvent5_WdError(v32);
    *((_DWORD *)v3 + 14) = v29;
LABEL_35:
    if ( !v25 )
      return v3;
LABEL_36:
    ReferenceCounted::Release((ReferenceCounted *)(v25 + 8));
    return v3;
  }
  if ( !v25[5] )
  {
    v40 = WdLogNewEntry5_WdError(v28);
    v41 = *((_QWORD *)v3 + 1);
    v42 = v40;
    if ( !v41 )
    {
      v43 = WdLogNewEntry5_WdAssertion(0LL);
      WdLogEvent5_WdAssertion(v43);
      v41 = *((_QWORD *)v3 + 1);
    }
    *(_QWORD *)(v42 + 24) = *(_QWORD *)(v41 + 16);
    WdLogEvent5_WdError(v42);
    *((_DWORD *)v3 + 14) = -1071774935;
    goto LABEL_36;
  }
  NextTarget = 0LL;
  v45 = (_QWORD *)v25[3];
  if ( v45 != v25 + 3 )
    NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v45 - 1);
  if ( !NextTarget )
    goto LABEL_58;
  do
  {
    if ( IsInternalVideoOutput(*((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)NextTarget + 20)) )
      break;
    NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v25, NextTarget);
  }
  while ( NextTarget );
  if ( NextTarget )
    v46 = *((_DWORD *)NextTarget + 6);
  else
LABEL_58:
    v46 = -1;
  *((_DWORD *)v3 + 124) = v46;
  ReferenceCounted::Release((ReferenceCounted *)(v25 + 8));
  v47 = *(_QWORD *)v7;
  if ( *(_QWORD *)(*(_QWORD *)v7 + 40LL) < *(_QWORD *)(*(_QWORD *)v6 + 40LL) )
  {
    v48 = (_QWORD *)WdLogNewEntry5_WdError(v47);
    v48[3] = *(_QWORD *)(*(_QWORD *)v7 + 40LL);
    v49 = *(_QWORD *)v6;
    v48[4] = *(_QWORD *)(*(_QWORD *)v6 + 40LL);
    v50 = *((_QWORD *)v3 + 1);
    if ( !v50 )
    {
      v51 = WdLogNewEntry5_WdAssertion(v49);
      WdLogEvent5_WdAssertion(v51);
      v50 = *((_QWORD *)v3 + 1);
    }
    v48[5] = *(_QWORD *)(v50 + 16);
    WdLogEvent5_WdError(v48);
    *((_DWORD *)v3 + 14) = -1071774938;
    return v3;
  }
  v52 = *((_QWORD *)v3 + 1);
  if ( !v52 )
  {
    v53 = WdLogNewEntry5_WdAssertion(v47);
    WdLogEvent5_WdAssertion(v53);
    v52 = *((_QWORD *)v3 + 1);
  }
  v54 = DpiOpenPnpRegistryKey(*(_QWORD *)(*(_QWORD *)(v52 + 16) + 192LL), 1, 0x20019u, &Handle);
  v19 = v54;
  if ( v54 < 0 )
  {
    v56 = WdLogNewEntry5_WdError(v55);
    v57 = *((_QWORD *)v3 + 1);
    v22 = v56;
    if ( !v57 )
    {
      v58 = WdLogNewEntry5_WdAssertion(0LL);
      WdLogEvent5_WdAssertion(v58);
      v57 = *((_QWORD *)v3 + 1);
    }
    v24 = *(_QWORD *)(v57 + 16);
    *(_QWORD *)(v22 + 32) = v19;
LABEL_23:
    *(_QWORD *)(v22 + 24) = v24;
    WdLogEvent5_WdError(v22);
    *((_DWORD *)v3 + 14) = v19;
    return v3;
  }
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v7 + 72LL));
  v25 = *(_QWORD **)v7;
  v167 = *(_DWORD *)L"st";
  v168 = aTargetpriority[18];
  v151 = v166;
  v166[0] = *(_OWORD *)L"TargetPriorityList";
  v156 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  v150 = 2490404;
  v166[1] = *(_OWORD *)L"iorityList";
  v154 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  v155 = 0LL;
  v157 = 0LL;
  v158 = 0LL;
  v159 = 3;
  v59 = VIDPN_MGR::_ReadTargetPriorityList(v55, Handle, &v150, &v154);
  v62 = v59;
  if ( v59 < 0 )
  {
    if ( v59 != -1073741275 )
    {
      v99 = WdLogNewEntry5_WdError(v60);
      v100 = *((_QWORD *)v3 + 1);
      v101 = v99;
      if ( !v100 )
      {
        v102 = WdLogNewEntry5_WdAssertion(0LL);
        WdLogEvent5_WdAssertion(v102);
        v100 = *((_QWORD *)v3 + 1);
      }
      *(_QWORD *)(v101 + 24) = *(_QWORD *)(v100 + 16);
      *(_QWORD *)(v101 + 32) = v62;
      WdLogEvent5_WdError(v101);
      v103 = Handle;
      *((_DWORD *)v3 + 14) = v62;
      ZwClose(v103);
      v104 = &v154;
LABEL_98:
      DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(v104);
      goto LABEL_35;
    }
  }
  else
  {
    v63 = v158;
    if ( !v158 )
    {
      v64 = WdLogNewEntry5_WdAssertion(v60);
      WdLogEvent5_WdAssertion(v64);
    }
    v65 = v63 >> 2;
    v66 = 0;
    if ( v65 )
    {
      v67 = v157;
      v68 = 0LL;
      do
      {
        TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(
                       (DMMVIDEOPRESENTTARGETSET *)v25,
                       *(_DWORD *)(v67 + 4 * v68));
        v74 = TargetById;
        if ( TargetById )
        {
          if ( *((_DWORD *)TargetById + 29) == -1 )
          {
            *((_DWORD *)TargetById + 29) = v66;
            v77 = WdLogNewEntry5_WdTrace(v71, v70, v72, v73);
            *(_QWORD *)(v77 + 24) = v68;
            *(_QWORD *)(v77 + 32) = *((unsigned int *)v74 + 6);
          }
          else
          {
            v76 = WdLogNewEntry5_WdError(v71);
            *(_QWORD *)(v76 + 24) = *((unsigned int *)v74 + 6);
            WdLogEvent5_WdError(v76);
          }
        }
        else
        {
          v75 = WdLogNewEntry5_WdWarning(v71, v70, v72);
          *(_QWORD *)(v75 + 24) = *(unsigned int *)(v67 + 4 * v68);
          *(_QWORD *)(v75 + 32) = v68;
          WdLogEvent5_WdWarning(v75);
        }
        v68 = ++v66;
      }
      while ( v66 < v65 );
      v3 = v145;
    }
    v78 = v25 + 3;
    v79 = 0LL;
    v80 = (_QWORD *)v25[3];
    if ( v80 != v25 + 3 )
      v79 = (unsigned int *)(v80 - 1);
    for ( ;
          v79;
          v79 = (unsigned int *)DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                                  (DMMVIDEOPRESENTTARGETSET *)v25,
                                  (const struct DMMVIDEOPRESENTTARGET *const)v79) )
    {
      if ( v79[29] == -1 )
      {
        v81 = WdLogNewEntry5_WdWarning(v80, v78, v61);
        *(_QWORD *)(v81 + 24) = v79[6];
        WdLogEvent5_WdWarning(v81);
      }
    }
  }
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v154);
  v153 = v169;
  v169[0] = *(_OWORD *)L"TargetForcePriorityList";
  v152 = 3145774;
  v160 = &DMM::AutoBuffer<_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION>::`vftable'{for `SetElement'};
  v169[1] = *(_OWORD *)L"rcePriorityList";
  v162 = &DMM::AutoBuffer<_DMM_DISPMODECHANGEREQUESTSET_SERIALIZATION>::`vftable'{for `NonReferenceCounted'};
  v169[2] = *(_OWORD *)L"ityList";
  v163 = 0LL;
  v164 = 0LL;
  v161 = 0LL;
  v165 = 3;
  v83 = VIDPN_MGR::_ReadTargetPriorityList(v82, Handle, &v152, &v160);
  v85 = v83;
  if ( v83 < 0 )
  {
    if ( v83 == -1073741275 )
      goto LABEL_104;
    v123 = WdLogNewEntry5_WdError(v84);
    v124 = *((_QWORD *)v3 + 1);
    v125 = v123;
    if ( !v124 )
    {
      v126 = WdLogNewEntry5_WdAssertion(0LL);
      WdLogEvent5_WdAssertion(v126);
      v124 = *((_QWORD *)v3 + 1);
    }
    *(_QWORD *)(v125 + 24) = *(_QWORD *)(v124 + 16);
    *(_QWORD *)(v125 + 32) = v85;
    WdLogEvent5_WdError(v125);
    v127 = Handle;
    *((_DWORD *)v3 + 14) = v85;
    ZwClose(v127);
    v104 = &v160;
    goto LABEL_98;
  }
  v86 = v164;
  if ( !v164 )
  {
    v87 = WdLogNewEntry5_WdAssertion(v84);
    WdLogEvent5_WdAssertion(v87);
  }
  v88 = v86 >> 2;
  v89 = 0;
  if ( v88 )
  {
    v90 = v163;
    v91 = 0LL;
    do
    {
      v92 = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v25, *(_DWORD *)(v90 + 4 * v91));
      v97 = v92;
      if ( v92 )
      {
        if ( *((_DWORD *)v92 + 30) == -1 )
        {
          *((_DWORD *)v92 + 30) = v89;
          v106 = WdLogNewEntry5_WdTrace(v94, v93, v95, v96);
          *(_QWORD *)(v106 + 24) = v91;
          *(_QWORD *)(v106 + 32) = *((unsigned int *)v97 + 6);
        }
        else
        {
          v105 = WdLogNewEntry5_WdError(v94);
          *(_QWORD *)(v105 + 24) = *((unsigned int *)v97 + 6);
          WdLogEvent5_WdError(v105);
        }
      }
      else
      {
        v98 = WdLogNewEntry5_WdWarning(v94, v93, v95);
        *(_QWORD *)(v98 + 24) = *(unsigned int *)(v90 + 4 * v91);
        *(_QWORD *)(v98 + 32) = v91;
        WdLogEvent5_WdWarning(v98);
      }
      v91 = ++v89;
    }
    while ( v89 < v88 );
    v3 = v145;
  }
LABEL_104:
  DMM::AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>::~AutoBuffer<_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION>(&v160);
  ZwClose(Handle);
  v108 = *((_QWORD *)v3 + 1);
  v143 = -1;
  if ( !v108 )
  {
    v109 = WdLogNewEntry5_WdAssertion(v107);
    WdLogEvent5_WdAssertion(v109);
    v108 = *((_QWORD *)v3 + 1);
  }
  if ( (int)DpiReadPnpRegistryValue(
              *(_QWORD *)(*(_QWORD *)(v108 + 16) + 192LL),
              L"DefaultSimulatedTarget",
              (char *)&v143,
              4u,
              1) < 0
    || (v114 = v143, v143 == -1) )
  {
    v132 = WdLogNewEntry5_WdTrace(v111, v110, v112, v113);
    v133 = *((_QWORD *)v3 + 1);
    v134 = v132;
    if ( !v133 )
    {
      v135 = WdLogNewEntry5_WdAssertion(0LL);
      WdLogEvent5_WdAssertion(v135);
      v133 = *((_QWORD *)v3 + 1);
    }
    *(_QWORD *)(v134 + 24) = *(_QWORD *)(v133 + 16);
  }
  else if ( DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v25, v143) )
  {
    v120 = WdLogNewEntry5_WdTrace(v116, v115, v117, v118);
    *(_QWORD *)(v120 + 24) = v114;
    v121 = *((_QWORD *)v3 + 1);
    if ( !v121 )
    {
      v122 = WdLogNewEntry5_WdAssertion(v119);
      WdLogEvent5_WdAssertion(v122);
      v121 = *((_QWORD *)v3 + 1);
    }
    *(_QWORD *)(v120 + 32) = *(_QWORD *)(v121 + 16);
    *((_DWORD *)v3 + 123) = v114;
  }
  else
  {
    v129 = WdLogNewEntry5_WdError(v116);
    *(_QWORD *)(v129 + 24) = v114;
    v130 = *((_QWORD *)v3 + 1);
    if ( !v130 )
    {
      v131 = WdLogNewEntry5_WdAssertion(v128);
      WdLogEvent5_WdAssertion(v131);
      v130 = *((_QWORD *)v3 + 1);
    }
    *(_QWORD *)(v129 + 32) = *(_QWORD *)(v130 + 16);
    WdLogEvent5_WdError(v129);
  }
  if ( v25 )
    ReferenceCounted::Release((ReferenceCounted *)(v25 + 8));
  LODWORD(v19) = VIDPN_MGR::_InitializeDmmClientInterfaces(v3);
  if ( (int)v19 < 0 )
    goto LABEL_20;
  v138 = *((_QWORD *)v3 + 1);
  if ( !v138 )
  {
    v139 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v139);
    v138 = *((_QWORD *)v3 + 1);
  }
  LODWORD(v19) = MonitorRegisterMonitorEventCallback(v138, v136, v137, (char *)v3 + 472);
  if ( (int)v19 < 0 )
  {
LABEL_20:
    v20 = WdLogNewEntry5_WdError(v18);
    v21 = *((_QWORD *)v3 + 1);
    v22 = v20;
    if ( !v21 )
    {
      v23 = WdLogNewEntry5_WdAssertion(0LL);
      WdLogEvent5_WdAssertion(v23);
      v21 = *((_QWORD *)v3 + 1);
    }
    v24 = *(_QWORD *)(v21 + 16);
    goto LABEL_23;
  }
  if ( !*((_QWORD *)v3 + 59) )
  {
    v140 = WdLogNewEntry5_WdAssertion(v18);
    WdLogEvent5_WdAssertion(v140);
  }
  v141 = (DXGDIAGNOSTICS *)operator new[](0x28uLL, 0x4E506456u, PagedPool);
  if ( v141 )
    v2 = DXGDIAGNOSTICS::DXGDIAGNOSTICS(v141, 0x8000u, PagedPool);
  *((_QWORD *)v3 + 63) = v2;
  *((_DWORD *)v3 + 16) = 2;
  return v3;
}
