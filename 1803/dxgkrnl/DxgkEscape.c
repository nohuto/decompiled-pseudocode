/*
 * XREFs of DxgkEscape @ 0x1C00A66B0
 * Callers:
 *     ?VmBusEscape@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017F120 (-VmBusEscape@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0002A74 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0002BC4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C0007014 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     DxgkLogCodePointPacket @ 0x1C000735C (DxgkLogCodePointPacket.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C0009A64 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0015020 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00152B0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015410 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015490 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0015880 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C00158C0 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00158E4 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C001616C (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C00161A0 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C001A718 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C001A72C (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     ??1ENSURE_CONTEXT_DEREFERENCE@@QEAA@XZ @ 0x1C001ACEC (--1ENSURE_CONTEXT_DEREFERENCE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     ?VidMmEscape@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z @ 0x1C00325B4 (-VidMmEscape@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@.c)
 *     DxgkGetAdapterBrightnessInfo @ 0x1C003C7C4 (DxgkGetAdapterBrightnessInfo.c)
 *     DxgkGetAdapterMiracastInfo @ 0x1C003EB0C (DxgkGetAdapterMiracastInfo.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00A619C (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     _DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION @ 0x1C00A8B44 (_DxgkEscape_--_2_--ENSURE_DATA_DELETION--_ENSURE_DATA_DELETION.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00A9DAC (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     DxgkWriteDiagEntry @ 0x1C00C3130 (DxgkWriteDiagEntry.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00F4EE0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00F9E10 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?DdiEscape@DXGADAPTER@@QEAAJPEBU_DXGKARG_ESCAPE@@@Z @ 0x1C0146678 (-DdiEscape@DXGADAPTER@@QEAAJPEBU_DXGKARG_ESCAPE@@@Z.c)
 *     ?ActivateStoringInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJH@Z @ 0x1C0150AD8 (-ActivateStoringInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJH@Z.c)
 *     ?GetInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DISPLAYMODELIST@@@Z @ 0x1C0154CE0 (-GetInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DISPLAYMODELIST@@@Z.c)
 *     ?ReportDisplayState@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@I@Z @ 0x1C0156B6C (-ReportDisplayState@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@I@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C01648B0 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z.c)
 *     ?DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0164AAC (-DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     DxgkWriteUserModeDiagEntry @ 0x1C0169DC4 (DxgkWriteUserModeDiagEntry.c)
 *     ?VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS@@IPEAE@Z @ 0x1C0182CFC (-VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS.c)
 *     ?Escape@DXGDEVICE@@QEAAJPEAU_D3DKMT_DEVICE_ESCAPE@@@Z @ 0x1C018A974 (-Escape@DXGDEVICE@@QEAAJPEAU_D3DKMT_DEVICE_ESCAPE@@@Z.c)
 *     ?DxgDbgTakeSnapshot@@YAJPEAXKPEAK@Z @ 0x1C018F1DC (-DxgDbgTakeSnapshot@@YAJPEAXKPEAK@Z.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0195B0C (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     ?TdrDbgCtrl@@YAJW4_TDR_DBG_CTRL@@@Z @ 0x1C0199A70 (-TdrDbgCtrl@@YAJW4_TDR_DBG_CTRL@@@Z.c)
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C019AE78 (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeEvictByCriteria@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C019AF80 (-DxgEscapeEvictByCriteria@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeEvictByNtHandle@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C019AFE8 (-DxgEscapeEvictByNtHandle@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeSuspendResumeProcess@@YAJIPEAX_N1@Z @ 0x1C019B9D0 (-DxgEscapeSuspendResumeProcess@@YAJIPEAX_N1@Z.c)
 *     ?GetDiagnosticsBuffer@@YAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@IH@Z @ 0x1C019BD14 (-GetDiagnosticsBuffer@@YAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@IH@Z.c)
 *     ?IsAMDDriverEscapeAllowed@@YAHPEAX_K@Z @ 0x1C019BE78 (-IsAMDDriverEscapeAllowed@@YAHPEAX_K@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019DB30 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ReferenceBddFallbackAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@PEA_K@Z @ 0x1C01A067C (-ReferenceBddFallbackAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@PEA_K@Z.c)
 *     ?ReferenceWarpAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@PEA_K@Z @ 0x1C01A0734 (-ReferenceWarpAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@PEA_K@Z.c)
 *     ?GetEdids@EDIDCACHE@@QEAAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@@Z @ 0x1C01A8D08 (-GetEdids@EDIDCACHE@@QEAAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01B6F44 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?DxgkHMDGetEdidBaseBlock@@YAJAEBU_LUID@@IPEAE@Z @ 0x1C01C4F6C (-DxgkHMDGetEdidBaseBlock@@YAJAEBU_LUID@@IPEAE@Z.c)
 *     OutputDuplGetDebugInfo @ 0x1C01CD520 (OutputDuplGetDebugInfo.c)
 *     OutputDuplGetDiagnosticBuffer @ 0x1C01CD60C (OutputDuplGetDiagnosticBuffer.c)
 *     DxgkHandleMiracastEscape @ 0x1C0200168 (DxgkHandleMiracastEscape.c)
 *     ?DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z @ 0x1C0200B74 (-DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z.c)
 *     DxgkHandleIndirectEscape @ 0x1C0206A54 (DxgkHandleIndirectEscape.c)
 *     ?DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z @ 0x1C0212560 (-DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z.c)
 */

