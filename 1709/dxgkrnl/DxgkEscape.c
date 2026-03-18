/*
 * XREFs of DxgkEscape @ 0x1C009EC60
 * Callers:
 *     ?VmBusEscape@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0193010 (-VmBusEscape@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0001E90 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0001ED0 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C000281C (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0002870 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0002D7C (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003310 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003360 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0008158 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0008404 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008B68 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C0008C80 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     DxgkLogCodePointPacket @ 0x1C0009664 (DxgkLogCodePointPacket.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C000D5E8 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C000D614 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C00144E0 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0014764 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1ENSURE_CONTEXT_DEREFERENCE@@QEAA@XZ @ 0x1C0014CB8 (--1ENSURE_CONTEXT_DEREFERENCE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     ?VidMmEscape@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z @ 0x1C0027DE8 (-VidMmEscape@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@.c)
 *     DpiIsHybridDiscreteAdapter @ 0x1C002E358 (DpiIsHybridDiscreteAdapter.c)
 *     DpiIsHybridIntegratedAdapter @ 0x1C002E36C (DpiIsHybridIntegratedAdapter.c)
 *     DxgkGetAdapterBrightnessInfo @ 0x1C002E6FC (DxgkGetAdapterBrightnessInfo.c)
 *     DxgkGetAdapterMiracastInfo @ 0x1C0030A1C (DxgkGetAdapterMiracastInfo.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0083278 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0083A38 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?DdiEscape@DXGADAPTER@@QEAAJPEBU_DXGKARG_ESCAPE@@@Z @ 0x1C0083F38 (-DdiEscape@DXGADAPTER@@QEAAJPEBU_DXGKARG_ESCAPE@@@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0084A30 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C008B884 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     _DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION @ 0x1C00A15E0 (_DxgkEscape_--_2_--ENSURE_DATA_DELETION--_ENSURE_DATA_DELETION.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00B1CE4 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     DxgkWriteDiagEntry @ 0x1C00D2FA0 (DxgkWriteDiagEntry.c)
 *     ?DxgkGetPreferredMode@@YAJPEAU_D3DKMT_GET_PREFERRED_MODE@@@Z @ 0x1C0171480 (-DxgkGetPreferredMode@@YAJPEAU_D3DKMT_GET_PREFERRED_MODE@@@Z.c)
 *     ?ActivateStoringInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJH@Z @ 0x1C01734D8 (-ActivateStoringInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJH@Z.c)
 *     ?GetInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DISPLAYMODELIST@@@Z @ 0x1C01753C8 (-GetInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DISPLAYMODELIST@@@Z.c)
 *     ?ReportDisplayState@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@I@Z @ 0x1C017605C (-ReportDisplayState@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@I@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C017DDD0 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z.c)
 *     ?DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017DFCC (-DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     DxgkWriteUserModeDiagEntry @ 0x1C0182154 (DxgkWriteUserModeDiagEntry.c)
 *     ?VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS@@IPEAE@Z @ 0x1C01964B8 (-VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS.c)
 *     ?Escape@DXGDEVICE@@QEAAJPEAU_D3DKMT_DEVICE_ESCAPE@@@Z @ 0x1C019D220 (-Escape@DXGDEVICE@@QEAAJPEAU_D3DKMT_DEVICE_ESCAPE@@@Z.c)
 *     ?DxgDbgTakeSnapshot@@YAJPEAXKPEAK@Z @ 0x1C01A11E0 (-DxgDbgTakeSnapshot@@YAJPEAXKPEAK@Z.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C01A4544 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     ?TdrDbgCtrl@@YAJW4_TDR_DBG_CTRL@@@Z @ 0x1C01A7330 (-TdrDbgCtrl@@YAJW4_TDR_DBG_CTRL@@@Z.c)
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C01A8204 (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeEvictByCriteria@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C01A8304 (-DxgEscapeEvictByCriteria@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeEvictByNtHandle@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C01A836C (-DxgEscapeEvictByNtHandle@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeSuspendResumeProcess@@YAJIPEAX_N1@Z @ 0x1C01A8D58 (-DxgEscapeSuspendResumeProcess@@YAJIPEAX_N1@Z.c)
 *     ?GetDiagnosticsBuffer@@YAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@IH@Z @ 0x1C01A9094 (-GetDiagnosticsBuffer@@YAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@IH@Z.c)
 *     ?IsAMDDriverEscapeAllowed@@YAHPEAX_K@Z @ 0x1C01A91F4 (-IsAMDDriverEscapeAllowed@@YAHPEAX_K@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C01A9EA0 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ReferenceBddFallbackAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@PEA_K@Z @ 0x1C01AB6A4 (-ReferenceBddFallbackAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@PEA_K@Z.c)
 *     ?GetEdids@EDIDCACHE@@QEAAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@@Z @ 0x1C01AE928 (-GetEdids@EDIDCACHE@@QEAAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01B9AF8 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?DxgkHMDGetEdidBaseBlock@@YAJAEBU_LUID@@IPEAE@Z @ 0x1C01C40D0 (-DxgkHMDGetEdidBaseBlock@@YAJAEBU_LUID@@IPEAE@Z.c)
 *     OutputDuplGetDebugInfo @ 0x1C01C9FAC (OutputDuplGetDebugInfo.c)
 *     OutputDuplGetDiagnosticBuffer @ 0x1C01CA08C (OutputDuplGetDiagnosticBuffer.c)
 *     DxgkHandleMiracastEscape @ 0x1C01E27B8 (DxgkHandleMiracastEscape.c)
 *     ?DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z @ 0x1C01E30A0 (-DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z.c)
 *     DxgkHandleIndirectEscape @ 0x1C01E5EA4 (DxgkHandleIndirectEscape.c)
 *     ?DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z @ 0x1C01EBD30 (-DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z.c)
 */

