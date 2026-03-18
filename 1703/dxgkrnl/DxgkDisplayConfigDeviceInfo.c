/*
 * XREFs of DxgkDisplayConfigDeviceInfo @ 0x1C00F0750
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z @ 0x1C000B8CC (-MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z.c)
 *     D3DKMDT_VPPR_GET_CONTENT_ROTATION @ 0x1C000CB98 (D3DKMDT_VPPR_GET_CONTENT_ROTATION.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000CC30 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1C008BCF8 (-DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 *     ?DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@@Z @ 0x1C00A580C (-DisplayConfigGetTargetBaseType@@YAJPEAUDISPLAYCONFIG_TARGET_BASE_TYPE@@@Z.c)
 *     ?CheckGivenTargetIsPartOfCloneGroup@@YAJPEAVDXGADAPTER@@IPEAE@Z @ 0x1C00A701C (-CheckGivenTargetIsPartOfCloneGroup@@YAJPEAVDXGADAPTER@@IPEAE@Z.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1C00AAF40 (DxgkIsVirtualizationDisabledForTarget.c)
 *     MonitorReleaseMonitorHandle @ 0x1C00AC540 (MonitorReleaseMonitorHandle.c)
 *     MonitorGetMonitorHandle @ 0x1C00AC68C (MonitorGetMonitorHandle.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00D79B8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?BmlFreePathsModality@@YAXPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00EE464 (-BmlFreePathsModality@@YAXPEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?DMMVideoSignalInfoToDisplayConfigVideoSignalInfo@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAUDISPLAYCONFIG_VIDEO_SIGNAL_INFO@@@Z @ 0x1C00F0BB0 (-DMMVideoSignalInfoToDisplayConfigVideoSignalInfo@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAUDISPLA.c)
 *     ?BmlGetPathModalityForAdapter@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1C00F12A0 (-BmlGetPathModalityForAdapter@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@U_LUID@@_NW4DXGK_DIAG_CCD_BML_OR.c)
 *     MonitorIsMonitorAndLinkHDRCapable @ 0x1C00F2068 (MonitorIsMonitorAndLinkHDRCapable.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00F7E04 (DxgkReleaseSessionModeChangeLock.c)
 *     ?DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4D3DDDI_COLOR_SPACE_TYPE@@@Z @ 0x1C00F8014 (-DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4D3.c)
 *     ?GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C00FA1CC (-GetColorDepthFromPickedWireFormat@@YAIT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z.c)
 *     MonitorDisableMonitorVirtualModeSupport @ 0x1C01E3850 (MonitorDisableMonitorVirtualModeSupport.c)
 *     MonitorEnableDisableAdvancedColor @ 0x1C01E39F4 (MonitorEnableDisableAdvancedColor.c)
 *     MonitorIsMonitorVirtualModeDisabled @ 0x1C01E3F3C (MonitorIsMonitorVirtualModeDisabled.c)
 */