__int64 __fastcall DxgkEscape(const void **a1, __int64 a2, __int64 a3)
{
  struct VIDMM_DEVICE *v4; // rbx
  __int64 CurrentProcess; // rax
  DXGPROCESS *ProcessDxgProcess; // rax
  DXGPROCESS *v7; // r13
  DXGPROCESS **ThreadProperty; // rax
  DXGPROCESS **v9; // rdi
  __int64 v10; // rdi
  int *p_Src; // r14
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  size_t v21; // r8
  char *v22; // rdx
  __int64 v23; // rcx
  unsigned int v24; // eax
  DXGADAPTER *v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // edx
  __int64 v29; // rcx
  int v30; // eax
  size_t v31; // r8
  char *v32; // rcx
  unsigned int v33; // eax
  unsigned int v34; // eax
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // r8
  unsigned int v38; // ebx
  struct DXGPROCESS *Current; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  unsigned int v42; // eax
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rbx
  __int64 v46; // rcx
  __int64 v47; // rcx
  DXGGLOBAL *v48; // rax
  __int64 v49; // rcx
  DXGADAPTER *v50; // rbx
  __int64 v51; // rcx
  __int64 v52; // r8
  struct DXGGLOBAL *v53; // rax
  DXGGLOBAL *v54; // rax
  __int64 v55; // rcx
  DXGADAPTER *v56; // rbx
  struct DXGGLOBAL *v57; // rax
  int LiveDumpWithWdLogs; // eax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // rbx
  __int64 v63; // rax
  __int64 v64; // rcx
  __int64 v65; // r8
  DXGADAPTER *v66; // r12
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  unsigned int v72; // r13d
  DXGPROCESS *v73; // r9
  unsigned int v74; // r12d
  unsigned int v75; // r13d
  __int64 v76; // rdx
  __int64 v77; // r12
  unsigned int v78; // ecx
  __int64 v79; // rdx
  _QWORD *v80; // rax
  unsigned int v81; // edx
  __int64 v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rdi
  unsigned int v85; // edx
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // r10
  unsigned int v89; // ecx
  __int64 v90; // rcx
  __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  unsigned int v94; // eax
  __int64 v95; // rax
  __int64 v96; // rax
  DXGADAPTER *v97; // r13
  unsigned int v98; // eax
  unsigned int v99; // eax
  int v100; // ecx
  size_t v101; // r8
  char *v102; // rcx
  __int64 v103; // rdx
  __int64 v104; // rax
  __int64 v105; // rcx
  unsigned int v106; // eax
  __int64 v107; // rcx
  unsigned int v108; // r9d
  unsigned __int8 v109; // cl
  unsigned int v110; // eax
  __int64 v111; // r8
  BOOL v112; // eax
  char v113; // al
  _QWORD *v114; // rax
  __int64 v115; // rcx
  __int64 v116; // r8
  unsigned int v117; // ebx
  unsigned int HostProcess; // eax
  int v119; // eax
  __int64 v120; // rcx
  __int64 v121; // rax
  unsigned __int64 v122; // rcx
  void *v123; // rax
  void *v124; // rax
  struct DXGGLOBAL *v125; // rax
  __int64 v126; // rax
  __int64 v127; // rbx
  __int64 v128; // rax
  _QWORD *v129; // rax
  __int64 v130; // rax
  __int64 v131; // rax
  __int64 v132; // rax
  unsigned __int64 v133; // rdx
  unsigned int v134; // eax
  DXGADAPTER *v135; // r12
  __int64 v136; // rcx
  __int64 v137; // rcx
  __int64 v138; // r8
  DXGADAPTER *v139; // r12
  __int64 v140; // rcx
  unsigned int v141; // edx
  unsigned int v142; // eax
  unsigned int v143; // eax
  __int64 v144; // rax
  DXGADAPTER *v145; // r12
  __int64 v146; // rcx
  __int64 v147; // rax
  DXGADAPTER *v148; // rcx
  __int64 v149; // rax
  int v150; // ebx
  unsigned __int64 v151; // rdx
  __int64 v152; // rdx
  __int64 v153; // rcx
  __int64 v154; // r8
  __int64 v155; // rax
  __int64 v156; // rax
  __int64 v157; // rcx
  EDIDCACHE *v158; // rcx
  char v159; // r10
  DXGADAPTER *v160; // rdx
  unsigned int v161; // r8d
  __int64 v162; // r9
  unsigned int NumDifferentPhysicalAdapters; // eax
  char v164; // r10
  int v165; // eax
  __int64 v166; // rax
  int v167; // eax
  _QWORD *v168; // r9
  __int64 v169; // r8
  __int64 v170; // rax
  __int64 v171; // rax
  __int64 v172; // rax
  __int64 v173; // rax
  __int64 v174; // rax
  size_t v175; // r8
  char *v176; // rcx
  size_t Size; // [rsp+38h] [rbp-520h]
  char v178; // [rsp+50h] [rbp-508h]
  int v179; // [rsp+58h] [rbp-500h] BYREF
  __int64 v180; // [rsp+60h] [rbp-4F8h]
  unsigned __int8 v181; // [rsp+68h] [rbp-4F0h]
  __int64 v182; // [rsp+70h] [rbp-4E8h] BYREF
  unsigned __int64 v183; // [rsp+78h] [rbp-4E0h] BYREF
  __int128 v184; // [rsp+80h] [rbp-4D8h] BYREF
  unsigned __int64 v185; // [rsp+90h] [rbp-4C8h] BYREF
  __int16 v186; // [rsp+98h] [rbp-4C0h] BYREF
  __int16 v187; // [rsp+9Ch] [rbp-4BCh] BYREF
  unsigned int v188; // [rsp+A0h] [rbp-4B8h]
  DXGADAPTER *v189; // [rsp+A8h] [rbp-4B0h] BYREF
  char v190[8]; // [rsp+B0h] [rbp-4A8h] BYREF
  DXGADAPTER *v191; // [rsp+B8h] [rbp-4A0h]
  char v192; // [rsp+C0h] [rbp-498h]
  DXGPROCESS *v193; // [rsp+C8h] [rbp-490h]
  DXGADAPTER *v194; // [rsp+D0h] [rbp-488h]
  DXGADAPTER *v195; // [rsp+D8h] [rbp-480h]
  DXGADAPTER *v196[4]; // [rsp+E0h] [rbp-478h] BYREF
  unsigned int v197; // [rsp+100h] [rbp-458h]
  __int64 v198; // [rsp+108h] [rbp-450h]
  __int64 v199; // [rsp+110h] [rbp-448h]
  __int64 v200; // [rsp+120h] [rbp-438h] BYREF
  struct _KTHREAD **v201[2]; // [rsp+128h] [rbp-430h] BYREF
  DXGADAPTER *v202; // [rsp+138h] [rbp-420h]
  char v203; // [rsp+140h] [rbp-418h]
  struct _KTHREAD **v204[2]; // [rsp+148h] [rbp-410h] BYREF
  unsigned int *v205; // [rsp+158h] [rbp-400h]
  union _LARGE_INTEGER Interval; // [rsp+170h] [rbp-3E8h] BYREF
  struct DXGADAPTER *v207; // [rsp+178h] [rbp-3E0h]
  int v208; // [rsp+180h] [rbp-3D8h]
  struct DXGADAPTER *v209; // [rsp+188h] [rbp-3D0h] BYREF
  DXGADAPTER *v210; // [rsp+190h] [rbp-3C8h] BYREF
  _DXGKARG_ESCAPE v211; // [rsp+1A0h] [rbp-3B8h] BYREF
  _BYTE v212[24]; // [rsp+1D0h] [rbp-388h] BYREF
  unsigned __int64 v213; // [rsp+1E8h] [rbp-370h] BYREF
  unsigned __int64 v214; // [rsp+1F0h] [rbp-368h] BYREF
  struct _DXGKARG_ESCAPE v215; // [rsp+1F8h] [rbp-360h] BYREF
  struct _DXGKARG_ESCAPE v216; // [rsp+228h] [rbp-330h] BYREF
  _BYTE v217[24]; // [rsp+258h] [rbp-300h] BYREF
  _DWORD v218[4]; // [rsp+270h] [rbp-2E8h] BYREF
  _QWORD v219[8]; // [rsp+280h] [rbp-2D8h] BYREF
  _DWORD v220[4]; // [rsp+2C0h] [rbp-298h] BYREF
  __int64 v221; // [rsp+2D0h] [rbp-288h] BYREF
  GUID ActivityId; // [rsp+2D8h] [rbp-280h] BYREF
  __int64 v223; // [rsp+2E8h] [rbp-270h]
  __int64 v224; // [rsp+2F0h] [rbp-268h]
  __int64 v225; // [rsp+2F8h] [rbp-260h]
  __int64 v226; // [rsp+300h] [rbp-258h]
  __int64 v227; // [rsp+308h] [rbp-250h]
  __int64 v228; // [rsp+310h] [rbp-248h]
  char Src; // [rsp+320h] [rbp-238h] BYREF

  v195 = (DXGADAPTER *)a1;
  v4 = 0LL;
  v180 = 0LL;
  v179 = 2016;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2016);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v179, 2016);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = (DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess);
  v7 = ProcessDxgProcess;
  v193 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*((_BYTE *)ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (DXGPROCESS **)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v9 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v7 = *v9;
        v193 = *v9;
      }
    }
  }
  v10 = 0LL;
  v199 = 0LL;
  v198 = 0LL;
  p_Src = (int *)&Src;
  LOBYTE(v12) = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v181 = v12;
  if ( !v7 )
  {
    v13 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v13 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v13);
    goto LABEL_10;
  }
  v184 = 0LL;
  v17 = *((_DWORD *)a1 + 6);
  if ( v17 > 0x200 )
  {
    p_Src = (int *)operator new[](v17, 0x4B677844u, PagedPool);
    *(_QWORD *)&v184 = p_Src;
    v12 = v181;
  }
  if ( !p_Src )
  {
    v18 = WdLogNewEntry5_WdLowResource(v12);
    *(_QWORD *)(v18 + 24) = *((unsigned int *)a1 + 6);
    *(_QWORD *)(v18 + 32) = -1073741801LL;
    WdLogEvent5_WdLowResource(v18);
    DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(&v184);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v179);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v19, &EventProfilerExit, v20, v179);
    return 3221225495LL;
  }
  if ( (_BYTE)v12 )
  {
    v21 = *((unsigned int *)a1 + 6);
    v22 = (char *)a1[2];
    if ( &v22[v21] < v22 || (unsigned __int64)&v22[v21] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(p_Src, v22, v21);
    if ( *(_DWORD *)a1 )
    {
      DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v210, *(_DWORD *)a1, (struct _KTHREAD **)v7, &v209);
      if ( v209 )
      {
        if ( *((_BYTE *)v209 + 185) )
        {
          v24 = *((_DWORD *)a1 + 2);
          if ( (v24 & 0xFFFFFFF3) != 0 || v24 == 4 )
          {
            v25 = v210;
            if ( v210 )
LABEL_32:
              DXGADAPTER::ReleaseReferenceNoTracking(v25);
LABEL_33:
            DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(&v184);
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v179);
            if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q(v26, &EventProfilerExit, v27, v179);
            return -1073741637LL;
          }
        }
      }
      v23 = (__int64)v210;
      if ( v210 && _InterlockedExchangeAdd64((volatile signed __int64 *)v210 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v210 + 2), v210);
    }
  }
  else
  {
    memmove(p_Src, a1[2], *((unsigned int *)a1 + 6));
  }
  v28 = *((_DWORD *)a1 + 2);
  if ( v28 > 1029 )
  {
LABEL_128:
    v66 = 0LL;
    v194 = 0LL;
    v189 = 0LL;
    v207 = 0LL;
    if ( v28 == 13 )
    {
      Global = DXGGLOBAL::GetGlobal(v23);
      v68 = DXGGLOBAL::ReferenceBddFallbackAdapter(Global, &v185);
      v207 = v68;
      if ( !v68 )
        goto LABEL_115;
      *((_QWORD *)&v184 + 1) = v68;
    }
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v212, (struct _KTHREAD **)v7);
    v72 = *(_DWORD *)a1;
    v73 = v193;
    if ( *(_DWORD *)a1 )
    {
      v74 = (v72 >> 6) & 0xFFFFFF;
      v75 = v72 >> 30;
      if ( (*((_BYTE *)v193 + 323) & 8) != 0 )
      {
        v195 = (DXGADAPTER *)*((_QWORD *)v193 + 57);
        v194 = (DXGADAPTER *)((char *)v195 + 208);
        DXGPUSHLOCK::AcquireShared((DXGADAPTER *)((char *)v195 + 208));
        if ( v74 < *((_DWORD *)v195 + 62)
          && (v76 = v74,
              v77 = *((_QWORD *)v195 + 29),
              v78 = *(_DWORD *)(v77 + 16LL * (unsigned int)v76 + 8),
              v75 == ((v78 >> 5) & 3))
          && (v78 & 0x2000) == 0
          && (v78 & 0x1F) != 0
          && (v79 = 2 * v76, (v78 & 0x1F) == 1) )
        {
          v66 = *(DXGADAPTER **)(v77 + 8 * v79);
        }
        else
        {
          v66 = 0LL;
        }
        ExReleasePushLockSharedEx(v194, 0LL);
        KeLeaveCriticalRegion();
        v73 = v193;
      }
      else if ( v74 < *((_DWORD *)v193 + 62)
             && (v69 = v74,
                 v71 = *((_QWORD *)v193 + 29),
                 v70 = *(unsigned int *)(v71 + 16LL * v74 + 8),
                 v75 == ((*(_DWORD *)(v71 + 16LL * v74 + 8) >> 5) & 3))
             && (v70 & 0x2000) == 0
             && (v70 & 0x1F) != 0
             && (v69 = 2LL * v74, v70 &= 0x1Fu, (_BYTE)v70 == 1) )
      {
        v66 = *(DXGADAPTER **)(v71 + 16LL * v74);
      }
      else
      {
        v66 = 0LL;
      }
      v194 = v66;
    }
    if ( !v66 )
    {
      v80 = (_QWORD *)WdLogNewEntry5_WdWarning(v70, v69, v71);
      v80[3] = *(unsigned int *)a1;
      v80[4] = -1073741811LL;
      goto LABEL_151;
    }
    v81 = *((_DWORD *)a1 + 1);
    if ( v81 )
    {
      v82 = (v81 >> 6) & 0xFFFFFF;
      v83 = v81 >> 30;
      if ( (unsigned int)v82 < *((_DWORD *)v73 + 62)
        && (v71 = (unsigned int)v82,
            v84 = *((_QWORD *)v73 + 29),
            v70 = *(unsigned int *)(v84 + 16 * v82 + 8),
            (_DWORD)v83 == ((*(_DWORD *)(v84 + 16 * v82 + 8) >> 5) & 3))
        && (v70 & 0x2000) == 0
        && (v70 & 0x1F) != 0
        && (v71 = 2LL * (unsigned int)v82, v70 &= 0x1Fu, (_BYTE)v70 == 3) )
      {
        v10 = *(_QWORD *)(v84 + 16LL * (unsigned int)v82);
      }
      else
      {
        v10 = 0LL;
      }
      v199 = v10;
      if ( !v10 || v66 != *(DXGADAPTER **)(*(_QWORD *)(v10 + 16) + 16LL) && v66 != *(DXGADAPTER **)(v10 + 1688) )
      {
        v80 = (_QWORD *)WdLogNewEntry5_WdWarning(v70, v83, v71);
        v80[3] = v66;
        v80[4] = *((unsigned int *)a1 + 1);
        goto LABEL_151;
      }
    }
    v85 = *((_DWORD *)a1 + 7);
    if ( v85 )
    {
      v86 = (v85 >> 6) & 0xFFFFFF;
      v87 = v85 >> 30;
      if ( (unsigned int)v86 < *((_DWORD *)v73 + 62)
        && (v71 = (unsigned int)v86,
            v88 = *((_QWORD *)v73 + 29),
            v89 = *(_DWORD *)(v88 + 16 * v86 + 8),
            (_DWORD)v87 == ((v89 >> 5) & 3))
        && (v89 & 0x2000) == 0
        && (v89 & 0x1F) != 0
        && (v71 = 2LL * (unsigned int)v86, (v89 & 0x1F) == 7) )
      {
        v90 = *(_QWORD *)(v88 + 16LL * (unsigned int)v86);
      }
      else
      {
        v90 = 0LL;
      }
      v198 = v90;
      if ( !v90 || !v10 || v10 != *(_QWORD *)(v90 + 16) )
      {
        v80 = (_QWORD *)WdLogNewEntry5_WdWarning(v90, v87, v71);
        v80[3] = v66;
        v80[4] = v10;
        v80[5] = *((unsigned int *)a1 + 7);
LABEL_151:
        WdLogEvent5_WdWarning(v80);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v212);
LABEL_84:
        DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(&v184);
        goto LABEL_10;
      }
    }
    else
    {
      v90 = 0LL;
    }
    if ( v10 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v10 + 64));
      v66 = *(DXGADAPTER **)(*(_QWORD *)(v10 + 16) + 16LL);
      v194 = v66;
    }
    if ( v90 )
      _InterlockedIncrement64((volatile signed __int64 *)(v90 + 32));
    _InterlockedIncrement64((volatile signed __int64 *)v66 + 3);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v212);
    if ( *((_DWORD *)v66 + 416) >= 0x5023u )
    {
      v94 = *((_DWORD *)a1 + 3);
      if ( (v94 & 0x10) != 0 || v94 >= 0x40 )
      {
        v96 = WdLogNewEntry5_WdWarning(v92, v91, v93);
        *(_QWORD *)(v96 + 24) = v66;
        WdLogEvent5_WdWarning(v96);
        DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(&v184);
LABEL_10:
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v179);
LABEL_11:
        if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v14, &EventProfilerExit, v15, v179);
        return 3221225485LL;
      }
      if ( (v94 & 0x20) != 0 )
      {
        v95 = WdLogNewEntry5_WdWarning(v92, v91, v93);
        *(_QWORD *)(v95 + 24) = v66;
        *(_QWORD *)(v95 + 32) = 1325LL;
        WdLogEvent5_WdWarning(v95);
        DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(&v184);
        goto LABEL_10;
      }
    }
    v97 = v66;
    v195 = v66;
    v182 = v198;
    if ( (int)DxgkpGetPairingAdapters(v66, 0, &v189, &v183, 0LL, 0LL) >= 0
      && _InterlockedExchangeAdd64((volatile signed __int64 *)v189 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    {
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v189 + 2), v189);
    }
    if ( v189 && *((_BYTE *)v189 + 185) )
    {
      if ( !*((_DWORD *)a1 + 2) )
        v66 = v189;
      v194 = v66;
    }
    if ( *((_DWORD *)a1 + 2) == 8 )
    {
      v98 = *((_DWORD *)a1 + 6);
      if ( v98 >= 0xC && v98 >= p_Src[1] && *p_Src == 1484026436 )
      {
        v99 = p_Src[2];
        if ( v99 <= 0x1A )
        {
          v100 = 69222400;
          if ( _bittest(&v100, v99) )
          {
            LODWORD(v4) = DxgkDrtTestEscape(v66, (struct _D3DKMT_DRT_ESCAPE_HEAD *)p_Src, 0LL);
            if ( (int)v4 >= 0 )
            {
              if ( v181 )
              {
                v101 = *((unsigned int *)a1 + 6);
                v102 = (char *)a1[2];
                if ( (unsigned __int64)&v102[v101] > MmUserProbeAddress || &v102[v101] <= v102 )
                  *(_BYTE *)MmUserProbeAddress = 0;
                memmove(v102, p_Src, v101);
              }
              else
              {
                memmove((void *)a1[2], p_Src, *((unsigned int *)a1 + 6));
              }
            }
LABEL_209:
            ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v182);
            if ( v10 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v10 + 16), (struct DXGDEVICE *)v10);
            if ( v97 )
              DXGADAPTER::ReleaseReferenceNoTracking(v97);
            goto LABEL_356;
          }
        }
      }
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v200, v66, 0LL);
    COREACCESS::COREACCESS((COREACCESS *)v196, v207);
    v188 = 0;
    v191 = v66;
    v178 = 0;
    v192 = 0;
    v104 = *((_QWORD *)v193 + 13);
    if ( v104 )
      v105 = (*(unsigned int (__fastcall **)(_QWORD))(v104 + 224))(0LL) != 0;
    else
      v105 = 0LL;
    v197 = (unsigned __int8)v105;
    v106 = *((_DWORD *)a1 + 2);
    if ( v106 == 13 )
    {
      COREACCESS::AcquireShared(v196);
LABEL_260:
      v111 = v188;
      goto LABEL_261;
    }
    v108 = *((_DWORD *)a1 + 3);
    if ( (v108 & 1) != 0 )
    {
      v109 = 0;
      if ( !v106 || v106 == 3 && *((_DWORD *)a1 + 6) >= 0xCu && *p_Src == 3 )
        v109 = 1;
      v110 = v109;
      if ( *((_QWORD *)v66 + 308) )
        v110 = 1;
      v188 = v110;
      LODWORD(v4) = COREADAPTERACCESS::AcquireExclusive(&v200);
      if ( (int)v4 < 0 )
      {
        v113 = 0;
        goto LABEL_348;
      }
      if ( !(_BYTE)v188 )
      {
        v107 = *((_QWORD *)v66 + 308);
        if ( v107 )
          ADAPTER_RENDER::FlushScheduler(v107, 2, 0xFFFFFFFF, 0);
      }
      v4 = 0LL;
      v111 = 1LL;
LABEL_261:
      if ( *((_DWORD *)a1 + 1) )
      {
        v113 = v192;
        if ( *(_DWORD *)(v10 + 424) != 1 )
        {
          LODWORD(v4) = -1073741130;
          goto LABEL_348;
        }
        v178 = v192;
      }
      switch ( *((_DWORD *)a1 + 2) )
      {
        case 0:
          if ( *((_BYTE *)v66 + 185) )
          {
            if ( v198 )
              v188 = *(_DWORD *)(v198 + 28);
            else
              v188 = 0;
            if ( v10 )
              v197 = *(_DWORD *)(v10 + 336);
            else
              v197 = 0;
            v117 = *((_DWORD *)v66 + 1034);
            HostProcess = DXGPROCESS::GetHostProcess(v193);
            LODWORD(Size) = *((_DWORD *)a1 + 6);
            v119 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
                     (DXGADAPTER *)((char *)v66 + 4080),
                     HostProcess,
                     v117,
                     v197,
                     v188,
                     D3DKMT_ESCAPE_DRIVERPRIVATE,
                     *(struct _D3DDDI_ESCAPEFLAGS *)((char *)a1 + 12),
                     Size,
                     (unsigned __int8 *)p_Src);
            v4 = (struct VIDMM_DEVICE *)v119;
            if ( v119 < 0 )
            {
              v121 = WdLogNewEntry5_WdError(v120);
              *(_QWORD *)(v121 + 24) = v4;
              WdLogEvent5_WdError(v121);
            }
          }
          else
          {
            if ( *((__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))v66 + 56) == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
            {
              v130 = WdLogNewEntry5_WdWarning(v107, v103, v111);
              *(_QWORD *)(v130 + 24) = v66;
              LODWORD(v4) = -1073741637;
              *(_QWORD *)(v130 + 32) = -1073741637LL;
              WdLogEvent5_WdWarning(v130);
              goto LABEL_347;
            }
            v122 = *((unsigned int *)a1 + 6);
            if ( !(_DWORD)v122 || !a1[2] )
            {
              v129 = (_QWORD *)WdLogNewEntry5_WdWarning(v122, v103, v111);
              v129[3] = *((unsigned int *)a1 + 6);
              v129[4] = a1[2];
              v129[5] = -1073741811LL;
              WdLogEvent5_WdWarning(v129);
              goto LABEL_297;
            }
            if ( v10 )
              v123 = *(void **)(v10 + 432);
            else
              v123 = 0LL;
            v211.hDevice = v123;
            if ( v198 )
              v124 = *(void **)(v198 + 184);
            else
              v124 = 0LL;
            v211.hContext = v124;
            v211.Flags.Value = *((_DWORD *)a1 + 3);
            if ( (*((_DWORD *)v66 + 75) & 8) == 0
              && *((_DWORD *)v66 + 69) == 4098
              && !(unsigned int)IsAMDDriverEscapeAllowed(p_Src, v122) )
            {
LABEL_346:
              LODWORD(v4) = -1073741637;
              goto LABEL_347;
            }
            v211.Flags.Value &= ~0x10u;
            if ( (*((_BYTE *)v193 + 323) & 8) != 0
              || (v125 = DXGGLOBAL::GetGlobal(v122), *((_BYTE *)v125 + 1195))
              && DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
                   (struct DXGGLOBAL *)((char *)v125 + 1188),
                   v66) )
            {
              LODWORD(v4) = 32;
            }
            v211.Flags.Value = (unsigned int)v4 | v211.Flags.Value & 0xFFFFFFDF;
            v211.PrivateDriverDataSize = *((_DWORD *)a1 + 6);
            v211.pPrivateDriverData = p_Src;
            v126 = *((_QWORD *)v66 + 308);
            if ( v126 )
            {
              v127 = v126 + 56;
              KeEnterCriticalRegion();
              ExAcquirePushLockSharedEx(v127, 0LL);
              v128 = *(_QWORD *)(*((_QWORD *)v193 + 6) + 8LL * *((unsigned int *)v66 + 50));
              if ( v128 )
                v211.hKmdProcessHandle = *(HANDLE *)(v128 + 16);
              ExReleasePushLockSharedEx(v127, 0LL);
              KeLeaveCriticalRegion();
            }
            LODWORD(v4) = DXGADAPTER::DdiEscape(v66, &v211);
          }
          goto LABEL_497;
        case 1:
          v107 = (__int64)v189;
          if ( !v189 )
            goto LABEL_300;
          if ( *((_BYTE *)v189 + 185) )
            goto LABEL_310;
          if ( v10 )
            v4 = *(struct VIDMM_DEVICE **)(v10 + 608);
          if ( *((_DWORD *)a1 + 6) < 0x440u )
          {
            LODWORD(v4) = -1073741811;
            goto LABEL_347;
          }
          LODWORD(v4) = VIDMM_EXPORT::VidMmEscape(
                          *(VIDMM_EXPORT **)(*((_QWORD *)v189 + 308) + 544LL),
                          *(struct VIDMM_GLOBAL **)(*((_QWORD *)v189 + 308) + 552LL),
                          v4,
                          (struct _D3DKMT_VIDMM_ESCAPE *)p_Src,
                          v111);
          goto LABEL_497;
        case 2:
          if ( !a1[2] )
          {
LABEL_335:
            LODWORD(v4) = TdrDbgCtrl(0LL, v103, v111);
            goto LABEL_497;
          }
          v103 = *((unsigned int *)a1 + 6);
          if ( (unsigned int)v103 < 4 )
            goto LABEL_297;
          switch ( *p_Src )
          {
            case 0:
              goto LABEL_335;
            case 1:
              LODWORD(v4) = TdrDbgCtrl(2LL, v103, v111);
              goto LABEL_497;
            case 2:
              LODWORD(v4) = TdrDbgCtrl(1LL, v103, v111);
              goto LABEL_497;
            case 3:
              LODWORD(v4) = TdrDbgCtrl(3LL, v103, v111);
              goto LABEL_497;
            case 4:
            case 5:
              v135 = v189;
              if ( !v189 )
              {
                *(_QWORD *)(WdLogNewEntry5_WdTrace(v107, v103, v111, 0x1C0000000uLL) + 24) = 0LL;
                goto LABEL_346;
              }
              if ( *((_BYTE *)v189 + 185) )
                goto LABEL_346;
              LODWORD(v4) = TdrDbgCtrl(4LL, v103, v111);
              if ( (int)v4 >= 0 )
              {
                v136 = *(_QWORD *)(*((_QWORD *)v135 + 308) + 528LL);
                v220[0] = 2;
                v220[1] = *p_Src;
                LODWORD(v4) = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v135 + 308) + 520LL)
                                                                                       + 8LL)
                                                                           + 64LL))(
                                v136,
                                v220);
              }
              goto LABEL_497;
            case 6:
              LODWORD(v4) = TdrDbgCtrl(5LL, v103, v111);
              goto LABEL_497;
            case 7:
              LODWORD(v4) = TdrDbgCtrl(6LL, v103, v111);
              goto LABEL_497;
            case 8:
              if ( (unsigned int)v103 < 8 )
              {
                LODWORD(v4) = -1073741811;
                goto LABEL_347;
              }
              if ( !v189 )
              {
                *(_QWORD *)(WdLogNewEntry5_WdTrace(v107, v103, v111, 0x1C0000000uLL) + 24) = v66;
                goto LABEL_346;
              }
              v139 = v189;
              if ( *((_BYTE *)v189 + 185) )
                goto LABEL_346;
              LODWORD(v4) = TdrDbgCtrl(4LL, v103, v111);
              if ( (int)v4 >= 0 )
              {
                v140 = *(_QWORD *)(*((_QWORD *)v139 + 308) + 528LL);
                v218[0] = 2;
                v218[1] = *p_Src;
                v218[2] = p_Src[1];
                LODWORD(v4) = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v139 + 308) + 520LL)
                                                                                       + 8LL)
                                                                           + 64LL))(
                                v140,
                                v218);
              }
              break;
            default:
              goto LABEL_297;
          }
          goto LABEL_497;
        case 3:
          v107 = (__int64)v189;
          if ( !v189 )
            goto LABEL_300;
          if ( *((_BYTE *)v189 + 185) )
            goto LABEL_310;
          if ( *((_DWORD *)a1 + 6) < 0xCu )
          {
            LODWORD(v4) = -1073741811;
            goto LABEL_347;
          }
          if ( *p_Src == 2 )
          {
            LODWORD(v4) = -1073741811;
            goto LABEL_347;
          }
          if ( *p_Src != 3 )
          {
            LODWORD(v4) = (*(__int64 (__fastcall **)(_QWORD, int *, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v189 + 308) + 520LL)
                                                                                        + 8LL)
                                                                            + 64LL))(
                            *(_QWORD *)(*((_QWORD *)v189 + 308) + 528LL),
                            p_Src,
                            v111);
            goto LABEL_497;
          }
          if ( !(_DWORD)v111 )
          {
LABEL_297:
            LODWORD(v4) = -1073741811;
            goto LABEL_347;
          }
          v134 = 5000000;
          if ( (unsigned int)p_Src[1] < 0x4C4B40 )
            v134 = p_Src[1];
          Interval.QuadPart = -(__int64)v134;
          KeDelayExecutionThread(0, 0, &Interval);
          goto LABEL_498;
        case 4:
          if ( *((_DWORD *)a1 + 6) < 0xCu || !v10 )
            goto LABEL_297;
          LODWORD(v4) = DXGDEVICE::Escape((DXGDEVICE *)v10, (struct _D3DKMT_DEVICE_ESCAPE *)p_Src);
          goto LABEL_497;
        case 5:
          if ( !*((_QWORD *)v66 + 307) )
            goto LABEL_300;
          v132 = *((unsigned int *)a1 + 6);
          if ( (unsigned int)v132 < 0x80 )
            goto LABEL_297;
          v133 = *((_QWORD *)p_Src + 1);
          if ( v133 > 0x19000 || v132 != v133 + 127 && v133 )
            goto LABEL_297;
          LODWORD(v4) = DmmEscape(v66, (struct _D3DKMT_DMM_ESCAPE_INTERNAL *const)p_Src);
          goto LABEL_497;
        case 6:
          v141 = *((_DWORD *)a1 + 6);
          if ( v141 < 8 )
          {
            LODWORD(v4) = -1073741811;
            goto LABEL_347;
          }
          LODWORD(v4) = DxgDbgTakeSnapshot(p_Src + 1, v141 - 4, (unsigned int *)p_Src);
          goto LABEL_497;
        case 8:
          v142 = *((_DWORD *)a1 + 6);
          if ( v142 < 0xC || v142 < p_Src[1] || *p_Src != 1484026436 )
            goto LABEL_297;
          LODWORD(v4) = DxgkDrtTestEscape(
                          v66,
                          (struct _D3DKMT_DRT_ESCAPE_HEAD *)p_Src,
                          (struct COREADAPTERACCESS *)&v200);
          goto LABEL_497;
        case 9:
          LODWORD(v4) = GetDiagnosticsBuffer((struct _D3DKMT_DXGK_DIAGNOSTICS *)p_Src, *((_DWORD *)a1 + 6), 1);
          goto LABEL_497;
        case 0xA:
          if ( !*((_QWORD *)v66 + 307) )
            goto LABEL_300;
          v143 = *((_DWORD *)a1 + 6);
          if ( v143 < 0x18 )
          {
            LODWORD(v4) = -1073741811;
            goto LABEL_347;
          }
          if ( v143 != *p_Src )
          {
            LODWORD(v4) = -1073741811;
            goto LABEL_347;
          }
          if ( !v197 )
            v4 = v66;
          LODWORD(v4) = OutputDuplGetDebugInfo(v4, (struct _D3DKMT_OUTPUTDUPL_SNAPSHOT *)p_Src);
          goto LABEL_497;
        case 0xB:
          if ( !*((_QWORD *)v66 + 307) )
            goto LABEL_300;
          v144 = *((unsigned int *)a1 + 6);
          if ( (unsigned int)v144 < 8 )
          {
            LODWORD(v4) = -1073741811;
            goto LABEL_347;
          }
          if ( v144 != (unsigned int)p_Src[1] + 8LL )
          {
            LODWORD(v4) = -1073741811;
            goto LABEL_347;
          }
          if ( !v197 )
            v4 = v66;
          LODWORD(v4) = OutputDuplGetDiagnosticBuffer(v4, (struct _D3DKMT_OUTPUTDUPL_DIAGNOSTICS *)p_Src);
          goto LABEL_497;
        case 0xC:
          if ( (*((_DWORD *)v66 + 75) & 0x20) != 0 && !DXGADAPTER::IsBddFallbackDriver(v66) )
          {
            v216.hDevice = 0LL;
            v216.hContext = 0LL;
            v216.Flags.Value = *((_DWORD *)a1 + 3);
            v216.PrivateDriverDataSize = *((_DWORD *)a1 + 6);
            v216.pPrivateDriverData = p_Src;
            LODWORD(v4) = DXGADAPTER::DdiEscape(v148, &v216);
            goto LABEL_497;
          }
          LODWORD(v4) = -1071775742;
          goto LABEL_347;
        case 0xD:
          v145 = v207;
          if ( !DXGADAPTER::IsBddFallbackDriver(v207) )
          {
            v147 = WdLogNewEntry5_WdAssertion(v146);
            *(_QWORD *)(v147 + 24) = 2007LL;
            WdLogEvent5_WdAssertion(v147);
          }
          v215.hDevice = 0LL;
          v215.hContext = 0LL;
          v215.Flags.Value = *((_DWORD *)a1 + 3);
          v215.PrivateDriverDataSize = *((_DWORD *)a1 + 6);
          v215.pPrivateDriverData = p_Src;
          LODWORD(v4) = DXGADAPTER::DdiEscape(v145, &v215);
          goto LABEL_497;
        case 0xE:
          if ( *((_DWORD *)a1 + 6) != 8 )
          {
            LODWORD(v4) = -1073741811;
            goto LABEL_347;
          }
          if ( !*p_Src )
          {
            v150 = p_Src[1];
            *((_BYTE *)DXGGLOBAL::GetGlobal(v107) + 880) = v150 != 0;
            LODWORD(v4) = 0;
            goto LABEL_498;
          }
          if ( *p_Src != 15 )
          {
            v149 = WdLogNewEntry5_WdAssertion(v107);
            *(_QWORD *)(v149 + 24) = *p_Src;
            WdLogEvent5_WdAssertion(v149);
            LODWORD(v4) = -1073741811;
            goto LABEL_497;
          }
          v107 = *((_QWORD *)v66 + 307);
          if ( v107 )
          {
            LODWORD(v4) = ADAPTER_DISPLAY::ActivateStoringInvalidModesForTestPurposes((ADAPTER_DISPLAY *)v107, p_Src[1]);
            goto LABEL_497;
          }