__int64 __fastcall DxgkEscape(unsigned int *a1, __int64 a2, __int64 a3)
{
  __int64 CurrentProcess; // rax
  __int64 v5; // rdx
  struct DXGPROCESS *ProcessDxgProcess; // rax
  struct DXGPROCESS *v7; // r14
  struct DXGPROCESS **ThreadProperty; // rax
  struct DXGPROCESS **v9; // rbx
  struct VIDMM_DEVICE *v10; // r13
  __int64 v11; // rdi
  int *p_Src; // r15
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  size_t v22; // r8
  char *v23; // rdx
  unsigned int v24; // eax
  DXGADAPTER *v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rcx
  bool v29; // zf
  __int64 v30; // rcx
  int v31; // eax
  DXGADAPTER *v32; // rbx
  size_t v33; // r8
  char *v34; // rcx
  unsigned int v35; // eax
  unsigned int v36; // eax
  int v37; // edx
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rcx
  __int64 v42; // r8
  struct DXGPROCESS *Current; // rax
  __int64 v44; // rcx
  __int64 v45; // rax
  unsigned int v46; // eax
  __int64 v47; // rax
  __int64 v48; // rcx
  DXGGLOBAL *v49; // rax
  __int64 v50; // rcx
  DXGADAPTER *v51; // rbx
  __int64 v52; // rcx
  __int64 v53; // r8
  struct DXGGLOBAL *v54; // rax
  __int64 v55; // rcx
  __int64 v56; // r8
  unsigned int LiveDumpWithWdLogs; // edi
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r14
  DXGGLOBAL *Global; // rax
  DXGADAPTER *v62; // rax
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // rcx
  struct DXGPROCESS *v66; // r9
  __int64 v67; // r9
  __int64 v68; // rax
  __int64 v69; // r14
  unsigned int v70; // r8d
  __int64 v71; // rax
  __int64 v72; // r14
  _QWORD *v73; // rax
  unsigned int v74; // ecx
  __int64 v75; // rax
  __int64 v76; // rcx
  __int64 v77; // rdi
  unsigned int v78; // ecx
  __int64 v79; // rax
  unsigned int v80; // ecx
  __int64 v81; // r10
  __int64 v82; // rcx
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  unsigned int v86; // eax
  __int64 v87; // rax
  __int64 v88; // rax
  unsigned int v89; // eax
  int v90; // eax
  size_t v91; // r8
  char *v92; // rcx
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // rax
  int v97; // eax
  unsigned int v98; // eax
  __int64 v99; // rcx
  char v100; // bl
  unsigned int v101; // r11d
  unsigned __int8 v102; // cl
  unsigned int v103; // eax
  __int64 v104; // r8
  char v105; // bl
  __int64 v106; // rcx
  _QWORD *v107; // rax
  __int64 v108; // rcx
  __int64 v109; // r8
  char v110; // al
  unsigned int v111; // ebx
  unsigned int HostProcess; // eax
  int v113; // eax
  __int64 v114; // rcx
  __int64 v115; // rax
  unsigned __int64 v116; // rcx
  void *v117; // rax
  void *v118; // rax
  struct DXGGLOBAL *v119; // rax
  _QWORD *v120; // rax
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 v123; // rax
  unsigned __int64 v124; // rdx
  __int64 v125; // rax
  __int64 v126; // rax
  unsigned int v127; // eax
  __int64 v128; // rcx
  int DebugInfo; // eax
  DXGADAPTER *v130; // r13
  __int64 v131; // rcx
  DXGADAPTER *v132; // r13
  __int64 v133; // rcx
  unsigned int v134; // edx
  unsigned int v135; // eax
  __int64 v136; // rax
  unsigned int v137; // eax
  __int64 v138; // rax
  __int64 v139; // rax
  __int64 v140; // rcx
  __int64 v141; // r8
  __int64 v142; // rax
  DXGADAPTER *v143; // rcx
  __int64 v144; // r8
  __int64 v145; // rax
  ADAPTER_DISPLAY *v146; // rcx
  __int64 v147; // rax
  int v148; // ebx
  __int64 v149; // rax
  unsigned __int64 v150; // rdx
  __int64 v151; // rax
  __int64 v152; // rcx
  EDIDCACHE *v153; // rcx
  char v154; // r10
  DXGADAPTER *v155; // rdx
  unsigned int v156; // r8d
  __int64 v157; // r9
  unsigned int NumDifferentPhysicalAdapters; // eax
  int v159; // eax
  __int64 v160; // rax
  int v161; // eax
  __int64 v162; // r8
  __int64 v163; // rax
  __int64 v164; // rax
  __int64 v165; // rax
  __int64 v166; // rax
  __int64 v167; // rax
  size_t v168; // r8
  char *v169; // rcx
  __int64 v170; // rcx
  __int64 v171; // r8
  size_t Size; // [rsp+38h] [rbp-4E0h]
  char v173; // [rsp+50h] [rbp-4C8h]
  unsigned __int8 v174; // [rsp+51h] [rbp-4C7h]
  __int64 v175; // [rsp+58h] [rbp-4C0h] BYREF
  unsigned __int64 v176; // [rsp+60h] [rbp-4B8h] BYREF
  char v177[8]; // [rsp+68h] [rbp-4B0h] BYREF
  __int128 v178; // [rsp+70h] [rbp-4A8h] BYREF
  unsigned __int64 v179; // [rsp+80h] [rbp-498h] BYREF
  unsigned int v180; // [rsp+88h] [rbp-490h]
  char v181[8]; // [rsp+90h] [rbp-488h] BYREF
  __int64 v182; // [rsp+98h] [rbp-480h]
  char v183; // [rsp+A0h] [rbp-478h]
  DXGADAPTER *v184; // [rsp+A8h] [rbp-470h] BYREF
  struct DXGPROCESS *v185; // [rsp+B0h] [rbp-468h]
  unsigned int v186; // [rsp+B8h] [rbp-460h]
  __int64 v187; // [rsp+C0h] [rbp-458h]
  _BYTE v188[32]; // [rsp+C8h] [rbp-450h] BYREF
  __int64 v189; // [rsp+E8h] [rbp-430h]
  __int64 v190; // [rsp+F0h] [rbp-428h]
  union _LARGE_INTEGER Interval; // [rsp+F8h] [rbp-420h] BYREF
  DXGADAPTER *v192; // [rsp+100h] [rbp-418h]
  __int64 v193; // [rsp+110h] [rbp-408h] BYREF
  _BYTE v194[16]; // [rsp+118h] [rbp-400h] BYREF
  DXGADAPTER *v195; // [rsp+128h] [rbp-3F0h]
  char v196; // [rsp+130h] [rbp-3E8h]
  _BYTE v197[16]; // [rsp+138h] [rbp-3E0h] BYREF
  unsigned int *v198; // [rsp+148h] [rbp-3D0h]
  struct DXGADAPTER *v199; // [rsp+160h] [rbp-3B8h] BYREF
  DXGADAPTER *v200; // [rsp+168h] [rbp-3B0h] BYREF
  struct _DXGKARG_ESCAPE v201; // [rsp+178h] [rbp-3A0h] BYREF
  struct _DXGKARG_ESCAPE v202; // [rsp+1B8h] [rbp-360h] BYREF
  unsigned int v203; // [rsp+1E8h] [rbp-330h]
  int *v204; // [rsp+1F0h] [rbp-328h]
  unsigned int v205; // [rsp+1F8h] [rbp-320h]
  __int64 v206; // [rsp+200h] [rbp-318h]
  unsigned __int64 v207; // [rsp+208h] [rbp-310h] BYREF
  _BYTE v208[24]; // [rsp+210h] [rbp-308h] BYREF
  _DWORD v209[6]; // [rsp+228h] [rbp-2F0h] BYREF
  _QWORD v210[8]; // [rsp+240h] [rbp-2D8h] BYREF
  _DWORD v211[4]; // [rsp+280h] [rbp-298h] BYREF
  __int64 v212; // [rsp+290h] [rbp-288h] BYREF
  GUID ActivityId; // [rsp+298h] [rbp-280h] BYREF
  __int64 v214; // [rsp+2A8h] [rbp-270h]
  __int64 v215; // [rsp+2B0h] [rbp-268h]
  __int64 v216; // [rsp+2B8h] [rbp-260h]
  __int64 v217; // [rsp+2C0h] [rbp-258h]
  __int64 v218; // [rsp+2C8h] [rbp-250h]
  __int64 v219; // [rsp+2D0h] [rbp-248h]
  char Src; // [rsp+2E0h] [rbp-238h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2016);
  CurrentProcess = PsGetCurrentProcess(a1, a2);
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v5);
  v7 = ProcessDxgProcess;
  v185 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*((_BYTE *)ProcessDxgProcess + 307) & 4) != 0 )
    {
      ThreadProperty = (struct DXGPROCESS **)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v9 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v7 = *v9;
        v185 = *v9;
      }
    }
  }
  v10 = 0LL;
  v11 = 0LL;
  v187 = 0LL;
  v189 = 0LL;
  p_Src = (int *)&Src;
  LOBYTE(v13) = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v174 = v13;
  if ( !v7 )
  {
    v14 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v14 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v14);
