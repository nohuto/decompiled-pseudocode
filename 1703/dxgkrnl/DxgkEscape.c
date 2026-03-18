/*
 * XREFs of DxgkEscape @ 0x1C00D0150
 * Callers:
 *     ?VmBusEscape@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002D280 (-VmBusEscape@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C0001BD8 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C0001C04 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0005BF0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0005C34 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C00062BC (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0006310 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0006EBC (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000755C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00078FC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     DxgkLogCodePointPacket @ 0x1C000BD40 (DxgkLogCodePointPacket.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C000D2E8 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D778 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D7E0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C000D924 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C001374C (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00139F0 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1ENSURE_CONTEXT_DEREFERENCE@@QEAA@XZ @ 0x1C0013D3C (--1ENSURE_CONTEXT_DEREFERENCE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     ?VmBusSendEscape@DXGADAPTER@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS@@IPEAE@Z @ 0x1C003001C (-VmBusSendEscape@DXGADAPTER@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS@@IPEAE@Z.c)
 *     ?VidMmEscape@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z @ 0x1C00382EC (-VidMmEscape@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@.c)
 *     DpiIsHybridDiscreteAdapter @ 0x1C003D818 (DpiIsHybridDiscreteAdapter.c)
 *     DpiIsHybridIntegratedAdapter @ 0x1C003D82C (DpiIsHybridIntegratedAdapter.c)
 *     DxgkGetAdapterBrightnessInfo @ 0x1C003DB74 (DxgkGetAdapterBrightnessInfo.c)
 *     DxgkGetAdapterMiracastInfo @ 0x1C003FF14 (DxgkGetAdapterMiracastInfo.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00CCF24 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00CF9BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     _DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION @ 0x1C00D0108 (_DxgkEscape_--_2_--ENSURE_DATA_DELETION--_ENSURE_DATA_DELETION.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00D3410 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00D7FFC (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     DxgkWriteDiagEntry @ 0x1C00F2CA0 (DxgkWriteDiagEntry.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00F7EEC (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?DdiEscape@DXGADAPTER@@QEAAJPEBU_DXGKARG_ESCAPE@@@Z @ 0x1C016BC04 (-DdiEscape@DXGADAPTER@@QEAAJPEBU_DXGKARG_ESCAPE@@@Z.c)
 *     ?DxgkGetPreferredMode@@YAJPEAU_D3DKMT_GET_PREFERRED_MODE@@@Z @ 0x1C016DCB0 (-DxgkGetPreferredMode@@YAJPEAU_D3DKMT_GET_PREFERRED_MODE@@@Z.c)
 *     ?ActivateStoringInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJH@Z @ 0x1C016FCB8 (-ActivateStoringInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJH@Z.c)
 *     ?GetInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DISPLAYMODELIST@@@Z @ 0x1C017179C (-GetInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_DISPLAYMODELIST@@@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C017A3F8 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z.c)
 *     ?DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017A5F4 (-DxgkEnableDisableTargetAsHMD@@YAJPEAU_D3DKMT_SOFTGPU_LUID_TARGET@@IEPEAU_DXGK_DISPLAY_SCENARIO_.c)
 *     DxgkWriteUserModeDiagEntry @ 0x1C017EADC (DxgkWriteUserModeDiagEntry.c)
 *     ?Escape@DXGDEVICE@@QEAAJPEAU_D3DKMT_DEVICE_ESCAPE@@@Z @ 0x1C01878E0 (-Escape@DXGDEVICE@@QEAAJPEAU_D3DKMT_DEVICE_ESCAPE@@@Z.c)
 *     ?DxgDbgTakeSnapshot@@YAJPEAXKPEAK@Z @ 0x1C018CA6C (-DxgDbgTakeSnapshot@@YAJPEAXKPEAK@Z.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C018FD24 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     ?TdrDbgCtrl@@YAJW4_TDR_DBG_CTRL@@@Z @ 0x1C0192810 (-TdrDbgCtrl@@YAJW4_TDR_DBG_CTRL@@@Z.c)
 *     ?DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C01936E4 (-DxgEscapeEvict@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeEvictByCriteria@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C01937E4 (-DxgEscapeEvictByCriteria@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeEvictByNtHandle@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z @ 0x1C019384C (-DxgEscapeEvictByNtHandle@@YAJPEAU_D3DKMT_VIDMM_ESCAPE@@@Z.c)
 *     ?DxgEscapeSuspendResumeProcess@@YAJIPEAX_N1@Z @ 0x1C0194244 (-DxgEscapeSuspendResumeProcess@@YAJIPEAX_N1@Z.c)
 *     ?GetDiagnosticsBuffer@@YAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@IH@Z @ 0x1C0194584 (-GetDiagnosticsBuffer@@YAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@IH@Z.c)
 *     ?IsAMDDriverEscapeAllowed@@YAHPEAX_K@Z @ 0x1C01946E4 (-IsAMDDriverEscapeAllowed@@YAHPEAX_K@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019527C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?ReferenceBddFallbackAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@PEA_K@Z @ 0x1C019646C (-ReferenceBddFallbackAdapter@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@PEA_K@Z.c)
 *     ?GetEdids@EDIDCACHE@@QEAAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@@Z @ 0x1C0198AC8 (-GetEdids@EDIDCACHE@@QEAAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C01A1DC4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?DxgkHMDGetEdidBaseBlock@@YAJAEBU_LUID@@IPEAE@Z @ 0x1C01A93E0 (-DxgkHMDGetEdidBaseBlock@@YAJAEBU_LUID@@IPEAE@Z.c)
 *     OutputDuplGetDebugInfo @ 0x1C01B01F0 (OutputDuplGetDebugInfo.c)
 *     OutputDuplGetDiagnosticBuffer @ 0x1C01B02D0 (OutputDuplGetDiagnosticBuffer.c)
 *     DxgkHandleMiracastEscape @ 0x1C01C8674 (DxgkHandleMiracastEscape.c)
 *     ?DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z @ 0x1C01C8F5C (-DpiBrightnessEscape@@YAJPEAU_DEVICE_OBJECT@@PEAU_D3DKMT_BRIGHTNESS_INFO@@@Z.c)
 *     DxgkHandleIndirectEscape @ 0x1C01CBAC4 (DxgkHandleIndirectEscape.c)
 *     DmmEscape @ 0x1C01D4DD0 (DmmEscape.c)
 */