LABEL_300:
          v131 = WdLogNewEntry5_WdError(v107);
          LODWORD(v4) = -1073741637;
          *(_QWORD *)(v131 + 24) = v66;
          *(_QWORD *)(v131 + 32) = -1073741637LL;
          WdLogEvent5_WdError(v131);
          if ( v178 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v190);
          COREACCESS::~COREACCESS((COREACCESS *)v196);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v200);
          goto LABEL_209;
        case 0xF:
          if ( !*((_QWORD *)v66 + 307) )
            goto LABEL_300;
          v151 = *((unsigned int *)a1 + 6);
          if ( (unsigned int)v151 < 8 )
          {
            LODWORD(v4) = -1073741811;
            goto LABEL_347;
          }
          if ( v151 < 44 * (unsigned __int64)(unsigned int)p_Src[1] + 8 )
          {
            LODWORD(v4) = -1073741811;
            goto LABEL_347;
          }
          LODWORD(v4) = ADAPTER_DISPLAY::GetInvalidModesForTestPurposes(
                          *((ADAPTER_DISPLAY **)v66 + 307),
                          (struct _D3DKMT_DISPLAYMODELIST *)p_Src);
          goto LABEL_497;
        case 0x10:
          if ( *((_DWORD *)a1 + 6) < 4u )
          {
            LODWORD(v4) = -1073741811;
            goto LABEL_347;
          }
          *p_Src = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v66 + 24) + 64LL) + 2584LL);
          goto LABEL_498;
        case 0x11:
          if ( (*((_DWORD *)a1 + 3) & 1) == 0 )
          {
            LODWORD(v4) = -1073741811;
            goto LABEL_347;
          }
          if ( *((_DWORD *)a1 + 6) < 0x60Cu )
          {
            LODWORD(v4) = -1073741811;
            goto LABEL_347;
          }
          if ( (*(unsigned int (__fastcall **)(_QWORD, __int64, __int64))(*((_QWORD *)v193 + 13) + 224LL))(
                 0LL,
                 v103,
                 v111) )
          {
            LODWORD(v4) = -1073741790;
            v155 = WdLogNewEntry5_WdWarning(v153, v152, v154);
            *(_QWORD *)(v155 + 24) = v66;
            *(_QWORD *)(v155 + 32) = -1073741790LL;
LABEL_496:
            WdLogEvent5_WdWarning(v155);
          }
          else
          {
            LODWORD(v4) = DpiBrightnessEscape(
                            *((struct _DEVICE_OBJECT **)v66 + 24),
                            (struct _D3DKMT_BRIGHTNESS_INFO *)p_Src);
          }
          goto LABEL_497;
        case 0x12:
          v156 = *((unsigned int *)a1 + 6);
          if ( (unsigned int)v156 < 4 )
            goto LABEL_297;
          v157 = (unsigned int)*p_Src + 4LL;
          if ( v156 != v157 )
            goto LABEL_297;
          v158 = (EDIDCACHE *)*((_QWORD *)DXGGLOBAL::GetGlobal(v157) + 95);
          if ( v158 )
          {
            LODWORD(v4) = EDIDCACHE::GetEdids(v158, (struct _D3DKMT_DXGK_DIAGNOSTICS *)p_Src);
            goto LABEL_497;
          }
          LODWORD(v4) = -1073741801;
          goto LABEL_347;
        case 0x13:
          if ( *((_DWORD *)a1 + 6) < 0x10u )
          {
            LODWORD(v4) = -1073741811;
            goto LABEL_347;
          }
          p_Src[1] &= 7u;
          DxgkGetAdapterBrightnessInfo(*((_QWORD *)v66 + 24), p_Src);
          goto LABEL_498;
        case 0x15:
          if ( *((_DWORD *)a1 + 6) < 8u || !v189 )
            goto LABEL_440;
          if ( !v10 )
          {
            if ( v178 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v190);
            COREACCESS::~COREACCESS((COREACCESS *)v196);
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v200);
            ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v182);
            goto LABEL_445;
          }
          v159 = 0;
          if ( (qword_1C0079010 & 0x21C8ED7) != 0
            && (qword_1C0079018 & 0xFFFFFFFFFDE37128uLL) == 0
            && (qword_1C0079010 & 0x4000) != 0
            && (unsigned int)DXGADAPTER::GetNumDifferentPhysicalAdapters(v189) )
          {
            v162 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v160 + 308) + 16LL) + 2360LL);
            while ( !*(_QWORD *)(352LL * v161 + v162 + 32) )
            {
              NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters(v160);
              if ( v161 >= NumDifferentPhysicalAdapters )
              {
                *(_BYTE *)(v10 + 1704) = v164;
                *(_BYTE *)p_Src = v164;
                p_Src[1] = 0;
                goto LABEL_498;
              }
            }
            v159 = 1;
          }
          *(_BYTE *)(v10 + 1704) = v159;
          *(_BYTE *)p_Src = v159;
          p_Src[1] = 0;
          goto LABEL_498;
        case 0x17:
          if ( *((_DWORD *)a1 + 6) != 32 )
          {
            LODWORD(v4) = -1073741811;
            goto LABEL_347;
          }
          DxgkGetAdapterMiracastInfo(*((_QWORD *)v66 + 24), p_Src);
          goto LABEL_498;
        case 0x1C:
          if ( *((_DWORD *)a1 + 6) < 0x20u )
            goto LABEL_440;
          v165 = p_Src[3];
          if ( v165 > 1 || *(_QWORD *)p_Src )
            goto LABEL_440;
          if ( !v165 )
          {
            *((_QWORD *)p_Src + 2) = 0LL;
            *((_QWORD *)p_Src + 3) = 0LL;
          }
          if ( (unsigned int)(p_Src[2] - 1000) > 1 )
            goto LABEL_440;
          if ( !v189 )
          {
            v166 = WdLogNewEntry5_WdError(0LL);
            *(_QWORD *)(v166 + 24) = 2297LL;
            WdLogEvent5_WdError(v166);
            goto LABEL_310;
          }
          if ( *((_BYTE *)v189 + 185) )
            goto LABEL_310;
          LODWORD(v4) = (*(__int64 (__fastcall **)(_QWORD, DXGPROCESS *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v189 + 308) + 544LL)
                                                                                            + 8LL)
                                                                                + 1096LL))(
                          *(_QWORD *)(*((_QWORD *)v189 + 308) + 552LL),
                          v193,
                          (unsigned int)p_Src[3]);
          goto LABEL_497;
        case 0x1D:
          if ( *((_DWORD *)a1 + 6) < 0x20u )
            goto LABEL_440;
          v167 = p_Src[1];
          if ( v167 > 1 )
            goto LABEL_440;
          v168 = p_Src + 2;
          if ( !v167 )
          {
            *v168 = 0LL;
            *((_QWORD *)p_Src + 2) = 0LL;
            *((_QWORD *)p_Src + 3) = 0LL;
          }
          v169 = (unsigned int)*p_Src;
          if ( (unsigned int)(v169 - 1000) > 1 )
            goto LABEL_440;
          if ( !v189 )
          {
            v170 = WdLogNewEntry5_WdError(0LL);
            *(_QWORD *)(v170 + 24) = 2351LL;
            WdLogEvent5_WdError(v170);
            goto LABEL_310;
          }
          if ( *((_BYTE *)v189 + 185) )
            goto LABEL_310;
          LODWORD(v4) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v189 + 308) + 544LL)
                                                                                                 + 8LL)
                                                                                     + 1104LL))(
                          *(_QWORD *)(*((_QWORD *)v189 + 308) + 552LL),
                          (unsigned int)p_Src[1],
                          v169,
                          v168);