LABEL_10:
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v15, &EventProfilerExit, v16, 2016);
    return 3221225485LL;
  }
  v178 = 0LL;
  v18 = a1[6];
  if ( (unsigned int)v18 > 0x200 )
  {
    if ( v18 <= 0x7FFFFFFF )
    {
      p_Src = (int *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v18, 0x4B677844u);
      v13 = v174;
    }
    else
    {
      p_Src = 0LL;
    }
    *(_QWORD *)&v178 = p_Src;
  }
  if ( !p_Src )
  {
    v19 = WdLogNewEntry5_WdLowResource(v13);
    *(_QWORD *)(v19 + 24) = a1[6];
    *(_QWORD *)(v19 + 32) = -1073741801LL;
    WdLogEvent5_WdLowResource(v19);
    DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(&v178);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v20, &EventProfilerExit, v21, 2016);
    return 3221225495LL;
  }
  if ( (_BYTE)v13 )
  {
    v22 = a1[6];
    v23 = (char *)*((_QWORD *)a1 + 2);
    if ( &v23[v22] < v23 || (unsigned __int64)&v23[v22] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(p_Src, v23, v22);
    if ( *a1 )
    {
      DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v200, *a1, (struct _KTHREAD **)v7, &v199);
      if ( v199 )
      {
        if ( *((_BYTE *)v199 + 185) )
        {
          v24 = a1[2];
          if ( (v24 & 0xFFFFFFF3) != 0 || v24 == 4 )
          {
            v25 = v200;
            if ( v200 )
LABEL_34:
              DXGADAPTER::ReleaseReferenceNoTracking(v25);
            DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(&v178);
            if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q(v26, &EventProfilerExit, v27, 2016);
            return -1073741637LL;
          }
        }
      }
      if ( v200 && _InterlockedExchangeAdd64((volatile signed __int64 *)v200 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v200 + 2), v200);
    }
  }
  else
  {
    memmove(p_Src, *((const void **)a1 + 2), a1[6]);
  }
  v28 = a1[2];
  if ( (int)v28 > 1029 )
  {
LABEL_130:
    v60 = 0LL;
    v190 = 0LL;
    v184 = 0LL;
    v192 = 0LL;
    if ( (_DWORD)v28 != 13 )
      goto LABEL_133;
    Global = DXGGLOBAL::GetGlobal(v28);
    v62 = DXGGLOBAL::ReferenceBddFallbackAdapter(Global, &v179);
    v192 = v62;
    if ( v62 )
    {
      *((_QWORD *)&v178 + 1) = v62;
LABEL_133:
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)&v201.hKmdProcessHandle, v185);
      v65 = *a1;
      v186 = v65;
      v66 = v185;
      if ( (_DWORD)v65 )
      {
        if ( (*((_BYTE *)v185 + 307) & 8) != 0 )
        {
          DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*((_QWORD *)v185 + 55) + 200LL));
          v67 = *((_QWORD *)v185 + 55);
          v68 = (v186 >> 6) & 0xFFFFFF;
          if ( (unsigned int)v68 < *(_DWORD *)(v67 + 240)
            && (v69 = *(_QWORD *)(v67 + 224), v70 = *(_DWORD *)(v69 + 16 * v68 + 8), v186 >> 30 == ((v70 >> 5) & 3))
            && (v70 & 0x2000) == 0
            && (v70 & 0x1F) != 0
            && (*(_BYTE *)(v69 + 16LL * (unsigned int)v68 + 8) & 0x1F) == 1 )
          {
            v60 = *(_QWORD *)(v69 + 16LL * (unsigned int)v68);
          }
          else
          {
            v60 = 0LL;
          }
          ExReleasePushLockSharedEx(v67 + 200, 0LL);
          KeLeaveCriticalRegion();
          v66 = v185;
        }
        else
        {
          v71 = ((unsigned int)v65 >> 6) & 0xFFFFFF;
          v65 = (unsigned int)v65 >> 30;
          if ( (unsigned int)v71 < *((_DWORD *)v185 + 60)
            && (v63 = (unsigned int)v71,
                v72 = *((_QWORD *)v185 + 28),
                v64 = *(unsigned int *)(v72 + 16 * v71 + 8),
                (_DWORD)v65 == ((*(_DWORD *)(v72 + 16 * v71 + 8) >> 5) & 3))
            && (v64 & 0x2000) == 0
            && (v64 & 0x1F) != 0
            && (v63 = 2LL * (unsigned int)v71, (*(_BYTE *)(v72 + 16LL * (unsigned int)v71 + 8) & 0x1F) == 1) )
          {
            v60 = *(_QWORD *)(v72 + 16LL * (unsigned int)v71);
          }
          else
          {
            v60 = 0LL;
          }
        }
        v190 = v60;
      }
      if ( !v60 )
      {
        v73 = (_QWORD *)WdLogNewEntry5_WdWarning(v65, v63, v64);
        v73[3] = *a1;
        v73[4] = -1073741811LL;
LABEL_153:
        WdLogEvent5_WdWarning(v73);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v201.hKmdProcessHandle);