__int64 __fastcall DxgkEscape(unsigned int *a1, __int64 a2, __int64 a3)
{
  __int64 CurrentProcess; // rax
  __int64 v5; // rdx
  DXGPROCESS *ProcessDxgProcess; // rax
  DXGPROCESS *v7; // rbx
  DXGPROCESS **ThreadProperty; // rax
  struct VIDMM_DEVICE *v9; // r13
  __int64 v10; // rdi
  int *p_Src; // r14
  __int64 v12; // rdx
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
  DXGADAPTER *v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  unsigned int v28; // eax
  DXGADAPTER *v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rcx
  int v34; // eax
  DXGADAPTER *v35; // rbx
  size_t v36; // r8
  char *v37; // rcx
  unsigned int v38; // eax
  int v39; // eax
  int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rcx
  __int64 v44; // r8
  struct DXGPROCESS *Current; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rax
  unsigned int v49; // eax
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  DXGGLOBAL *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  DXGADAPTER *v58; // rbx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rcx
  __int64 v62; // r8
  struct DXGGLOBAL *v63; // rax
  __int64 v64; // rcx
  __int64 v65; // r8
  unsigned int LiveDumpWithWdLogs; // edi
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r15
  DXGGLOBAL *Global; // rax
  DXGADAPTER *v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  unsigned int v76; // ebx
  DXGPROCESS *v77; // r10
  __int64 v78; // r9
  unsigned int v79; // ecx
  unsigned int v80; // ebx
  __int64 v81; // r8
  unsigned int v82; // edx
  unsigned int v83; // ebx
  _QWORD *v84; // rax
  unsigned int v85; // edx
  __int64 v86; // rcx
  __int64 v87; // rdx
  unsigned int v88; // edx
  __int64 v89; // rcx
  __int64 v90; // rdx
  __int64 v91; // rbx
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  unsigned int v96; // eax
  __int64 v97; // rax
  __int64 v98; // rax
  unsigned int v99; // eax
  int v100; // eax
  size_t v101; // r8
  char *v102; // rcx
  __int64 v103; // rdx
  __int64 v104; // r8
  char v105; // bl
  __int64 v106; // rax
  __int64 v107; // rcx
  unsigned int v108; // eax
  __int64 v109; // rcx
  unsigned int v110; // r10d
  unsigned __int8 v111; // cl
  unsigned int v112; // eax
  __int64 v113; // r9
  __int64 v114; // rcx
  int v115; // edx
  unsigned int v116; // r9d
  _QWORD *v117; // rax
  __int64 v118; // rcx
  __int64 v119; // r8
  char v120; // al
  __int64 v121; // r8
  UINT v122; // ebx
  UINT HostProcess; // eax
  int v124; // eax
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // rax
  unsigned __int64 v128; // rcx
  void *v129; // rax
  void *v130; // rax
  struct DXGGLOBAL *v131; // rax
  char v132; // cl
  _QWORD *v133; // rax
  __int64 v134; // rax
  __int64 v135; // rax
  __int64 v136; // rax
  unsigned __int64 v137; // rdx
  __int64 v138; // rax
  __int64 v139; // rax
  unsigned int v140; // eax
  __int64 v141; // rcx
  int DebugInfo; // eax
  __int64 v143; // rdx
  __int64 v144; // rcx
  DXGADAPTER *v145; // r13
  __int64 v146; // rcx
  unsigned int v147; // edx
  int v148; // eax
  unsigned int v149; // eax
  __int64 v150; // rax
  unsigned int v151; // eax
  __int64 v152; // rax
  __int64 v153; // rax
  __int64 v154; // rdx
  __int64 v155; // rcx
  __int64 v156; // r8
  __int64 v157; // r9
  __int64 v158; // rax
  DXGADAPTER *v159; // rcx
  __int64 v160; // rax
  ADAPTER_DISPLAY *v161; // rcx
  __int64 v162; // rax
  int v163; // ebx
  __int64 v164; // rax
  unsigned __int64 v165; // rdx
  __int64 v166; // rax
  __int64 v167; // rcx
  EDIDCACHE *v168; // rcx
  char v169; // r10
  DXGADAPTER *v170; // rdx
  unsigned int v171; // r8d
  __int64 v172; // r9
  unsigned int NumDifferentPhysicalAdapters; // eax
  int v174; // eax
  __int64 v175; // rax
  int v176; // eax
  __int64 v177; // r8
  __int64 v178; // rax
  __int64 v179; // rax
  __int64 v180; // rax
  __int64 v181; // rax
  size_t v182; // r8
  char *v183; // rcx
  __int64 v184; // rcx
  __int64 v185; // r8
  size_t Size; // [rsp+38h] [rbp-4E0h]
  char v187; // [rsp+50h] [rbp-4C8h]
  unsigned __int8 v188; // [rsp+51h] [rbp-4C7h]
  char v189[6]; // [rsp+52h] [rbp-4C6h] BYREF
  __int64 v190; // [rsp+58h] [rbp-4C0h] BYREF
  unsigned __int64 v191; // [rsp+60h] [rbp-4B8h] BYREF
  __int128 v192; // [rsp+68h] [rbp-4B0h] BYREF
  unsigned __int64 v193; // [rsp+78h] [rbp-4A0h] BYREF
  unsigned int v194; // [rsp+80h] [rbp-498h]
  DXGADAPTER *v195; // [rsp+88h] [rbp-490h] BYREF
  char v196[8]; // [rsp+90h] [rbp-488h] BYREF
  __int64 v197; // [rsp+98h] [rbp-480h]
  char v198; // [rsp+A0h] [rbp-478h]
  DXGPROCESS *v199; // [rsp+A8h] [rbp-470h]
  __int64 v200; // [rsp+B0h] [rbp-468h]
  unsigned int v201; // [rsp+B8h] [rbp-460h]
  __int64 v202; // [rsp+C0h] [rbp-458h]
  __int64 v203; // [rsp+C8h] [rbp-450h]
  _BYTE v204[32]; // [rsp+D0h] [rbp-448h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+F0h] [rbp-428h] BYREF
  DXGADAPTER *v206; // [rsp+F8h] [rbp-420h]
  __int64 v207; // [rsp+100h] [rbp-418h] BYREF
  _BYTE v208[16]; // [rsp+108h] [rbp-410h] BYREF
  DXGADAPTER *v209; // [rsp+118h] [rbp-400h]
  char v210; // [rsp+120h] [rbp-3F8h]
  _BYTE v211[16]; // [rsp+128h] [rbp-3F0h] BYREF
  unsigned int *v212; // [rsp+138h] [rbp-3E0h]
  int v213; // [rsp+150h] [rbp-3C8h]
  struct DXGADAPTER *v214; // [rsp+158h] [rbp-3C0h] BYREF
  DXGADAPTER *v215; // [rsp+160h] [rbp-3B8h] BYREF
  _DXGKARG_ESCAPE v216; // [rsp+170h] [rbp-3A8h] BYREF
  struct _DXGKARG_ESCAPE v217; // [rsp+1B0h] [rbp-368h] BYREF
  unsigned int v218; // [rsp+1E0h] [rbp-338h]
  int *v219; // [rsp+1E8h] [rbp-330h]
  unsigned int v220; // [rsp+1F0h] [rbp-328h]
  __int64 v221; // [rsp+1F8h] [rbp-320h]
  __int64 v222; // [rsp+200h] [rbp-318h]
  __int64 v223; // [rsp+208h] [rbp-310h]
  __int64 v224; // [rsp+210h] [rbp-308h]
  unsigned __int64 v225[2]; // [rsp+218h] [rbp-300h] BYREF
  _BYTE v226[24]; // [rsp+228h] [rbp-2F0h] BYREF
  _DWORD v227[4]; // [rsp+240h] [rbp-2D8h] BYREF
  _QWORD v228[8]; // [rsp+250h] [rbp-2C8h] BYREF
  _DWORD v229[4]; // [rsp+290h] [rbp-288h] BYREF
  __int64 v230; // [rsp+2A0h] [rbp-278h] BYREF
  GUID ActivityId; // [rsp+2A8h] [rbp-270h] BYREF
  __int64 v232; // [rsp+2B8h] [rbp-260h]
  __int64 v233; // [rsp+2C0h] [rbp-258h]
  __int64 v234; // [rsp+2C8h] [rbp-250h]
  __int64 v235; // [rsp+2D0h] [rbp-248h]
  __int64 v236; // [rsp+2D8h] [rbp-240h]
  char Src; // [rsp+2E0h] [rbp-238h] BYREF

  v213 = 2016;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2016);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = (DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v5);
  v7 = ProcessDxgProcess;
  v199 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*((_BYTE *)ProcessDxgProcess + 275) & 2) != 0 )
    {
      ThreadProperty = (DXGPROCESS **)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      if ( ThreadProperty )
      {
        v7 = *ThreadProperty;
        v199 = *ThreadProperty;
      }
    }
  }
  v9 = 0LL;
  v10 = 0LL;
  v200 = 0LL;
  v202 = 0LL;
  p_Src = (int *)&Src;
  LOBYTE(v13) = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v188 = v13;
  if ( !v7 )
  {
    v14 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v14 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v14);
