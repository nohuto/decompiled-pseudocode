/*
 * XREFs of DxgkDisplayConfigDeviceInfo @ 0x1C00B4080
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003310 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003360 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000810C (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0008158 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C0008510 (-GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C0008560 (-GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     D3DKMDT_VPPR_GET_CONTENT_ROTATION @ 0x1C000A34C (D3DKMDT_VPPR_GET_CONTENT_ROTATION.c)
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C000BFA0 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C008BD94 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00AFBE8 (DxgkReleaseSessionModeChangeLock.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00B08DC (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C00B3A10 (DxgkIsVirtualizationDisabledForTarget.c)
 *     DMMVideoSignalInfoToDisplayConfigVideoSignalInfo @ 0x1C00B9388 (DMMVideoSignalInfoToDisplayConfigVideoSignalInfo.c)
 *     ?ConvertDmmToDisplayConfigColorEncoding@@YA?AW4_DISPLAYCONFIG_COLOR_ENCODING@@T_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C00B9988 (-ConvertDmmToDisplayConfigColorEncoding@@YA-AW4_DISPLAYCONFIG_COLOR_ENCODING@@T_D3DKMDT_WIRE_FOR.c)
 *     ?GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C00B999C (-GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z.c)
 *     ?BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C00D1518 (-BmlGetPathModalityForAdapter@@YAJPEAUD3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORI.c)
 *     MonitorIsMonitorAndDriverWCGCapable @ 0x1C00D22DC (MonitorIsMonitorAndDriverWCGCapable.c)
 *     MonitorIsMonitorAndLinkHDRCapable @ 0x1C00D237C (MonitorIsMonitorAndLinkHDRCapable.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAAEXZ @ 0x1C00D83C0 (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAAEXZ.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00D89E8 (MonitorReleaseMonitorHandle.c)
 *     ?BmlFreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00D9AF4 (-BmlFreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?IsCurrentModeAdvancedColor@@YAEPEAVDXGADAPTER@@IPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1C00E2398 (-IsCurrentModeAdvancedColor@@YAEPEAVDXGADAPTER@@IPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_.c)
 *     ?CheckGivenTargetIsPartOfCloneGroup@@YAJPEAVDXGADAPTER@@IPEAE@Z @ 0x1C00E243C (-CheckGivenTargetIsPartOfCloneGroup@@YAJPEAVDXGADAPTER@@IPEAE@Z.c)
 *     MonitorGetMonitorHandle @ 0x1C00E4564 (MonitorGetMonitorHandle.c)
 *     ?DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C00F326C (-DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 *     ?DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@@Z @ 0x1C00F8964 (-DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@@Z.c)
 *     MonitorGetWideColorModeEnforced @ 0x1C00F8FB4 (MonitorGetWideColorModeEnforced.c)
 *     ?FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z @ 0x1C01AA6C4 (-FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z.c)
 *     ?FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z @ 0x1C01AA894 (-FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z.c)
 *     DxgkNotifyDisplayChange @ 0x1C01CB324 (DxgkNotifyDisplayChange.c)
 *     MonitorDisableMonitorVirtualModeSupport @ 0x1C01FE1A0 (MonitorDisableMonitorVirtualModeSupport.c)
 *     MonitorEnableDisableAdvancedColor @ 0x1C01FE350 (MonitorEnableDisableAdvancedColor.c)
 *     MonitorGetSDRWhiteLevel @ 0x1C01FE740 (MonitorGetSDRWhiteLevel.c)
 *     MonitorSetAdvancedColorParams @ 0x1C01FEAD8 (MonitorSetAdvancedColorParams.c)
 *     MonitorSetDefaultAdvancedColorParams @ 0x1C01FECD4 (MonitorSetDefaultAdvancedColorParams.c)
 *     MonitorSetEnforceWideColorMode @ 0x1C01FED9C (MonitorSetEnforceWideColorMode.c)
 *     MonitorSetSDRWhiteLevel @ 0x1C01FEE4C (MonitorSetSDRWhiteLevel.c)
 */