LABEL_154:
        DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(&v178);
        goto LABEL_10;
      }
      v74 = a1[1];
      if ( v74 )
      {
        v75 = (v74 >> 6) & 0xFFFFFF;
        v76 = v74 >> 30;
        if ( (unsigned int)v75 < *((_DWORD *)v66 + 60)
          && (v63 = (unsigned int)v75,
              v77 = *((_QWORD *)v66 + 28),
              v64 = *(unsigned int *)(v77 + 16 * v75 + 8),
              (_DWORD)v76 == ((*(_DWORD *)(v77 + 16 * v75 + 8) >> 5) & 3))
          && (v64 & 0x2000) == 0
          && (v64 & 0x1F) != 0
          && (v63 = 2LL * (unsigned int)v75, (*(_BYTE *)(v77 + 16LL * (unsigned int)v75 + 8) & 0x1F) == 3) )
        {
          v11 = *(_QWORD *)(v77 + 16LL * (unsigned int)v75);
        }
        else
        {
          v11 = 0LL;
        }
        v187 = v11;
        if ( !v11 || v60 != *(_QWORD *)(*(_QWORD *)(v11 + 16) + 16LL) && v60 != *(_QWORD *)(v11 + 1672) )
        {
          v73 = (_QWORD *)WdLogNewEntry5_WdWarning(v76, v63, v64);
          v73[3] = v60;
          v73[4] = a1[1];
          goto LABEL_153;
        }
      }
      v78 = a1[7];
      if ( v78 )
      {
        v79 = (v78 >> 6) & 0xFFFFFF;
        v80 = v78 >> 30;
        if ( (unsigned int)v79 < *((_DWORD *)v66 + 60)
          && (v63 = (unsigned int)v79,
              v81 = *((_QWORD *)v66 + 28),
              v64 = *(unsigned int *)(v81 + 16 * v79 + 8),
              v80 == ((*(_DWORD *)(v81 + 16 * v79 + 8) >> 5) & 3))
          && (v64 & 0x2000) == 0
          && (v64 & 0x1F) != 0
          && (v63 = 2LL * (unsigned int)v79, (*(_BYTE *)(v81 + 16LL * (unsigned int)v79 + 8) & 0x1F) == 7) )
        {
          v82 = *(_QWORD *)(v81 + 16LL * (unsigned int)v79);
        }
        else
        {
          v82 = 0LL;
        }
        v189 = v82;
        if ( !v82 || !v11 || v11 != *(_QWORD *)(v82 + 16) )
        {
          v73 = (_QWORD *)WdLogNewEntry5_WdWarning(v82, v63, v64);
          v73[3] = v60;
          v73[4] = v11;
          v73[5] = a1[7];
          goto LABEL_153;
        }
      }
      else
      {
        v82 = 0LL;
      }
      if ( v11 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v11 + 64));
        v60 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 16LL);
        v190 = v60;
      }
      if ( v82 )
        _InterlockedIncrement64((volatile signed __int64 *)(v82 + 32));
      _InterlockedIncrement64((volatile signed __int64 *)(v60 + 24));
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v201.hKmdProcessHandle);
      if ( *(_DWORD *)(v60 + 1528) >= 0x5023u )
      {
        v86 = a1[3];
        if ( (v86 & 0x10) != 0 || v86 >= 0x40 )
        {
          v88 = WdLogNewEntry5_WdWarning(v84, v83, v85);
          *(_QWORD *)(v88 + 24) = v60;
          WdLogEvent5_WdWarning(v88);
          goto LABEL_154;
        }
        if ( (v86 & 0x20) != 0 )
        {
          v87 = WdLogNewEntry5_WdWarning(v84, v83, v85);
          *(_QWORD *)(v87 + 24) = v60;
          *(_QWORD *)(v87 + 32) = 1282LL;
          WdLogEvent5_WdWarning(v87);
          goto LABEL_154;
        }
      }
      v175 = v189;
      if ( (int)DxgkpGetPairingAdapters((struct DXGADAPTER *)v60, 0, &v184, &v176, 0LL, 0LL) >= 0
        && _InterlockedExchangeAdd64((volatile signed __int64 *)v184 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      {
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v184 + 2), v184);
      }
      if ( a1[2] == 8 )
      {
        v89 = a1[6];
        if ( v89 >= 0xC && v89 >= p_Src[1] && *p_Src == 1484026436 )
        {
          v90 = p_Src[2];
          if ( v90 == 14 || v90 == 21 )
          {
            LODWORD(v32) = DxgkDrtTestEscape((struct DXGADAPTER *)v60, (struct _D3DKMT_DRT_ESCAPE_HEAD *)p_Src, 0LL);
            if ( (int)v32 >= 0 )
            {
              if ( v174 )
              {
                v91 = a1[6];
                v92 = (char *)*((_QWORD *)a1 + 2);
                if ( (unsigned __int64)&v92[v91] > MmUserProbeAddress || &v92[v91] <= v92 )
                  *(_BYTE *)MmUserProbeAddress = 0;
                memmove(v92, p_Src, v91);
              }
              else
              {
                memmove(*((void **)a1 + 2), p_Src, a1[6]);
              }
            }
            ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v175);
            if ( v11 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v11 + 16), (struct DXGDEVICE *)v11);
LABEL_428:
            DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v60);
            goto LABEL_586;
          }
        }
      }
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v193, (struct DXGADAPTER *const)v60, 0LL);
      COREACCESS::COREACCESS((COREACCESS *)v188, v192);
      v180 = 0;
      v182 = v60;
      v173 = 0;
      v183 = 0;
      v96 = *((_QWORD *)v185 + 12);
      if ( v96 )
      {
        v97 = (*(__int64 (__fastcall **)(_QWORD))(v96 + 224))(0LL);
        v94 = v97 != 0;
        v186 = v97 != 0;
      }
      else
      {
        v186 = 0;
      }
      v98 = a1[2];
      if ( v98 == 13 )
      {
        COREACCESS::AcquireShared((COREACCESS *)v188);
        v100 = 0;
LABEL_254:
        v104 = v180;
LABEL_255:
        if ( a1[1] )
        {
          if ( *(_DWORD *)(v11 + 408) != 1 )
          {
            LODWORD(v32) = -1073741130;
            v110 = v183;
            goto LABEL_579;
          }
          v100 = v183;
          v173 = v183;
        }
        switch ( a1[2] )
        {
          case 0u:
            if ( *(_BYTE *)(v60 + 185) )
            {
              if ( v189 )
                v186 = *(_DWORD *)(v189 + 28);
              else
                v186 = 0;
              if ( v11 )
                v180 = *(_DWORD *)(v11 + 336);
              else
                v180 = 0;
              v111 = *(_DWORD *)(v60 + 3912);
              HostProcess = DXGPROCESS::GetHostProcess(v185);
              LODWORD(Size) = a1[6];
              v113 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
                       (DXG_GUEST_VIRTUALGPU_VMBUS *)(v60 + 3888),
                       HostProcess,
                       v111,
                       v180,
                       v186,
                       D3DKMT_ESCAPE_DRIVERPRIVATE,
                       (struct _D3DDDI_ESCAPEFLAGS)a1[3],
                       Size,
                       (unsigned __int8 *)p_Src);
              v32 = (DXGADAPTER *)v113;
              if ( v113 < 0 )
              {
                v115 = WdLogNewEntry5_WdError(v114);
                *(_QWORD *)(v115 + 24) = v32;
                WdLogEvent5_WdError(v115);
              }
            }
            else
            {
              if ( *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))(v60 + 448) == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
              {
                v121 = WdLogNewEntry5_WdWarning(v99, v93, v104);
                *(_QWORD *)(v121 + 24) = v60;
                LODWORD(v32) = -1073741637;
                *(_QWORD *)(v121 + 32) = -1073741637LL;
                WdLogEvent5_WdWarning(v121);
                goto LABEL_578;
              }
              v116 = a1[6];
              if ( !(_DWORD)v116 || !*((_QWORD *)a1 + 2) )
              {
                v120 = (_QWORD *)WdLogNewEntry5_WdWarning(v116, v93, v104);
                v120[3] = a1[6];
                v120[4] = *((_QWORD *)a1 + 2);
                v120[5] = -1073741811LL;
                WdLogEvent5_WdWarning(v120);
                goto LABEL_287;
              }
              if ( v11 )
                v117 = *(void **)(v11 + 416);
              else
                v117 = 0LL;
              v201.hDevice = v117;
              if ( v189 )
                v118 = *(void **)(v189 + 184);
              else
                v118 = 0LL;
              v201.hContext = v118;
              v201.Flags.Value = a1[3];
              if ( (*(_DWORD *)(v60 + 300) & 8) == 0
                && *(_DWORD *)(v60 + 276) == 4098
                && !(unsigned int)IsAMDDriverEscapeAllowed(p_Src, v116) )
              {
LABEL_577:
                LODWORD(v32) = -1073741637;
                goto LABEL_578;
              }
              v201.Flags.Value &= ~0x10u;
              if ( (*((_BYTE *)v185 + 307) & 8) != 0
                || (v119 = DXGGLOBAL::GetGlobal(v116), *((_BYTE *)v119 + 1115))
                && DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
                     (struct DXGGLOBAL *)((char *)v119 + 1108),
                     (struct DXGADAPTER *)v60) )
              {
                LODWORD(v10) = 32;
              }
              v201.Flags.Value = (unsigned int)v10 | v201.Flags.Value & 0xFFFFFFDF;
              v201.PrivateDriverDataSize = a1[6];
              v201.pPrivateDriverData = p_Src;
              LODWORD(v32) = DXGADAPTER::DdiEscape((DXGADAPTER *)v60, &v201, v104);
            }
            goto LABEL_569;
          case 1u:
            if ( !v184 )
            {
              v125 = WdLogNewEntry5_WdError(0LL);
              *(_QWORD *)(v125 + 24) = v60;
              LODWORD(v32) = -1073741637;
              *(_QWORD *)(v125 + 32) = -1073741637LL;
              WdLogEvent5_WdError(v125);
              if ( v173 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v181);
              COREACCESS::~COREACCESS((COREACCESS *)v188);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v193);
              ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v175);
              if ( v11 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v11 + 16), (struct DXGDEVICE *)v11);
              goto LABEL_428;
            }
            if ( *((_BYTE *)v184 + 185) )
              goto LABEL_309;
            if ( v11 )
              v10 = *(struct VIDMM_DEVICE **)(v11 + 592);
            if ( a1[6] < 0x440 )
            {
              LODWORD(v32) = -1073741811;
              goto LABEL_578;
            }
            LODWORD(v32) = VIDMM_EXPORT::VidMmEscape(
                             *(VIDMM_EXPORT **)(*((_QWORD *)v184 + 289) + 528LL),
                             *(struct VIDMM_GLOBAL **)(*((_QWORD *)v184 + 289) + 536LL),
                             v10,
                             (struct _D3DKMT_VIDMM_ESCAPE *)p_Src,
                             v104);
            goto LABEL_569;
          case 2u:
            if ( !*((_QWORD *)a1 + 2) )
            {
LABEL_339:
              v128 = 0LL;
LABEL_340:
              DebugInfo = TdrDbgCtrl(v128, v93, v104);
              goto LABEL_341;
            }
            v93 = a1[6];
            if ( (unsigned int)v93 < 4 )
              goto LABEL_287;
            switch ( *p_Src )
            {
              case 0:
                goto LABEL_339;
              case 1:
                v128 = 2LL;
                goto LABEL_340;
              case 2:
                v128 = 1LL;
                goto LABEL_340;
              case 3:
                v128 = 3LL;
                goto LABEL_340;
              case 4:
              case 5:
                if ( !v184 )
                {
                  *(_QWORD *)(WdLogNewEntry5_WdTrace(v99, v93) + 24) = 0LL;
                  goto LABEL_577;
                }
                v130 = v184;
                if ( *((_BYTE *)v184 + 185) )
                  goto LABEL_577;
                LODWORD(v32) = TdrDbgCtrl(4LL, v93, v104);
                if ( (int)v32 >= 0 )
                {
                  v131 = *(_QWORD *)(*((_QWORD *)v130 + 289) + 512LL);
                  v211[0] = 2;
                  v211[1] = *p_Src;
                  DebugInfo = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v130 + 289) + 504LL)
                                                                                       + 8LL)
                                                                           + 64LL))(
                                v131,
                                v211);
                  goto LABEL_341;
                }
                goto LABEL_569;
              case 6:
                v128 = 5LL;
                goto LABEL_340;
              case 7:
                v128 = 6LL;
                goto LABEL_340;
              case 8:
                if ( (unsigned int)v93 < 8 )
                {
                  LODWORD(v32) = -1073741811;
                  goto LABEL_578;
                }
                v132 = v184;
                if ( !v184 )
                {
                  *(_QWORD *)(WdLogNewEntry5_WdTrace(v99, v93) + 24) = v60;
                  goto LABEL_577;
                }
                if ( *((_BYTE *)v184 + 185) )
                  goto LABEL_577;
                LODWORD(v32) = TdrDbgCtrl(4LL, v93, v104);
                if ( (int)v32 >= 0 )
                {
                  v133 = *(_QWORD *)(*((_QWORD *)v132 + 289) + 512LL);
                  v209[0] = 2;
                  v209[1] = *p_Src;
                  v209[2] = p_Src[1];
                  DebugInfo = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v132 + 289) + 504LL)
                                                                                       + 8LL)
                                                                           + 64LL))(
                                v133,
                                v209);
                  goto LABEL_341;
                }
                break;
              default:
                goto LABEL_287;
            }
            goto LABEL_569;
          case 3u:
            if ( !v184 )
            {
              v126 = WdLogNewEntry5_WdError(0LL);
              *(_QWORD *)(v126 + 24) = v60;
              LODWORD(v32) = -1073741637;
              *(_QWORD *)(v126 + 32) = -1073741637LL;
              WdLogEvent5_WdError(v126);
              if ( v173 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v181);
              COREACCESS::~COREACCESS((COREACCESS *)v188);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v193);
              ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v175);
              if ( v11 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v11 + 16), (struct DXGDEVICE *)v11);
              goto LABEL_428;
            }
            if ( *((_BYTE *)v184 + 185) )
              goto LABEL_309;
            if ( a1[6] < 0xC )
            {
              LODWORD(v32) = -1073741811;
              goto LABEL_578;
            }
            if ( *p_Src == 2 )
            {
              LODWORD(v32) = -1073741811;
              goto LABEL_578;
            }
            if ( *p_Src != 3 )
            {
              LODWORD(v32) = (*(__int64 (__fastcall **)(_QWORD, int *, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v184 + 289) + 504LL)
                                                                                           + 8LL)
                                                                               + 64LL))(
                               *(_QWORD *)(*((_QWORD *)v184 + 289) + 512LL),
                               p_Src,
                               v104);
              goto LABEL_569;
            }
            if ( !(_DWORD)v104 )
              goto LABEL_287;
            v127 = 5000000;
            if ( (unsigned int)p_Src[1] < 0x4C4B40 )
              v127 = p_Src[1];
            Interval.QuadPart = -(__int64)v127;
            KeDelayExecutionThread(0, 0, &Interval);
            LODWORD(v32) = 0;
            goto LABEL_570;
          case 4u:
            if ( a1[6] < 0xC || !v11 )
              goto LABEL_287;
            DebugInfo = DXGDEVICE::Escape((DXGDEVICE *)v11, (struct _D3DKMT_DEVICE_ESCAPE *)p_Src);
            goto LABEL_341;
          case 5u:
            if ( !*(_QWORD *)(v60 + 2304) )
            {
              v122 = WdLogNewEntry5_WdError(v99);
              *(_QWORD *)(v122 + 24) = v60;
              LODWORD(v32) = -1073741637;
              *(_QWORD *)(v122 + 32) = -1073741637LL;
              WdLogEvent5_WdError(v122);
              if ( v173 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v181);
              COREACCESS::~COREACCESS((COREACCESS *)v188);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v193);
              ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v175);
              if ( v11 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v11 + 16), (struct DXGDEVICE *)v11);
              goto LABEL_428;
            }
            v123 = a1[6];
            if ( (unsigned int)v123 < 0x80
              || (v124 = *((_QWORD *)p_Src + 1), v124 > 0x19000)
              || v123 != v124 + 127 && v124 )
            {
LABEL_287:
              LODWORD(v32) = -1073741811;
              goto LABEL_578;
            }
            LODWORD(v32) = DmmEscape((struct DXGADAPTER *const)v60, (struct _D3DKMT_DMM_ESCAPE_INTERNAL *const)p_Src);
            goto LABEL_569;
          case 6u:
            v134 = a1[6];
            if ( v134 < 8 )
            {
              LODWORD(v32) = -1073741811;
              goto LABEL_578;
            }
            LODWORD(v32) = DxgDbgTakeSnapshot(p_Src + 1, v134 - 4, (unsigned int *)p_Src);
            goto LABEL_569;
          case 8u:
            v135 = a1[6];
            if ( v135 < 0xC || v135 < p_Src[1] || *p_Src != 1484026436 )
              goto LABEL_287;
            DebugInfo = DxgkDrtTestEscape(
                          (struct DXGADAPTER *)v60,
                          (struct _D3DKMT_DRT_ESCAPE_HEAD *)p_Src,
                          (struct COREADAPTERACCESS *)&v193);
            goto LABEL_341;
          case 9u:
            LODWORD(v32) = GetDiagnosticsBuffer((struct _D3DKMT_DXGK_DIAGNOSTICS *)p_Src, a1[6], 1);
            goto LABEL_569;
          case 0xAu:
            if ( !*(_QWORD *)(v60 + 2304) )
            {
              v136 = WdLogNewEntry5_WdError(v99);
              *(_QWORD *)(v136 + 24) = v60;
              LODWORD(v32) = -1073741637;
              *(_QWORD *)(v136 + 32) = -1073741637LL;
              WdLogEvent5_WdError(v136);
              if ( v173 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v181);
              COREACCESS::~COREACCESS((COREACCESS *)v188);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v193);
              ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v175);
              if ( v11 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v11 + 16), (struct DXGDEVICE *)v11);
              goto LABEL_428;
            }
            v137 = a1[6];
            if ( v137 < 0x18 )
            {
              LODWORD(v32) = -1073741811;
              goto LABEL_578;
            }
            if ( v137 != *p_Src )
            {
              LODWORD(v32) = -1073741811;
              goto LABEL_578;
            }
            if ( v186 )
            {
              DebugInfo = OutputDuplGetDebugInfo(0LL, (struct _D3DKMT_OUTPUTDUPL_SNAPSHOT *)p_Src);
              goto LABEL_341;
            }
            LODWORD(v32) = OutputDuplGetDebugInfo((struct DXGADAPTER *)v60, (struct _D3DKMT_OUTPUTDUPL_SNAPSHOT *)p_Src);
            goto LABEL_569;
          case 0xBu:
            if ( !*(_QWORD *)(v60 + 2304) )
            {
              v138 = WdLogNewEntry5_WdError(v99);
              *(_QWORD *)(v138 + 24) = v60;
              LODWORD(v32) = -1073741637;
              *(_QWORD *)(v138 + 32) = -1073741637LL;
              WdLogEvent5_WdError(v138);
              if ( v173 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v181);
              COREACCESS::~COREACCESS((COREACCESS *)v188);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v193);
              ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v175);
              if ( v11 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v11 + 16), (struct DXGDEVICE *)v11);
              goto LABEL_428;
            }
            v139 = a1[6];
            if ( (unsigned int)v139 < 8 )
            {
              LODWORD(v32) = -1073741811;
              goto LABEL_578;
            }
            if ( v139 != (unsigned int)p_Src[1] + 8LL )
            {
              LODWORD(v32) = -1073741811;
              goto LABEL_578;
            }
            if ( v186 )
            {
              DebugInfo = OutputDuplGetDiagnosticBuffer(0LL, (struct _D3DKMT_OUTPUTDUPL_DIAGNOSTICS *)p_Src);
              goto LABEL_341;
            }
            LODWORD(v32) = OutputDuplGetDiagnosticBuffer(
                             (struct DXGADAPTER *)v60,
                             (struct _D3DKMT_OUTPUTDUPL_DIAGNOSTICS *)p_Src);
            goto LABEL_569;
          case 0xCu:
            if ( (*(_DWORD *)(v60 + 300) & 0x20) != 0 && !DXGADAPTER::IsBddFallbackDriver((DXGADAPTER *)v60) )
            {
              v202.hKmdProcessHandle = 0LL;
              v206 = 0LL;
              v203 = a1[3];
              v205 = a1[6];
              v204 = p_Src;
              DebugInfo = DXGADAPTER::DdiEscape(v143, (const struct _DXGKARG_ESCAPE *)&v202.hKmdProcessHandle, v144);
              goto LABEL_341;
            }
            LODWORD(v32) = -1071775742;
            goto LABEL_578;
          case 0xDu:
            v32 = v192;
            if ( !DXGADAPTER::IsBddFallbackDriver(v192) )
            {
              v142 = WdLogNewEntry5_WdAssertion(v140);
              *(_QWORD *)(v142 + 24) = 1942LL;
              WdLogEvent5_WdAssertion(v142);
            }
            v202.hDevice = 0LL;
            v202.hContext = 0LL;
            v202.Flags.Value = a1[3];
            v202.PrivateDriverDataSize = a1[6];
            v202.pPrivateDriverData = p_Src;
            LODWORD(v32) = DXGADAPTER::DdiEscape(v32, &v202, v141);
            goto LABEL_569;
          case 0xEu:
            if ( a1[6] != 8 )
            {
              LODWORD(v32) = -1073741811;
              goto LABEL_578;
            }
            if ( !*p_Src )
            {
              v148 = p_Src[1];
              *((_BYTE *)DXGGLOBAL::GetGlobal(v99) + 800) = v148 != 0;
              LODWORD(v32) = 0;
              goto LABEL_570;
            }
            if ( *p_Src != 15 )
            {
              v145 = WdLogNewEntry5_WdAssertion(v99);
              *(_QWORD *)(v145 + 24) = *p_Src;
              WdLogEvent5_WdAssertion(v145);
              LODWORD(v32) = -1073741811;
              goto LABEL_569;
            }
            v146 = *(ADAPTER_DISPLAY **)(v60 + 2304);
            if ( v146 )
            {
              DebugInfo = ADAPTER_DISPLAY::ActivateStoringInvalidModesForTestPurposes(v146, p_Src[1]);
              goto LABEL_341;
            }
            v147 = WdLogNewEntry5_WdError(0LL);
            *(_QWORD *)(v147 + 24) = v60;
            LODWORD(v32) = -1073741637;
            *(_QWORD *)(v147 + 32) = -1073741637LL;
            WdLogEvent5_WdError(v147);
            if ( v173 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v181);
            COREACCESS::~COREACCESS((COREACCESS *)v188);
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v193);
            ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v175);
            if ( v11 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v11 + 16), (struct DXGDEVICE *)v11);
            goto LABEL_428;
          case 0xFu:
            if ( !*(_QWORD *)(v60 + 2304) )
            {
              v149 = WdLogNewEntry5_WdError(v99);
              *(_QWORD *)(v149 + 24) = v60;
              LODWORD(v32) = -1073741637;
              *(_QWORD *)(v149 + 32) = -1073741637LL;
              WdLogEvent5_WdError(v149);
              if ( v173 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v181);
              COREACCESS::~COREACCESS((COREACCESS *)v188);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v193);
              ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v175);
              if ( v11 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v11 + 16), (struct DXGDEVICE *)v11);
              goto LABEL_428;
            }
            v150 = a1[6];
            if ( (unsigned int)v150 < 8 )
            {
              LODWORD(v32) = -1073741811;
              goto LABEL_578;
            }
            if ( v150 < 44 * (unsigned __int64)(unsigned int)p_Src[1] + 8 )
            {
              LODWORD(v32) = -1073741811;
              goto LABEL_578;
            }
            LODWORD(v32) = ADAPTER_DISPLAY::GetInvalidModesForTestPurposes(
                             *(ADAPTER_DISPLAY **)(v60 + 2304),
                             (struct _D3DKMT_DISPLAYMODELIST *)p_Src);
            goto LABEL_569;
          case 0x10u:
            if ( a1[6] < 4 )
            {
              LODWORD(v32) = -1073741811;
              goto LABEL_578;
            }
            *p_Src = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v60 + 192) + 64LL) + 2584LL);
            LODWORD(v32) = 0;
            goto LABEL_570;
          case 0x11u:
            if ( (a1[3] & 1) == 0 )
            {
              LODWORD(v32) = -1073741811;
              goto LABEL_578;
            }
            if ( a1[6] < 0x608 )
            {
              LODWORD(v32) = -1073741811;
              goto LABEL_578;
            }
            LODWORD(v32) = DpiBrightnessEscape(
                             *(struct _DEVICE_OBJECT **)(v60 + 192),
                             (struct _D3DKMT_BRIGHTNESS_INFO *)p_Src);
            goto LABEL_569;
          case 0x12u:
            v151 = a1[6];
            if ( (unsigned int)v151 < 4 )
              goto LABEL_287;
            v152 = (unsigned int)*p_Src + 4LL;
            if ( v151 != v152 )
              goto LABEL_287;
            v153 = (EDIDCACHE *)*((_QWORD *)DXGGLOBAL::GetGlobal(v152) + 85);
            if ( !v153 )
            {
              LODWORD(v32) = -1073741801;
              goto LABEL_578;
            }
            DebugInfo = EDIDCACHE::GetEdids(v153, (struct _D3DKMT_DXGK_DIAGNOSTICS *)p_Src);