LABEL_10:
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v15, &EventProfilerExit, v16, 2016);
    return 3221225485LL;
  }
  v192 = 0LL;
  v18 = a1[6];
  if ( (unsigned int)v18 > 0x200 )
  {
    if ( v18 <= 0x7FFFFFFF )
    {
      p_Src = (int *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v18, 0x4B677844u);
      v13 = v188;
    }
    else
    {
      p_Src = 0LL;
    }
    *(_QWORD *)&v192 = p_Src;
  }
  if ( !p_Src )
  {
    v19 = WdLogNewEntry5_WdLowResource(v13);
    *(_QWORD *)(v19 + 24) = a1[6];
    *(_QWORD *)(v19 + 32) = -1073741801LL;
    WdLogEvent5_WdLowResource(v19);
    DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION((__int64)&v192);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v20, &EventProfilerExit, v21, 2016);
    return 3221225495LL;
  }
  if ( (_BYTE)v13 )
  {
    v22 = a1[6];
    v23 = (char *)*((_QWORD *)a1 + 2);
    if ( &v23[v22] < v23 || (unsigned __int64)&v23[v22] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(p_Src, v23, v22);
    v27 = *a1;
    if ( (_DWORD)v27 )
    {
      DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v215, v27, (struct _KTHREAD **)v7, &v214);
      if ( v214 )
      {
        if ( *((_BYTE *)v214 + 186) )
        {
          v28 = a1[2];
          if ( (v28 & 0xFFFFFFF3) != 0 || v28 == 4 )
          {
            v29 = v215;
            if ( v215 )
LABEL_34:
              DXGADAPTER::ReleaseReference(v29);
            DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION((__int64)&v192);
            if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              Template_q(v30, &EventProfilerExit, v31, 2016);
            return -1073741637LL;
          }
        }
      }
      v24 = v215;
      if ( v215 && _InterlockedExchangeAdd64((volatile signed __int64 *)v215 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v215 + 2), v215);
    }
  }
  else
  {
    memmove(p_Src, *((const void **)a1 + 2), a1[6]);
  }
  v32 = a1[2];
  if ( (int)v32 > 1029 )
  {
LABEL_130:
    v69 = 0LL;
    v203 = 0LL;
    v195 = 0LL;
    v206 = 0LL;
    if ( (_DWORD)v32 != 13 )
      goto LABEL_133;
    Global = DXGGLOBAL::GetGlobal((__int64)v24, v32, v25, v26);
    v71 = DXGGLOBAL::ReferenceBddFallbackAdapter(Global, &v193);
    v206 = v71;
    if ( v71 )
    {
      *((_QWORD *)&v192 + 1) = v71;
LABEL_133:
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
        (DXGHANDLETABLELOCKSHARED *)&v216.hKmdProcessHandle,
        v7,
        v25,
        v26);
      v76 = *a1;
      v77 = v199;
      if ( *a1 )
      {
        if ( (*((_BYTE *)v199 + 275) & 4) != 0 )
        {
          DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*((_QWORD *)v199 + 50) + 168LL));
          v78 = *((_QWORD *)v199 + 50);
          v79 = (v76 >> 6) & 0xFFFFFF;
          v80 = v76 >> 30;
          if ( v79 < *(_DWORD *)(v78 + 208)
            && (v81 = *(_QWORD *)(v78 + 192), v82 = *(_DWORD *)(v81 + 16LL * v79 + 8), v80 == ((v82 >> 4) & 3))
            && (v82 & 0x1000) == 0
            && (v82 & 0xF) != 0
            && (*(_BYTE *)(v81 + 16LL * v79 + 8) & 0xF) == 1 )
          {
            v69 = *(_QWORD *)(v81 + 16LL * v79);
          }
          else
          {
            v69 = 0LL;
          }
          ExReleasePushLockSharedEx(v78 + 168, 0LL);
          KeLeaveCriticalRegion();
          v77 = v199;
        }
        else
        {
          v73 = (v76 >> 6) & 0xFFFFFF;
          v83 = v76 >> 30;
          if ( (unsigned int)v73 < *((_DWORD *)v199 + 52)
            && (v74 = *((_QWORD *)v199 + 24),
                v72 = *(unsigned int *)(v74 + 16LL * (unsigned int)v73 + 8),
                v83 == ((*(_DWORD *)(v74 + 16LL * (unsigned int)v73 + 8) >> 4) & 3))
            && (v72 & 0x1000) == 0
            && (v72 & 0xF) != 0
            && (*(_BYTE *)(v74 + 16LL * (unsigned int)v73 + 8) & 0xF) == 1 )
          {
            v69 = *(_QWORD *)(v74 + 16LL * (unsigned int)v73);
          }
          else
          {
            v69 = 0LL;
          }
        }
        v203 = v69;
      }
      if ( !v69 )
      {
        v84 = (_QWORD *)WdLogNewEntry5_WdWarning(v73, v72, v74, v75);
        v84[3] = *a1;
        v84[4] = -1073741811LL;
LABEL_153:
        WdLogEvent5_WdWarning(v84);
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v216.hKmdProcessHandle);
LABEL_154:
        DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION((__int64)&v192);
        goto LABEL_10;
      }
      v85 = a1[1];
      if ( v85 )
      {
        v86 = (v85 >> 6) & 0xFFFFFF;
        v87 = v85 >> 30;
        if ( (unsigned int)v86 < *((_DWORD *)v77 + 52)
          && (v75 = *((_QWORD *)v77 + 24),
              v74 = *(unsigned int *)(v75 + 16LL * (unsigned int)v86 + 8),
              (_DWORD)v87 == ((*(_DWORD *)(v75 + 16LL * (unsigned int)v86 + 8) >> 4) & 3))
          && (v74 & 0x1000) == 0
          && (v74 & 0xF) != 0
          && (*(_BYTE *)(v75 + 16LL * (unsigned int)v86 + 8) & 0xF) == 3 )
        {
          v10 = *(_QWORD *)(v75 + 16LL * (unsigned int)v86);
        }
        else
        {
          v10 = 0LL;
        }
        v200 = v10;
        if ( !v10 || v69 != *(_QWORD *)(*(_QWORD *)(v10 + 16) + 16LL) && v69 != *(_QWORD *)(v10 + 1800) )
        {
          v84 = (_QWORD *)WdLogNewEntry5_WdWarning(v86, v87, v74, v75);
          v84[3] = v69;
          v84[4] = a1[1];
          goto LABEL_153;
        }
      }
      v88 = a1[7];
      if ( v88 )
      {
        v89 = (v88 >> 6) & 0xFFFFFF;
        v90 = v88 >> 30;
        if ( (unsigned int)v89 < *((_DWORD *)v77 + 52)
          && (v75 = *((_QWORD *)v77 + 24),
              v74 = *(unsigned int *)(v75 + 16LL * (unsigned int)v89 + 8),
              (_DWORD)v90 == ((*(_DWORD *)(v75 + 16LL * (unsigned int)v89 + 8) >> 4) & 3))
          && (v74 & 0x1000) == 0
          && (v74 & 0xF) != 0
          && (v89 *= 2LL, (*(_BYTE *)(v75 + 8 * v89 + 8) & 0xF) == 7) )
        {
          v91 = *(_QWORD *)(v75 + 8 * v89);
        }
        else
        {
          v91 = 0LL;
        }
        v202 = v91;
        if ( !v91 || !v10 || v10 != *(_QWORD *)(v91 + 16) )
        {
          v84 = (_QWORD *)WdLogNewEntry5_WdWarning(v89, v90, v74, v75);
          v84[3] = v69;
          v84[4] = v10;
          v84[5] = a1[7];
          goto LABEL_153;
        }
      }
      else
      {
        v91 = 0LL;
      }
      if ( v10 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v10 + 64));
        v69 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 16LL);
        v203 = v69;
      }
      if ( v91 )
        _InterlockedIncrement64((volatile signed __int64 *)(v91 + 32));
      _InterlockedIncrement64((volatile signed __int64 *)(v69 + 24));
      v225[1] = -1LL;
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v216.hKmdProcessHandle);
      if ( *(_DWORD *)(v69 + 1504) >= 0x5023u )
      {
        v96 = a1[3];
        if ( (v96 & 0x10) != 0 || v96 >= 0x40 )
        {
          v98 = WdLogNewEntry5_WdWarning(v93, v92, v94, v95);
          *(_QWORD *)(v98 + 24) = v69;
          WdLogEvent5_WdWarning(v98);
          goto LABEL_154;
        }
        if ( (v96 & 0x20) != 0 )
        {
          v97 = WdLogNewEntry5_WdWarning(v93, v92, v94, v95);
          *(_QWORD *)(v97 + 24) = v69;
          *(_QWORD *)(v97 + 32) = 1277LL;
          WdLogEvent5_WdWarning(v97);
          goto LABEL_154;
        }
      }
      v222 = v69;
      v223 = -1LL;
      v224 = v10;
      v190 = v91;
      if ( (int)DxgkpGetPairingAdapters((struct DXGADAPTER *)v69, 0, &v195, &v191, 0LL, 0LL) >= 0
        && _InterlockedExchangeAdd64((volatile signed __int64 *)v195 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      {
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v195 + 2), v195);
      }
      if ( a1[2] == 8 )
      {
        v99 = a1[6];
        if ( v99 >= 0xC && v99 >= p_Src[1] && *p_Src == 1484026436 )
        {
          v100 = p_Src[2];
          if ( v100 == 14 || v100 == 21 )
          {
            LODWORD(v35) = DxgkDrtTestEscape((struct DXGADAPTER *)v69, (struct _D3DKMT_DRT_ESCAPE_HEAD *)p_Src, 0LL);
            if ( (int)v35 >= 0 )
            {
              if ( v188 )
              {
                v101 = a1[6];
                v102 = (char *)*((_QWORD *)a1 + 2);
                if ( (unsigned __int64)&v102[v101] > MmUserProbeAddress || &v102[v101] <= v102 )
                  *(_BYTE *)MmUserProbeAddress = 0;
                memmove(v102, p_Src, v101);
              }
              else
              {
                memmove(*((void **)a1 + 2), p_Src, a1[6]);
              }
            }
            ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v190);
            if ( v10 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v10 + 16), (struct DXGDEVICE *)v10);
LABEL_429:
            DXGADAPTER::ReleaseReference((DXGADAPTER *)v69);
            goto LABEL_582;
          }
        }
      }
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v207, (struct DXGADAPTER *const)v69, 0LL);
      COREACCESS::COREACCESS((COREACCESS *)v204, v206);
      v194 = 0;
      v197 = v69;
      v105 = 0;
      v187 = 0;
      v198 = 0;
      v106 = *((_QWORD *)v199 + 9);
      if ( v106 )
        v107 = (*(unsigned int (__fastcall **)(_QWORD))(v106 + 224))(0LL) != 0;
      else
        v107 = 0LL;
      v201 = (unsigned __int8)v107;
      v108 = a1[2];
      if ( v108 == 13 )
      {
        COREACCESS::AcquireShared((COREACCESS *)v204);
LABEL_254:
        v113 = v194;
        goto LABEL_255;
      }
      v110 = a1[3];
      if ( (v110 & 1) != 0 )
      {
        v111 = 0;
        if ( !v108 || v108 == 3 && a1[6] >= 0xC && *p_Src == 3 )
          v111 = 1;
        v112 = v111;
        if ( *(_QWORD *)(v69 + 2288) )
          v112 = 1;
        v194 = v112;
        LODWORD(v35) = COREADAPTERACCESS::AcquireExclusive(&v207, (unsigned int)((_BYTE)v112 != 0) + 2);
        if ( (int)v35 < 0 )
        {
          v120 = 0;
          goto LABEL_575;
        }
        if ( !(_BYTE)v194 )
        {
          v109 = *(_QWORD *)(v69 + 2288);
          if ( v109 )
            ADAPTER_RENDER::FlushScheduler(v109, 2, 0xFFFFFFFF, 0);
        }
        v105 = 0;
        v113 = 1LL;
LABEL_255:
        if ( a1[1] )
        {
          if ( *(_DWORD *)(v10 + 408) != 1 )
          {
            LODWORD(v35) = -1073741130;
            v120 = v198;
            goto LABEL_575;
          }
          v105 = v198;
          v187 = v198;
        }
        v121 = 0x1C0000000uLL;
        switch ( a1[2] )
        {
          case 0u:
            if ( *(_BYTE *)(v69 + 186) )
            {
              if ( v202 )
                v194 = *(_DWORD *)(v202 + 28);
              else
                v194 = 0;
              if ( v10 )
                v201 = *(_DWORD *)(v10 + 336);
              else
                v201 = 0;
              v122 = *(_DWORD *)(v69 + 3888);
              HostProcess = DXGPROCESS::GetHostProcess(v199);
              LODWORD(Size) = a1[6];
              v124 = DXGADAPTER::VmBusSendEscape(
                       (DXGADAPTER *)v69,
                       HostProcess,
                       v122,
                       v201,
                       v194,
                       D3DKMT_ESCAPE_DRIVERPRIVATE,
                       (struct _D3DDDI_ESCAPEFLAGS)a1[3],
                       Size,
                       (unsigned __int8 *)p_Src);
              v35 = (DXGADAPTER *)v124;
              if ( v124 < 0 )
              {
                v127 = WdLogNewEntry5_WdError(v126, v125);
                *(_QWORD *)(v127 + 24) = v35;
                WdLogEvent5_WdError(v127);
              }
            }
            else
            {
              if ( *(__int64 (__fastcall **)(void *const, const struct _DXGKARG_RELEASESWIZZLINGRANGE *))(v69 + 448) == ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange )
              {
                v134 = WdLogNewEntry5_WdWarning(
                         ADAPTER_RENDER::DefaultDdiReleaseSwizzlingRange,
                         v103,
                         0x1C0000000uLL,
                         v113);
                *(_QWORD *)(v134 + 24) = v69;
                LODWORD(v35) = -1073741637;
                *(_QWORD *)(v134 + 32) = -1073741637LL;
                WdLogEvent5_WdWarning(v134);
                goto LABEL_574;
              }
              v128 = a1[6];
              if ( !(_DWORD)v128 || !*((_QWORD *)a1 + 2) )
              {
                v133 = (_QWORD *)WdLogNewEntry5_WdWarning(v128, v103, 0x1C0000000uLL, v113);
                v133[3] = a1[6];
                v133[4] = *((_QWORD *)a1 + 2);
                v133[5] = -1073741811LL;
                WdLogEvent5_WdWarning(v133);
                goto LABEL_290;
              }
              if ( v10 )
                v129 = *(void **)(v10 + 416);
              else
                v129 = 0LL;
              v216.hDevice = v129;
              if ( v202 )
                v130 = *(void **)(v202 + 184);
              else
                v130 = 0LL;
              v216.hContext = v130;
              v216.Flags.Value = a1[3];
              if ( (*(_DWORD *)(v69 + 300) & 8) == 0
                && *(_DWORD *)(v69 + 276) == 4098
                && !(unsigned int)IsAMDDriverEscapeAllowed(p_Src, v128) )
              {
LABEL_573:
                LODWORD(v35) = -1073741637;
                goto LABEL_574;
              }
              v216.Flags.Value &= ~0x10u;
              if ( (*((_BYTE *)v199 + 275) & 4) != 0
                || ((v131 = DXGGLOBAL::GetGlobal(v128, v103, v121, v113), !*((_BYTE *)v131 + 1115))
                 || !DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext(
                       (struct DXGGLOBAL *)((char *)v131 + 1108),
                       (struct DXGADAPTER *)v69)
                  ? (v132 = 0)
                  : (v132 = 1),
                    v132) )
              {
                LODWORD(v9) = 32;
              }
              v216.Flags.Value = (unsigned int)v9 | v216.Flags.Value & 0xFFFFFFDF;
              v216.PrivateDriverDataSize = a1[6];
              v216.pPrivateDriverData = p_Src;
              LODWORD(v35) = DXGADAPTER::DdiEscape((DXGADAPTER *)v69, &v216);
            }
            goto LABEL_565;
          case 1u:
            if ( !v195 )
            {
              v138 = WdLogNewEntry5_WdError(v109, v103);
              *(_QWORD *)(v138 + 24) = v69;
              LODWORD(v35) = -1073741637;
              *(_QWORD *)(v138 + 32) = -1073741637LL;
              WdLogEvent5_WdError(v138);
              if ( v187 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v196);
              COREACCESS::~COREACCESS((COREACCESS *)v204);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v207);
              ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v190);
              if ( v10 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v10 + 16), (struct DXGDEVICE *)v10);
              goto LABEL_429;
            }
            if ( v10 )
              v9 = *(struct VIDMM_DEVICE **)(v10 + 592);
            if ( a1[6] < 0x440 )
            {
              LODWORD(v35) = -1073741811;
              goto LABEL_574;
            }
            LODWORD(v35) = VIDMM_EXPORT::VidMmEscape(
                             *(VIDMM_EXPORT **)(*((_QWORD *)v195 + 286) + 432LL),
                             *(struct VIDMM_GLOBAL **)(*((_QWORD *)v195 + 286) + 440LL),
                             v9,
                             (struct _D3DKMT_VIDMM_ESCAPE *)p_Src,
                             v113);
            goto LABEL_565;
          case 2u:
            if ( *((_QWORD *)a1 + 2) )
            {
              v143 = a1[6];
              if ( (unsigned int)v143 < 4 )
                goto LABEL_290;
              switch ( *p_Src )
              {
                case 0:
                  goto LABEL_334;
                case 1:
                  v141 = 2LL;
                  goto LABEL_335;
                case 2:
                  v141 = 1LL;
                  goto LABEL_335;
                case 3:
                  v141 = 3LL;
                  goto LABEL_335;
                case 4:
                case 5:
                  if ( !v195 )
                  {
                    *(_QWORD *)(WdLogNewEntry5_WdTrace(v109, v143, 0x1C0000000uLL, v113) + 24) = 0LL;
                    goto LABEL_573;
                  }
                  LODWORD(v35) = TdrDbgCtrl(4LL);
                  if ( (int)v35 < 0 )
                    goto LABEL_565;
                  v144 = *(_QWORD *)(*((_QWORD *)v195 + 286) + 416LL);
                  v229[0] = 2;
                  v229[1] = *p_Src;
                  DebugInfo = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v195 + 286) + 408LL)
                                                                                       + 8LL)
                                                                           + 64LL))(
                                v144,
                                v229);
                  goto LABEL_336;
                case 6:
                  v141 = 5LL;
                  goto LABEL_335;
                case 7:
                  v141 = 6LL;
                  goto LABEL_335;
                case 8:
                  if ( (unsigned int)v143 < 8 )
                  {
                    LODWORD(v35) = -1073741811;
                    goto LABEL_574;
                  }
                  v145 = v195;
                  if ( !v195 )
                  {
                    *(_QWORD *)(WdLogNewEntry5_WdTrace(v109, v143, 0x1C0000000uLL, v113) + 24) = v69;
                    goto LABEL_573;
                  }
                  LODWORD(v35) = TdrDbgCtrl(4LL);
                  if ( (int)v35 < 0 )
                    goto LABEL_565;
                  v146 = *(_QWORD *)(*((_QWORD *)v145 + 286) + 416LL);
                  v227[0] = 2;
                  v227[1] = *p_Src;
                  v227[2] = p_Src[1];
                  DebugInfo = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v145 + 286) + 408LL)
                                                                                       + 8LL)
                                                                           + 64LL))(
                                v146,
                                v227);
                  break;
                default:
                  goto LABEL_290;
              }
            }
            else
            {
LABEL_334:
              v141 = 0LL;
LABEL_335:
              DebugInfo = TdrDbgCtrl(v141);
            }
            goto LABEL_336;
          case 3u:
            if ( !v195 )
            {
              v139 = WdLogNewEntry5_WdError(v109, v103);
              *(_QWORD *)(v139 + 24) = v69;
              LODWORD(v35) = -1073741637;
              *(_QWORD *)(v139 + 32) = -1073741637LL;
              WdLogEvent5_WdError(v139);
              if ( v187 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v196);
              COREACCESS::~COREACCESS((COREACCESS *)v204);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v207);
              ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v190);
              if ( v10 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v10 + 16), (struct DXGDEVICE *)v10);
              goto LABEL_429;
            }
            if ( a1[6] < 0xC )
            {
              LODWORD(v35) = -1073741811;
              goto LABEL_574;
            }
            if ( *p_Src == 2 )
            {
              LODWORD(v35) = -1073741811;
              goto LABEL_574;
            }
            if ( *p_Src != 3 )
            {
              LODWORD(v35) = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v195 + 286)
                                                                                              + 408LL)
                                                                                  + 8LL)
                                                                      + 64LL))(
                               *(_QWORD *)(*((_QWORD *)v195 + 286) + 416LL),
                               p_Src);
              goto LABEL_565;
            }
            if ( !(_DWORD)v113 )
              goto LABEL_290;
            v140 = 5000000;
            if ( (unsigned int)p_Src[1] < 0x4C4B40 )
              v140 = p_Src[1];
            Interval.QuadPart = -(__int64)v140;
            KeDelayExecutionThread(0, 0, &Interval);
            LODWORD(v35) = 0;
            goto LABEL_566;
          case 4u:
            if ( a1[6] < 0xC || !v10 )
              goto LABEL_290;
            DebugInfo = DXGDEVICE::Escape((DXGDEVICE *)v10, (struct _D3DKMT_DEVICE_ESCAPE *)p_Src);
            goto LABEL_336;
          case 5u:
            if ( !*(_QWORD *)(v69 + 2280) )
            {
              v135 = WdLogNewEntry5_WdError(v109, v103);
              *(_QWORD *)(v135 + 24) = v69;
              LODWORD(v35) = -1073741637;
              *(_QWORD *)(v135 + 32) = -1073741637LL;
              WdLogEvent5_WdError(v135);
              if ( v187 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v196);
              COREACCESS::~COREACCESS((COREACCESS *)v204);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v207);
              ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v190);
              if ( v10 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v10 + 16), (struct DXGDEVICE *)v10);
              goto LABEL_429;
            }
            v136 = a1[6];
            if ( (unsigned int)v136 < 0x80
              || (v137 = *((_QWORD *)p_Src + 1), v137 > 0x19000)
              || v136 != v137 + 127 && v137 )
            {
LABEL_290:
              LODWORD(v35) = -1073741811;
              goto LABEL_574;
            }
            LODWORD(v35) = DmmEscape(v69, p_Src);
            goto LABEL_565;
          case 6u:
            v147 = a1[6];
            if ( v147 < 8 )
            {
              LODWORD(v35) = -1073741811;
              goto LABEL_574;
            }
            LODWORD(v35) = DxgDbgTakeSnapshot(p_Src + 1, v147 - 4, (unsigned int *)p_Src);
            goto LABEL_565;
          case 7u:
            if ( (a1[3] & 1) == 0 )
            {
              LODWORD(v35) = -1073741811;
              goto LABEL_574;
            }
            if ( a1[6] != 4 )
            {
              LODWORD(v35) = -1073741811;
              goto LABEL_574;
            }
            v148 = *(_DWORD *)(v69 + 300);
            if ( (v148 & 4) == 0 && (v148 & 0x20) == 0 )
              *(_BYTE *)(v69 + 180) = *(_BYTE *)p_Src;
            LODWORD(v35) = 0;
            goto LABEL_566;
          case 8u:
            v149 = a1[6];
            if ( v149 < 0xC || v149 < p_Src[1] || *p_Src != 1484026436 )
              goto LABEL_290;
            DebugInfo = DxgkDrtTestEscape(
                          (struct DXGADAPTER *)v69,
                          (struct _D3DKMT_DRT_ESCAPE_HEAD *)p_Src,
                          (struct COREADAPTERACCESS *)&v207);
            goto LABEL_336;
          case 9u:
            LODWORD(v35) = GetDiagnosticsBuffer((struct _D3DKMT_DXGK_DIAGNOSTICS *)p_Src, a1[6], 1);
            goto LABEL_565;
          case 0xAu:
            if ( !*(_QWORD *)(v69 + 2280) )
            {
              v150 = WdLogNewEntry5_WdError(v109, v103);
              *(_QWORD *)(v150 + 24) = v69;
              LODWORD(v35) = -1073741637;
              *(_QWORD *)(v150 + 32) = -1073741637LL;
              WdLogEvent5_WdError(v150);
              if ( v187 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v196);
              COREACCESS::~COREACCESS((COREACCESS *)v204);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v207);
              ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v190);
              if ( v10 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v10 + 16), (struct DXGDEVICE *)v10);
              goto LABEL_429;
            }
            v151 = a1[6];
            if ( v151 < 0x18 )
            {
              LODWORD(v35) = -1073741811;
              goto LABEL_574;
            }
            if ( v151 != *p_Src )
            {
              LODWORD(v35) = -1073741811;
              goto LABEL_574;
            }
            if ( v201 )
            {
              DebugInfo = OutputDuplGetDebugInfo(0LL, (struct _D3DKMT_OUTPUTDUPL_SNAPSHOT *)p_Src);
              goto LABEL_336;
            }
            LODWORD(v35) = OutputDuplGetDebugInfo((struct DXGADAPTER *)v69, (struct _D3DKMT_OUTPUTDUPL_SNAPSHOT *)p_Src);
            goto LABEL_565;
          case 0xBu:
            if ( !*(_QWORD *)(v69 + 2280) )
            {
              v152 = WdLogNewEntry5_WdError(v109, v103);
              *(_QWORD *)(v152 + 24) = v69;
              LODWORD(v35) = -1073741637;
              *(_QWORD *)(v152 + 32) = -1073741637LL;
              WdLogEvent5_WdError(v152);
              if ( v187 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v196);
              COREACCESS::~COREACCESS((COREACCESS *)v204);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v207);
              ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v190);
              if ( v10 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v10 + 16), (struct DXGDEVICE *)v10);
              goto LABEL_429;
            }
            v153 = a1[6];
            if ( (unsigned int)v153 < 8 )
            {
              LODWORD(v35) = -1073741811;
              goto LABEL_574;
            }
            if ( v153 != (unsigned int)p_Src[1] + 8LL )
            {
              LODWORD(v35) = -1073741811;
              goto LABEL_574;
            }
            if ( v201 )
            {
              DebugInfo = OutputDuplGetDiagnosticBuffer(0LL, (struct _D3DKMT_OUTPUTDUPL_DIAGNOSTICS *)p_Src);
              goto LABEL_336;
            }
            LODWORD(v35) = OutputDuplGetDiagnosticBuffer(
                             (struct DXGADAPTER *)v69,
                             (struct _D3DKMT_OUTPUTDUPL_DIAGNOSTICS *)p_Src);
            goto LABEL_565;
          case 0xCu:
            if ( (*(_DWORD *)(v69 + 300) & 0x20) != 0 && !DXGADAPTER::IsBddFallbackDriver((DXGADAPTER *)v69) )
            {
              v217.hKmdProcessHandle = 0LL;
              v221 = 0LL;
              v218 = a1[3];
              v220 = a1[6];
              v219 = p_Src;
              DebugInfo = DXGADAPTER::DdiEscape(v159, (const struct _DXGKARG_ESCAPE *)&v217.hKmdProcessHandle);
              goto LABEL_336;
            }
            LODWORD(v35) = -1071775742;
            goto LABEL_574;
          case 0xDu:
            v35 = v206;
            if ( !DXGADAPTER::IsBddFallbackDriver(v206) )
            {
              v158 = WdLogNewEntry5_WdAssertion(v155, v154, v156, v157);
              *(_QWORD *)(v158 + 24) = 1949LL;
              WdLogEvent5_WdAssertion(v158);
            }
            v217.hDevice = 0LL;
            v217.hContext = 0LL;
            v217.Flags.Value = a1[3];
            v217.PrivateDriverDataSize = a1[6];
            v217.pPrivateDriverData = p_Src;
            LODWORD(v35) = DXGADAPTER::DdiEscape(v35, &v217);
            goto LABEL_565;
          case 0xEu:
            if ( a1[6] != 8 )
            {
              LODWORD(v35) = -1073741811;
              goto LABEL_574;
            }
            if ( !*p_Src )
            {
              v163 = p_Src[1];
              *((_BYTE *)DXGGLOBAL::GetGlobal(v109, v103, 0x1C0000000LL, v113) + 800) = v163 != 0;
              LODWORD(v35) = 0;
              goto LABEL_566;
            }
            if ( *p_Src != 15 )
            {
              v160 = WdLogNewEntry5_WdAssertion(v109, v103, 0x1C0000000uLL, v113);
              *(_QWORD *)(v160 + 24) = *p_Src;
              WdLogEvent5_WdAssertion(v160);
              LODWORD(v35) = -1073741811;
              goto LABEL_565;
            }
            v161 = *(ADAPTER_DISPLAY **)(v69 + 2280);
            if ( v161 )
            {
              DebugInfo = ADAPTER_DISPLAY::ActivateStoringInvalidModesForTestPurposes(v161, p_Src[1]);
              goto LABEL_336;
            }
            v162 = WdLogNewEntry5_WdError(0LL, v103);
            *(_QWORD *)(v162 + 24) = v69;
            LODWORD(v35) = -1073741637;
            *(_QWORD *)(v162 + 32) = -1073741637LL;
            WdLogEvent5_WdError(v162);
            if ( v187 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v196);
            COREACCESS::~COREACCESS((COREACCESS *)v204);
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v207);
            ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v190);
            if ( v10 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v10 + 16), (struct DXGDEVICE *)v10);
            goto LABEL_429;
          case 0xFu:
            if ( !*(_QWORD *)(v69 + 2280) )
            {
              v164 = WdLogNewEntry5_WdError(v109, v103);
              *(_QWORD *)(v164 + 24) = v69;
              LODWORD(v35) = -1073741637;
              *(_QWORD *)(v164 + 32) = -1073741637LL;
              WdLogEvent5_WdError(v164);
              if ( v187 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v196);
              COREACCESS::~COREACCESS((COREACCESS *)v204);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v207);
              ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v190);
              if ( v10 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v10 + 16), (struct DXGDEVICE *)v10);
              goto LABEL_429;
            }
            v165 = a1[6];
            if ( (unsigned int)v165 < 8 )
            {
              LODWORD(v35) = -1073741811;
              goto LABEL_574;
            }
            if ( v165 < 44 * (unsigned __int64)(unsigned int)p_Src[1] + 8 )
            {
              LODWORD(v35) = -1073741811;
              goto LABEL_574;
            }
            LODWORD(v35) = ADAPTER_DISPLAY::GetInvalidModesForTestPurposes(
                             *(ADAPTER_DISPLAY **)(v69 + 2280),
                             (struct _D3DKMT_DISPLAYMODELIST *)p_Src);
            goto LABEL_565;
          case 0x10u:
            if ( a1[6] < 4 )
            {
              LODWORD(v35) = -1073741811;
              goto LABEL_574;
            }
            *p_Src = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v69 + 192) + 64LL) + 2584LL);
            LODWORD(v35) = 0;
            goto LABEL_566;
          case 0x11u:
            if ( (a1[3] & 1) == 0 )
            {
              LODWORD(v35) = -1073741811;
              goto LABEL_574;
            }
            if ( a1[6] < 0x608 )
            {
              LODWORD(v35) = -1073741811;
              goto LABEL_574;
            }
            LODWORD(v35) = DpiBrightnessEscape(
                             *(struct _DEVICE_OBJECT **)(v69 + 192),
                             (struct _D3DKMT_BRIGHTNESS_INFO *)p_Src);
            goto LABEL_565;
          case 0x12u:
            v166 = a1[6];
            if ( (unsigned int)v166 < 4 )
              goto LABEL_290;
            v167 = (unsigned int)*p_Src + 4LL;
            if ( v166 != v167 )
              goto LABEL_290;
            v168 = (EDIDCACHE *)*((_QWORD *)DXGGLOBAL::GetGlobal(v167, v103, 0x1C0000000LL, v113) + 85);
            if ( !v168 )
            {
              LODWORD(v35) = -1073741801;
              goto LABEL_574;
            }
            DebugInfo = EDIDCACHE::GetEdids(v168, (struct _D3DKMT_DXGK_DIAGNOSTICS *)p_Src);