LABEL_497:
          if ( (int)v4 >= 0 )
            goto LABEL_498;
          goto LABEL_347;
        case 0x1F:
          if ( *((_DWORD *)a1 + 6) != 4 )
            goto LABEL_482;
          if ( *((_QWORD *)v66 + 308) )
          {
LABEL_484:
            v172 = WdLogNewEntry5_WdWarning(v107, v103, v111);
            *(_QWORD *)(v172 + 24) = v66;
            WdLogEvent5_WdWarning(v172);
            goto LABEL_440;
          }
          v173 = *((_QWORD *)v66 + 307);
          if ( !*(_QWORD *)(v173 + 264) )
          {
            LODWORD(v4) = -1073741811;
            goto LABEL_347;
          }
          *(_DWORD *)(v173 + 272) = *p_Src;
          goto LABEL_498;
        case 0x22:
          LODWORD(v4) = GetDiagnosticsBuffer((struct _D3DKMT_DXGK_DIAGNOSTICS *)p_Src, *((_DWORD *)a1 + 6), 0);
          goto LABEL_497;
        case 0x24:
          if ( !*((_QWORD *)v66 + 308) )
            goto LABEL_484;
          LODWORD(v4) = ADAPTER_DISPLAY::ReportDisplayState(
                          *((ADAPTER_DISPLAY **)v66 + 307),
                          (struct _D3DKMT_DXGK_DIAGNOSTICS *)p_Src,
                          *((_DWORD *)a1 + 6));
          goto LABEL_497;
        case 0x25:
          if ( !*((_DWORD *)a1 + 6) )
          {
LABEL_482:
            v171 = WdLogNewEntry5_WdError(v107);
            *(_QWORD *)(v171 + 24) = *((unsigned int *)a1 + 6);
            WdLogEvent5_WdError(v171);
LABEL_440:
            if ( v178 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v190);
            COREACCESS::~COREACCESS((COREACCESS *)v196);
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v200);
            ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v182);
            if ( v10 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v10 + 16), (struct DXGDEVICE *)v10);