LABEL_341:
            LODWORD(v32) = DebugInfo;
            goto LABEL_569;
          case 0x13u:
            if ( a1[6] < 0x10 )
            {
              LODWORD(v32) = -1073741811;
              goto LABEL_578;
            }
            p_Src[1] &= 7u;
            DxgkGetAdapterBrightnessInfo(*(_QWORD *)(v60 + 192), p_Src);
            LODWORD(v32) = 0;
            goto LABEL_570;
          case 0x15u:
            if ( a1[6] < 8 )
            {
              if ( v100 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v181);
              COREACCESS::~COREACCESS((COREACCESS *)v188);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v193);
              ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v175);
              if ( v11 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v11 + 16), (struct DXGDEVICE *)v11);
              goto LABEL_566;
            }
            if ( !v184 )
            {
              if ( v100 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v181);
              COREACCESS::~COREACCESS((COREACCESS *)v188);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v193);
              ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v175);
              if ( v11 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v11 + 16), (struct DXGDEVICE *)v11);
              goto LABEL_566;
            }
            if ( v11 )
            {
              v154 = 0;
              if ( (qword_1C005F010 & 0x21C8ED7) != 0
                && (qword_1C005F018 & 0xFFFFFFFFFDE37128uLL) == 0
                && (qword_1C005F010 & 0x4000) != 0
                && (unsigned int)DXGADAPTER::GetNumDifferentPhysicalAdapters(v184) )
              {
                v157 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v155 + 289) + 16LL) + 2216LL);
                while ( !*(_QWORD *)(v157 + 48LL * v156 + 32) )
                {
                  NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters(v155);
                  if ( v156 >= NumDifferentPhysicalAdapters )
                    goto LABEL_480;
                }
                v154 = 1;
              }
