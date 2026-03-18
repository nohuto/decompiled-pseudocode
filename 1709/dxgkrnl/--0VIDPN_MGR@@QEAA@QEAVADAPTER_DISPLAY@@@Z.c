/*
 * XREFs of ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C0110304
 * Callers:
 *     ?CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z @ 0x1C01076E4 (-CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005008 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0008364 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C00083B0 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     IsInternalVideoOutput @ 0x1C00083E4 (IsInternalVideoOutput.c)
 *     ??1?$AutoBuffer@I@DMM@@UEAA@XZ @ 0x1C000B5DC (--1-$AutoBuffer@I@DMM@@UEAA@XZ.c)
 *     ??0DXGDIAGNOSTICS@@QEAA@IW4_POOL_TYPE@@@Z @ 0x1C0012A50 (--0DXGDIAGNOSTICS@@QEAA@IW4_POOL_TYPE@@@Z.c)
 *     ??0DMMVIDEOPRESENTTARGETSET@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0012BE4 (--0DMMVIDEOPRESENTTARGETSET@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0DMMVIDEOPRESENTSOURCESET@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0012FD4 (--0DMMVIDEOPRESENTSOURCESET@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z @ 0x1C0014138 (-reset@-$auto_rc@VDMMVIDEOPRESENTTARGETSET@@@@QEAAXPEAVDMMVIDEOPRESENTTARGETSET@@@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_CreateAndInsertMonitorEventHandler@MONITOR_MGR@@QEAAJP6AJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z0PEAPEAUHDXGMONITOREVENT__@@@Z @ 0x1C010D894 (-_CreateAndInsertMonitorEventHandler@MONITOR_MGR@@QEAAJP6AJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN.c)
 *     ?_ReadConfiguration@VIDPN_MGR@@AEAAJXZ @ 0x1C010F864 (-_ReadConfiguration@VIDPN_MGR@@AEAAJXZ.c)
 *     ?_InitializeDmmClientInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x1C010FE88 (-_InitializeDmmClientInterfaces@VIDPN_MGR@@AEAAJXZ.c)
 *     ?_InitializeVidPnMiniportInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x1C0110078 (-_InitializeVidPnMiniportInterfaces@VIDPN_MGR@@AEAAJXZ.c)
 *     ?_InitializeDxgPortDmmInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x1C0110194 (-_InitializeDxgPortDmmInterfaces@VIDPN_MGR@@AEAAJXZ.c)
 *     ?_ReadTargetPriorityList@VIDPN_MGR@@AEAAJQEAXPEBU_UNICODE_STRING@@PEAV?$AutoBuffer@I@DMM@@@Z @ 0x1C0110264 (-_ReadTargetPriorityList@VIDPN_MGR@@AEAAJQEAXPEBU_UNICODE_STRING@@PEAV-$AutoBuffer@I@DMM@@@Z.c)
 *     DpiReadPnpRegistryValue @ 0x1C0110A74 (DpiReadPnpRegistryValue.c)
 *     DpiOpenPnpRegistryKey @ 0x1C0110B90 (DpiOpenPnpRegistryKey.c)
 *     ?DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z @ 0x1C011D418 (-DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z.c)
 *     ??0Lockable@@QEAA@XZ @ 0x1C01225AC (--0Lockable@@QEAA@XZ.c)
 */