__int64 __fastcall DxgkDisplayConfigDeviceInfo(char a1, __int64 a2)
{
  __int64 v4; // rcx
  int v5; // edi
  unsigned int v6; // eax
  __int64 v7; // rcx
  DXGADAPTER *v8; // rbx
  __int64 v9; // rcx
  unsigned int v10; // edx
  int v11; // ecx
  struct DXGFASTMUTEX *v13; // r15
  int v14; // r14d
  int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // r15d
  char v18; // al
  __int64 v19; // rdx
  int v20; // r14d
  unsigned int v21; // ebx
  __int64 v22; // r13
  DXGGLOBAL *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  struct DXGADAPTER *v26; // r15
  int v27; // eax
  __int64 v28; // rcx
  int v29; // ebx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  int MonitorHandle; // eax
  __int64 v37; // rcx
  int IsMonitorAndLinkHDRCapable; // eax
  __int64 v39; // rcx
  int IsMonitorAndDriverWCGCapable; // eax
  unsigned __int8 v41; // al
  __int64 v42; // rdx
  __int64 v43; // rcx
  unsigned int v44; // eax
  __int64 v45; // rcx
  bool v46; // zf
  int TargetBaseType; // eax
  int WideColorModeEnforced; // eax
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v49; // ecx
  unsigned int ColorDepthFromPickedWireFormat; // eax
  __int64 Value; // rcx
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rax
  _QWORD *v56; // rax
  _QWORD *v57; // rax
  _QWORD *v58; // rax
  _QWORD *v59; // rax
  __int64 v60; // rax
  _QWORD *v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  int v65; // eax
  __int64 v66; // rax
  int SDRWhiteLevel; // eax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  _QWORD *v71; // rax
  __int64 v72; // rax
  int v73; // eax
  __int64 v74; // rcx
  _QWORD *v75; // rax
  DXGGLOBAL *v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  struct DXGADAPTER *v79; // r15
  int v80; // eax
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // rax
  int v85; // ebx
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  _QWORD *v89; // rax
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // r12
  __int64 v93; // rcx
  __int64 v94; // rax
  __int64 v95; // rax
  struct _FAST_MUTEX *v96; // rcx
  __int64 v97; // rax
  _QWORD *v98; // rax
  int MonitorInstance; // eax
  __int64 v100; // rcx
  __int64 v101; // rax
  struct DXGMONITOR *v102; // r15
  __int64 v103; // rax
  __int64 v104; // rax
  unsigned __int8 IsVirtualModeSuportDisabled; // r14
  __int64 v106; // rax
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  _QWORD *v110; // rax
  __int64 v111; // rax
  __int64 v112; // rax
  __int64 v113; // rax
  __int64 v114; // rax
  __int64 v115; // r12
  DXGGLOBAL *v116; // rax
  struct DXGADAPTER *v117; // r15
  int v118; // eax
  __int64 v119; // rcx
  __int64 v120; // rax
  int v121; // r8d
  unsigned __int8 v122; // r14
  int v123; // ebx
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r8
  _QWORD *v127; // rax
  _QWORD *v128; // rax
  int v129; // eax
  __int64 v130; // rcx
  __int64 v131; // r14
  __int64 v132; // rdx
  int v133; // eax
  __int64 v134; // rcx
  int v135; // eax
  _QWORD *v136; // rax
  _QWORD *v137; // rax
  __int64 v138; // rdx
  _QWORD *v139; // rax
  __int64 v140; // rax
  struct DXGGLOBAL *v141; // rax
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v142; // eax
  int v143; // r14d
  __int64 v144; // rax
  __int64 v145; // rcx
  _QWORD *v146; // rax
  __int64 v147; // rcx
  int v148; // r14d
  DXGGLOBAL *v149; // rax
  struct DXGADAPTER *v150; // rax
  struct DXGADAPTER *v151; // r14
  int v152; // ebx
  __int64 v153; // rdx
  __int64 v154; // rcx
  __int64 v155; // r8
  _QWORD *v156; // rax
  int v157; // eax
  __int64 v158; // rcx
  __int64 v159; // rbx
  __int64 v160; // rax
  _QWORD *v161; // rax
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v163; // rax
  __int64 v164; // rdx
  __int64 v165; // rcx
  __int64 v166; // rax
  __int64 v167; // rcx
  int v168; // [rsp+28h] [rbp-E0h]
  unsigned __int8 v169; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int8 v170; // [rsp+59h] [rbp-AFh] BYREF
  char v171; // [rsp+5Ah] [rbp-AEh] BYREF
  char v172; // [rsp+5Bh] [rbp-ADh] BYREF
  char v173; // [rsp+5Ch] [rbp-ACh] BYREF
  char v174; // [rsp+5Dh] [rbp-ABh]
  char v175; // [rsp+5Eh] [rbp-AAh] BYREF
  unsigned __int8 v176; // [rsp+5Fh] [rbp-A9h] BYREF
  unsigned __int8 v177[8]; // [rsp+60h] [rbp-A8h] BYREF
  struct HDXGMONITOR__ *v178; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v179; // [rsp+70h] [rbp-98h]
  struct DXGMONITOR *v180; // [rsp+78h] [rbp-90h] BYREF
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v181; // [rsp+80h] [rbp-88h] BYREF
  int v182; // [rsp+84h] [rbp-84h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v183; // [rsp+88h] [rbp-80h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v184; // [rsp+8Ch] [rbp-7Ch] BYREF
  _BYTE v185[8]; // [rsp+90h] [rbp-78h] BYREF
  struct DXGADAPTER *v186; // [rsp+98h] [rbp-70h]
  char v187; // [rsp+A0h] [rbp-68h]
  enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE v188; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v189; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE v190[16]; // [rsp+B8h] [rbp-50h] BYREF
  unsigned __int64 v191; // [rsp+C8h] [rbp-40h] BYREF
  unsigned __int64 v192; // [rsp+D0h] [rbp-38h] BYREF
  unsigned __int64 v193; // [rsp+D8h] [rbp-30h] BYREF
  unsigned __int64 v194; // [rsp+E0h] [rbp-28h] BYREF
  unsigned __int64 v195; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v196[8]; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v197[32]; // [rsp+100h] [rbp-8h] BYREF
  _BYTE v198[40]; // [rsp+120h] [rbp+18h] BYREF
  _BYTE v199[8]; // [rsp+148h] [rbp+40h] BYREF
  _BYTE v200[32]; // [rsp+150h] [rbp+48h] BYREF
  _BYTE v201[40]; // [rsp+170h] [rbp+68h] BYREF
  __int64 v202; // [rsp+198h] [rbp+90h] BYREF
  _BYTE v203[32]; // [rsp+1A0h] [rbp+98h] BYREF
  _BYTE v204[40]; // [rsp+1C0h] [rbp+B8h] BYREF
  _BYTE v205[8]; // [rsp+1E8h] [rbp+E0h] BYREF
  _BYTE v206[32]; // [rsp+1F0h] [rbp+E8h] BYREF
  _BYTE v207[40]; // [rsp+210h] [rbp+108h] BYREF
  _QWORD v208[10]; // [rsp+238h] [rbp+130h] BYREF
  _QWORD v209[40]; // [rsp+288h] [rbp+180h] BYREF

  memset(v208, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v208[1]);
  v5 = 0;
  v208[8] = MEMORY[0xFFFFF78000000014];
  LOBYTE(v208[6]) = -1;
  LODWORD(v208[3]) = 39;
  if ( a2 )
  {
    v6 = *(_DWORD *)a2;
    v7 = 4294967280LL;
    LODWORD(v8) = 0;
    if ( *(_DWORD *)a2 > 0xFFFFFFF0 )
    {
      switch ( v6 )
      {
        case 0xFFFFFFF3:
          LODWORD(v8) = DxgkIsVirtualizationDisabledForTarget(
                          *(struct _LUID *)(a2 + 8),
                          *(_DWORD *)(a2 + 16),
                          (bool *)&v177[4],
                          (bool *)&v177[5],
                          &v183,
                          &v184);
          if ( (int)v8 >= 0 )
          {
            LOBYTE(v5) = v177[4] != 0;
            v10 = v5 | *(_DWORD *)(a2 + 28) & 0xFFFFFFFE;
            v11 = -(v177[5] != 0);
            *(_DWORD *)(a2 + 20) = v183;
            *(_DWORD *)(a2 + 24) = v184;
            *(_DWORD *)(a2 + 28) = v11 & 2 | v10 & 0xFFFFFFFD;
            return (unsigned int)v8;
          }
          goto LABEL_236;
        case 0xFFFFFFF2:
          v13 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal(4294967280LL) + 840);
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v190, v13);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v190);
          v14 = *((_DWORD *)v13 + 15);
          if ( v190[8] )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v190);
          *(_DWORD *)(a2 + 24) = v14;
          *(_DWORD *)(a2 + 32) = DXGADAPTERSOURCEHASH::GetHashBitMask(v13);
          *(_DWORD *)(a2 + 28) = DXGADAPTERSOURCEHASH::GetHashBitShift(v13);
          v15 = *(_DWORD *)(a2 + 36);
          if ( (v15 & 2) != 0 )
            return (unsigned int)v8;
          if ( (v15 & 1) == 0 )
          {
            LODWORD(v8) = DXGADAPTERSOURCEHASH::FindHashForAdapterAndSource(
                            v13,
                            (const struct _LUID *)(a2 + 8),
                            *(_DWORD *)(a2 + 16),
                            (unsigned int *)(a2 + 20));
            if ( (int)v8 >= 0 )
              return (unsigned int)v8;
LABEL_236:
            v146 = (_QWORD *)WdLogNewEntry5_WdError(v9);
            v146[3] = *(int *)(a2 + 12);
            v146[4] = *(unsigned int *)(a2 + 8);
            v146[5] = *(unsigned int *)(a2 + 16);
            goto LABEL_237;
          }
          LODWORD(v8) = DXGADAPTERSOURCEHASH::FindAdapterAndSourceForHash(
                          v13,
                          *(_DWORD *)(a2 + 20),
                          (struct _LUID *)(a2 + 8),
                          (unsigned int *)(a2 + 16));
          if ( (int)v8 >= 0 )
            return (unsigned int)v8;
          v146 = (_QWORD *)WdLogNewEntry5_WdError(v167);
          v146[3] = *(unsigned int *)(a2 + 20);