LABEL_480:
              *(_BYTE *)(v11 + 1688) = v154;
              *(_BYTE *)p_Src = v154;
              p_Src[1] = 0;
              LODWORD(v32) = 0;
              goto LABEL_570;
            }
            if ( v100 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v181);
            COREACCESS::~COREACCESS((COREACCESS *)v188);
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v193);
            ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v175);
            DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v60);
            goto LABEL_154;
          case 0x17u:
            if ( a1[6] != 32 )
            {
              LODWORD(v32) = -1073741811;
              goto LABEL_578;
            }
            DxgkGetAdapterMiracastInfo(*(_QWORD *)(v60 + 192), p_Src);
            LODWORD(v32) = 0;
            goto LABEL_570;
          case 0x1Cu:
            if ( a1[6] < 0x20 )
            {
              if ( v100 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v181);
              COREACCESS::~COREACCESS((COREACCESS *)v188);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v193);
              ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v175);
              if ( v11 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v11 + 16), (struct DXGDEVICE *)v11);
              goto LABEL_566;
            }
            v159 = p_Src[3];
            if ( v159 > 1 )
            {
              if ( v100 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v181);
              COREACCESS::~COREACCESS((COREACCESS *)v188);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v193);
              ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v175);
              if ( v11 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v11 + 16), (struct DXGDEVICE *)v11);
              goto LABEL_566;
            }
            if ( *(_QWORD *)p_Src )
            {
              if ( v100 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v181);
              COREACCESS::~COREACCESS((COREACCESS *)v188);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v193);
              ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v175);
              if ( v11 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v11 + 16), (struct DXGDEVICE *)v11);
              goto LABEL_566;
            }
            if ( !v159 )
            {
              *((_QWORD *)p_Src + 2) = 0LL;
              *((_QWORD *)p_Src + 3) = 0LL;
            }
            if ( (unsigned int)(p_Src[2] - 1000) > 1 )
            {
              if ( v100 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v181);
              COREACCESS::~COREACCESS((COREACCESS *)v188);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v193);
              ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v175);
              if ( v11 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v11 + 16), (struct DXGDEVICE *)v11);
              goto LABEL_566;
            }
            if ( !v184 )
            {
              v160 = WdLogNewEntry5_WdError(0LL);
              *(_QWORD *)(v160 + 24) = 2221LL;
              goto LABEL_507;
            }
            if ( !*((_BYTE *)v184 + 185) )
            {
              LODWORD(v32) = (*(__int64 (__fastcall **)(_QWORD, struct DXGPROCESS *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v184 + 289) + 528LL) + 8LL)
                                                                                            + 1080LL))(
                               *(_QWORD *)(*((_QWORD *)v184 + 289) + 536LL),
                               v185,
                               (unsigned int)p_Src[3]);
              goto LABEL_569;
            }
            goto LABEL_309;
          case 0x1Du:
            if ( a1[6] < 0x20 )
            {
              if ( v100 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v181);
              COREACCESS::~COREACCESS((COREACCESS *)v188);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v193);
              ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v175);
              if ( v11 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v11 + 16), (struct DXGDEVICE *)v11);
              goto LABEL_566;
            }
            v161 = p_Src[1];
            if ( v161 > 1 )
            {
              if ( v100 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v181);
              COREACCESS::~COREACCESS((COREACCESS *)v188);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v193);
              ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v175);
              if ( v11 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v11 + 16), (struct DXGDEVICE *)v11);
              goto LABEL_566;
            }
            if ( !v161 )
            {
              *((_QWORD *)p_Src + 1) = 0LL;
              *((_QWORD *)p_Src + 2) = 0LL;
              *((_QWORD *)p_Src + 3) = 0LL;
            }
            v162 = (unsigned int)*p_Src;
            if ( (unsigned int)(v162 - 1000) > 1 )
            {
              if ( v100 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v181);
              COREACCESS::~COREACCESS((COREACCESS *)v188);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v193);
              ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v175);
              if ( v11 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v11 + 16), (struct DXGDEVICE *)v11);
              goto LABEL_566;
            }
            if ( v184 )
            {
              if ( !*((_BYTE *)v184 + 185) )
              {
                LODWORD(v32) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v184 + 289) + 528LL) + 8LL)
                                                                                         + 1088LL))(
                                 *(_QWORD *)(*((_QWORD *)v184 + 289) + 536LL),
                                 (unsigned int)p_Src[1],
                                 v162,
                                 p_Src + 2);
                goto LABEL_569;
              }
            }
            else
            {
              v160 = WdLogNewEntry5_WdError(0LL);
              *(_QWORD *)(v160 + 24) = 2275LL;
LABEL_507:
              WdLogEvent5_WdError(v160);
            }