LABEL_336:
            LODWORD(v35) = DebugInfo;
            goto LABEL_565;
          case 0x13u:
            if ( a1[6] < 0x10 )
            {
              LODWORD(v35) = -1073741811;
              goto LABEL_574;
            }
            p_Src[1] &= 7u;
            DxgkGetAdapterBrightnessInfo(*(_QWORD *)(v69 + 192), p_Src);
            LODWORD(v35) = 0;
            goto LABEL_566;
          case 0x15u:
            if ( a1[6] < 8 )
            {
              if ( v105 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v196);
              COREACCESS::~COREACCESS((COREACCESS *)v204);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v207);
              ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v190);
              if ( v10 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v10 + 16), (struct DXGDEVICE *)v10);
              goto LABEL_560;
            }
            if ( !v195 )
            {
              if ( v105 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v196);
              COREACCESS::~COREACCESS((COREACCESS *)v204);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v207);
              ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v190);
              if ( v10 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v10 + 16), (struct DXGDEVICE *)v10);
              goto LABEL_560;
            }
            if ( v10 )
            {
              v169 = 0;
              if ( (qword_1C006E790 & 0x188ED7) != 0
                && (qword_1C006E798 & 0xFFFFFFFFFFE77128uLL) == 0
                && (qword_1C006E790 & 0x4000) != 0
                && (unsigned int)DXGADAPTER::GetNumDifferentPhysicalAdapters(v195) )
              {
                v172 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v170 + 286) + 16LL) + 2192LL);
                while ( !*(_QWORD *)(v172 + 48LL * v171 + 32) )
                {
                  NumDifferentPhysicalAdapters = DXGADAPTER::GetNumDifferentPhysicalAdapters(v170);
                  if ( v171 >= NumDifferentPhysicalAdapters )
                    goto LABEL_481;
                }
                v169 = 1;
              }