LABEL_237:
          WdLogEvent5_WdError(v146);
          return (unsigned int)v8;
        case 0xFFFFFFF4:
          *(_DWORD *)(a2 + 20) = 0;
          Global = DXGGLOBAL::GetGlobal(4294967280LL);
          v163 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)(a2 + 8), &v195);
          v8 = v163;
          if ( v163 )
          {
            v186 = v163;
            v187 = 0;
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v185);
            if ( *((_DWORD *)v8 + 44) == 1 )
            {
              *(_DWORD *)(a2 + 20) ^= (*(_DWORD *)(a2 + 20) ^ (*((_DWORD *)v8 + 420) >> 2)) & 1;
              *(_DWORD *)(a2 + 20) ^= (*(_DWORD *)(a2 + 20) ^ (*((_DWORD *)v8 + 420) >> 2)) & 2;
              *(_DWORD *)(a2 + 20) ^= (*(_DWORD *)(a2 + 20) ^ (*((_DWORD *)v8 + 420) >> 2)) & 4;
              DXGADAPTER::ReleaseReferenceNoTracking(v8);
              LODWORD(v8) = 0;
            }
            else
            {
              DXGADAPTER::ReleaseReferenceNoTracking(v8);
              v166 = WdLogNewEntry5_WdTrace(v165, v164);
              *(_QWORD *)(v166 + 24) = v8;
              LODWORD(v8) = -1073741130;
              *(_QWORD *)(v166 + 32) = -1073741130LL;
            }
            if ( v187 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v185);
            return (unsigned int)v8;
          }
          break;
        case 0xFFFFFFF6:
          v149 = DXGGLOBAL::GetGlobal(4294967280LL);
          v150 = DXGGLOBAL::ReferenceAdapterByLuid(v149, *(struct _LUID *)(a2 + 8), &v194);
          v151 = v150;
          if ( v150 )
          {
            COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v205, v150, 0LL);
            v152 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v205);
            DXGADAPTER::ReleaseReferenceNoTracking(v151);
            if ( v152 >= 0 )
            {
              if ( (*((_DWORD *)v151 + 75) & 0x100) == 0 )
              {
                v156 = (_QWORD *)WdLogNewEntry5_WdWarning(v154, v153, v155);
                v156[3] = v151;
                v156[4] = *((int *)v151 + 68);
                v156[5] = *((unsigned int *)v151 + 67);
                WdLogEvent5_WdWarning(v156);
                LODWORD(v8) = -1073741637;
LABEL_225:
                COREACCESS::~COREACCESS((COREACCESS *)v207);
                COREACCESS::~COREACCESS((COREACCESS *)v206);
                return (unsigned int)v8;
              }
              v157 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(*((_QWORD *)v151 + 288) + 16LL)
                                                                        + 1624LL))(
                       *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v151 + 288) + 16LL) + 1544LL),
                       *(unsigned int *)(a2 + 16),
                       a2 + 20);
              v159 = v157;
              if ( v157 >= 0 )
              {
                LODWORD(v8) = 0;
                goto LABEL_225;
              }
              v160 = WdLogNewEntry5_WdError(v158);
              *(_QWORD *)(v160 + 24) = v159;
              WdLogEvent5_WdError(v160);
            }
            v161 = (_QWORD *)WdLogNewEntry5_WdWarning(v154, v153, v155);
            v161[3] = v151;
            v161[4] = *((int *)v151 + 68);
            v161[5] = *((unsigned int *)v151 + 67);
            WdLogEvent5_WdWarning(v161);
            LODWORD(v8) = -1073741811;
            goto LABEL_225;
          }
          break;
        case 0xFFFFFFFA:
          if ( a1 )
          {
            v144 = WdLogNewEntry5_WdAssertion(4294967280LL);
            *(_QWORD *)(v144 + 24) = 5093LL;
            WdLogEvent5_WdAssertion(v144);
          }
          if ( g_OSTestSigningEnabled && !*(_DWORD *)(a2 + 20) )
          {
            *((_DWORD *)DXGGLOBAL::GetGlobal(v7) + 202) = 0;
            return (unsigned int)v8;
          }
          v145 = *(unsigned int *)(a2 + 20);
          if ( (unsigned int)(v145 - 1) > 3 )
          {
            LODWORD(v8) = -1073741811;
            v146 = (_QWORD *)WdLogNewEntry5_WdError(v145);
            v146[3] = *(int *)(a2 + 20);
            v146[4] = -1073741811LL;
            goto LABEL_237;
          }
          v147 = (unsigned int)(v145 - 1);
          if ( (_DWORD)v147 )
          {
            v147 = (unsigned int)(v147 - 1);
            if ( !(_DWORD)v147 )
            {
              v148 = 2;
              goto LABEL_216;
            }
            v147 = (unsigned int)(v147 - 1);
            if ( !(_DWORD)v147 )
            {
              v148 = 3;
              goto LABEL_216;
            }
            if ( (_DWORD)v147 == 1 )
            {
              v148 = 4;
LABEL_216:
              *((_DWORD *)DXGGLOBAL::GetGlobal(v147) + 202) = v148;
              return (unsigned int)v8;
            }
          }
          v148 = 1;
          goto LABEL_216;
        case 0xFFFFFFFB:
          if ( !a1 )
          {
            v140 = WdLogNewEntry5_WdAssertion(4294967280LL);
            *(_QWORD *)(v140 + 24) = 5083LL;
            WdLogEvent5_WdAssertion(v140);
          }
          v141 = DXGGLOBAL::GetGlobal(v7);
          v142 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(*((D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)v141 + 202));
          v143 = 1;
          if ( (unsigned int)(v142 - 1) <= 3 )
            v143 = v142;
          *(_DWORD *)(a2 + 20) = v143;
          return (unsigned int)v8;
        default:
          goto LABEL_200;
      }
      goto LABEL_75;
    }
    if ( v6 != -16 )
    {
      switch ( v6 )
      {
        case 2u:
          if ( !a1 )
          {
            v114 = WdLogNewEntry5_WdAssertion(4294967280LL);
            *(_QWORD *)(v114 + 24) = 4944LL;
            WdLogEvent5_WdAssertion(v114);
          }
          TargetBaseType = DisplayConfigFillTargetDeviceInfo((struct DISPLAYCONFIG_TARGET_DEVICE_NAME *)a2);
          break;
        case 3u:
          if ( !a1 )
          {
            v112 = WdLogNewEntry5_WdAssertion(4294967280LL);
            *(_QWORD *)(v112 + 24) = 4880LL;
            WdLogEvent5_WdAssertion(v112);
          }
          memset(v209, 0, 0x138uLL);
          v17 = 0;
          LODWORD(v8) = -1071774970;
          do
          {
            if ( v17 >= 0x10 )
              break;
            if ( v209[33] )
            {
              v113 = WdLogNewEntry5_WdAssertion(v16);
              *(_QWORD *)(v113 + 24) = 4892LL;
              WdLogEvent5_WdAssertion(v113);
            }
            memset(v209, 0, 0x138uLL);
            LODWORD(v8) = DxgkIsVirtualizationDisabledForTarget(
                            *(struct _LUID *)(a2 + 8),
                            *(_DWORD *)(a2 + 16),
                            (bool *)&v177[2],
                            (bool *)&v177[3],
                            (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)&v209[17],
                            (enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)&v209[17] + 1);
            if ( (int)v8 >= 0 )
            {
              v209[8] = *(_QWORD *)(a2 + 8);
              HIDWORD(v209[9]) = *(_DWORD *)(a2 + 16);
              HIDWORD(v209[2]) = 65537;
              LODWORD(v209[9]) = v17;
              if ( !v177[2] || (v18 = 0, !v177[3]) )
                v18 = 1;
              v19 = *(_QWORD *)(a2 + 8);
              BYTE1(v209[22]) = v18;
              LODWORD(v209[29]) = -13434880;
              v209[6] = 0xCF00000000000LL;
              LODWORD(v8) = BmlGetPathModalityForAdapter(v209, v19, 0LL, 1LL, 0);
              if ( (int)v8 >= 0 )
              {
                DMMVideoSignalInfoToDisplayConfigVideoSignalInfo(&v209[10], a2 + 32);
                *(_QWORD *)(a2 + 20) = *(_QWORD *)(a2 + 56);
              }
              BmlFreePathsModality((struct D3DKMT_GETPATHSMODALITY *)v209);
              ++v17;
            }
          }
          while ( (_DWORD)v8 == -1071774970 );
          return (unsigned int)v8;
        case 6u:
          if ( !a1 )
          {
            v111 = WdLogNewEntry5_WdAssertion(4294967280LL);
            *(_QWORD *)(v111 + 24) = 4954LL;
            WdLogEvent5_WdAssertion(v111);
          }
          TargetBaseType = DisplayConfigGetTargetBaseType((struct DISPLAYCONFIG_TARGET_BASE_TYPE *)a2);
          break;
        default:
          if ( v6 <= 6 )
            goto LABEL_200;
          if ( v6 > 8 )
          {
            v20 = 1;
            if ( v6 <= 0xA || v6 + 18 <= 1 )
            {
              v22 = *(unsigned int *)(a2 + 16);
              v180 = *(struct DXGMONITOR **)(a2 + 8);
              v21 = (unsigned int)v180;
              v23 = DXGGLOBAL::GetGlobal(4294967280LL);
              v26 = DXGGLOBAL::ReferenceAdapterByLuid(v23, (struct _LUID)v180, &v191);
              if ( v26 )
              {
                v172 = 0;
                v27 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v172, 0);
                v8 = (DXGADAPTER *)v27;
                if ( v27 < 0 )
                {
                  v55 = WdLogNewEntry5_WdError(v28);
                  *(_QWORD *)(v55 + 24) = v8;
                  WdLogEvent5_WdError(v55);
                  goto LABEL_55;
                }
                COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v196, v26, 0LL);
                v29 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v196);
                DXGADAPTER::ReleaseReferenceNoTracking(v26);
                if ( v29 < 0 )
                {
                  v56 = (_QWORD *)WdLogNewEntry5_WdError(v31);
                  v56[3] = v26;
                  v56[4] = *((int *)v26 + 68);
                  v56[5] = *((unsigned int *)v26 + 67);
                  WdLogEvent5_WdError(v56);
                  LODWORD(v8) = -1073741811;
                  goto LABEL_54;
                }
                if ( !*((_QWORD *)v26 + 288) )
                {
                  v57 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, v30, v32);
                  v57[3] = v26;
                  v57[4] = *((int *)v26 + 68);
                  v57[5] = *((unsigned int *)v26 + 67);
                  WdLogEvent5_WdWarning(v57);
                  LODWORD(v8) = -1073741637;
                  goto LABEL_54;
                }
                if ( (unsigned int)CheckGivenTargetIsPartOfCloneGroup(v26, v22, &v176) == -1073741275 )
                {
                  v58 = (_QWORD *)WdLogNewEntry5_WdWarning(v34, v33, v35);
                  v58[3] = *((int *)v26 + 68);
                  v58[4] = *((unsigned int *)v26 + 67);
                  v58[5] = v22;
                  v58[6] = -1073741275LL;
                  WdLogEvent5_WdWarning(v58);
                  v169 = 0;
                }
                else
                {
                  v169 = v176;
                }
                MonitorHandle = MonitorGetMonitorHandle(v26, v22, 1u, &DxgkDisplayConfigDeviceInfo, (__int64)&v178);
                v8 = (DXGADAPTER *)MonitorHandle;
                if ( MonitorHandle < 0 )
                {
                  v59 = (_QWORD *)WdLogNewEntry5_WdError(v37);
                  v59[3] = *((int *)v26 + 68);
                  v59[4] = *((unsigned int *)v26 + 67);
                  v59[5] = v22;
                  v59[6] = v8;
                  WdLogEvent5_WdError(v59);
                  goto LABEL_54;
                }
                if ( !v178 )
                {
                  v60 = WdLogNewEntry5_WdAssertion(v37);
                  *(_QWORD *)(v60 + 24) = 5599LL;
                  WdLogEvent5_WdAssertion(v60);
                }
                IsMonitorAndLinkHDRCapable = MonitorIsMonitorAndLinkHDRCapable(v178, &v171);
                v8 = (DXGADAPTER *)IsMonitorAndLinkHDRCapable;
                if ( IsMonitorAndLinkHDRCapable >= 0 )
                {
                  IsMonitorAndDriverWCGCapable = MonitorIsMonitorAndDriverWCGCapable(v178);
                  v8 = (DXGADAPTER *)IsMonitorAndDriverWCGCapable;
                  if ( IsMonitorAndDriverWCGCapable >= 0 )
                  {
                    v41 = IsCurrentModeAdvancedColor(v26, v22, &v181, &v188);
                    v170 = v41;
                    if ( v169 && v41 )
                    {
                      v62 = WdLogNewEntry5_WdAssertion(v43);
                      *(_QWORD *)(v62 + 24) = 5640LL;
                      WdLogEvent5_WdAssertion(v62);
                    }
                    v44 = *(_DWORD *)a2;
                    if ( *(_DWORD *)a2 == 9 )
                    {
                      if ( !a1 )
                      {
                        v63 = WdLogNewEntry5_WdAssertion(v43);
                        *(_QWORD *)(v63 + 24) = 5650LL;
                        WdLogEvent5_WdAssertion(v63);
                      }
                      WideColorModeEnforced = MonitorGetWideColorModeEnforced(v178, v177);
                      v8 = (DXGADAPTER *)WideColorModeEnforced;
                      if ( WideColorModeEnforced >= 0 )
                      {
                        if ( !v171 && !v174 || v169 )
                          v20 = 0;
                        v49.0 = v181.0;
                        *(_DWORD *)(a2 + 20) = (v177[0] != 0 ? 4 : 0) | (v170 != 0 ? 2 : 0) | v20 & 0xFFFFFFF9 | *(_DWORD *)(a2 + 20) & 0xFFFFFFF8;
                        ColorDepthFromPickedWireFormat = GetColorDepthFromPickedWireFormat(v49);
                        Value = v181.Value;
                        *(_DWORD *)(a2 + 28) = ColorDepthFromPickedWireFormat;
                        *(_DWORD *)(a2 + 24) = ConvertDmmToDisplayConfigColorEncoding(Value);
                        goto LABEL_53;
                      }
                    }
                    else
                    {
                      if ( v44 != 10 )
                      {
                        if ( v44 == -17 )
                        {
                          if ( !a1 )
                          {
                            v66 = WdLogNewEntry5_WdAssertion(v43);
                            *(_QWORD *)(v66 + 24) = 5725LL;
                            WdLogEvent5_WdAssertion(v66);
                          }
                          v182 = 1000;
                          if ( v170 )
                          {
                            if ( v171 )
                            {
                              SDRWhiteLevel = MonitorGetSDRWhiteLevel(v178, &v182);
                              v8 = (DXGADAPTER *)SDRWhiteLevel;
                              if ( SDRWhiteLevel < 0 )
                              {
                                v71 = (_QWORD *)WdLogNewEntry5_WdWarning(v69, v68, v70);
                                v71[3] = *((int *)v26 + 68);
                                v71[4] = *((unsigned int *)v26 + 67);
                                v71[5] = v22;
                                v71[6] = v8;
                                WdLogEvent5_WdWarning(v71);
                                LODWORD(v8) = 0;
                              }
                            }
                          }
                          *(_DWORD *)(a2 + 20) = v182;
                        }
                        else if ( v44 == -18 )
                        {
                          if ( a1 )
                          {
                            v72 = WdLogNewEntry5_WdAssertion(v43);
                            *(_QWORD *)(v72 + 24) = 5754LL;
                            WdLogEvent5_WdAssertion(v72);
                          }
                          if ( (unsigned int)(*(_DWORD *)(a2 + 20) - 500) > 0x251C )
                          {
                            LODWORD(v8) = -1073741811;
                          }
                          else if ( v170 && v171 )
                          {
                            v73 = MonitorSetSDRWhiteLevel(v178);
                            v8 = (DXGADAPTER *)v73;
                            if ( v73 < 0 )
                            {
                              v75 = (_QWORD *)WdLogNewEntry5_WdError(v74);
                              v75[3] = *((int *)v26 + 68);
                              v75[4] = *((unsigned int *)v26 + 67);
                              v75[5] = v22;
                              v75[6] = v8;
                              WdLogEvent5_WdError(v75);
                            }
                          }
                          else
                          {
                            LODWORD(v8) = -1073741637;
                          }
                          DxgkNotifyDisplayChange(0LL);
                        }
                        goto LABEL_53;
                      }
                      if ( a1 )
                      {
                        v64 = WdLogNewEntry5_WdAssertion(v43);
                        *(_QWORD *)(v64 + 24) = 5679LL;
                        WdLogEvent5_WdAssertion(v64);
                      }
                      if ( !v171 && !v174 || v169 )
                      {
                        LODWORD(v8) = -1073741637;
                        goto LABEL_53;
                      }
                      LOBYTE(v42) = *(_BYTE *)(a2 + 20) & 1;
                      v65 = MonitorEnableDisableAdvancedColor(v178, v42);
                      v8 = (DXGADAPTER *)v65;
                      if ( v65 >= 0 )
                      {
                        if ( v65 == 255 && (*(_BYTE *)(a2 + 20) & 1) != v170 )
                          LODWORD(v8) = 0;
                        goto LABEL_53;
                      }
                    }
                  }
                }
                v61 = (_QWORD *)WdLogNewEntry5_WdError(v39);
                v61[3] = *((int *)v26 + 68);
                v61[4] = *((unsigned int *)v26 + 67);
                v61[5] = v22;
                v61[6] = v8;
                WdLogEvent5_WdError(v61);
LABEL_53:
                MonitorReleaseMonitorHandle(v26);
LABEL_54:
                COREACCESS::~COREACCESS((COREACCESS *)v198);
                COREACCESS::~COREACCESS((COREACCESS *)v197);
LABEL_55:
                v46 = v172 == 0;
                goto LABEL_56;
              }