LABEL_309:
            if ( v100 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v181);
            COREACCESS::~COREACCESS((COREACCESS *)v188);
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v193);
            ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v175);
            if ( v11 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v11 + 16), (struct DXGDEVICE *)v11);
            v25 = (DXGADAPTER *)v60;
            goto LABEL_34;
          case 0x1Fu:
            if ( a1[6] != 4 )
            {
              v163 = WdLogNewEntry5_WdError(v99);
              *(_QWORD *)(v163 + 24) = a1[6];
              WdLogEvent5_WdError(v163);
              if ( v100 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v181);
              COREACCESS::~COREACCESS((COREACCESS *)v188);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v193);
              ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v175);
              if ( v11 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v11 + 16), (struct DXGDEVICE *)v11);
              goto LABEL_566;
            }
            if ( *(_QWORD *)(v60 + 2312) )
            {
              v164 = WdLogNewEntry5_WdWarning(v99, v93, v104);
              *(_QWORD *)(v164 + 24) = v60;
              WdLogEvent5_WdWarning(v164);
              if ( v100 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v181);
              COREACCESS::~COREACCESS((COREACCESS *)v188);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v193);
              ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v175);
              if ( v11 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v11 + 16), (struct DXGDEVICE *)v11);
              goto LABEL_566;
            }
            v165 = *(_QWORD *)(v60 + 2304);
            if ( !*(_QWORD *)(v165 + 264) )
            {
              LODWORD(v32) = -1073741811;
              goto LABEL_578;
            }
            *(_DWORD *)(v165 + 272) = *p_Src;
            LODWORD(v32) = 0;
            goto LABEL_570;
          case 0x22u:
            LODWORD(v32) = GetDiagnosticsBuffer((struct _D3DKMT_DXGK_DIAGNOSTICS *)p_Src, a1[6], 0);
            goto LABEL_569;
          case 0x24u:
            if ( !*(_QWORD *)(v60 + 2312) )
            {
              v166 = WdLogNewEntry5_WdWarning(v99, v93, v104);
              *(_QWORD *)(v166 + 24) = v60;
              WdLogEvent5_WdWarning(v166);
              if ( v100 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v181);
              COREACCESS::~COREACCESS((COREACCESS *)v188);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v193);
              ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v175);
              if ( v11 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v11 + 16), (struct DXGDEVICE *)v11);
LABEL_566:
              DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v60);
              goto LABEL_154;
            }
            LODWORD(v32) = ADAPTER_DISPLAY::ReportDisplayState(
                             *(ADAPTER_DISPLAY **)(v60 + 2304),
                             (struct _D3DKMT_DXGK_DIAGNOSTICS *)p_Src,
                             a1[6]);
LABEL_569:
            if ( (int)v32 < 0 )
              goto LABEL_578;
LABEL_570:
            if ( !v174 )
            {
              memmove(*((void **)a1 + 2), p_Src, a1[6]);
LABEL_578:
              v110 = v173;
              break;
            }
            v168 = a1[6];
            v169 = (char *)*((_QWORD *)a1 + 2);
            if ( (unsigned __int64)&v169[v168] > MmUserProbeAddress || &v169[v168] <= v169 )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v169, p_Src, v168);
            v110 = v173;
            break;
          default:
            LODWORD(v32) = -1073741811;
            v167 = WdLogNewEntry5_WdWarning(v99, v93, v104);
            *(_QWORD *)(v167 + 24) = (int)a1[2];
            WdLogEvent5_WdWarning(v167);
            goto LABEL_569;
        }