__int64 __fastcall DxgkDisplayConfigDeviceInfo(char a1, unsigned __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // ebx
  struct DXGADAPTER *v14; // rdi
  char v15; // al
  __int64 v16; // rdx
  int TargetBaseType; // eax
  DWORD LowPart; // ebx
  __int64 v20; // r12
  DXGGLOBAL *v21; // rax
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  struct DXGADAPTER *v27; // r15
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // ebx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  int MonitorHandle; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 IsMonitorAndLinkHDRCapable; // rbx
  struct HDXGMONITOR__ *v46; // rdi
  __int64 v47; // r9
  unsigned int v48; // eax
  int CurrentWireFormatAndColorSpace; // eax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v54; // r13d
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v55; // ebx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  int v60; // esi
  int v61; // eax
  unsigned __int8 v62; // r13
  _DWORD *v63; // r14
  bool v64; // zf
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rcx
  DXGGLOBAL *Global; // rax
  __int64 v69; // r9
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  struct DXGADAPTER *v74; // r15
  int v75; // eax
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // rax
  int v81; // ebx
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  _QWORD *v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  __int64 v89; // rdx
  _QWORD *v90; // rax
  __int64 v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  _QWORD *v96; // rax
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 v100; // rax
  __int64 v101; // rax
  __int64 v102; // rax
  _QWORD *v103; // rax
  _QWORD *v104; // rax
  _QWORD *v105; // rax
  __int64 v106; // rax
  _QWORD *v107; // rax
  __int64 v108; // rax
  unsigned int v109; // eax
  _QWORD *v110; // r11
  __int64 v111; // rax
  __int64 v112; // rax
  unsigned __int64 v113; // rbx
  __int64 v114; // rax
  int v115; // eax
  __int64 v116; // rdx
  _QWORD *v117; // rax
  __int64 v118; // rax
  struct DXGGLOBAL *v119; // rax
  D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v120; // eax
  int v121; // esi
  __int64 v122; // rax
  __int64 v123; // rcx
  __int64 v124; // rax
  __int64 v125; // rcx
  int v126; // esi
  DXGGLOBAL *v127; // rax
  __int64 v128; // r9
  struct DXGADAPTER *v129; // rax
  int v130; // ebx
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // r8
  __int64 v134; // r9
  _QWORD *v135; // rax
  int v136; // eax
  __int64 v137; // rdx
  __int64 v138; // rcx
  __int64 v139; // rbx
  __int64 v140; // rax
  _QWORD *v141; // rax
  unsigned __int8 v142; // [rsp+38h] [rbp-D0h] BYREF
  char v143; // [rsp+39h] [rbp-CFh] BYREF
  char v144; // [rsp+3Ah] [rbp-CEh] BYREF
  char v145; // [rsp+3Bh] [rbp-CDh] BYREF
  unsigned __int8 v146[4]; // [rsp+3Ch] [rbp-CCh] BYREF
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v147[2]; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v148; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 v149; // [rsp+50h] [rbp-B8h] BYREF
  struct _LUID v150; // [rsp+58h] [rbp-B0h]
  struct HDXGMONITOR__ *v151; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v152; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v153[8]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v154[32]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v155[40]; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v156[8]; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v157[32]; // [rsp+D0h] [rbp-38h] BYREF
  _BYTE v158[40]; // [rsp+F0h] [rbp-18h] BYREF
  _BYTE v159[8]; // [rsp+118h] [rbp+10h] BYREF
  _BYTE v160[32]; // [rsp+120h] [rbp+18h] BYREF
  _BYTE v161[40]; // [rsp+140h] [rbp+38h] BYREF
  _QWORD v162[8]; // [rsp+168h] [rbp+60h] BYREF
  _OWORD v163[20]; // [rsp+1A8h] [rbp+A0h] BYREF

  memset(v162, 0, sizeof(v162));
  EtwActivityIdControl(3u, (LPGUID)&v162[1]);
  v162[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v162[3]) = 39;
  if ( a2 )
  {
    v8 = *(_DWORD *)a2;
    if ( *(_DWORD *)a2 <= 0xAu )
    {
      if ( v8 < 9 )
      {
        switch ( v8 )
        {
          case 2u:
            if ( !a1 )
            {
              v100 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
              *(_QWORD *)(v100 + 24) = 5459LL;
              WdLogEvent5_WdAssertion(v100);
            }
            TargetBaseType = DisplayConfigFillTargetDeviceInfo(
                               (struct DISPLAYCONFIG_TARGET_DEVICE_NAME *)a2,
                               v4,
                               v6,
                               v7);
            goto LABEL_23;
          case 3u:
            if ( !a1 )
            {
              v98 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
              *(_QWORD *)(v98 + 24) = 5395LL;
              WdLogEvent5_WdAssertion(v98);
            }
            memset(v163, 0, 0x138uLL);
            v13 = 0;
            LODWORD(v14) = -1071774970;
            do
            {
              if ( v13 >= 0x10 )
                break;
              if ( *((_QWORD *)&v163[14] + 1) )
              {
                v99 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
                *(_QWORD *)(v99 + 24) = 5407LL;
                WdLogEvent5_WdAssertion(v99);
              }
              memset(v163, 0, 0x138uLL);
              LODWORD(v14) = DxgkIsVirtualizationDisabledForTarget(
                               *(struct _LUID *)(a2 + 8),
                               *(_DWORD *)(a2 + 16),
                               (__int64)&v146[1],
                               (__int64)&v146[2],
                               (__int64)&v163[8] + 8,
                               (__int64)&v163[8] + 12);
              if ( (int)v14 >= 0 )
              {
                *(_QWORD *)&v163[4] = *(_QWORD *)(a2 + 8);
                HIDWORD(v163[4]) = *(_DWORD *)(a2 + 16);
                DWORD1(v163[1]) = 65537;
                DWORD2(v163[4]) = v13;
                if ( !v146[1] || (v15 = 0, !v146[2]) )
                  v15 = 1;
                v16 = *(_QWORD *)(a2 + 8);
                BYTE1(v163[11]) = v15;
                DWORD2(v163[17]) = -13434880;
                *(_QWORD *)&v163[3] = 0xCF00000000000LL;
                LODWORD(v14) = BmlGetPathModalityForAdapter(v163, v16, 0LL, 1LL, 0);
                if ( (int)v14 >= 0 )
                {
                  DMMVideoSignalInfoToDisplayConfigVideoSignalInfo(
                    (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)&v163[5],
                    (struct DISPLAYCONFIG_VIDEO_SIGNAL_INFO *)(a2 + 32));
                  *(_QWORD *)(a2 + 20) = *(_QWORD *)(a2 + 56);
                }
                BmlFreePathsModality((struct _D3DKMT_GETPATHSMODALITY *)v163);
                ++v13;
              }
            }
            while ( (_DWORD)v14 == -1071774970 );
            return (unsigned int)v14;
          case 6u:
            if ( !a1 )
            {
              v97 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
              *(_QWORD *)(v97 + 24) = 5469LL;
              WdLogEvent5_WdAssertion(v97);
            }
            TargetBaseType = DisplayConfigGetTargetBaseType((struct _LUID *)a2, v4, v6, v7);
LABEL_23:
            LODWORD(v14) = TargetBaseType;
            return (unsigned int)v14;
        }
        if ( v8 - 7 <= 1 )
        {
          Global = DXGGLOBAL::GetGlobal(v5, v4, v6, v7);
          v74 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)(a2 + 8), &v149, v69);
          if ( v74 )
          {
            v142 = 0;
            v75 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v142, 0);
            v14 = (struct DXGADAPTER *)v75;
            if ( v75 >= 0 )
            {
              COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v153, v74, 0LL);
              v81 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v153);
              DXGADAPTER::ReleaseReference(v74);
              if ( v81 >= 0 )
              {
                v87 = *((_QWORD *)v74 + 285);
                if ( v87 && *(_BYTE *)(v87 + 134) )
                {
                  if ( *(_DWORD *)a2 == 7 )
                  {
                    if ( !a1 )
                    {
                      v88 = WdLogNewEntry5_WdAssertion(v83, v82, v84, v85);
                      *(_QWORD *)(v88 + 24) = 5550LL;
                      WdLogEvent5_WdAssertion(v88);
                    }
                    v89 = *(unsigned int *)(a2 + 16);
                    *(_DWORD *)(a2 + 20) = 0;
                    LODWORD(v14) = MonitorIsMonitorVirtualModeDisabled(v74, v89, &v145);
                    if ( (int)v14 >= 0 )
                      *(_DWORD *)(a2 + 20) = (v145 != 0) | *(_DWORD *)(a2 + 20) & 0xFFFFFFFE;
                  }
                  else
                  {
                    if ( a1 || *(_DWORD *)a2 != 8 )
                    {
                      v91 = WdLogNewEntry5_WdAssertion(v83, v82, v84, v85);
                      *(_QWORD *)(v91 + 24) = 5567LL;
                      WdLogEvent5_WdAssertion(v91);
                    }
                    if ( (int)CheckGivenTargetIsPartOfCloneGroup(
                                (ADAPTER_DISPLAY **)v74,
                                *(unsigned int *)(a2 + 16),
                                v146) >= 0
                      && v146[0] )
                    {
                      v96 = (_QWORD *)WdLogNewEntry5_WdWarning(v93, v92, v94, v95);
                      v96[3] = *((int *)v74 + 68);
                      v96[4] = *((unsigned int *)v74 + 67);
                      v96[5] = *(unsigned int *)(a2 + 16);
                      WdLogEvent5_WdWarning(v96);
                      LODWORD(v14) = -1073741649;
                    }
                    else
                    {
                      LOBYTE(v94) = *(_BYTE *)(a2 + 20) & 1;
                      LODWORD(v14) = MonitorDisableMonitorVirtualModeSupport(v74, *(unsigned int *)(a2 + 16), v94, v162);
                    }
                  }
                }
                else
                {
                  v90 = (_QWORD *)WdLogNewEntry5_WdWarning(v83, v82, v84, v85);
                  v90[3] = v74;
                  v90[4] = *((int *)v74 + 68);
                  v90[5] = *((unsigned int *)v74 + 67);
                  WdLogEvent5_WdWarning(v90);
                  LODWORD(v14) = -1073741637;
                }
              }
              else
              {
                v86 = (_QWORD *)WdLogNewEntry5_WdWarning(v83, v82, v84, v85);
                v86[3] = v74;
                v86[4] = *((int *)v74 + 68);
                v86[5] = *((unsigned int *)v74 + 67);
                WdLogEvent5_WdWarning(v86);
                LODWORD(v14) = -1073741811;
              }
              COREACCESS::~COREACCESS((COREACCESS *)v155);
              COREACCESS::~COREACCESS((COREACCESS *)v154);
            }
            else
            {
              v80 = WdLogNewEntry5_WdWarning(v77, v76, v78, v79);
              *(_QWORD *)(v80 + 24) = v14;
              WdLogEvent5_WdWarning(v80);
            }
            v64 = v142 == 0;
            goto LABEL_53;
          }
          goto LABEL_58;
        }