LABEL_481:
              *(_BYTE *)(v10 + 1816) = v169;
              *(_BYTE *)p_Src = v169;
              p_Src[1] = 0;
              LODWORD(v35) = 0;
              goto LABEL_566;
            }
            if ( v105 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v196);
            COREACCESS::~COREACCESS((COREACCESS *)v204);
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v207);
            ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v190);
            DXGADAPTER::ReleaseReference((DXGADAPTER *)v69);
            goto LABEL_154;
          case 0x17u:
            if ( a1[6] != 32 )
            {
              LODWORD(v35) = -1073741811;
              goto LABEL_574;
            }
            DxgkGetAdapterMiracastInfo(*(_QWORD *)(v69 + 192), p_Src);
            LODWORD(v35) = 0;
            goto LABEL_566;
          case 0x1Cu:
            if ( a1[6] < 0x20 )
            {
              if ( v105 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v196);
              COREACCESS::~COREACCESS((COREACCESS *)v204);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v207);
              ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v190);
              if ( v10 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v10 + 16), (struct DXGDEVICE *)v10);
              goto LABEL_560;
            }
            v174 = p_Src[3];
            if ( v174 > 1 )
            {
              if ( v105 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v196);
              COREACCESS::~COREACCESS((COREACCESS *)v204);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v207);
              ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v190);
              if ( v10 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v10 + 16), (struct DXGDEVICE *)v10);
              goto LABEL_560;
            }
            if ( *(_QWORD *)p_Src )
            {
              if ( v105 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v196);
              COREACCESS::~COREACCESS((COREACCESS *)v204);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v207);
              ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v190);
              if ( v10 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v10 + 16), (struct DXGDEVICE *)v10);
              goto LABEL_560;
            }
            if ( !v174 )
            {
              *((_QWORD *)p_Src + 2) = 0LL;
              *((_QWORD *)p_Src + 3) = 0LL;
            }
            if ( (unsigned int)(p_Src[2] - 1000) > 1 )
            {
              if ( v105 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v196);
              COREACCESS::~COREACCESS((COREACCESS *)v204);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v207);
              ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v190);
              if ( v10 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v10 + 16), (struct DXGDEVICE *)v10);
              goto LABEL_560;
            }
            if ( !v195 )
            {
              v175 = WdLogNewEntry5_WdError(v109, v103);
              *(_QWORD *)(v175 + 24) = 2227LL;
              goto LABEL_508;
            }
            LODWORD(v35) = (*(__int64 (__fastcall **)(_QWORD, DXGPROCESS *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v195 + 286) + 432LL)
                                                                                               + 8LL)
                                                                                   + 1080LL))(
                             *(_QWORD *)(*((_QWORD *)v195 + 286) + 440LL),
                             v199,
                             (unsigned int)p_Src[3]);
            goto LABEL_565;
          case 0x1Du:
            if ( a1[6] < 0x20 )
            {
              if ( v105 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v196);
              COREACCESS::~COREACCESS((COREACCESS *)v204);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v207);
              ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v190);
              if ( v10 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v10 + 16), (struct DXGDEVICE *)v10);
              goto LABEL_560;
            }
            v176 = p_Src[1];
            if ( v176 > 1 )
            {
              if ( v105 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v196);
              COREACCESS::~COREACCESS((COREACCESS *)v204);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v207);
              ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v190);
              if ( v10 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v10 + 16), (struct DXGDEVICE *)v10);
              goto LABEL_560;
            }
            if ( !v176 )
            {
              *((_QWORD *)p_Src + 1) = 0LL;
              *((_QWORD *)p_Src + 2) = 0LL;
              *((_QWORD *)p_Src + 3) = 0LL;
            }
            v177 = (unsigned int)*p_Src;
            if ( (unsigned int)(v177 - 1000) > 1 )
            {
              if ( v105 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v196);
              COREACCESS::~COREACCESS((COREACCESS *)v204);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v207);
              ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v190);
              if ( v10 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v10 + 16), (struct DXGDEVICE *)v10);
              goto LABEL_560;
            }
            if ( !v195 )
            {
              v175 = WdLogNewEntry5_WdError(v109, v103);
              *(_QWORD *)(v175 + 24) = 2277LL;
LABEL_508:
              WdLogEvent5_WdError(v175);
              if ( v105 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v196);
              COREACCESS::~COREACCESS((COREACCESS *)v204);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v207);
              ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v190);
              if ( v10 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v10 + 16), (struct DXGDEVICE *)v10);
              v29 = (DXGADAPTER *)v69;
              goto LABEL_34;
            }
            LODWORD(v35) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v195 + 286) + 432LL)
                                                                                                 + 8LL)
                                                                                     + 1088LL))(
                             *(_QWORD *)(*((_QWORD *)v195 + 286) + 440LL),
                             (unsigned int)p_Src[1],
                             v177,
                             p_Src + 2);