LABEL_156:
              v53 = WdLogNewEntry5_WdTrace(v25, v24);
              *(_QWORD *)(v53 + 24) = SHIDWORD(v180);
              v54 = v21;
              goto LABEL_76;
            }
LABEL_200:
            LODWORD(v8) = -1073741811;
            return (unsigned int)v8;
          }
          v76 = DXGGLOBAL::GetGlobal(4294967280LL);
          v79 = DXGGLOBAL::ReferenceAdapterByLuid(v76, *(struct _LUID *)(a2 + 8), &v192);
          if ( !v79 )
          {
LABEL_75:
            v53 = WdLogNewEntry5_WdTrace(v78, v77);
            *(_QWORD *)(v53 + 24) = *(int *)(a2 + 12);
            v54 = *(unsigned int *)(a2 + 8);
LABEL_76:
            *(_QWORD *)(v53 + 32) = v54;
            return -1073741811LL;
          }
          v170 = 0;
          v80 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v170, 0);
          v8 = (DXGADAPTER *)v80;
          if ( v80 < 0 )
          {
            v84 = WdLogNewEntry5_WdWarning(v82, v81, v83);
            *(_QWORD *)(v84 + 24) = v8;
            WdLogEvent5_WdWarning(v84);
LABEL_150:
            v46 = v170 == 0;
            goto LABEL_56;
          }
          COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v199, v79, 0LL);
          v85 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v199);
          DXGADAPTER::ReleaseReferenceNoTracking(v79);
          if ( v85 < 0 )
          {
            v89 = (_QWORD *)WdLogNewEntry5_WdWarning(v87, v86, v88);
            v89[3] = v79;
            v89[4] = *((int *)v79 + 68);
            v89[5] = *((unsigned int *)v79 + 67);
            WdLogEvent5_WdWarning(v89);
LABEL_127:
            LODWORD(v8) = -1073741811;
LABEL_149:
            COREACCESS::~COREACCESS((COREACCESS *)v201);
            COREACCESS::~COREACCESS((COREACCESS *)v200);
            goto LABEL_150;
          }
          v90 = *((_QWORD *)v79 + 288);
          if ( !v90 || !*(_BYTE *)(v90 + 133) )
          {
            v98 = (_QWORD *)WdLogNewEntry5_WdWarning(v87, v86, v88);
            v98[3] = v79;
            v98[4] = *((int *)v79 + 68);
            v98[5] = *((unsigned int *)v79 + 67);
            WdLogEvent5_WdWarning(v98);
            LODWORD(v8) = -1073741637;
            goto LABEL_149;
          }
          if ( *(_DWORD *)a2 != 7 )
          {
            if ( a1 || *(_DWORD *)a2 != 8 )
            {
              v106 = WdLogNewEntry5_WdAssertion(v87);
              *(_QWORD *)(v106 + 24) = 5052LL;
              WdLogEvent5_WdAssertion(v106);
            }
            if ( (int)CheckGivenTargetIsPartOfCloneGroup(v79, *(_DWORD *)(a2 + 16), &v177[1]) >= 0 && v177[1] )
            {
              v110 = (_QWORD *)WdLogNewEntry5_WdWarning(v108, v107, v109);
              v110[3] = *((int *)v79 + 68);
              v110[4] = *((unsigned int *)v79 + 67);
              v110[5] = *(unsigned int *)(a2 + 16);
              WdLogEvent5_WdWarning(v110);
              LODWORD(v8) = -1073741649;
            }
            else
            {
              LOBYTE(v109) = *(_BYTE *)(a2 + 20) & 1;
              LODWORD(v8) = MonitorDisableMonitorVirtualModeSupport(v79, *(unsigned int *)(a2 + 16), v109, v208);
            }
            goto LABEL_149;
          }
          if ( !a1 )
          {
            v91 = WdLogNewEntry5_WdAssertion(v87);
            *(_QWORD *)(v91 + 24) = 5035LL;
            WdLogEvent5_WdAssertion(v91);
          }
          v92 = *(unsigned int *)(a2 + 16);
          *(_DWORD *)(a2 + 20) = 0;
          if ( (_DWORD)v92 == -1 )
          {
            LODWORD(v8) = -1073741811;
          }
          else
          {
            if ( !DXGADAPTER::IsCoreResourceSharedOwner(v79) )
            {
              v94 = WdLogNewEntry5_WdAssertion(v93);
              WdLogEvent5_WdAssertion(v94);
            }
            if ( !*((_QWORD *)v79 + 288) )
            {
              v95 = WdLogNewEntry5_WdAssertion(v93);
              WdLogEvent5_WdAssertion(v95);
            }
            v96 = *(struct _FAST_MUTEX **)(*((_QWORD *)v79 + 288) + 96LL);
            if ( !v96 )
            {
              v97 = WdLogNewEntry5_WdError(0LL);
              *(_QWORD *)(v97 + 24) = v79;
              WdLogEvent5_WdError(v97);
              goto LABEL_127;
            }
            v180 = 0LL;
            MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v96, v92, 1, (ULONG **)&v180);
            LODWORD(v8) = MonitorInstance;
            if ( MonitorInstance == -1073741275 )
            {
              v101 = WdLogNewEntry5_WdDmmEvent(v100);
              *(_QWORD *)(v101 + 24) = v92;
              *(_QWORD *)(v101 + 32) = v79;
              WdLogEvent5_WdDmmEvent(v101);
              LODWORD(v8) = -1073741632;
              goto LABEL_149;
            }
            if ( MonitorInstance >= 0 )
            {
              v102 = v180;
              if ( !v180 || *((_DWORD *)v180 + 104) != 1 )
              {
                v103 = WdLogNewEntry5_WdAssertion(v100);
                WdLogEvent5_WdAssertion(v103);
              }
              if ( !v102 )
              {
                v104 = WdLogNewEntry5_WdAssertion(v100);
                WdLogEvent5_WdAssertion(v104);
              }
              KeEnterCriticalRegion();
              ExAcquireResourceSharedLite((PERESOURCE)((char *)v102 + 280), 1u);
              IsVirtualModeSuportDisabled = DXGMONITOR::_IsVirtualModeSuportDisabled(v102);
              ExReleaseResourceLite((PERESOURCE)((char *)v102 + 280));
              KeLeaveCriticalRegion();
              LODWORD(v8) = 0;
              goto LABEL_141;
            }
          }
          if ( (int)v8 < 0 )
            goto LABEL_149;
          IsVirtualModeSuportDisabled = v179;