LABEL_129:
        LODWORD(v14) = -1073741811;
        return (unsigned int)v14;
      }
      v148 = 0LL;
      v149 = 0LL;
      if ( v8 == 9 )
      {
        v148 = a2;
      }
      else
      {
        if ( a1 || v8 != 10 )
        {
          v101 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
          *(_QWORD *)(v101 + 24) = 5708LL;
          WdLogEvent5_WdAssertion(v101);
        }
        v149 = a2;
      }
      v150 = *(struct _LUID *)(a2 + 8);
      LowPart = v150.LowPart;
      v20 = *(unsigned int *)(a2 + 16);
      v21 = DXGGLOBAL::GetGlobal(v5, v4, v6, v7);
      v27 = DXGGLOBAL::ReferenceAdapterByLuid(v21, v150, &v152, v22);
      if ( !v27 )
      {
        v66 = WdLogNewEntry5_WdTrace(v24, v23, v25, v26);
        *(_QWORD *)(v66 + 24) = v150.HighPart;
        v67 = LowPart;
        goto LABEL_59;
      }
      v144 = 0;
      v28 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v144, 0);
      v14 = (struct DXGADAPTER *)v28;
      if ( v28 < 0 )
      {
        v102 = WdLogNewEntry5_WdError(v30, v29);
        *(_QWORD *)(v102 + 24) = v14;
        WdLogEvent5_WdError(v102);
LABEL_96:
        v64 = v144 == 0;
LABEL_53:
        if ( !v64 )
          DxgkReleaseSessionModeChangeLock();
        return (unsigned int)v14;
      }
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v156, v27, 0LL);
      v31 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v156);
      DXGADAPTER::ReleaseReference(v27);
      if ( v31 < 0 )
      {
        v103 = (_QWORD *)WdLogNewEntry5_WdError(v33, v32);
        v103[3] = v27;
        v103[4] = *((int *)v27 + 68);
        v103[5] = *((unsigned int *)v27 + 67);
        WdLogEvent5_WdError(v103);
        LODWORD(v14) = -1073741811;
      }
      else
      {
        if ( *((_QWORD *)v27 + 285) )
        {
          if ( (unsigned int)CheckGivenTargetIsPartOfCloneGroup((ADAPTER_DISPLAY **)v27, (unsigned int)v20, &v146[3]) == -1073741275 )
          {
            v105 = (_QWORD *)WdLogNewEntry5_WdWarning(v37, v36, v38, v39);
            v105[3] = *((int *)v27 + 68);
            v105[4] = *((unsigned int *)v27 + 67);
            v105[5] = v20;
            v105[6] = -1073741275LL;
            WdLogEvent5_WdWarning(v105);
            v142 = 0;
          }
          else
          {
            v142 = v146[3];
          }
          MonitorHandle = MonitorGetMonitorHandle(v27, (unsigned int)v20, 0LL, &DxgkDisplayConfigDeviceInfo, &v151);
          IsMonitorAndLinkHDRCapable = MonitorHandle;
          if ( MonitorHandle < 0 )
            goto LABEL_98;
          v46 = v151;
          if ( !v151 )
          {
            v106 = WdLogNewEntry5_WdAssertion(v42, v41, v43, v44);
            *(_QWORD *)(v106 + 24) = 5802LL;
            WdLogEvent5_WdAssertion(v106);
          }
          v143 = 0;
          IsMonitorAndLinkHDRCapable = (int)MonitorIsMonitorAndLinkHDRCapable(v46, &v143);
          MonitorReleaseMonitorHandle(v27, v46, &DxgkDisplayConfigDeviceInfo, v47);
          if ( (int)IsMonitorAndLinkHDRCapable < 0 )
          {
LABEL_98:
            v107 = (_QWORD *)WdLogNewEntry5_WdError(v42, v41);
            v107[3] = *((int *)v27 + 68);
            v107[4] = *((unsigned int *)v27 + 67);
            v107[5] = v20;
            v107[6] = IsMonitorAndLinkHDRCapable;
            WdLogEvent5_WdError(v107);
            LODWORD(v14) = IsMonitorAndLinkHDRCapable;
            goto LABEL_95;
          }
          v48 = ADAPTER_DISPLAY::MapVidPnTargetToVidPnSource(*((ADAPTER_DISPLAY **)v27 + 285), v20);
          CurrentWireFormatAndColorSpace = DmmGetCurrentWireFormatAndColorSpace(
                                             v27,
                                             v48,
                                             v20,
                                             &v147[1],
                                             (enum D3DDDI_COLOR_SPACE_TYPE *)v147);
          v14 = (struct DXGADAPTER *)CurrentWireFormatAndColorSpace;
          if ( CurrentWireFormatAndColorSpace < 0 )
          {
            v108 = WdLogNewEntry5_WdWarning(v51, v50, v52, v53);
            *(_QWORD *)(v108 + 24) = *((int *)v27 + 68);
            *(_QWORD *)(v108 + 32) = *((unsigned int *)v27 + 67);
            v109 = ADAPTER_DISPLAY::MapVidPnTargetToVidPnSource(*((ADAPTER_DISPLAY **)v27 + 285), v20);
            v110[5] = v109;
            v110[6] = v20;
            v110[7] = v14;
            WdLogEvent5_WdWarning(v110);
            v55.Value = 0;
            v54.Value = 4;
          }
          else
          {
            v54.0 = (struct _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE::$BC67B894A1A9CCB3D1B7060E96581CDD)v147[0];
            v55.0 = (struct _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE::$BC67B894A1A9CCB3D1B7060E96581CDD)v147[1];
          }
          v60 = 1;
          if ( GetColorDepthFromPickedWireFormat(v55) > 8 && v54.Value == 12 )
          {
            v62 = 1;
            v61 = 0;
          }
          else
          {
            v61 = 0;
            v62 = 0;
          }
          if ( v142 && v62 )
          {
            v111 = WdLogNewEntry5_WdAssertion(v57, v56, v58, v59);
            *(_QWORD *)(v111 + 24) = 5851LL;
            WdLogEvent5_WdAssertion(v111);
            v61 = 0;
          }
          if ( *(_DWORD *)a2 == 9 )
          {
            v63 = (_DWORD *)v148;
            if ( !v148 )
            {
              v112 = WdLogNewEntry5_WdAssertion(v57, v56, v58, v59);
              *(_QWORD *)(v112 + 24) = 5856LL;
              WdLogEvent5_WdAssertion(v112);
              v61 = 0;
            }
            if ( v143 && !v142 )
              v61 = 1;
            v63[5] = (2 * v62) | v61 & 0xFFFFFFFD | v63[5] & 0xFFFFFFFC;
            v63[7] = GetColorDepthFromPickedWireFormat(v55);
            if ( (*(_BYTE *)&v55.0 & 0xFC) != 0 )
            {
              v60 = 0;
            }
            else if ( (*(_WORD *)&v55.0 & 0x3F00) == 0 )
            {
              if ( (v55.Value & 0xFC000) != 0 )
              {
                v60 = 2;
              }
              else if ( (v55.Value & 0x3F00000) != 0 )
              {
                v60 = 3;
              }
              else
              {
                v60 = (v55.Value & 0xFC000000) != 0 ? 4 : -1;
              }
            }
            v63[6] = v60;
LABEL_52:
            COREACCESS::~COREACCESS((COREACCESS *)v158);
            COREACCESS::~COREACCESS((COREACCESS *)v157);
            v64 = v144 == 0;
            goto LABEL_53;
          }
          v113 = v149;
          if ( !v149 )
          {
            v114 = WdLogNewEntry5_WdAssertion(v57, v56, v58, v59);
            *(_QWORD *)(v114 + 24) = 5869LL;
            WdLogEvent5_WdAssertion(v114);
          }
          if ( v143 && !v142 )
          {
            LOBYTE(v58) = *(_BYTE *)(v113 + 20) & 1;
            v115 = MonitorEnableDisableAdvancedColor(v27, (unsigned int)v20, v58);
            v14 = (struct DXGADAPTER *)v115;
            if ( v115 >= 0 )
            {
              if ( v115 == 255 && (*(_BYTE *)(v113 + 20) & 1) != v62 )
                LODWORD(v14) = 0;
              goto LABEL_52;
            }
            v117 = (_QWORD *)WdLogNewEntry5_WdError(0LL, v116);
            v117[3] = *((int *)v27 + 68);
            v117[4] = *((unsigned int *)v27 + 67);
            v117[5] = v20;
            v117[6] = v14;
            WdLogEvent5_WdError(v117);
            goto LABEL_95;
          }
        }
        else
        {
          v104 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v32, v34, v35);
          v104[3] = v27;
          v104[4] = *((int *)v27 + 68);
          v104[5] = *((unsigned int *)v27 + 67);
          WdLogEvent5_WdWarning(v104);
        }
        LODWORD(v14) = -1073741637;
      }