LABEL_445:
            if ( v97 )
            {
              DXGADAPTER::ReleaseReferenceNoTracking(v97);
              DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(&v184);
              goto LABEL_10;
            }
            goto LABEL_84;
          }
          if ( v189 )
          {
            if ( !*((_BYTE *)v189 + 185) )
            {
              *(_BYTE *)p_Src = *(_BYTE *)(*((_QWORD *)v189 + 308) + 1512LL);
LABEL_498:
              if ( v181 )
              {
                v175 = *((unsigned int *)a1 + 6);
                v176 = (char *)a1[2];
                if ( (unsigned __int64)&v176[v175] > MmUserProbeAddress || &v176[v175] <= v176 )
                  *(_BYTE *)MmUserProbeAddress = 0;
                memmove(v176, p_Src, v175);
                v113 = v178;
              }
              else
              {
                memmove((void *)a1[2], p_Src, *((unsigned int *)a1 + 6));
LABEL_347:
                v113 = v178;
              }
              goto LABEL_348;
            }
          }
          else
          {
            v174 = WdLogNewEntry5_WdError(0LL);
            *(_QWORD *)(v174 + 24) = 2422LL;
            WdLogEvent5_WdError(v174);
          }
LABEL_310:
          if ( v178 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v190);
          COREACCESS::~COREACCESS((COREACCESS *)v196);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v200);
          ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v182);
          if ( v10 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v10 + 16), (struct DXGDEVICE *)v10);
          if ( v97 )
          {
            v25 = v97;
            goto LABEL_32;
          }
          break;
        default:
          LODWORD(v4) = -1073741811;
          v155 = WdLogNewEntry5_WdWarning(v107, v103, v111);
          *(_QWORD *)(v155 + 24) = *((int *)a1 + 2);
          goto LABEL_496;
      }
      goto LABEL_33;
    }
    if ( !v106 )
    {
      v103 = *((_DWORD *)v66 + 75) & 4;
      v112 = *((int *)v66 + 526) >= 8704
          && *((_DWORD *)v66 + 416) >= 0x7007u
          && *((_QWORD *)v66 + 131)
          && *((_QWORD *)v66 + 113);
      v105 = *((_DWORD *)v66 + 75) & 4 | (*((_DWORD *)v66 + 75) >> 2) & 0x40 | (8 * (*((_BYTE *)v66 + 300) & 1)) & 0xCF | (*((_BYTE *)v66 + 185) != 0 ? 0x80 : 0) | (*((_BYTE *)v66 + 187) != 0 ? 0x100 : 0) | (*((_QWORD *)v66 + 307) != 0LL ? 2 : 0) | (*((_QWORD *)v66 + 308) != 0LL) | (16 * (*((_BYTE *)v66 + 2311) & 1 | (2 * (*((_BYTE *)v66 + 2316) & 1 | (16 * (v112 | *((_DWORD *)v66 + 586) & 2u))))));
      v208 = v105;
      if ( (v105 & 0x10) != 0 || *((_DWORD *)v66 + 416) >= 0x5023u && (v108 & 8) != 0 )
      {
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v190);
        v113 = v192;
        if ( *((_DWORD *)v66 + 44) != 1 )
        {
          LODWORD(v4) = -1073741130;
LABEL_348:
          if ( v113 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v190);
          COREACCESS::~COREACCESS((COREACCESS *)v196);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v200);
          ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v182);
          if ( v10 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v10 + 16), (struct DXGDEVICE *)v10);
          if ( v97 && _InterlockedExchangeAdd64((volatile signed __int64 *)v97 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v97 + 2), v97);
