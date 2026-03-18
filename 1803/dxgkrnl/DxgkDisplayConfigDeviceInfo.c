/*
 * XREFs of DxgkDisplayConfigDeviceInfo @ 0x1C00AB300
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0002A74 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C0002CCC (-GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C0002D44 (-GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0002D98 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C0007D04 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?InitByLuid@DXGADAPTERREFERENCE@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C000BF04 (-InitByLuid@DXGADAPTERREFERENCE@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015410 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015490 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00A9CC4 (DxgkReleaseSessionModeChangeLock.c)
 *     ?GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C00A9EF8 (-GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00AA09C (MonitorReleaseMonitorHandle.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C00AB090 (DxgkIsVirtualizationDisabledForTarget.c)
 *     MonitorGetMonitorHandle @ 0x1C00ABA7C (MonitorGetMonitorHandle.c)
 *     MonitorIsMonitorAndLinkHDRCapable @ 0x1C00ADCCC (MonitorIsMonitorAndLinkHDRCapable.c)
 *     MonitorIsMonitorAndDriverWCGCapable @ 0x1C00AE384 (MonitorIsMonitorAndDriverWCGCapable.c)
 *     ?BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C00AEB98 (-BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORI.c)
 *     DMMVideoSignalInfoToDisplayConfigVideoSignalInfo @ 0x1C00AEF68 (DMMVideoSignalInfoToDisplayConfigVideoSignalInfo.c)
 *     ?BmlFreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00BE45C (-BmlFreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?CheckGivenTargetIsPartOfCloneGroup@@YAJPEAVDXGADAPTER@@IPEAE@Z @ 0x1C00D6860 (-CheckGivenTargetIsPartOfCloneGroup@@YAJPEAVDXGADAPTER@@IPEAE@Z.c)
 *     ?IsCurrentModeAdvancedColor@@YAEPEAVDXGADAPTER@@IPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1C00DC224 (-IsCurrentModeAdvancedColor@@YAEPEAVDXGADAPTER@@IPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_.c)
 *     MonitorGetWideColorModeEnforced @ 0x1C00DDC1C (MonitorGetWideColorModeEnforced.c)
 *     ?ConvertDmmToDisplayConfigColorEncoding@@YA?AW4_DISPLAYCONFIG_COLOR_ENCODING@@T_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C00DED58 (-ConvertDmmToDisplayConfigColorEncoding@@YA-AW4_DISPLAYCONFIG_COLOR_ENCODING@@T_D3DKMDT_WIRE_FOR.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00F9E10 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00FA6EC (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C0107440 (-DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 *     MonitorIsMonitorVirtualModeDisabled @ 0x1C01078E4 (MonitorIsMonitorVirtualModeDisabled.c)
 *     ?DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@@Z @ 0x1C01114C0 (-DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@@Z.c)
 *     ?FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z @ 0x1C019E680 (-FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z.c)
 *     ?FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z @ 0x1C019E960 (-FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z.c)
 *     ?TriggerSDRWhiteLevelChangedWnf@@YAJXZ @ 0x1C01C70C4 (-TriggerSDRWhiteLevelChangedWnf@@YAJXZ.c)
 *     DxgkNotifyDisplayChange @ 0x1C01D1198 (DxgkNotifyDisplayChange.c)
 *     MonitorDisableMonitorVirtualModeSupport @ 0x1C022DB18 (MonitorDisableMonitorVirtualModeSupport.c)
 *     MonitorEnableDisableAdvancedColor @ 0x1C022DCC8 (MonitorEnableDisableAdvancedColor.c)
 *     MonitorGetSDRWhiteLevel @ 0x1C022E44C (MonitorGetSDRWhiteLevel.c)
 *     MonitorSetAdvancedColorParams @ 0x1C022F018 (MonitorSetAdvancedColorParams.c)
 *     MonitorSetDefaultAdvancedColorParams @ 0x1C022F228 (MonitorSetDefaultAdvancedColorParams.c)
 *     MonitorSetEnforceWideColorMode @ 0x1C022F2FC (MonitorSetEnforceWideColorMode.c)
 *     MonitorSetSDRWhiteLevel @ 0x1C022F3AC (MonitorSetSDRWhiteLevel.c)
 */