LABEL_141:
          *(_DWORD *)(a2 + 20) = (IsVirtualModeSuportDisabled != 0) | *(_DWORD *)(a2 + 20) & 0xFFFFFFFE;
          goto LABEL_149;
      }
      LODWORD(v8) = TargetBaseType;
      return (unsigned int)v8;
    }
    v115 = *(unsigned int *)(a2 + 16);
    v180 = *(struct DXGMONITOR **)(a2 + 8);
    v21 = (unsigned int)v180;
    v116 = DXGGLOBAL::GetGlobal(4294967280LL);
    v117 = DXGGLOBAL::ReferenceAdapterByLuid(v116, (struct _LUID)v180, &v193);
    if ( !v117 )
      goto LABEL_156;
    v173 = 0;
    v118 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v173, 0);
    v8 = (DXGADAPTER *)v118;
    if ( v118 < 0 )
    {
      v120 = WdLogNewEntry5_WdError(v119);
      *(_QWORD *)(v120 + 24) = v8;
      WdLogEvent5_WdError(v120);
LABEL_190:
      v46 = v173 == 0;
LABEL_56:
      if ( !v46 )
        DxgkReleaseSessionModeChangeLock(v45);
      return (unsigned int)v8;
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v202, v117, 0LL);
    v122 = v121 + 1;
    v123 = COREADAPTERACCESS::AcquireExclusive(&v202, v121 + 1);
    DXGADAPTER::ReleaseReferenceNoTracking(v117);
    if ( v123 < 0 )
    {
      v127 = (_QWORD *)WdLogNewEntry5_WdError(v125);
      v127[3] = v117;
      v127[4] = *((int *)v117 + 68);
      v127[5] = *((unsigned int *)v117 + 67);
      WdLogEvent5_WdError(v127);
      LODWORD(v8) = -1073741811;
LABEL_189:
      COREACCESS::~COREACCESS((COREACCESS *)v204);
      COREACCESS::~COREACCESS((COREACCESS *)v203);
      goto LABEL_190;
    }
    if ( !*((_QWORD *)v117 + 288) )
    {
      v128 = (_QWORD *)WdLogNewEntry5_WdWarning(v125, v124, v126);
      v128[3] = v117;
      v128[4] = *((int *)v117 + 68);
      v128[5] = *((unsigned int *)v117 + 67);
      WdLogEvent5_WdWarning(v128);
LABEL_167:
      LODWORD(v8) = -1073741637;
      goto LABEL_189;
    }
    if ( *(_DWORD *)(a2 + 64) )
    {
      wil_details_FeaturePropertyCache_ReportUsageToService(
        (__int64)&Feature_WCGTestMode__private_propertyCache,
        12077848LL,
        (__int64)&unk_1C003C74C,
        0,
        v168);
      if ( (*((_DWORD *)v117 + 420) & 8) == 0 )
        goto LABEL_167;
    }
    v129 = MonitorGetMonitorHandle(v117, v115, v122, &DxgkDisplayConfigDeviceInfo, (__int64)&v189);
    v8 = (DXGADAPTER *)v129;
    if ( v129 < 0 )
    {
LABEL_173:
      v136 = (_QWORD *)WdLogNewEntry5_WdError(v130);
      v136[3] = *((int *)v117 + 68);
      v136[4] = *((unsigned int *)v117 + 67);
      v136[5] = v115;
      v136[6] = v8;
      WdLogEvent5_WdError(v136);
      goto LABEL_189;
    }
    v131 = v189;
    v175 = 0;
    MonitorIsMonitorAndLinkHDRCapable(v189, &v175);
    if ( v175 && *(_DWORD *)(a2 + 64) )
    {
      MonitorReleaseMonitorHandle(v117);
      goto LABEL_167;
    }
    v169 = 0;
    MonitorGetWideColorModeEnforced(v131, &v169);
    LOBYTE(v132) = *(_DWORD *)(a2 + 64) != 0;
    v133 = MonitorSetEnforceWideColorMode(v131, v132);
    v8 = (DXGADAPTER *)v133;
    if ( v133 < 0 )
    {
      v139 = (_QWORD *)WdLogNewEntry5_WdError(v134);
      v139[3] = *((int *)v117 + 68);
      v139[4] = *((unsigned int *)v117 + 67);
      v139[5] = v115;
      v139[6] = v8;
      WdLogEvent5_WdError(v139);
LABEL_188:
      MonitorReleaseMonitorHandle(v117);
      goto LABEL_189;
    }
    if ( v169 )
    {
      if ( *(_DWORD *)(a2 + 64) )
        goto LABEL_175;
      if ( !*(_DWORD *)(a2 + 56) )
      {
        v135 = MonitorSetDefaultAdvancedColorParams(v131);
        v8 = (DXGADAPTER *)v135;
        if ( v135 < 0 )
          goto LABEL_173;
        goto LABEL_180;
      }
    }
    if ( !*(_DWORD *)(a2 + 64) )
    {
LABEL_179:
      LODWORD(v8) = MonitorSetAdvancedColorParams(
                      v131,
                      (int)a2 + 20,
                      (int)a2 + 28,
                      (int)a2 + 36,
                      a2 + 44,
                      *(_DWORD *)(a2 + 52),
                      *(_DWORD *)(a2 + 56),
                      *(_DWORD *)(a2 + 60));
LABEL_180:
      if ( (int)v8 > -1 )
      {
        MonitorReleaseMonitorHandle(v117);
        if ( *(_DWORD *)(a2 + 64) == IsCurrentModeAdvancedColor(v117, v115, 0LL, 0LL) )
        {
          if ( (_DWORD)v8 != 255 )
            LODWORD(v8) = 255;
        }
        else
        {
          LODWORD(v8) = 259;
        }
        goto LABEL_189;
      }
      v137 = (_QWORD *)WdLogNewEntry5_WdError(v130);
      v137[3] = *((int *)v117 + 68);
      v137[4] = *((unsigned int *)v117 + 67);
      v137[6] = (int)v8;
      v137[5] = v115;
      WdLogEvent5_WdError(v137);
      LOBYTE(v138) = v169;
      MonitorSetEnforceWideColorMode(v131, v138);
      goto LABEL_188;
    }
LABEL_175:
    if ( *(_DWORD *)(a2 + 56) > 0x2D9FB0u )
      *(_DWORD *)(a2 + 56) = 2990000;
    if ( *(_DWORD *)(a2 + 60) > 0x2D9FB0u )
      *(_DWORD *)(a2 + 60) = 2990000;
    goto LABEL_179;
  }
  v52 = WdLogNewEntry5_WdAssertion(v4);
  *(_QWORD *)(v52 + 24) = 4865LL;
  WdLogEvent5_WdAssertion(v52);
  return -1073741811LL;
}