LABEL_95:
      COREACCESS::~COREACCESS((COREACCESS *)v158);
      COREACCESS::~COREACCESS((COREACCESS *)v157);
      goto LABEL_96;
    }
    if ( v8 != -10 )
    {
      if ( v8 != -6 )
      {
        if ( v8 == -5 )
        {
          if ( !a1 )
          {
            v118 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
            *(_QWORD *)(v118 + 24) = 5598LL;
            WdLogEvent5_WdAssertion(v118);
          }
          v119 = DXGGLOBAL::GetGlobal(v5, v4, v6, v7);
          v120 = D3DKMDT_VPPR_GET_CONTENT_ROTATION(*((D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)v119 + 202));
          v121 = 1;
          LODWORD(v14) = 0;
          if ( (unsigned int)(v120 - 1) <= 3 )
            v121 = v120;
          *(_DWORD *)(a2 + 20) = v121;
          return (unsigned int)v14;
        }
        goto LABEL_129;
      }
      if ( a1 )
      {
        v122 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
        *(_QWORD *)(v122 + 24) = 5608LL;
        WdLogEvent5_WdAssertion(v122);
      }
      LODWORD(v14) = 0;
      if ( g_OSTestSigningEnabled && !*(_DWORD *)(a2 + 20) )
      {
        *((_DWORD *)DXGGLOBAL::GetGlobal(v5, v4, v6, v7) + 202) = 0;
        return (unsigned int)v14;
      }
      v123 = *(unsigned int *)(a2 + 20);
      if ( (unsigned int)(v123 - 1) > 3 )
      {
        LODWORD(v14) = -1073741811;
        v124 = WdLogNewEntry5_WdError(v123, v4);
        *(_QWORD *)(v124 + 24) = *(int *)(a2 + 20);
        *(_QWORD *)(v124 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v124);
        return (unsigned int)v14;
      }
      v125 = (unsigned int)(v123 - 1);
      if ( (_DWORD)v125 )
      {
        v125 = (unsigned int)(v125 - 1);
        if ( !(_DWORD)v125 )
        {
          v126 = 2;
          goto LABEL_145;
        }
        v125 = (unsigned int)(v125 - 1);
        if ( !(_DWORD)v125 )
        {
          v126 = 3;
          goto LABEL_145;
        }
        if ( (_DWORD)v125 == 1 )
        {
          v126 = 4;
LABEL_145:
          *((_DWORD *)DXGGLOBAL::GetGlobal(v125, v4, v6, v7) + 202) = v126;
          return (unsigned int)v14;
        }
      }
      v126 = 1;
      goto LABEL_145;
    }
    v127 = DXGGLOBAL::GetGlobal(v5, v4, v6, v7);
    v129 = DXGGLOBAL::ReferenceAdapterByLuid(v127, *(struct _LUID *)(a2 + 8), &v148, v128);
    v14 = v129;
    if ( !v129 )
    {
LABEL_58:
      v66 = WdLogNewEntry5_WdTrace(v71, v70, v72, v73);
      *(_QWORD *)(v66 + 24) = *(int *)(a2 + 12);
      v67 = *(unsigned int *)(a2 + 8);
LABEL_59:
      *(_QWORD *)(v66 + 32) = v67;
      return -1073741811LL;
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v159, v129, 0LL);
    v130 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v159);
    DXGADAPTER::ReleaseReference(v14);
    if ( v130 >= 0 )
    {
      if ( (*((_DWORD *)v14 + 75) & 0x100) == 0 )
      {
        v135 = (_QWORD *)WdLogNewEntry5_WdWarning(v132, v131, v133, v134);
        v135[3] = v14;
        v135[4] = *((int *)v14 + 68);
        v135[5] = *((unsigned int *)v14 + 67);
        WdLogEvent5_WdWarning(v135);
        LODWORD(v14) = -1073741637;
LABEL_154:
        COREACCESS::~COREACCESS((COREACCESS *)v161);
        COREACCESS::~COREACCESS((COREACCESS *)v160);
        return (unsigned int)v14;
      }
      v136 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64))(*(_QWORD *)(*((_QWORD *)v14 + 285) + 16LL)
                                                                         + 1600LL))(
               *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 285) + 16LL) + 1520LL),
               *(unsigned int *)(a2 + 16),
               a2 + 20);
      v139 = v136;
      if ( v136 >= 0 )
      {
        LODWORD(v14) = 0;
        goto LABEL_154;
      }
      v140 = WdLogNewEntry5_WdError(v138, v137);
      *(_QWORD *)(v140 + 24) = v139;
      WdLogEvent5_WdError(v140);
    }
    v141 = (_QWORD *)WdLogNewEntry5_WdWarning(v132, v131, v133, v134);
    v141[3] = v14;
    v141[4] = *((int *)v14 + 68);
    v141[5] = *((unsigned int *)v14 + 67);
    WdLogEvent5_WdWarning(v141);
    LODWORD(v14) = -1073741811;
    goto LABEL_154;
  }
  v65 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
  *(_QWORD *)(v65 + 24) = 5380LL;
  WdLogEvent5_WdAssertion(v65);
  return -1073741811LL;
}