__int64 __fastcall DxgkDisplayConfigDeviceInfo(char a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // edi
  __int64 v7; // rcx
  unsigned int v8; // eax
  __int64 v9; // rcx
  __int64 DeviceInterfaces; // rbx
  __int64 v11; // rcx
  unsigned int v12; // edx
  int v13; // ecx
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  struct DXGFASTMUTEX *v18; // r15
  int v19; // r14d
  int HashBitShift; // eax
  int v21; // ecx
  __int64 v22; // rcx
  unsigned int v23; // r15d
  char v24; // al
  __int64 v25; // rdx
  struct _LUID v26; // rbx
  unsigned int v27; // r13d
  DXGGLOBAL *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  struct DXGADAPTER *v33; // r15
  int v34; // eax
  int v35; // ebx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r12
  int MonitorHandle; // eax
  __int64 v44; // rcx
  struct HDXGMONITOR__ *v45; // r13
  int IsMonitorAndLinkHDRCapable; // eax
  __int64 v47; // rcx
  int IsMonitorAndDriverWCGCapable; // eax
  unsigned __int8 v49; // al
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r9
  unsigned int v53; // eax
  int WideColorModeEnforced; // eax
  int v55; // r14d
  __int64 Value; // rcx
  int ColorDepthFromPickedWireFormat; // eax
  __int64 v58; // rcx
  __int64 v59; // rcx
  bool v60; // zf
  int v61; // eax
  struct _LUID v62; // rdx
  struct DXGADAPTER *v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  struct _DEVICE_OBJECT *v70; // rcx
  struct _DEVICE_OBJECT *DeviceAttachmentBaseRef; // r14
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  PZZWSTR v75; // rcx
  int TargetBaseType; // eax
  __int64 v77; // rax
  __int64 v78; // rax
  struct DXGGLOBAL *v79; // rax
  DXGGLOBAL *Global; // rax
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  struct DXGADAPTER *v85; // r15
  int v86; // eax
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // rax
  int v91; // ebx
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  _QWORD *v95; // rax
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rdx
  _QWORD *v99; // rax
  __int64 v100; // rax
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  _QWORD *v104; // rax
  __int64 v105; // rax
  _QWORD *v106; // rax
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rax
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 LowPart; // rcx
  __int64 v113; // rcx
  __int64 v114; // rax
  _QWORD *v115; // rax
  _QWORD *v116; // rax
  _QWORD *v117; // rax
  _QWORD *v118; // rax
  __int64 v119; // rax
  _QWORD *v120; // rax
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 v123; // rax
  int v124; // eax
  __int64 v125; // rax
  int SDRWhiteLevel; // eax
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // r8
  _QWORD *v130; // rax
  __int64 v131; // rax
  int v132; // eax
  __int64 v133; // rcx
  _QWORD *v134; // rax
  __int64 v135; // rax
  struct DXGGLOBAL *v136; // rax
  int v137; // eax
  int v138; // r14d
  __int64 v139; // rax
  __int64 v140; // rcx
  _QWORD *v141; // rax
  __int64 v142; // rcx
  __int64 v143; // rcx
  __int64 v144; // rcx
  int v145; // r14d
  DXGGLOBAL *v146; // rax
  struct DXGADAPTER *v147; // rax
  struct DXGADAPTER *v148; // r14
  int v149; // ebx
  __int64 v150; // rdx
  __int64 v151; // rcx
  __int64 v152; // r8
  _QWORD *v153; // rax
  int v154; // eax
  __int64 v155; // rcx
  __int64 v156; // rbx
  __int64 v157; // rax
  _QWORD *v158; // rax
  DXGGLOBAL *v159; // rax
  struct DXGADAPTER *v160; // rax
  __int64 v161; // rdx
  __int64 v162; // rcx
  __int64 v163; // r8
  __int64 v164; // r9
  __int64 v165; // rax
  int v166; // ecx
  unsigned int *v167; // r12
  unsigned int *v168; // r13
  __int64 v169; // rcx
  __int64 v170; // rcx
  __int64 v171; // r12
  DXGGLOBAL *v172; // rax
  struct DXGADAPTER *v173; // r15
  int v174; // eax
  __int64 v175; // rcx
  __int64 v176; // rax
  char v177; // r8
  unsigned __int8 v178; // r14
  int v179; // ebx
  __int64 v180; // rdx
  __int64 v181; // rcx
  __int64 v182; // r8
  _QWORD *v183; // rax
  _QWORD *v184; // rax
  int v185; // eax
  __int64 v186; // rcx
  __int64 v187; // r14
  __int64 v188; // r9
  __int64 v189; // rdx
  int v190; // eax
  __int64 v191; // rcx
  int v192; // eax
  __int64 v193; // r9
  _QWORD *v194; // rax
  _QWORD *v195; // rax
  __int64 v196; // rdx
  __int64 v197; // r9
  _QWORD *v198; // rax
  unsigned __int8 v199; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int8 v200; // [rsp+59h] [rbp-AFh] BYREF
  char v201; // [rsp+5Ah] [rbp-AEh] BYREF
  char v202; // [rsp+5Bh] [rbp-ADh] BYREF
  char v203; // [rsp+5Ch] [rbp-ACh] BYREF
  char v204; // [rsp+5Dh] [rbp-ABh]
  char v205; // [rsp+5Eh] [rbp-AAh] BYREF
  char v206; // [rsp+5Fh] [rbp-A9h] BYREF
  unsigned __int8 v207[4]; // [rsp+60h] [rbp-A8h] BYREF
  char v208; // [rsp+64h] [rbp-A4h] BYREF
  char v209; // [rsp+65h] [rbp-A3h] BYREF
  char v210; // [rsp+66h] [rbp-A2h] BYREF
  char v211; // [rsp+67h] [rbp-A1h] BYREF
  int v212; // [rsp+68h] [rbp-A0h] BYREF
  int v213; // [rsp+6Ch] [rbp-9Ch] BYREF
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v214; // [rsp+70h] [rbp-98h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v215; // [rsp+74h] [rbp-94h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v216[2]; // [rsp+78h] [rbp-90h] BYREF
  PZZWSTR SymbolicLinkList; // [rsp+80h] [rbp-88h] BYREF
  int v218; // [rsp+88h] [rbp-80h] BYREF
  __int64 v219; // [rsp+90h] [rbp-78h]
  _BYTE v220[8]; // [rsp+98h] [rbp-70h] BYREF
  struct DXGADAPTER *v221; // [rsp+A0h] [rbp-68h]
  char v222; // [rsp+A8h] [rbp-60h]
  _BYTE v223[8]; // [rsp+B0h] [rbp-58h] BYREF
  struct DXGADAPTER *v224; // [rsp+B8h] [rbp-50h]
  char v225; // [rsp+C0h] [rbp-48h]
  enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE v226; // [rsp+C8h] [rbp-40h] BYREF
  struct HDXGMONITOR__ *v227; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v228; // [rsp+D8h] [rbp-30h] BYREF
  DXGADAPTER *v229; // [rsp+E0h] [rbp-28h] BYREF
  _BYTE v230[16]; // [rsp+F0h] [rbp-18h] BYREF
  unsigned __int64 v231; // [rsp+100h] [rbp-8h] BYREF
  unsigned __int64 v232; // [rsp+108h] [rbp+0h] BYREF
  unsigned __int64 v233; // [rsp+110h] [rbp+8h] BYREF
  unsigned __int64 v234; // [rsp+118h] [rbp+10h] BYREF
  unsigned __int64 v235; // [rsp+120h] [rbp+18h] BYREF
  _BYTE v236[8]; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v237[32]; // [rsp+130h] [rbp+28h] BYREF
  _BYTE v238[40]; // [rsp+150h] [rbp+48h] BYREF
  _BYTE v239[8]; // [rsp+178h] [rbp+70h] BYREF
  _BYTE v240[32]; // [rsp+180h] [rbp+78h] BYREF
  _BYTE v241[40]; // [rsp+1A0h] [rbp+98h] BYREF
  _BYTE v242[8]; // [rsp+1C8h] [rbp+C0h] BYREF
  _BYTE v243[32]; // [rsp+1D0h] [rbp+C8h] BYREF
  _BYTE v244[40]; // [rsp+1F0h] [rbp+E8h] BYREF
  __int64 v245; // [rsp+218h] [rbp+110h] BYREF
  _BYTE v246[32]; // [rsp+220h] [rbp+118h] BYREF
  _BYTE v247[40]; // [rsp+240h] [rbp+138h] BYREF
  _QWORD v248[10]; // [rsp+268h] [rbp+160h] BYREF
  _QWORD v249[40]; // [rsp+2B8h] [rbp+1B0h] BYREF

  memset(v248, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v248[1]);
  v6 = 0;
  v248[8] = MEMORY[0xFFFFF78000000014];
  LOBYTE(v248[6]) = -1;
  LODWORD(v248[3]) = 39;
  v219 = 0LL;
  v218 = 2184;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v4, &EventProfilerEnter, v5, 2184);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v218, 2184);
  if ( !a2 )
  {
    v78 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v78 + 24) = 4933LL;
    WdLogEvent5_WdAssertion(v78);
    goto LABEL_119;
  }
  v8 = *(_DWORD *)a2;
  v9 = 4294967278LL;
  LODWORD(DeviceInterfaces) = 0;
  if ( *(_DWORD *)a2 <= 0xFFFFFFEE )
  {
    switch ( v8 )
    {
      case 0xFFFFFFEE:
        goto LABEL_36;
      case 2u:
        if ( !a1 )
        {
          v110 = WdLogNewEntry5_WdAssertion(4294967278LL);
          *(_QWORD *)(v110 + 24) = 5086LL;
          WdLogEvent5_WdAssertion(v110);
        }
        TargetBaseType = DisplayConfigFillTargetDeviceInfo((struct DISPLAYCONFIG_TARGET_DEVICE_NAME *)a2);
        goto LABEL_80;
      case 3u:
        if ( !a1 )
        {
          v108 = WdLogNewEntry5_WdAssertion(4294967278LL);
          *(_QWORD *)(v108 + 24) = 5021LL;
          WdLogEvent5_WdAssertion(v108);
        }
        memset(v249, 0, sizeof(v249));
        v23 = 0;
        LODWORD(DeviceInterfaces) = -1071774970;
        do
        {
          if ( v23 >= 0x10 )
            break;
          if ( v249[34] )
          {
            v109 = WdLogNewEntry5_WdAssertion(v22);
            *(_QWORD *)(v109 + 24) = 5033LL;
            WdLogEvent5_WdAssertion(v109);
          }
          memset(v249, 0, sizeof(v249));
          LODWORD(DeviceInterfaces) = DxgkIsVirtualizationDisabledForTarget(
                                        *(struct _LUID *)(a2 + 8),
                                        *(_DWORD *)(a2 + 16),
                                        (__int64)&v207[1],
                                        (__int64)&v207[2],
                                        (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)&v249[17],
                                        (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)&v249[17] + 1,
                                        (_DWORD *)&v249[32] + 1);
          if ( (int)DeviceInterfaces >= 0 )
          {
            v249[8] = *(_QWORD *)(a2 + 8);
            HIDWORD(v249[9]) = *(_DWORD *)(a2 + 16);
            HIDWORD(v249[2]) = 65537;
            LODWORD(v249[9]) = v23;
            if ( !v207[1] || (v24 = 0, !v207[2]) )
              v24 = 1;
            v25 = *(_QWORD *)(a2 + 8);
            BYTE1(v249[22]) = v24;
            LODWORD(v249[29]) = -13434880;
            v249[6] = 0xCF00000000000LL;
            LODWORD(DeviceInterfaces) = BmlGetPathModalityForAdapter(v249, v25, 0LL, 1LL, 0);
            if ( (int)DeviceInterfaces >= 0 )
            {
              DMMVideoSignalInfoToDisplayConfigVideoSignalInfo(&v249[10], a2 + 32);
              *(_QWORD *)(a2 + 20) = *(_QWORD *)(a2 + 56);
            }
            BmlFreePathsModality((struct D3DKMT_GETPATHSMODALITY *)v249);
            ++v23;
          }
        }
        while ( (_DWORD)DeviceInterfaces == -1071774970 );
        goto LABEL_7;
    }
    if ( v8 != 4 )
    {
      if ( v8 == 6 )
      {
        if ( !a1 )
        {
          v105 = WdLogNewEntry5_WdAssertion(4294967278LL);
          *(_QWORD *)(v105 + 24) = 5096LL;
          WdLogEvent5_WdAssertion(v105);
        }
        TargetBaseType = DisplayConfigGetTargetBaseType((struct DISPLAYCONFIG_TARGET_BASE_TYPE *)a2);
      }
      else
      {
        if ( v8 <= 6 )
          goto LABEL_119;
        if ( v8 <= 8 )
        {
          Global = DXGGLOBAL::GetGlobal(4294967278LL);
          v85 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)(a2 + 8), &v231);
          if ( !v85 )
          {
LABEL_117:
            v111 = WdLogNewEntry5_WdTrace(v82, v81, v83, v84);
            *(_QWORD *)(v111 + 24) = *(int *)(a2 + 12);
            LowPart = *(unsigned int *)(a2 + 8);
            goto LABEL_118;
          }
          v200 = 0;
          v86 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v200, 0);
          DeviceInterfaces = v86;
          if ( v86 >= 0 )
          {
            COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v236, v85, 0LL);
            v91 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v236);
            DXGADAPTER::ReleaseReferenceNoTracking(v85);
            if ( v91 >= 0 )
            {
              v96 = *((_QWORD *)v85 + 307);
              if ( v96 && *(_BYTE *)(v96 + 133) )
              {
                if ( *(_DWORD *)a2 == 7 )
                {
                  if ( !a1 )
                  {
                    v97 = WdLogNewEntry5_WdAssertion(v93);
                    *(_QWORD *)(v97 + 24) = 5177LL;
                    WdLogEvent5_WdAssertion(v97);
                  }
                  v98 = *(unsigned int *)(a2 + 16);
                  *(_DWORD *)(a2 + 20) = 0;
                  LODWORD(DeviceInterfaces) = MonitorIsMonitorVirtualModeDisabled(v85, v98, &v206);
                  if ( (int)DeviceInterfaces >= 0 )
                    *(_DWORD *)(a2 + 20) = (v206 != 0) | *(_DWORD *)(a2 + 20) & 0xFFFFFFFE;
                }
                else
                {
                  if ( a1 || *(_DWORD *)a2 != 8 )
                  {
                    v100 = WdLogNewEntry5_WdAssertion(v93);
                    *(_QWORD *)(v100 + 24) = 5194LL;
                    WdLogEvent5_WdAssertion(v100);
                  }
                  if ( (int)CheckGivenTargetIsPartOfCloneGroup(v85, *(_DWORD *)(a2 + 16), v207) >= 0 && v207[0] )
                  {
                    v104 = (_QWORD *)WdLogNewEntry5_WdWarning(v102, v101, v103);
                    v104[3] = *((int *)v85 + 68);
                    v104[4] = *((unsigned int *)v85 + 67);
                    v104[5] = *(unsigned int *)(a2 + 16);
                    WdLogEvent5_WdWarning(v104);
                    LODWORD(DeviceInterfaces) = -1073741649;
                  }
                  else
                  {
                    LOBYTE(v103) = *(_BYTE *)(a2 + 20) & 1;
                    LODWORD(DeviceInterfaces) = MonitorDisableMonitorVirtualModeSupport(
                                                  v85,
                                                  *(unsigned int *)(a2 + 16),
                                                  v103,
                                                  v248);
                  }
                }
              }
              else
              {
                v99 = (_QWORD *)WdLogNewEntry5_WdWarning(v93, v92, v94);
                v99[3] = v85;
                v99[4] = *((int *)v85 + 68);
                v99[5] = *((unsigned int *)v85 + 67);
                WdLogEvent5_WdWarning(v99);
                LODWORD(DeviceInterfaces) = -1073741637;
              }
            }
            else
            {
              v95 = (_QWORD *)WdLogNewEntry5_WdWarning(v93, v92, v94);
              v95[3] = v85;
              v95[4] = *((int *)v85 + 68);
              v95[5] = *((unsigned int *)v85 + 67);
              WdLogEvent5_WdWarning(v95);
              LODWORD(DeviceInterfaces) = -1073741811;
            }
            COREACCESS::~COREACCESS((COREACCESS *)v238);
            COREACCESS::~COREACCESS((COREACCESS *)v237);
          }
          else
          {
            v90 = WdLogNewEntry5_WdWarning(v88, v87, v89);
            *(_QWORD *)(v90 + 24) = DeviceInterfaces;
            WdLogEvent5_WdWarning(v90);
          }
          v60 = v200 == 0;