LABEL_565:
            if ( (int)v35 >= 0 )
              goto LABEL_566;
            goto LABEL_574;
          case 0x1Fu:
            if ( a1[6] == 4 )
            {
              if ( !*(_QWORD *)(v69 + 2288) )
              {
                v180 = *(_QWORD *)(v69 + 2280);
                if ( *(_QWORD *)(v180 + 264) )
                {
                  *(_DWORD *)(v180 + 272) = *p_Src;
                  LODWORD(v35) = 0;
LABEL_566:
                  if ( v188 )
                  {
                    v182 = a1[6];
                    v183 = (char *)*((_QWORD *)a1 + 2);
                    if ( (unsigned __int64)&v183[v182] > MmUserProbeAddress || &v183[v182] <= v183 )
                      *(_BYTE *)MmUserProbeAddress = 0;
                    memmove(v183, p_Src, v182);
                    v120 = v187;
                    goto LABEL_575;
                  }
                  memmove(*((void **)a1 + 2), p_Src, a1[6]);
                }
                else
                {
                  LODWORD(v35) = -1073741811;
                }
LABEL_574:
                v120 = v187;
                goto LABEL_575;
              }
              v179 = WdLogNewEntry5_WdWarning(v109, v103, 0x1C0000000uLL, v113);
              *(_QWORD *)(v179 + 24) = v69;
              WdLogEvent5_WdWarning(v179);
              if ( v105 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v196);
              COREACCESS::~COREACCESS((COREACCESS *)v204);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v207);
              ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v190);
              if ( v10 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v10 + 16), (struct DXGDEVICE *)v10);
            }
            else
            {
              v178 = WdLogNewEntry5_WdError(v109, v103);
              *(_QWORD *)(v178 + 24) = a1[6];
              WdLogEvent5_WdError(v178);
              if ( v105 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v196);
              COREACCESS::~COREACCESS((COREACCESS *)v204);
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v207);
              ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v190);
              if ( v10 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v10 + 16), (struct DXGDEVICE *)v10);
            }