VIDPN_MGR *__fastcall VIDPN_MGR::VIDPN_MGR(VIDPN_MGR *this, struct ADAPTER_DISPLAY *const a2)
{
  DXGDIAGNOSTICS *v2; // rdi
  VIDPN_MGR *v3; // rsi
  void **v5; // rcx
  char *v6; // r15
  char *v7; // r12
  DMMVIDEOPRESENTSOURCESET *v8; // rax
  DMMVIDEOPRESENTSOURCESET *v9; // rax
  __int64 v10; // rcx
  DMMVIDEOPRESENTTARGETSET *v11; // rax
  DMMVIDEOPRESENTTARGETSET *v12; // rax
  __int64 v13; // rcx
  int Configuration; // r14d
  __int64 v15; // rbx
  __int64 v16; // rcx
  int v17; // r13d
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rcx
  int v21; // r13d
  __int64 v22; // rdx
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rdx
  int v24; // eax
  void (__fastcall ***v25)(_QWORD, __int64); // rcx
  int v26; // ebx
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // r15
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r12
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // r12
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // r15
  void (__fastcall ***v45)(_QWORD, __int64); // rcx
  int v46; // ebx
  int (__high *v47)(void *, unsigned int, void *, enum MONITOR_EVENT, unsigned __int64, enum _DMM_VIDPN_MONITOR_TYPE, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *); // rdx
  void *v48; // r8
  __int64 v49; // rbx
  _QWORD *v50; // r14
  struct _FAST_MUTEX *v51; // rcx
  int inserted; // ebx
  DXGDIAGNOSTICS *v53; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rbx
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rcx
  __int64 v65; // r14
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rcx
  __int64 v69; // r14
  __int64 v70; // rax
  __int64 v71; // rcx
  __int64 v72; // r14
  __int64 v73; // rax
  __int64 v74; // rax
  void (__fastcall ***v75)(_QWORD, __int64); // rcx
  int v76; // ebx
  __int64 v77; // rax
  __int64 v78; // rcx
  __int64 v79; // r14
  __int64 v80; // rax
  _QWORD *v81; // rbx
  __int64 v82; // rcx
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rcx
  __int64 v86; // rbx
  __int64 v87; // rax
  unsigned __int64 v88; // r12
  __int64 v89; // rax
  unsigned __int64 v90; // r12
  __int64 v91; // r14
  __int64 v92; // r15
  unsigned int i; // esi
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  struct DMMVIDEOPRESENTTARGET *v98; // r13
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // r15
  unsigned int *j; // r15
  __int64 v104; // rax
  __int64 v105; // rcx
  __int64 v106; // r15
  __int64 v107; // rax
  HANDLE v108; // rcx
  void ***v109; // rcx
  __int64 v110; // rax
  HANDLE v111; // rcx
  unsigned __int64 v112; // r12
  __int64 v113; // rax
  unsigned __int64 v114; // r12
  __int64 v115; // r14
  __int64 v116; // r15
  unsigned int k; // esi
  struct DMMVIDEOPRESENTTARGET *v118; // rax
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // r8
  struct DMMVIDEOPRESENTTARGET *v122; // r13
  __int64 v123; // rax
  __int64 v124; // rax
  __int64 v125; // rax
  __int64 v126; // rcx
  __int64 v127; // r15
  __int64 v128; // rax
  __int64 v129; // r15
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // rcx
  __int64 v133; // r13
  __int64 v134; // rax
  __int64 v135; // rcx
  __int64 v136; // r13
  __int64 v137; // rax
  __int64 v138; // rax
  __int64 v139; // rax
  __int64 v140; // rax
  __int64 v141; // rax
  __int64 v142; // rcx
  __int64 v143; // r14
  __int64 v144; // rax
  __int64 v145; // rax
  unsigned int v146; // [rsp+44h] [rbp-BCh] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  VIDPN_MGR *v148; // [rsp+50h] [rbp-B0h]
  __int64 InputBuffer; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v150; // [rsp+60h] [rbp-A0h]
  __int64 v151; // [rsp+68h] [rbp-98h] BYREF
  __int64 v152; // [rsp+70h] [rbp-90h]
  struct _UNICODE_STRING v153; // [rsp+78h] [rbp-88h] BYREF
  struct _UNICODE_STRING v154; // [rsp+88h] [rbp-78h] BYREF
  void **v155; // [rsp+98h] [rbp-68h] BYREF
  __int128 v156; // [rsp+A0h] [rbp-60h]
  void **v157; // [rsp+B0h] [rbp-50h]
  __int64 v158; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v159; // [rsp+C0h] [rbp-40h]
  int v160; // [rsp+C8h] [rbp-38h]
  void **v161; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v162; // [rsp+D8h] [rbp-28h]
  void **v163; // [rsp+E8h] [rbp-18h]
  __int64 v164; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v165; // [rsp+F8h] [rbp-8h]
  int v166; // [rsp+100h] [rbp+0h]
  _OWORD v167[2]; // [rsp+108h] [rbp+8h] BYREF
  int v168; // [rsp+128h] [rbp+28h]
  wchar_t v169; // [rsp+12Ch] [rbp+2Ch]
  _OWORD v170[3]; // [rsp+130h] [rbp+30h] BYREF

  v148 = this;
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
  *((_QWORD *)v3 + 19) = &Queue<VIDPN_MGR::COMMITVIDPNREQUEST>::`vftable';
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
  *((_QWORD *)v3 + 36) = &Queue<VIDPN_MGR::COMMITVIDPNREQUEST>::`vftable';
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
    v55 = WdLogNewEntry5_WdAssertion(&DoublyLinkedList<DMMVIDPN,DoubleLinkedListElementDeleter<DMMVIDPN>>::`vftable');
    WdLogEvent5_WdAssertion(v55);
  }
  *((_DWORD *)v3 + 16) = 1;
  if ( a2 )
  {
    if ( *((_QWORD *)v3 + 1) )
    {
      v57 = WdLogNewEntry5_WdAssertion(v5);
      WdLogEvent5_WdAssertion(v57);
    }
    *((_QWORD *)v3 + 1) = a2;
  }
  else
  {
    v56 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v56 + 24) = v3;
    *(_QWORD *)(v56 + 32) = *((_QWORD *)v3 + 1);
    WdLogEvent5_WdError(v56);
  }
  if ( *((_DWORD *)v3 + 8) != 2 )
  {
    v58 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v58 + 24) = v3;
    WdLogEvent5_WdError(v58);
    *((_DWORD *)v3 + 14) = *((_DWORD *)v3 + 6);
    return v3;
  }
  v8 = (DMMVIDEOPRESENTSOURCESET *)operator new(0x70uLL, 0x4E506456u, PagedPool);
  if ( v8 )
    v9 = DMMVIDEOPRESENTSOURCESET::DMMVIDEOPRESENTSOURCESET(v8, v3);
  else
    v9 = 0LL;
  auto_rc<DMMVIDEOPRESENTTARGETSET>::reset((__int64 *)v3 + 9, (__int64)v9);
  if ( !*(_QWORD *)v6
    || ((v11 = (DMMVIDEOPRESENTTARGETSET *)operator new(0x80uLL, 0x4E506456u, PagedPool)) == 0LL
      ? (v12 = 0LL)
      : (v12 = DMMVIDEOPRESENTTARGETSET::DMMVIDEOPRESENTTARGETSET(v11, v3)),
        auto_rc<DMMVIDEOPRESENTTARGETSET>::reset((__int64 *)v3 + 10, (__int64)v12),
        !*(_QWORD *)v7) )
  {
    v59 = WdLogNewEntry5_WdLowResource(v10);
    WdLogEvent5_WdLowResource(v59);
    *((_DWORD *)v3 + 14) = -1073741801;
    return v3;
  }
  Configuration = VIDPN_MGR::_ReadConfiguration((unsigned __int64)v3);
  if ( Configuration < 0
    || (Configuration = VIDPN_MGR::_InitializeDxgPortDmmInterfaces(v3), Configuration < 0)
    || (Configuration = VIDPN_MGR::_InitializeVidPnMiniportInterfaces(v3), Configuration < 0) )
  {
LABEL_75:
    v61 = WdLogNewEntry5_WdError(v13);
    if ( !*((_QWORD *)v3 + 1) )
    {
      v62 = WdLogNewEntry5_WdAssertion(v60);
      WdLogEvent5_WdAssertion(v62);
    }
    *(_QWORD *)(v61 + 24) = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
    WdLogEvent5_WdError(v61);
    *((_DWORD *)v3 + 14) = Configuration;
    return v3;
  }
  _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)v6 + 72LL), 1u);
  v15 = *(_QWORD *)v6;
  v150 = 0LL;
  if ( v15 == -112 )
    InputBuffer = 0LL;
  else
    InputBuffer = v15;
  v150 = *((_QWORD *)v3 + 44);
  if ( !*((_QWORD *)v3 + 1) )
  {
    v63 = WdLogNewEntry5_WdAssertion(v13);
    WdLogEvent5_WdAssertion(v63);
  }
  v17 = DxgkCallDriverIoControl(
          *(PDEVICE_OBJECT *)(*(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL) + 192LL),
          0x23204Fu,
          &InputBuffer,
          0x10u,
          0LL,
          0,
          1u,
          0LL);
  if ( v17 < 0 )
  {
    v65 = WdLogNewEntry5_WdError(v16);
    if ( !*((_QWORD *)v3 + 1) )
    {
      v66 = WdLogNewEntry5_WdAssertion(v64);
      WdLogEvent5_WdAssertion(v66);
    }
    *(_QWORD *)(v65 + 24) = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
    WdLogEvent5_WdError(v65);
    *((_DWORD *)v3 + 14) = v17;
    if ( !v15 )
      return v3;
LABEL_84:
    ReferenceCounted::Release((ReferenceCounted *)(v15 + 64));
    return v3;
  }
  if ( !*(_QWORD *)(v15 + 40) )
  {
    v69 = WdLogNewEntry5_WdError(v16);
    if ( !*((_QWORD *)v3 + 1) )
    {
      v67 = WdLogNewEntry5_WdAssertion(v68);
      WdLogEvent5_WdAssertion(v67);
    }
    *(_QWORD *)(v69 + 24) = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
    WdLogEvent5_WdError(v69);
    *((_DWORD *)v3 + 14) = -1071774936;
    goto LABEL_84;
  }
  ReferenceCounted::Release((ReferenceCounted *)(v15 + 64));
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v7 + 72LL));
  v19 = *(_QWORD *)v7;
  v152 = 0LL;
  if ( v19 == -112 )
    v151 = 0LL;
  else
    v151 = v19;
  v152 = *((_QWORD *)v3 + 45);
  if ( !*((_QWORD *)v3 + 1) )
  {
    v70 = WdLogNewEntry5_WdAssertion(v18);
    WdLogEvent5_WdAssertion(v70);
  }
  v21 = DxgkCallDriverIoControl(
          *(PDEVICE_OBJECT *)(*(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL) + 192LL),
          0x232053u,
          &v151,
          0x10u,
          0LL,
          0,
          1u,
          0LL);
  if ( v21 < 0 )
  {
    v72 = WdLogNewEntry5_WdError(v20);
    if ( !*((_QWORD *)v3 + 1) )
    {
      v73 = WdLogNewEntry5_WdAssertion(v71);
      WdLogEvent5_WdAssertion(v73);
    }
    *(_QWORD *)(v72 + 24) = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
    WdLogEvent5_WdError(v72);
    *((_DWORD *)v3 + 14) = v21;
    if ( !v19 )
      return v3;
LABEL_93:
    v75 = (void (__fastcall ***)(_QWORD, __int64))(v19 + 64);
    v76 = _InterlockedDecrement((volatile signed __int32 *)(v19 + 72));
    if ( v76 )
    {
      if ( v76 < 0 )
      {
        v77 = WdLogNewEntry5_WdError(v75);
        *(_QWORD *)(v77 + 24) = v76;
        WdLogEvent5_WdError(v77);
      }
    }
    else if ( v75 )
    {
      (**v75)(v75, 1LL);
    }
    return v3;
  }
  if ( !*(_QWORD *)(v19 + 40) )
  {
    v79 = WdLogNewEntry5_WdError(v20);
    if ( !*((_QWORD *)v3 + 1) )
    {
      v74 = WdLogNewEntry5_WdAssertion(v78);
      WdLogEvent5_WdAssertion(v74);
    }
    *(_QWORD *)(v79 + 24) = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
    WdLogEvent5_WdError(v79);
    *((_DWORD *)v3 + 14) = -1071774935;
    goto LABEL_93;
  }
  v22 = *(_QWORD *)(v19 + 24);
  if ( v22 == v19 + 24 )
    goto LABEL_34;
  NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v22 - 8);
  if ( !NextTarget )
    goto LABEL_34;
  do
  {
    if ( IsInternalVideoOutput(*((_DWORD *)NextTarget + 20)) )
      break;
    NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v19, NextTarget);
  }
  while ( NextTarget );
  if ( NextTarget )
    v24 = *((_DWORD *)NextTarget + 6);
  else
LABEL_34:
    v24 = -1;
  *((_DWORD *)v3 + 124) = v24;
  v25 = (void (__fastcall ***)(_QWORD, __int64))(v19 + 64);
  v26 = _InterlockedDecrement((volatile signed __int32 *)(v19 + 72));
  if ( v26 )
  {
    if ( v26 < 0 )
    {
      v80 = WdLogNewEntry5_WdError(v25);
      *(_QWORD *)(v80 + 24) = v26;
      WdLogEvent5_WdError(v80);
    }
  }
  else if ( v25 )
  {
    (**v25)(v25, 1LL);
  }
  v27 = *(_QWORD *)v7;
  if ( *(_QWORD *)(*(_QWORD *)v7 + 40LL) < *(_QWORD *)(*(_QWORD *)v6 + 40LL) )
  {
    v81 = (_QWORD *)WdLogNewEntry5_WdError(v27);
    v81[3] = *(_QWORD *)(*(_QWORD *)v7 + 40LL);
    v82 = *(_QWORD *)v6;
    v81[4] = *(_QWORD *)(*(_QWORD *)v6 + 40LL);
    if ( !*((_QWORD *)v3 + 1) )
    {
      v83 = WdLogNewEntry5_WdAssertion(v82);
      WdLogEvent5_WdAssertion(v83);
    }
    v81[5] = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
    WdLogEvent5_WdError(v81);
    *((_DWORD *)v3 + 14) = -1071774938;
  }
  else
  {
    if ( !*((_QWORD *)v3 + 1) )
    {
      v84 = WdLogNewEntry5_WdAssertion(v27);
      WdLogEvent5_WdAssertion(v84);
    }
    v28 = DpiOpenPnpRegistryKey(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL) + 192LL), 1LL, 131097LL, &Handle);
    v30 = v28;
    if ( v28 >= 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)v7 + 72LL));
      v19 = *(_QWORD *)v7;
      v168 = *(_DWORD *)L"st";
      v169 = aTargetpriority[18];
      v153.Buffer = (wchar_t *)v167;
      v167[0] = *(_OWORD *)L"TargetPriorityList";
      v157 = &DMM::AutoBuffer<unsigned int>::`vftable'{for `NonReferenceCounted'};
      *(_DWORD *)&v153.Length = 2490404;
      v167[1] = *(_OWORD *)L"iorityList";
      v155 = &DMM::AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>::`vftable'{for `SetElement'};
      v156 = 0LL;
      v158 = 0LL;
      v159 = 0LL;
      v160 = 3;
      v31 = VIDPN_MGR::_ReadTargetPriorityList(v29, Handle, &v153, (__int64)&v155);
      v35 = v31;
      if ( v31 >= 0 )
      {
        v88 = v159;
        if ( !v159 )
        {
          v89 = WdLogNewEntry5_WdAssertion(v33);
          WdLogEvent5_WdAssertion(v89);
        }
        v90 = v88 >> 2;
        if ( v90 )
        {
          v91 = v158;
          v92 = 0LL;
          for ( i = 0; i < v90; v92 = ++i )
          {
            TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(
                           (DMMVIDEOPRESENTTARGETSET *)v19,
                           *(_DWORD *)(v91 + 4 * v92));
            v98 = TargetById;
            if ( TargetById )
            {
              if ( *((_DWORD *)TargetById + 29) == -1 )
              {
                *((_DWORD *)TargetById + 29) = i;
                v101 = WdLogNewEntry5_WdTrace(v96, v95);
                *(_QWORD *)(v101 + 24) = v92;
                v33 = *((unsigned int *)v98 + 6);
                *(_QWORD *)(v101 + 32) = v33;
              }
              else
              {
                v100 = WdLogNewEntry5_WdError(v96);
                *(_QWORD *)(v100 + 24) = *((unsigned int *)v98 + 6);
                WdLogEvent5_WdError(v100);
              }
            }
            else
            {
              v99 = WdLogNewEntry5_WdWarning(v96, v95, v97);
              *(_QWORD *)(v99 + 24) = *(unsigned int *)(v91 + 4 * v92);
              *(_QWORD *)(v99 + 32) = v92;
              WdLogEvent5_WdWarning(v99);
            }
          }
          v3 = v148;
        }
        v102 = *(_QWORD *)(v19 + 24);
        if ( v102 != v19 + 24 )
        {
          for ( j = (unsigned int *)(v102 - 8);
                j;
                j = (unsigned int *)DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                                      (DMMVIDEOPRESENTTARGETSET *)v19,
                                      (const struct DMMVIDEOPRESENTTARGET *const)j) )
          {
            if ( j[29] == -1 )
            {
              v104 = WdLogNewEntry5_WdWarning(v33, v32, v34);
              *(_QWORD *)(v104 + 24) = j[6];
              WdLogEvent5_WdWarning(v104);
            }
          }
        }
      }
      else if ( v31 != -1073741275 )
      {
        v106 = WdLogNewEntry5_WdError(v33);
        if ( !*((_QWORD *)v3 + 1) )
        {
          v107 = WdLogNewEntry5_WdAssertion(v105);
          WdLogEvent5_WdAssertion(v107);
        }
        *(_QWORD *)(v106 + 24) = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
        *(_QWORD *)(v106 + 32) = v35;
        WdLogEvent5_WdError(v106);
        v108 = Handle;
        *((_DWORD *)v3 + 14) = v35;
        ZwClose(v108);
        v109 = &v155;
LABEL_130:
        DMM::AutoBuffer<unsigned int>::~AutoBuffer<unsigned int>(v109);
        if ( !v19 )
          return v3;
        goto LABEL_93;
      }
      DMM::AutoBuffer<unsigned int>::~AutoBuffer<unsigned int>(&v155);
      v154.Buffer = (wchar_t *)v170;
      v170[0] = *(_OWORD *)L"TargetForcePriorityList";
      *(_DWORD *)&v154.Length = 3145774;
      v161 = &DMM::AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>::`vftable'{for `SetElement'};
      v170[1] = *(_OWORD *)L"rcePriorityList";
      v163 = &DMM::AutoBuffer<unsigned int>::`vftable'{for `NonReferenceCounted'};
      v170[2] = *(_OWORD *)L"ityList";
      v164 = 0LL;
      v165 = 0LL;
      v162 = 0LL;
      v166 = 3;
      v37 = VIDPN_MGR::_ReadTargetPriorityList(v36, Handle, &v154, (__int64)&v161);
      v39 = v37;
      if ( v37 >= 0 )
      {
        v112 = v165;
        if ( !v165 )
        {
          v113 = WdLogNewEntry5_WdAssertion(v38);
          WdLogEvent5_WdAssertion(v113);
        }
        v114 = v112 >> 2;
        if ( v114 )
        {
          v115 = v164;
          v116 = 0LL;
          for ( k = 0; k < v114; v116 = ++k )
          {
            v118 = DMMVIDEOPRESENTTARGETSET::GetTargetById(
                     (DMMVIDEOPRESENTTARGETSET *)v19,
                     *(_DWORD *)(v115 + 4 * v116));
            v122 = v118;
            if ( v118 )
            {
              if ( *((_DWORD *)v118 + 30) == -1 )
              {
                *((_DWORD *)v118 + 30) = k;
                v125 = WdLogNewEntry5_WdTrace(v120, v119);
                *(_QWORD *)(v125 + 24) = v116;
                *(_QWORD *)(v125 + 32) = *((unsigned int *)v122 + 6);
              }
              else
              {
                v124 = WdLogNewEntry5_WdError(v120);
                *(_QWORD *)(v124 + 24) = *((unsigned int *)v122 + 6);
                WdLogEvent5_WdError(v124);
              }
            }
            else
            {
              v123 = WdLogNewEntry5_WdWarning(v120, v119, v121);
              *(_QWORD *)(v123 + 24) = *(unsigned int *)(v115 + 4 * v116);
              *(_QWORD *)(v123 + 32) = v116;
              WdLogEvent5_WdWarning(v123);
            }
          }
          v3 = v148;
        }
LABEL_46:
        DMM::AutoBuffer<unsigned int>::~AutoBuffer<unsigned int>(&v161);
        ZwClose(Handle);
        v146 = -1;
        if ( !*((_QWORD *)v3 + 1) )
        {
          v128 = WdLogNewEntry5_WdAssertion(v40);
          WdLogEvent5_WdAssertion(v128);
        }
        if ( (int)DpiReadPnpRegistryValue(
                    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL) + 192LL),
                    L"DefaultSimulatedTarget",
                    &v146,
                    4LL) < 0
          || (v129 = v146, v146 == -1) )
        {
          v44 = WdLogNewEntry5_WdTrace(v42, v41);
          if ( !*((_QWORD *)v3 + 1) )
          {
            v138 = WdLogNewEntry5_WdAssertion(v43);
            WdLogEvent5_WdAssertion(v138);
          }
          *(_QWORD *)(v44 + 24) = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
        }
        else if ( DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v19, v146) )
        {
          v133 = WdLogNewEntry5_WdTrace(v131, v130);
          *(_QWORD *)(v133 + 24) = v129;
          if ( !*((_QWORD *)v3 + 1) )
          {
            v134 = WdLogNewEntry5_WdAssertion(v132);
            WdLogEvent5_WdAssertion(v134);
          }
          *(_QWORD *)(v133 + 32) = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
          *((_DWORD *)v3 + 123) = v129;
        }
        else
        {
          v136 = WdLogNewEntry5_WdError(v131);
          *(_QWORD *)(v136 + 24) = v129;
          if ( !*((_QWORD *)v3 + 1) )
          {
            v137 = WdLogNewEntry5_WdAssertion(v135);
            WdLogEvent5_WdAssertion(v137);
          }
          *(_QWORD *)(v136 + 32) = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
          WdLogEvent5_WdError(v136);
        }
        if ( v19 )
        {
          v45 = (void (__fastcall ***)(_QWORD, __int64))(v19 + 64);
          v46 = _InterlockedDecrement((volatile signed __int32 *)(v19 + 72));
          if ( v46 )
          {
            if ( v46 < 0 )
            {
              v139 = WdLogNewEntry5_WdError(v45);
              *(_QWORD *)(v139 + 24) = v46;
              WdLogEvent5_WdError(v139);
            }
          }
          else if ( v45 )
          {
            (**v45)(v45, 1LL);
          }
        }
        Configuration = VIDPN_MGR::_InitializeDmmClientInterfaces(v3);
        if ( Configuration >= 0 )
        {
          if ( !*((_QWORD *)v3 + 1) )
          {
            v140 = WdLogNewEntry5_WdAssertion(v13);
            WdLogEvent5_WdAssertion(v140);
          }
          v49 = *((_QWORD *)v3 + 1);
          v50 = (_QWORD *)((char *)v3 + 472);
          if ( !v49 || v3 == (VIDPN_MGR *)-472LL )
          {
            inserted = -1073741811;
          }
          else
          {
            *v50 = 0LL;
            v51 = *(struct _FAST_MUTEX **)(v49 + 96);
            if ( !v51 )
            {
              v141 = WdLogNewEntry5_WdError(0LL);
              *(_QWORD *)(v141 + 24) = *(_QWORD *)(v49 + 16);
              WdLogEvent5_WdError(v141);
              inserted = -1073741811;
LABEL_156:
              v143 = WdLogNewEntry5_WdError(v13);
              if ( !*((_QWORD *)v3 + 1) )
              {
                v144 = WdLogNewEntry5_WdAssertion(v142);
                WdLogEvent5_WdAssertion(v144);
              }
              *(_QWORD *)(v143 + 24) = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
              WdLogEvent5_WdError(v143);
              *((_DWORD *)v3 + 14) = inserted;
              return v3;
            }
            inserted = MONITOR_MGR::_CreateAndInsertMonitorEventHandler(
                         v51,
                         v47,
                         v48,
                         (struct HDXGMONITOREVENT__ **)v3 + 59);
          }
          if ( inserted >= 0 )
          {
            if ( !*v50 )
            {
              v145 = WdLogNewEntry5_WdAssertion(v13);
              WdLogEvent5_WdAssertion(v145);
            }
            v53 = (DXGDIAGNOSTICS *)operator new(0x28uLL, 0x4E506456u, PagedPool);
            if ( v53 )
              v2 = DXGDIAGNOSTICS::DXGDIAGNOSTICS(v53, 0x8000u, PagedPool);
            *((_QWORD *)v3 + 63) = v2;
            *((_DWORD *)v3 + 16) = 2;
            return v3;
          }
          goto LABEL_156;
        }
        goto LABEL_75;
      }
      if ( v37 == -1073741275 )
        goto LABEL_46;
      v127 = WdLogNewEntry5_WdError(v38);
      if ( !*((_QWORD *)v3 + 1) )
      {
        v110 = WdLogNewEntry5_WdAssertion(v126);
        WdLogEvent5_WdAssertion(v110);
      }
      *(_QWORD *)(v127 + 24) = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
      *(_QWORD *)(v127 + 32) = v39;
      WdLogEvent5_WdError(v127);
      v111 = Handle;
      *((_DWORD *)v3 + 14) = v39;
      ZwClose(v111);
      v109 = &v161;
      goto LABEL_130;
    }
    v86 = WdLogNewEntry5_WdError(v29);
    if ( !*((_QWORD *)v3 + 1) )
    {
      v87 = WdLogNewEntry5_WdAssertion(v85);
      WdLogEvent5_WdAssertion(v87);
    }
    *(_QWORD *)(v86 + 24) = *(_QWORD *)(*((_QWORD *)v3 + 1) + 16LL);
    *(_QWORD *)(v86 + 32) = v30;
    WdLogEvent5_WdError(v86);
    *((_DWORD *)v3 + 14) = v30;
  }
  return v3;
}