LABEL_59:
          if ( !v60 )
            DxgkReleaseSessionModeChangeLock(v59);
          goto LABEL_7;
        }
        if ( v8 <= 0xB )
        {
LABEL_36:
          v26 = *(struct _LUID *)(a2 + 8);
          v27 = *(_DWORD *)(a2 + 16);
          v28 = DXGGLOBAL::GetGlobal(4294967278LL);
          v33 = DXGGLOBAL::ReferenceAdapterByLuid(v28, v26, &v232);
          if ( !v33 )
            goto LABEL_116;
          v202 = 0;
          v34 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v202, 0);
          DeviceInterfaces = v34;
          if ( v34 < 0 )
          {
            DXGADAPTER::ReleaseReferenceNoTracking(v33);
            v114 = WdLogNewEntry5_WdError(v113);
            *(_QWORD *)(v114 + 24) = DeviceInterfaces;
            WdLogEvent5_WdError(v114);
            goto LABEL_58;
          }
          COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v239, v33, 0LL);
          v35 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v239);
          DXGADAPTER::ReleaseReferenceNoTracking(v33);
          if ( v35 < 0 )
          {
            v115 = (_QWORD *)WdLogNewEntry5_WdError(v37);
            v115[3] = v33;
            v115[4] = *((int *)v33 + 68);
            v115[5] = *((unsigned int *)v33 + 67);
            WdLogEvent5_WdError(v115);
            LODWORD(DeviceInterfaces) = -1073741811;
            goto LABEL_57;
          }
          if ( !*((_QWORD *)v33 + 307) )
          {
            v116 = (_QWORD *)WdLogNewEntry5_WdWarning(v37, v36, v38);
            v116[3] = v33;
            v116[4] = *((int *)v33 + 68);
            v116[5] = *((unsigned int *)v33 + 67);
            WdLogEvent5_WdWarning(v116);
            LODWORD(DeviceInterfaces) = -1073741637;
            goto LABEL_57;
          }
          v42 = v27;
          if ( (unsigned int)CheckGivenTargetIsPartOfCloneGroup(v33, v27, &v207[3]) == -1073741275 )
          {
            v117 = (_QWORD *)WdLogNewEntry5_WdWarning(v40, v39, v41);
            v117[3] = *((int *)v33 + 68);
            v117[4] = *((unsigned int *)v33 + 67);
            v117[5] = v27;
            v117[6] = -1073741275LL;
            WdLogEvent5_WdWarning(v117);
            v200 = 0;
          }
          else
          {
            v200 = v207[3];
          }
          MonitorHandle = MonitorGetMonitorHandle(v33, v27, 0, &DxgkDisplayConfigDeviceInfo, (__int64)&v227);
          DeviceInterfaces = MonitorHandle;
          if ( MonitorHandle < 0 )
          {
            v118 = (_QWORD *)WdLogNewEntry5_WdError(v44);
            v118[3] = *((int *)v33 + 68);
            v118[4] = *((unsigned int *)v33 + 67);
            v118[5] = v27;
            v118[6] = DeviceInterfaces;
            WdLogEvent5_WdError(v118);
            goto LABEL_57;
          }
          v45 = v227;
          if ( !v227 )
          {
            v119 = WdLogNewEntry5_WdAssertion(v44);
            *(_QWORD *)(v119 + 24) = 5728LL;
            WdLogEvent5_WdAssertion(v119);
          }
          IsMonitorAndLinkHDRCapable = MonitorIsMonitorAndLinkHDRCapable(v45, &v201, &v213);
          DeviceInterfaces = IsMonitorAndLinkHDRCapable;
          if ( IsMonitorAndLinkHDRCapable >= 0 )
          {
            IsMonitorAndDriverWCGCapable = MonitorIsMonitorAndDriverWCGCapable(v45);
            DeviceInterfaces = IsMonitorAndDriverWCGCapable;
            if ( IsMonitorAndDriverWCGCapable >= 0 )
            {
              v49 = IsCurrentModeAdvancedColor(v33, v42, &v214, &v226);
              v199 = v49;
              if ( v200 && v49 )
              {
                v121 = WdLogNewEntry5_WdAssertion(v51);
                *(_QWORD *)(v121 + 24) = 5770LL;
                WdLogEvent5_WdAssertion(v121);
              }
              v53 = *(_DWORD *)a2;
              if ( *(_DWORD *)a2 == 9 )
              {
                if ( !a1 )
                {
                  v122 = WdLogNewEntry5_WdAssertion(v51);
                  *(_QWORD *)(v122 + 24) = 5780LL;
                  WdLogEvent5_WdAssertion(v122);
                }
                WideColorModeEnforced = MonitorGetWideColorModeEnforced(v45, &v208);
                DeviceInterfaces = WideColorModeEnforced;
                if ( WideColorModeEnforced >= 0 )
                {
                  if ( !v201 && !v204 || (v55 = 1, v200) )
                    v55 = 0;
                  Value = v214.Value;
                  *(_DWORD *)(a2 + 20) = (v208 != 0 ? 4 : 0) | (v199 != 0 ? 2 : 0) | v55 & 0xFFFFFFF9 | *(_DWORD *)(a2 + 20) & 0xFFFFFFF8;
                  ColorDepthFromPickedWireFormat = GetColorDepthFromPickedWireFormat(Value);
                  v58 = v214.Value;
                  *(_DWORD *)(a2 + 28) = ColorDepthFromPickedWireFormat;
                  *(_DWORD *)(a2 + 24) = ConvertDmmToDisplayConfigColorEncoding(v58);
                  goto LABEL_56;
                }
              }
              else
              {
                if ( v53 != 10 )
                {
                  if ( v53 == 11 )
                  {
                    if ( !a1 )
                    {
                      v125 = WdLogNewEntry5_WdAssertion(v51);
                      *(_QWORD *)(v125 + 24) = 5855LL;
                      WdLogEvent5_WdAssertion(v125);
                    }
                    v61 = 1000;
                    v212 = 1000;
                    if ( v199 && v201 )
                    {
                      SDRWhiteLevel = MonitorGetSDRWhiteLevel(v45, &v212);
                      DeviceInterfaces = SDRWhiteLevel;
                      if ( SDRWhiteLevel >= 0 )
                      {
                        v61 = v212;
                      }
                      else
                      {
                        v130 = (_QWORD *)WdLogNewEntry5_WdWarning(v128, v127, v129);
                        v130[3] = *((int *)v33 + 68);
                        v130[4] = *((unsigned int *)v33 + 67);
                        v130[5] = v42;
                        v130[6] = DeviceInterfaces;
                        WdLogEvent5_WdWarning(v130);
                        v61 = 3000;
                        LODWORD(DeviceInterfaces) = 0;
                      }
                    }
                    *(_DWORD *)(a2 + 20) = v61;
                  }
                  else if ( v53 == -18 )
                  {
                    if ( a1 )
                    {
                      v131 = WdLogNewEntry5_WdAssertion(v51);
                      *(_QWORD *)(v131 + 24) = 5885LL;
                      WdLogEvent5_WdAssertion(v131);
                    }
                    if ( (unsigned int)(*(_DWORD *)(a2 + 20) - 1000) > 0x1388 )
                    {
                      LODWORD(DeviceInterfaces) = -1073741811;
                    }
                    else if ( v199 && v201 )
                    {
                      v132 = MonitorSetSDRWhiteLevel(v45);
                      DeviceInterfaces = v132;
                      if ( v132 >= 0 )
                      {
                        if ( v132 )
                        {
                          if ( v132 == 255 )
                            LODWORD(DeviceInterfaces) = 0;
                        }
                        else
                        {
                          TriggerSDRWhiteLevelChangedWnf();
                        }
                      }
                      else
                      {
                        v134 = (_QWORD *)WdLogNewEntry5_WdError(v133);
                        v134[3] = *((int *)v33 + 68);
                        v134[4] = *((unsigned int *)v33 + 67);
                        v134[5] = v42;
                        v134[6] = DeviceInterfaces;
                        WdLogEvent5_WdError(v134);
                      }
                    }
                    else
                    {
                      LODWORD(DeviceInterfaces) = -1073741637;
                    }
                    DxgkNotifyDisplayChange(0LL);
                  }
                  goto LABEL_56;
                }
                if ( a1 )
                {
                  v123 = WdLogNewEntry5_WdAssertion(v51);
                  *(_QWORD *)(v123 + 24) = 5809LL;
                  WdLogEvent5_WdAssertion(v123);
                }
                if ( !v201 && !v204 || v200 )
                {
                  LODWORD(DeviceInterfaces) = -1073741637;
                  goto LABEL_56;
                }
                LOBYTE(v50) = *(_BYTE *)(a2 + 20) & 1;
                v124 = MonitorEnableDisableAdvancedColor(v45, v50);
                DeviceInterfaces = v124;
                if ( v124 >= 0 )
                {
                  if ( v124 == 255 && (*(_BYTE *)(a2 + 20) & 1) != v199 )
                    LODWORD(DeviceInterfaces) = 0;
                  goto LABEL_56;
                }
              }
            }
          }
          v120 = (_QWORD *)WdLogNewEntry5_WdError(v47);
          v120[3] = *((int *)v33 + 68);
          v120[4] = *((unsigned int *)v33 + 67);
          v120[5] = v42;
          v120[6] = DeviceInterfaces;
          WdLogEvent5_WdError(v120);