LABEL_579:
        if ( v110 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v181);
        COREACCESS::~COREACCESS((COREACCESS *)v188);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v193);
        ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v175);
        if ( v11 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v11 + 16), (struct DXGDEVICE *)v11);
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v60 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v60 + 16), (struct DXGADAPTER *)v60);
        goto LABEL_586;
      }
      v101 = a1[3];
      if ( (v101 & 1) != 0 )
      {
        v102 = 0;
        if ( !v98 || v98 == 3 && a1[6] >= 0xC && *p_Src == 3 )
          v102 = 1;
        v103 = v102;
        if ( *(_QWORD *)(v60 + 2312) )
          v103 = 1;
        v180 = v103;
        LODWORD(v32) = COREADAPTERACCESS::AcquireExclusive(&v193, (unsigned int)(unsigned __int8)v103 + 2);
        if ( (int)v32 < 0 )
        {
          v110 = 0;
          goto LABEL_579;
        }
        if ( !(_BYTE)v180 )
        {
          v99 = *(_QWORD *)(v60 + 2312);
          if ( v99 )
            ADAPTER_RENDER::FlushScheduler(v99, 2, 0xFFFFFFFF, 0);
        }
        v100 = 0;
        v104 = 1LL;
        goto LABEL_255;
      }
      if ( v98 )
        goto LABEL_238;
      v95 = *(unsigned __int8 *)(v60 + 185);
      v93 = *(unsigned __int8 *)(v60 + 186);
      v94 = *(_QWORD *)(v60 + 2304) != 0LL ? 2 : 0;
      LOBYTE(v93) = -(char)v93;
      LOBYTE(v95) = -(char)v95;
      v105 = *(_BYTE *)(v60 + 300) & 4 | (*(_DWORD *)(v60 + 300) >> 2) & 0x40 | ((_BYTE)v95 != 0 ? 0x80 : 0) | (8 * (*(_BYTE *)(v60 + 300) & 1)) | (*(_QWORD *)(v60 + 2304) != 0LL ? 2 : 0) | (*(_QWORD *)(v60 + 2312) != 0LL);
      if ( (_BYTE)word_1C006085C )
      {
        DpiIsHybridIntegratedAdapter(*(_QWORD *)(v60 + 192));
        if ( DpiIsHybridDiscreteAdapter(v106) )
          v93 = (unsigned int)v95;
        v105 |= v93;
      }
      if ( (v105 & 0x10) != 0 || *(_DWORD *)(v60 + 1528) >= 0x5023u && (v101 & 8) != 0 )
      {
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v181);
        if ( *(_DWORD *)(v60 + 176) != 1 )
          goto LABEL_252;
      }
      else
      {
LABEL_238:
        if ( v196 )
        {
          v107 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v94, v93, v95);
          v107[3] = 275LL;
          v107[4] = 4LL;
          v107[5] = v194;
          v107[6] = 0LL;
          v107[7] = 0LL;
          WdLogEvent5_WdCriticalError(v107);
        }
        v99 = (__int64)v195;
        if ( KeGetCurrentThread() != *((struct _KTHREAD **)v195 + 20) )
        {
          if ( !KeReadStateEvent((PRKEVENT)v195 + 2) )
          {
            if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q(v108, &EventBlockThread, v109, 72);
            KeWaitForSingleObject((char *)v195 + 48, Executive, 0, 0, 0LL);
          }
          DXGADAPTER::AcquireCoreResourceShared(v195);
          v99 = (__int64)v195;
        }
        v196 = 1;
        if ( *(_DWORD *)(v99 + 176) != 1 )
        {
          COREACCESS::Release((COREACCESS *)v194);
          LODWORD(v32) = -1073741130;
          v110 = v183;
          goto LABEL_579;
        }
        if ( v195 != (DXGADAPTER *)v198 )
        {
          COREACCESS::AcquireShared((COREACCESS *)v197);
          v99 = v198[44];
          if ( (_DWORD)v99 != 1 )
          {
            COREACCESS::Release((COREACCESS *)v197);
            COREACCESS::Release((COREACCESS *)v194);
LABEL_252:
            v110 = v183;
            LODWORD(v32) = -1073741130;
            goto LABEL_579;
          }
        }
      }
      v100 = v183;
      v173 = v183;
      goto LABEL_254;
    }
    goto LABEL_116;
  }
  if ( (_DWORD)v28 != 1029 )
  {
    switch ( (int)v28 )
    {
      case 1:
        if ( a1[6] < 0x440 )
          goto LABEL_130;
        v38 = *p_Src;
        if ( *p_Src == 5 )
        {
          LODWORD(v32) = DxgEscapeEvict((struct _D3DKMT_VIDMM_ESCAPE *)p_Src);
          goto LABEL_586;
        }
        switch ( v38 )
        {
          case 6:
            LODWORD(v32) = DxgEscapeEvictByNtHandle((struct _D3DKMT_VIDMM_ESCAPE *)p_Src);
            goto LABEL_586;
          case 13:
            LODWORD(v32) = DxgEscapeEvictByCriteria((struct _D3DKMT_VIDMM_ESCAPE *)p_Src);
            goto LABEL_586;
          case 9:
            LODWORD(v32) = DxgEscapeSuspendResumeProcess(*a1, *((void **)p_Src + 1), 1, p_Src[4] != 0);
            goto LABEL_586;
          case 10:
            LODWORD(v32) = DxgEscapeSuspendResumeProcess(*a1, *((void **)p_Src + 1), 0, 0);
LABEL_586:
            DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(&v178);
            if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q(v170, &EventProfilerExit, v171, 2016);
            return (unsigned int)v32;
        }
        break;
      case 8:
        v35 = a1[6];
        if ( v35 < 0xC )
          goto LABEL_130;
        if ( v35 < p_Src[1] )
          goto LABEL_130;
        if ( *p_Src != 1484026436 )
          goto LABEL_130;
        v36 = p_Src[2];
        if ( v36 > 0x19 )
          goto LABEL_130;
        v37 = 55058433;
        if ( !_bittest(&v37, v36) )
          goto LABEL_130;
        LODWORD(v32) = DxgkDrtTestEscape(0LL, (struct _D3DKMT_DRT_ESCAPE_HEAD *)p_Src, 0LL);
        goto LABEL_586;
      case 20:
      case 30:
        v29 = (_DWORD)v28 == 30;
        v30 = a1[6];
        if ( v29 )
          v31 = DxgkHandleIndirectEscape(v30, p_Src);
        else
          v31 = DxgkHandleMiracastEscape(v30, p_Src);
        LODWORD(v32) = v31;
        if ( v31 < 0 )
          goto LABEL_586;
        if ( !v174 )
          goto LABEL_55;
        v33 = a1[6];
        v34 = (char *)*((_QWORD *)a1 + 2);
        if ( (unsigned __int64)&v34[v33] > MmUserProbeAddress || &v34[v33] <= v34 )
          *(_BYTE *)MmUserProbeAddress = 0;
        goto LABEL_113;
      case 24:
        if ( !g_OSTestSigningEnabled )
          goto LABEL_74;
        if ( a1[6] != 1 )
          goto LABEL_79;
        byte_1C006085B = *(_BYTE *)p_Src;
        goto LABEL_81;
      case 25:
        if ( a1[6] != 24 )
          goto LABEL_79;
        goto LABEL_122;
      case 26:
        if ( a1[6] != 140 )
          goto LABEL_79;
        LODWORD(v32) = DxgkHMDGetEdidBaseBlock((const struct _LUID *)p_Src, p_Src[2], (unsigned __int8 *)p_Src + 12);
        if ( (int)v32 < 0 )
          goto LABEL_586;
        if ( !v174 )
          goto LABEL_55;
        v33 = a1[6];
        v34 = (char *)*((_QWORD *)a1 + 2);
        if ( (unsigned __int64)&v34[v33] > MmUserProbeAddress || &v34[v33] <= v34 )
          *(_BYTE *)MmUserProbeAddress = 0;
        goto LABEL_113;
      case 27:
        if ( !g_OSTestSigningEnabled )
        {
LABEL_74:
          DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(&v178);
          if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v39, &EventProfilerExit, v40, 2016);
          return 3221225506LL;
        }
        if ( a1[6] != 200 )
        {
LABEL_79:
          DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(&v178);
          goto LABEL_10;
        }
        Current = DXGPROCESS::GetCurrent(v28, 0x1C0000000LL);
        if ( !Current )
        {
          v45 = WdLogNewEntry5_WdError(v44);
          *(_QWORD *)(v45 + 24) = 1100LL;
          WdLogEvent5_WdError(v45);
          DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(&v178);
          goto LABEL_10;
        }
        DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v208, Current);
        DXGUSERCRIT::Acquire((DXGUSERCRIT *)v208, 1u);
        v212 = 0LL;
        *(_QWORD *)&ActivityId.Data1 = 0LL;
        *(_QWORD *)ActivityId.Data4 = 0LL;
        v214 = 0LL;
        v215 = 0LL;
        v216 = 0LL;
        v217 = 0LL;
        v218 = 0LL;
        v219 = 0LL;
        EtwActivityIdControl(3u, &ActivityId);
        v219 = MEMORY[0xFFFFF78000000014];
        LODWORD(v214) = 46;
        LOBYTE(v217) = -1;
        LODWORD(v32) = DxgkEnableDisableTargetAsHMD(
                         (struct _D3DKMT_SOFTGPU_LUID_TARGET *)p_Src,
                         p_Src[48],
                         *((_BYTE *)p_Src + 196),
                         (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)&v212);
        DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v208);
        goto LABEL_586;
      case 32:
        if ( a1[6] != 16 )
          goto LABEL_79;
        v187 = 0LL;
        DxgkLogCodePointPacket(*p_Src, p_Src[1], p_Src[2], p_Src[3], 0LL);
LABEL_81:
        DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(&v178);
        if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v41, &EventProfilerExit, v42, 2016);
        return 0LL;
      case 33:
        v46 = a1[6];
        if ( v46 < 0x30 || v46 < p_Src[1] )
          goto LABEL_79;
        LODWORD(v32) = DxgkWriteUserModeDiagEntry((struct _DXGK_DIAG_HEADER *)p_Src);
        goto LABEL_586;
      case 35:
        if ( a1[6] != 36 )
          goto LABEL_79;
        LODWORD(v32) = DxgkGetPreferredMode((struct _D3DKMT_GET_PREFERRED_MODE *)p_Src);
        if ( (int)v32 < 0 )
          goto LABEL_586;
        if ( v174 )
        {
          v33 = a1[6];
          v34 = (char *)*((_QWORD *)a1 + 2);
          if ( (unsigned __int64)&v34[v33] > MmUserProbeAddress || &v34[v33] <= v34 )
            *(_BYTE *)MmUserProbeAddress = 0;
LABEL_113:
          memmove(v34, p_Src, v33);
        }
        else
        {
LABEL_55:
          memmove(*((void **)a1 + 2), p_Src, a1[6]);
        }
        goto LABEL_586;
      default:
        goto LABEL_130;
    }
    goto LABEL_130;
  }
  v47 = WdLogNewEntry5_WdAssertion(v28);
  *(_QWORD *)(v47 + 24) = 950LL;
  WdLogEvent5_WdAssertion(v47);
  if ( (*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)v7 + 12) + 224LL))(0LL) )
    goto LABEL_122;
  v49 = DXGGLOBAL::GetGlobal(v48);
  v51 = DXGGLOBAL::ReferenceBddFallbackAdapter(v49, &v207);
  if ( !v51 )
  {
LABEL_116:
    DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(&v178);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v52, &EventProfilerExit, v53, 2016);
    return 3221226021LL;
  }
  v177[0] = 1;
  v54 = DXGGLOBAL::GetGlobal(v50);
  DXGGLOBAL::IterateAdaptersWithCallback(
    (__int64)v54,
    (__int64 (__fastcall *)(_QWORD *, __int64))DxgkEscapeStopDisplayAdapters,
    (__int64)v177,
    1);
  if ( v177[0] )
  {
    DXGADAPTER::ReleaseReferenceNoTracking(v51);
LABEL_122:
    DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(&v178);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v55, &EventProfilerExit, v56, 2016);
    return 3221225473LL;
  }
  v210[0] = 0x4000000006LL;
  memset(&v210[1], 0, 40);
  v210[6] = 76LL;
  v210[7] = 0LL;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v210);
  LiveDumpWithWdLogs = DxgCreateLiveDumpWithWdLogs(0x187u, 1uLL, 0LL, 0LL, 0LL);
  DXGADAPTER::ReleaseReferenceNoTracking(v51);
  DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION(&v178);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v58, &EventProfilerExit, v59, 2016);
  return LiveDumpWithWdLogs;
}