LABEL_356:
          DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(&v184);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v179);
          if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v137, &EventProfilerExit, v138, v179);
          return (unsigned int)v4;
        }
LABEL_259:
        v178 = v113;
        goto LABEL_260;
      }
    }
    if ( v203 )
    {
      v114 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v105);
      v114[3] = 275LL;
      v114[4] = 4LL;
      v114[5] = v201;
      v114[6] = 0LL;
      v114[7] = 0LL;
      WdLogEvent5_WdCriticalError(v114);
    }
    v107 = (__int64)v202;
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v202 + 20) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v202 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v115, &EventBlockThread, v116, 72);
        KeWaitForSingleObject((char *)v202 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v202);
      v107 = (__int64)v202;
    }
    v203 = 1;
    if ( *(_DWORD *)(v107 + 176) == 1 )
    {
      if ( v202 == (DXGADAPTER *)v205
        || (COREACCESS::AcquireShared((DXGADAPTER **)v204), v107 = v205[44], (_DWORD)v107 == 1) )
      {
        v113 = v192;
        goto LABEL_259;
      }
      COREACCESS::Release(v204);
    }
    COREACCESS::Release(v201);
    LODWORD(v4) = -1073741130;
    v113 = v192;
    goto LABEL_348;
  }
  if ( v28 != 1029 )
  {
    v23 = 0x1C0000000uLL;
    switch ( v28 )
    {
      case 1:
        if ( *((_DWORD *)a1 + 6) < 0x440u )
          goto LABEL_128;
        v35 = *p_Src;
        if ( *p_Src == 5 )
        {
          LODWORD(v4) = DxgEscapeEvict((struct _D3DKMT_VIDMM_ESCAPE *)p_Src);
          goto LABEL_356;
        }
        switch ( v35 )
        {
          case 6:
            LODWORD(v4) = DxgEscapeEvictByNtHandle((struct _D3DKMT_VIDMM_ESCAPE *)p_Src);
            goto LABEL_356;
          case 13:
            LODWORD(v4) = DxgEscapeEvictByCriteria((struct _D3DKMT_VIDMM_ESCAPE *)p_Src);
            goto LABEL_356;
          case 9:
            LODWORD(v4) = DxgEscapeSuspendResumeProcess(*(_DWORD *)a1, *((void **)p_Src + 1), 1, p_Src[4] != 0);
            goto LABEL_356;
        }
        if ( v35 != 10 )
          goto LABEL_128;
        LODWORD(v4) = DxgEscapeSuspendResumeProcess(*(_DWORD *)a1, *((void **)p_Src + 1), 0, 0);
        goto LABEL_356;
      case 8:
        v33 = *((_DWORD *)a1 + 6);
        if ( v33 < 0xC || v33 < p_Src[1] || *p_Src != 1484026436 )
          goto LABEL_128;
        v34 = p_Src[2];
        if ( v34 <= 0x1C )
        {
          v23 = 323493889LL;
          if ( _bittest((const int *)&v23, v34) )
          {
            LODWORD(v4) = DxgkDrtTestEscape(0LL, (struct _D3DKMT_DRT_ESCAPE_HEAD *)p_Src, 0LL);
            goto LABEL_356;
          }
        }
        if ( v34 != 27 )
          goto LABEL_128;
        LODWORD(v4) = DxgkDrtTestEscape(0LL, (struct _D3DKMT_DRT_ESCAPE_HEAD *)p_Src, 0LL);
        if ( (int)v4 >= 0 )
        {
          if ( v181 )
          {
            v31 = *((unsigned int *)a1 + 6);
            v32 = (char *)a1[2];
            if ( (unsigned __int64)&v32[v31] > MmUserProbeAddress || &v32[v31] <= v32 )
              *(_BYTE *)MmUserProbeAddress = 0;
LABEL_95:
            memmove(v32, p_Src, v31);
          }
          else
          {
LABEL_53:
            memmove((void *)a1[2], p_Src, *((unsigned int *)a1 + 6));
          }
        }
        goto LABEL_356;
      case 20:
      case 30:
        v29 = *((unsigned int *)a1 + 6);
        if ( v28 == 30 )
          v30 = DxgkHandleIndirectEscape(v29, p_Src);
        else
          v30 = DxgkHandleMiracastEscape(v29, p_Src);
        LODWORD(v4) = v30;
        if ( v30 < 0 )
          goto LABEL_356;
        if ( !v181 )
          goto LABEL_53;
        v31 = *((unsigned int *)a1 + 6);
        v32 = (char *)a1[2];
        if ( (unsigned __int64)&v32[v31] > MmUserProbeAddress || &v32[v31] <= v32 )
          *(_BYTE *)MmUserProbeAddress = 0;
        goto LABEL_95;
      case 24:
        if ( !g_OSTestSigningEnabled )
          goto LABEL_79;
        if ( *((_DWORD *)a1 + 6) != 1 )
          goto LABEL_84;
        byte_1C007A75B = *(_BYTE *)p_Src;
        goto LABEL_124;
      case 25:
        v38 = *((_DWORD *)a1 + 6);
        DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(&v184);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v179);
        if ( v38 != 24 )
          goto LABEL_11;
        goto LABEL_109;
      case 26:
        if ( *((_DWORD *)a1 + 6) != 140 )
          goto LABEL_84;
        LODWORD(v4) = DxgkHMDGetEdidBaseBlock((const struct _LUID *)p_Src, p_Src[2], (unsigned __int8 *)p_Src + 12);
        if ( (int)v4 < 0 )
          goto LABEL_356;
        if ( !v181 )
          goto LABEL_53;
        v31 = *((unsigned int *)a1 + 6);
        v32 = (char *)a1[2];
        if ( (unsigned __int64)&v32[v31] > MmUserProbeAddress || &v32[v31] <= v32 )
          *(_BYTE *)MmUserProbeAddress = 0;
        goto LABEL_95;
      case 27:
        if ( !g_OSTestSigningEnabled )
        {
LABEL_79:
          DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(&v184);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v179);
          if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v36, &EventProfilerExit, v37, v179);
          return 3221225506LL;
        }
        if ( *((_DWORD *)a1 + 6) != 200 )
          goto LABEL_84;
        Current = DXGPROCESS::GetCurrent();
        if ( !Current )
        {
          v41 = WdLogNewEntry5_WdError(v40);
          *(_QWORD *)(v41 + 24) = 1180LL;
          WdLogEvent5_WdError(v41);
          DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(&v184);
          goto LABEL_10;
        }
        DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v217, Current);
        DXGUSERCRIT::Acquire((DXGUSERCRIT *)v217, 1u);
        v221 = 0LL;
        *(_QWORD *)&ActivityId.Data1 = 0LL;
        *(_QWORD *)ActivityId.Data4 = 0LL;
        v223 = 0LL;
        v224 = 0LL;
        v225 = 0LL;
        v226 = 0LL;
        v227 = 0LL;
        v228 = 0LL;
        EtwActivityIdControl(3u, &ActivityId);
        v228 = MEMORY[0xFFFFF78000000014];
        LODWORD(v223) = 46;
        LOBYTE(v226) = -1;
        LODWORD(v4) = DxgkEnableDisableTargetAsHMD(
                        (struct _D3DKMT_SOFTGPU_LUID_TARGET *)p_Src,
                        p_Src[48],
                        *((_BYTE *)p_Src + 196),
                        (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)&v221);
        DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v217);
        break;
      case 32:
        if ( *((_DWORD *)a1 + 6) != 16 )
          goto LABEL_84;
        v199 = 0LL;
        DxgkLogCodePointPacket(*p_Src, p_Src[1], p_Src[2], p_Src[3], 0LL);
        goto LABEL_124;
      case 33:
        v42 = *((_DWORD *)a1 + 6);
        if ( v42 < 0x30 || v42 < p_Src[1] )
          goto LABEL_84;
        LODWORD(v4) = DxgkWriteUserModeDiagEntry((struct _DXGK_DIAG_HEADER *)p_Src);
        goto LABEL_356;
      default:
        goto LABEL_128;
    }
    goto LABEL_356;
  }
  v43 = WdLogNewEntry5_WdAssertion(v23);
  *(_QWORD *)(v43 + 24) = 992LL;
  WdLogEvent5_WdAssertion(v43);
  if ( (*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)v7 + 13) + 224LL))(0LL) )
  {
LABEL_108:
    DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(&v184);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v179);