LABEL_56:
          MonitorReleaseMonitorHandle(v33, (__int64)v45, &DxgkDisplayConfigDeviceInfo, v52);
LABEL_57:
          COREACCESS::~COREACCESS((COREACCESS *)v241);
          COREACCESS::~COREACCESS((COREACCESS *)v240);
LABEL_58:
          v60 = v202 == 0;
          goto LABEL_59;
        }
        if ( v8 != -19 )
          goto LABEL_119;
        v79 = DXGGLOBAL::GetGlobal(4294967278LL);
        TargetBaseType = DXGGLOBAL::IterateAdaptersWithCallback(v79, SendColorimetricControlToDriverCallback, a2, 1LL);
      }
LABEL_80:
      LODWORD(DeviceInterfaces) = TargetBaseType;
      goto LABEL_7;
    }
    v62 = *(struct _LUID *)(a2 + 8);
    v229 = 0LL;
    v63 = DXGADAPTERREFERENCE::InitByLuid((DXGADAPTERREFERENCE *)&v229, v62);
    DeviceInterfaces = (__int64)v63;
    if ( !v63 )
    {
      v106 = (_QWORD *)WdLogNewEntry5_WdWarning(v65, v64, v66);
      LODWORD(DeviceInterfaces) = -1073741811;
      v106[3] = *(unsigned int *)(a2 + 8);
      v106[4] = *(int *)(a2 + 12);
      v106[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v106);
LABEL_75:
      if ( v229 )
        DXGADAPTER::ReleaseReferenceNoTracking(v229);
      goto LABEL_7;
    }
    v221 = v63;
    v222 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v220);
    if ( *(_DWORD *)(DeviceInterfaces + 176) == 1 )
    {
      v70 = *(struct _DEVICE_OBJECT **)(DeviceInterfaces + 192);
      if ( !v70 )
      {
        v107 = WdLogNewEntry5_WdError(0LL);
        *(_QWORD *)(v107 + 24) = DeviceInterfaces;
        WdLogEvent5_WdError(v107);
        LODWORD(DeviceInterfaces) = -1073741275;
LABEL_73:
        if ( v222 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v220);
        goto LABEL_75;
      }
      SymbolicLinkList = 0LL;
      DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(v70);
      DeviceInterfaces = IoGetDeviceInterfaces(
                           &GUID_DEVINTERFACE_DISPLAY_ADAPTER,
                           DeviceAttachmentBaseRef,
                           0,
                           &SymbolicLinkList);
      ObfDereferenceObject(DeviceAttachmentBaseRef);
      if ( (int)DeviceInterfaces >= 0 )
      {
        wcsncpy_s((wchar_t *)(a2 + 20), 0x80uLL, SymbolicLinkList, 0xFFFFFFFFFFFFFFFFuLL);
        v75 = SymbolicLinkList;
        *(_WORD *)(a2 + 22) = 92;
        ExFreePoolWithTag(v75, 0);
        goto LABEL_73;
      }
      v77 = WdLogNewEntry5_WdWarning(v73, v72, v74);
      *(_QWORD *)(v77 + 24) = DeviceAttachmentBaseRef;
    }
    else
    {
      v77 = WdLogNewEntry5_WdWarning(v68, v67, v69);
      *(_QWORD *)(v77 + 24) = DeviceInterfaces;
      DeviceInterfaces = -1073741130LL;
    }
    *(_QWORD *)(v77 + 32) = DeviceInterfaces;
    WdLogEvent5_WdWarning(v77);
    goto LABEL_73;
  }
  if ( v8 == -13 )
  {
    LODWORD(DeviceInterfaces) = DxgkIsVirtualizationDisabledForTarget(
                                  *(struct _LUID *)(a2 + 8),
                                  *(_DWORD *)(a2 + 16),
                                  (__int64)&v209,
                                  (__int64)&v210,
                                  &v215,
                                  v216,
                                  &v216[1]);
    if ( (int)DeviceInterfaces >= 0 )
    {
      LOBYTE(v6) = v209 != 0;
      v12 = v6 | *(_DWORD *)(a2 + 32) & 0xFFFFFFFE;
      v13 = -(v210 != 0);
      *(_DWORD *)(a2 + 20) = v215;
      *(enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)(a2 + 24) = v216[0];
      v14 = v216[1];
      *(_DWORD *)(a2 + 32) = v13 & 2 | v12 & 0xFFFFFFFD;
      *(_DWORD *)(a2 + 28) = v14;
      goto LABEL_7;
    }
    v141 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    v141[3] = *(int *)(a2 + 12);
    v141[4] = *(unsigned int *)(a2 + 8);
    v143 = *(unsigned int *)(a2 + 16);
    goto LABEL_178;
  }
  if ( v8 != -14 )
  {
    if ( v8 != -16 )
    {
      switch ( v8 )
      {
        case 0xFFFFFFF4:
          *(_DWORD *)(a2 + 20) = 0;
          v159 = DXGGLOBAL::GetGlobal(4294967278LL);
          v160 = DXGGLOBAL::ReferenceAdapterByLuid(v159, *(struct _LUID *)(a2 + 8), &v234);
          DeviceInterfaces = (__int64)v160;
          if ( v160 )
          {
            v224 = v160;
            v225 = 0;
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v223);
            if ( *(_DWORD *)(DeviceInterfaces + 176) == 1 )
            {
              *(_DWORD *)(a2 + 20) ^= (*(_DWORD *)(a2 + 20) ^ (*(_DWORD *)(DeviceInterfaces + 1816) >> 2)) & 1;
              v166 = *(_DWORD *)(a2 + 20) ^ ((unsigned __int8)*(_DWORD *)(a2 + 20) ^ (unsigned __int8)(*(_DWORD *)(DeviceInterfaces + 1816) >> 2)) & 2;
              *(_DWORD *)(a2 + 20) = v166;
              *(_DWORD *)(a2 + 20) = v166 ^ ((unsigned __int8)v166 ^ (unsigned __int8)(*(_DWORD *)(DeviceInterfaces
                                                                                                 + 1816) >> 2)) & 4;
              DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)DeviceInterfaces);
              LODWORD(DeviceInterfaces) = 0;
            }
            else
            {
              DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)DeviceInterfaces);
              v165 = WdLogNewEntry5_WdTrace(v162, v161, v163, v164);
              *(_QWORD *)(v165 + 24) = DeviceInterfaces;
              LODWORD(DeviceInterfaces) = -1073741130;
              *(_QWORD *)(v165 + 32) = -1073741130LL;
            }
            if ( v225 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v223);
            goto LABEL_7;
          }
          break;
        case 0xFFFFFFF6:
          v146 = DXGGLOBAL::GetGlobal(4294967278LL);
          v147 = DXGGLOBAL::ReferenceAdapterByLuid(v146, *(struct _LUID *)(a2 + 8), &v233);
          v148 = v147;
          if ( v147 )
          {
            COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v242, v147, 0LL);
            v149 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v242);
            DXGADAPTER::ReleaseReferenceNoTracking(v148);
            if ( v149 >= 0 )
            {
              if ( (*((_DWORD *)v148 + 75) & 0x100) == 0 )
              {
                v153 = (_QWORD *)WdLogNewEntry5_WdWarning(v151, v150, v152);
                v153[3] = v148;
                v153[4] = *((int *)v148 + 68);
                v153[5] = *((unsigned int *)v148 + 67);
                WdLogEvent5_WdWarning(v153);
                LODWORD(DeviceInterfaces) = -1073741637;
LABEL_197:
                COREACCESS::~COREACCESS((COREACCESS *)v244);
                COREACCESS::~COREACCESS((COREACCESS *)v243);
                goto LABEL_7;
              }
              v154 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(*((_QWORD *)v148 + 307) + 16LL)
                                                                        + 1760LL))(
                       *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v148 + 307) + 16LL) + 1680LL),
                       *(unsigned int *)(a2 + 16),
                       a2 + 20);
              v156 = v154;
              if ( v154 >= 0 )
              {
                LODWORD(DeviceInterfaces) = 0;
                goto LABEL_197;
              }
              v157 = WdLogNewEntry5_WdError(v155);
              *(_QWORD *)(v157 + 24) = v156;
              WdLogEvent5_WdError(v157);
            }
            v158 = (_QWORD *)WdLogNewEntry5_WdWarning(v151, v150, v152);
            v158[3] = v148;
            v158[4] = *((int *)v148 + 68);
            v158[5] = *((unsigned int *)v148 + 67);
            WdLogEvent5_WdWarning(v158);
            LODWORD(DeviceInterfaces) = -1073741811;
            goto LABEL_197;
          }
          break;
        case 0xFFFFFFFA:
          if ( a1 )
          {
            v139 = WdLogNewEntry5_WdAssertion(4294967278LL);
            *(_QWORD *)(v139 + 24) = 5235LL;
            WdLogEvent5_WdAssertion(v139);
          }
          if ( g_OSTestSigningEnabled && !*(_DWORD *)(a2 + 20) )
          {
            *((_DWORD *)DXGGLOBAL::GetGlobal(v9) + 222) = 0;
            goto LABEL_7;
          }
          v140 = *(unsigned int *)(a2 + 20);
          if ( (unsigned int)(v140 - 1) > 3 )
          {
            LODWORD(DeviceInterfaces) = -1073741811;
            v141 = (_QWORD *)WdLogNewEntry5_WdError(v140);
            v142 = *(int *)(a2 + 20);
            v141[4] = -1073741811LL;
            goto LABEL_176;
          }
          v144 = (unsigned int)(v140 - 1);
          if ( (_DWORD)v144 )
          {
            v144 = (unsigned int)(v144 - 1);
            if ( !(_DWORD)v144 )
            {
              v145 = 2;
              goto LABEL_188;
            }
            v144 = (unsigned int)(v144 - 1);
            if ( !(_DWORD)v144 )
            {
              v145 = 3;
              goto LABEL_188;
            }
            if ( (_DWORD)v144 == 1 )
            {
              v145 = 4;
LABEL_188:
              *((_DWORD *)DXGGLOBAL::GetGlobal(v144) + 222) = v145;
              goto LABEL_7;
            }
          }
          v145 = 1;
          goto LABEL_188;
        case 0xFFFFFFFB:
          if ( !a1 )
          {
            v135 = WdLogNewEntry5_WdAssertion(4294967278LL);
            *(_QWORD *)(v135 + 24) = 5225LL;
            WdLogEvent5_WdAssertion(v135);
          }
          v136 = DXGGLOBAL::GetGlobal(v9);
          v137 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(*((_DWORD *)v136 + 222));
          v138 = 1;
          if ( (unsigned int)(v137 - 1) <= 3 )
            v138 = v137;
          *(_DWORD *)(a2 + 20) = v138;
          goto LABEL_7;
        default:
LABEL_119:
          LODWORD(DeviceInterfaces) = -1073741811;
          goto LABEL_7;
      }
      goto LABEL_117;
    }
    v26 = *(struct _LUID *)(a2 + 8);
    v171 = *(unsigned int *)(a2 + 16);
    v172 = DXGGLOBAL::GetGlobal(4294967278LL);
    v173 = DXGGLOBAL::ReferenceAdapterByLuid(v172, v26, &v235);
    if ( v173 )
    {
      v203 = 0;
      v174 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v203, 0);
      DeviceInterfaces = v174;
      if ( v174 < 0 )
      {
        v176 = WdLogNewEntry5_WdError(v175);
        *(_QWORD *)(v176 + 24) = DeviceInterfaces;
        WdLogEvent5_WdError(v176);
LABEL_241:
        v60 = v203 == 0;
        goto LABEL_59;
      }
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v245, v173, 0LL);
      v178 = v177 + 1;
      v179 = COREADAPTERACCESS::AcquireExclusive(&v245);
      DXGADAPTER::ReleaseReferenceNoTracking(v173);
      if ( v179 < 0 )
      {
        v183 = (_QWORD *)WdLogNewEntry5_WdError(v181);
        v183[3] = v173;
        v183[4] = *((int *)v173 + 68);
        v183[5] = *((unsigned int *)v173 + 67);
        WdLogEvent5_WdError(v183);
        LODWORD(DeviceInterfaces) = -1073741811;
LABEL_240:
        COREACCESS::~COREACCESS((COREACCESS *)v247);
        COREACCESS::~COREACCESS((COREACCESS *)v246);
        goto LABEL_241;
      }
      if ( !*((_QWORD *)v173 + 307) )
      {
        v184 = (_QWORD *)WdLogNewEntry5_WdWarning(v181, v180, v182);
        v184[3] = v173;
        v184[4] = *((int *)v173 + 68);
        v184[5] = *((unsigned int *)v173 + 67);
        WdLogEvent5_WdWarning(v184);
LABEL_223:
        LODWORD(DeviceInterfaces) = -1073741637;
        goto LABEL_240;
      }
      if ( *(_DWORD *)(a2 + 64) && (*((int *)v173 + 526) < 9216 || (*((_DWORD *)v173 + 454) & 8) == 0) )
        goto LABEL_223;
      v185 = MonitorGetMonitorHandle(v173, v171, v178, &DxgkDisplayConfigDeviceInfo, (__int64)&v228);
      DeviceInterfaces = v185;
      if ( v185 >= 0 )
      {
        v187 = v228;
        v205 = 0;
        v211 = 0;
        MonitorIsMonitorAndLinkHDRCapable(v228, &v205, &v211);
        if ( v205 && *(_DWORD *)(a2 + 64) )
        {
          MonitorReleaseMonitorHandle(v173, v187, &DxgkDisplayConfigDeviceInfo, v188);
          goto LABEL_223;
        }
        v199 = 0;
        MonitorGetWideColorModeEnforced(v187, &v199);
        LOBYTE(v189) = *(_DWORD *)(a2 + 64) != 0;
        v190 = MonitorSetEnforceWideColorMode(v187, v189);
        DeviceInterfaces = v190;
        if ( v190 < 0 )
        {
          v198 = (_QWORD *)WdLogNewEntry5_WdError(v191);
          v198[3] = *((int *)v173 + 68);
          v198[4] = *((unsigned int *)v173 + 67);
          v198[5] = v171;
          v198[6] = DeviceInterfaces;
          WdLogEvent5_WdError(v198);
        }
        else
        {
          if ( !v199 || *(_DWORD *)(a2 + 64) || *(_DWORD *)(a2 + 56) )
          {
            LODWORD(DeviceInterfaces) = MonitorSetAdvancedColorParams(
                                          v187,
                                          (int)a2 + 20,
                                          (int)a2 + 28,
                                          (int)a2 + 36,
                                          a2 + 44,
                                          *(_DWORD *)(a2 + 52),
                                          *(_DWORD *)(a2 + 56),
                                          *(_DWORD *)(a2 + 60));
          }
          else
          {
            v192 = MonitorSetDefaultAdvancedColorParams(v187);
            DeviceInterfaces = v192;
            if ( v192 < 0 )
              goto LABEL_229;
          }
          if ( (int)DeviceInterfaces > -1 )
          {
            MonitorReleaseMonitorHandle(v173, v187, &DxgkDisplayConfigDeviceInfo, v193);
            if ( *(_DWORD *)(a2 + 64) == v199 )
            {
              if ( (_DWORD)DeviceInterfaces != 255 )
                LODWORD(DeviceInterfaces) = 255;
            }
            else
            {
              LODWORD(DeviceInterfaces) = 259;
            }
            goto LABEL_240;
          }
          v195 = (_QWORD *)WdLogNewEntry5_WdError(v186);
          v195[3] = *((int *)v173 + 68);
          v195[4] = *((unsigned int *)v173 + 67);
          v195[6] = (int)DeviceInterfaces;
          v195[5] = v171;
          WdLogEvent5_WdError(v195);
          LOBYTE(v196) = v199;
          MonitorSetEnforceWideColorMode(v187, v196);
        }
        MonitorReleaseMonitorHandle(v173, v187, &DxgkDisplayConfigDeviceInfo, v197);
        goto LABEL_240;
      }