LABEL_560:
            DXGADAPTER::ReleaseReference((DXGADAPTER *)v69);
            goto LABEL_154;
          case 0x22u:
            LODWORD(v35) = GetDiagnosticsBuffer((struct _D3DKMT_DXGK_DIAGNOSTICS *)p_Src, a1[6], 0);
            goto LABEL_565;
          default:
            LODWORD(v35) = -1073741811;
            v181 = WdLogNewEntry5_WdWarning(v109, v103, 0x1C0000000uLL, v113);
            *(_QWORD *)(v181 + 24) = (int)a1[2];
            WdLogEvent5_WdWarning(v181);
            goto LABEL_565;
        }
      }
      if ( v108 )
        goto LABEL_238;
      v107 = *(_QWORD *)(v69 + 2280) != 0LL ? 2 : 0;
      v104 = *(_DWORD *)(v69 + 300) & 4;
      v103 = (unsigned int)v104 | (*(_DWORD *)(v69 + 300) >> 2) & 0x40 | (8 * (*(_DWORD *)(v69 + 300) & 1)) | (unsigned int)v107 | (*(_QWORD *)(v69 + 2288) != 0LL);
      if ( (_BYTE)word_1C006F9DC )
      {
        DpiIsHybridIntegratedAdapter(*(_QWORD *)(v69 + 192));
        if ( DpiIsHybridDiscreteAdapter(v114) )
          v104 = v116;
        v103 = (unsigned int)v104 | v115;
      }
      if ( (v103 & 0x10) != 0 || *(_DWORD *)(v69 + 1504) >= 0x5023u && (v110 & 8) != 0 )
      {
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v196);
        if ( *(_DWORD *)(v69 + 176) != 1 )
          goto LABEL_252;
      }
      else
      {
LABEL_238:
        if ( v210 )
        {
          v117 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v107, v103, v104);
          v117[3] = 275LL;
          v117[4] = 4LL;
          v117[5] = v208;
          v117[6] = 0LL;
          v117[7] = 0LL;
          WdLogEvent5_WdCriticalError(v117);
        }
        v109 = (__int64)v209;
        if ( KeGetCurrentThread() != *((struct _KTHREAD **)v209 + 20) )
        {
          if ( !KeReadStateEvent((PRKEVENT)v209 + 2) )
          {
            if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              Template_q(v118, &EventBlockThread, v119, 72);
            KeWaitForSingleObject((char *)v209 + 48, Executive, 0, 0, 0LL);
          }
          DXGADAPTER::AcquireCoreResourceShared(v209);
          v109 = (__int64)v209;
        }
        v210 = 1;
        if ( *(_DWORD *)(v109 + 176) != 1 )
        {
          COREACCESS::Release((COREACCESS *)v208);
          LODWORD(v35) = -1073741130;
          v120 = v198;
LABEL_575:
          if ( v120 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v196);
          COREACCESS::~COREACCESS((COREACCESS *)v204);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v207);
          ENSURE_CONTEXT_DEREFERENCE::~ENSURE_CONTEXT_DEREFERENCE((ENSURE_CONTEXT_DEREFERENCE *)&v190);
          if ( v10 && _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v10 + 16), (struct DXGDEVICE *)v10);
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v69 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v69 + 16), (struct DXGADAPTER *)v69);
          goto LABEL_582;
        }
        if ( v209 != (DXGADAPTER *)v212 )
        {
          COREACCESS::AcquireShared((COREACCESS *)v211);
          v109 = v212[44];
          if ( (_DWORD)v109 != 1 )
          {
            COREACCESS::Release((COREACCESS *)v211);
            COREACCESS::Release((COREACCESS *)v208);
LABEL_252:
            v120 = v198;
            LODWORD(v35) = -1073741130;
            goto LABEL_575;
          }
        }
      }
      v105 = v198;
      v187 = v198;
      goto LABEL_254;
    }
    goto LABEL_116;
  }
  if ( (_DWORD)v32 != 1029 )
  {
    v25 = 0x1C0000000uLL;
    switch ( (int)v32 )
    {
      case 1:
        if ( a1[6] < 0x440 )
          goto LABEL_130;
        v40 = *p_Src;
        if ( *p_Src == 5 )
        {
          LODWORD(v35) = DxgEscapeEvict((struct _D3DKMT_VIDMM_ESCAPE *)p_Src);
          goto LABEL_582;
        }
        switch ( v40 )
        {
          case 6:
            LODWORD(v35) = DxgEscapeEvictByNtHandle((struct _D3DKMT_VIDMM_ESCAPE *)p_Src);
            goto LABEL_582;
          case 13:
            LODWORD(v35) = DxgEscapeEvictByCriteria((struct _D3DKMT_VIDMM_ESCAPE *)p_Src);
            goto LABEL_582;
          case 9:
            LODWORD(v35) = DxgEscapeSuspendResumeProcess(*a1, *((void **)p_Src + 1), 1, p_Src[4] != 0);
            goto LABEL_582;
          case 10:
            LODWORD(v35) = DxgEscapeSuspendResumeProcess(*a1, *((void **)p_Src + 1), 0, 0);
LABEL_582:
            DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION((__int64)&v192);
            if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              Template_q(v184, &EventProfilerExit, v185, 2016);
            return (unsigned int)v35;
        }
        break;
      case 8:
        v38 = a1[6];
        if ( v38 < 0xC )
          goto LABEL_130;
        if ( v38 < p_Src[1] )
          goto LABEL_130;
        if ( *p_Src != 1484026436 )
          goto LABEL_130;
        v39 = p_Src[2];
        if ( v39 )
        {
          if ( v39 != 13 )
            goto LABEL_130;
        }
        LODWORD(v35) = DxgkDrtTestEscape(0LL, (struct _D3DKMT_DRT_ESCAPE_HEAD *)p_Src, 0LL);
        goto LABEL_582;
      case 20:
      case 30:
        v33 = a1[6];
        if ( (_DWORD)v32 == 30 )
          v34 = DxgkHandleIndirectEscape(v33, p_Src);
        else
          v34 = DxgkHandleMiracastEscape(v33, p_Src);
        LODWORD(v35) = v34;
        if ( v34 < 0 )
          goto LABEL_582;
        if ( !v188 )
          goto LABEL_55;
        v36 = a1[6];
        v37 = (char *)*((_QWORD *)a1 + 2);
        if ( (unsigned __int64)&v37[v36] > MmUserProbeAddress || &v37[v36] <= v37 )
          *(_BYTE *)MmUserProbeAddress = 0;
        goto LABEL_113;
      case 24:
        if ( !g_OSTestSigningEnabled )
          goto LABEL_74;
        if ( a1[6] != 1 )
          goto LABEL_79;
        byte_1C006F9DB = *(_BYTE *)p_Src;
        goto LABEL_81;
      case 25:
        if ( a1[6] != 24 )
          goto LABEL_79;
        goto LABEL_122;
      case 26:
        if ( a1[6] != 140 )
          goto LABEL_79;
        LODWORD(v35) = DxgkHMDGetEdidBaseBlock((const struct _LUID *)p_Src, p_Src[2], (unsigned __int8 *)p_Src + 12);
        if ( (int)v35 < 0 )
          goto LABEL_582;
        if ( !v188 )
          goto LABEL_55;
        v36 = a1[6];
        v37 = (char *)*((_QWORD *)a1 + 2);
        if ( (unsigned __int64)&v37[v36] > MmUserProbeAddress || &v37[v36] <= v37 )
          *(_BYTE *)MmUserProbeAddress = 0;
        goto LABEL_113;
      case 27:
        if ( !g_OSTestSigningEnabled )
        {
LABEL_74:
          DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION((__int64)&v192);
          if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            Template_q(v41, &EventProfilerExit, v42, 2016);
          return 3221225506LL;
        }
        if ( a1[6] != 200 )
        {
LABEL_79:
          DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION((__int64)&v192);
          goto LABEL_10;
        }
        Current = DXGPROCESS::GetCurrent((__int64)v24);
        if ( !Current )
        {
          v48 = WdLogNewEntry5_WdError(v47, v46);
          *(_QWORD *)(v48 + 24) = 1095LL;
          WdLogEvent5_WdError(v48);
          DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION((__int64)&v192);
          goto LABEL_10;
        }
        DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v226, Current);
        DXGUSERCRIT::Acquire((DXGUSERCRIT *)v226, 1u);
        v230 = 0LL;
        *(_QWORD *)&ActivityId.Data1 = 0LL;
        *(_QWORD *)ActivityId.Data4 = 0LL;
        v232 = 0LL;
        v233 = 0LL;
        v234 = 0LL;
        v235 = 0LL;
        v236 = 0LL;
        EtwActivityIdControl(3u, &ActivityId);
        v236 = MEMORY[0xFFFFF78000000014];
        LODWORD(v232) = 46;
        LODWORD(v35) = DxgkEnableDisableTargetAsHMD(
                         (struct _D3DKMT_SOFTGPU_LUID_TARGET *)p_Src,
                         p_Src[48],
                         *((_BYTE *)p_Src + 196),
                         (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)&v230);
        DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v226);
        goto LABEL_582;
      case 32:
        if ( a1[6] != 16 )
          goto LABEL_79;
        v200 = 0LL;
        DxgkLogCodePointPacket(*p_Src, p_Src[1], p_Src[2], p_Src[3], 0LL);