LABEL_109:
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v14, &EventProfilerExit, v15, v179);
    return 3221225473LL;
  }
  v45 = *((_QWORD *)DXGGLOBAL::GetGlobal(v44) + 77);
  if ( v45 != *((_QWORD *)DXGGLOBAL::GetGlobal(v46) + 75) )
  {
    v48 = DXGGLOBAL::GetGlobal(v47);
    v50 = DXGGLOBAL::ReferenceWarpAdapter(v48, &v213);
    if ( !v50 )
      goto LABEL_115;
    v186 = 0;
    v53 = DXGGLOBAL::GetGlobal(v49);
    DXGGLOBAL::IterateAdaptersWithCallback(v53, DxgkpEscapeStopAdapters, &v186, 3LL);
    DXGADAPTER::ReleaseReferenceNoTracking(v50);
    if ( !HIBYTE(v186) )
      goto LABEL_108;
  }
  v54 = DXGGLOBAL::GetGlobal(v47);
  v56 = DXGGLOBAL::ReferenceBddFallbackAdapter(v54, &v214);
  if ( !v56 )
  {
LABEL_115:
    DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(&v184);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v179);
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v51, &EventProfilerExit, v52, v179);
    return 3221226021LL;
  }
  v187 = 1;
  v57 = DXGGLOBAL::GetGlobal(v55);
  DXGGLOBAL::IterateAdaptersWithCallback(v57, DxgkpEscapeStopAdapters, &v187, 1LL);
  DXGADAPTER::ReleaseReferenceNoTracking(v56);
  if ( !HIBYTE(v187) )
    goto LABEL_108;
  v219[0] = 0x4000000006LL;
  memset(&v219[1], 0, 40);
  v219[6] = 76LL;
  v219[7] = 0LL;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v219);
  LiveDumpWithWdLogs = DxgCreateLiveDumpWithWdLogs(0x187u, 1uLL, 0LL, 0LL, 0LL);
  v62 = LiveDumpWithWdLogs;
  if ( LiveDumpWithWdLogs < 0 )
  {
    v63 = WdLogNewEntry5_WdWarning(v60, v59, v61);
    *(_QWORD *)(v63 + 24) = v62;
    WdLogEvent5_WdWarning(v63);
  }
LABEL_124:
  DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(&v184);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v179);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v64, &EventProfilerExit, v65, v179);
  return 0LL;
}