LABEL_229:
      v194 = (_QWORD *)WdLogNewEntry5_WdError(v186);
      v194[3] = *((int *)v173 + 68);
      v194[4] = *((unsigned int *)v173 + 67);
      v194[5] = v171;
      v194[6] = DeviceInterfaces;
      WdLogEvent5_WdError(v194);
      goto LABEL_240;
    }
LABEL_116:
    v111 = WdLogNewEntry5_WdTrace(v30, v29, v31, v32);
    *(_QWORD *)(v111 + 24) = v26.HighPart;
    LowPart = v26.LowPart;
LABEL_118:
    *(_QWORD *)(v111 + 32) = LowPart;
    goto LABEL_119;
  }
  v18 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal(4294967278LL) + 920);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v230, v18, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v230);
  v19 = *((_DWORD *)v18 + 15);
  if ( v230[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v230);
  *(_DWORD *)(a2 + 24) = v19;
  *(_DWORD *)(a2 + 32) = DXGADAPTERSOURCEHASH::GetHashBitMask(v18);
  HashBitShift = DXGADAPTERSOURCEHASH::GetHashBitShift(v18);
  v21 = *(_DWORD *)(a2 + 36);
  *(_DWORD *)(a2 + 28) = HashBitShift;
  if ( (v21 & 2) == 0 )
  {
    v167 = (unsigned int *)(a2 + 20);
    v168 = (unsigned int *)(a2 + 16);
    if ( (v21 & 1) == 0 )
    {
      LODWORD(DeviceInterfaces) = DXGADAPTERSOURCEHASH::FindHashForAdapterAndSource(
                                    v18,
                                    (const struct _LUID *)(a2 + 8),
                                    *v168,
                                    (unsigned int *)(a2 + 20));
      if ( (int)DeviceInterfaces >= 0 )
        goto LABEL_7;
      v141 = (_QWORD *)WdLogNewEntry5_WdError(v170);
      v141[3] = *(int *)(a2 + 12);
      v141[4] = *(unsigned int *)(a2 + 8);
      v143 = *v168;
LABEL_178:
      v141[5] = v143;
      goto LABEL_179;
    }
    LODWORD(DeviceInterfaces) = DXGADAPTERSOURCEHASH::FindAdapterAndSourceForHash(
                                  v18,
                                  *v167,
                                  (struct _LUID *)(a2 + 8),
                                  (unsigned int *)(a2 + 16));
    if ( (int)DeviceInterfaces >= 0 )
      goto LABEL_7;
    v141 = (_QWORD *)WdLogNewEntry5_WdError(v169);
    v142 = *v167;
LABEL_176:
    v141[3] = v142;
LABEL_179:
    WdLogEvent5_WdError(v141);
  }
LABEL_7:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v218);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v15, &EventProfilerExit, v16, v218);
  return (unsigned int)DeviceInterfaces;
}