LABEL_81:
        DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION((__int64)&v192);
        if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          Template_q(v43, &EventProfilerExit, v44, 2016);
        return 0LL;
      case 33:
        v49 = a1[6];
        if ( v49 < 0x30 || v49 < p_Src[1] )
          goto LABEL_79;
        LODWORD(v35) = DxgkWriteUserModeDiagEntry((struct _DXGK_DIAG_HEADER *)p_Src);
        goto LABEL_582;
      case 35:
        if ( a1[6] != 36 )
          goto LABEL_79;
        LODWORD(v35) = DxgkGetPreferredMode((struct _D3DKMT_GET_PREFERRED_MODE *)p_Src);
        if ( (int)v35 < 0 )
          goto LABEL_582;
        if ( v188 )
        {
          v36 = a1[6];
          v37 = (char *)*((_QWORD *)a1 + 2);
          if ( (unsigned __int64)&v37[v36] > MmUserProbeAddress || &v37[v36] <= v37 )
            *(_BYTE *)MmUserProbeAddress = 0;
LABEL_113:
          memmove(v37, p_Src, v36);
        }
        else
        {
LABEL_55:
          memmove(*((void **)a1 + 2), p_Src, a1[6]);
        }
        goto LABEL_582;
      default:
        goto LABEL_130;
    }
    goto LABEL_130;
  }
  v50 = WdLogNewEntry5_WdAssertion(v24, v32, v25, v26);
  *(_QWORD *)(v50 + 24) = 945LL;
  WdLogEvent5_WdAssertion(v50);
  if ( (*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)v7 + 9) + 224LL))(0LL) )
    goto LABEL_122;
  v55 = DXGGLOBAL::GetGlobal(v52, v51, v53, v54);
  v58 = DXGGLOBAL::ReferenceBddFallbackAdapter(v55, v225);
  if ( !v58 )
  {
LABEL_116:
    DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION((__int64)&v192);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v61, &EventProfilerExit, v62, 2016);
    return 3221226021LL;
  }
  v189[0] = 1;
  v63 = DXGGLOBAL::GetGlobal(v57, v56, v59, v60);
  DXGGLOBAL::IterateAdaptersWithCallback(v63, DxgkEscapeStopDisplayAdapters, v189, 1LL);
  if ( v189[0] )
  {
    DXGADAPTER::ReleaseReference(v58);
LABEL_122:
    DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION((__int64)&v192);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v64, &EventProfilerExit, v65, 2016);
    return 3221225473LL;
  }
  v228[0] = 0x4000000006LL;
  memset(&v228[1], 0, 40);
  v228[6] = 76LL;
  v228[7] = 0LL;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v228);
  LiveDumpWithWdLogs = DxgCreateLiveDumpWithWdLogs(0x187u, 1uLL, 0LL, 0LL, 0LL);
  DXGADAPTER::ReleaseReference(v58);
  DxgkEscape_::_2_::ENSURE_DATA_DELETION::_ENSURE_DATA_DELETION((__int64)&v192);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v67, &EventProfilerExit, v68, 2016);
  return LiveDumpWithWdLogs;
}
