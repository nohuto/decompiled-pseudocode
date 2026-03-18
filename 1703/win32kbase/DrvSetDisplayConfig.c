/*
 * XREFs of DrvSetDisplayConfig @ 0x1C0056E00
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@HPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0056058 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     DrvChangeDisplaySettings @ 0x1C00563A0 (DrvChangeDisplaySettings.c)
 *     xxxUserSetDisplayConfig @ 0x1C0062EA0 (xxxUserSetDisplayConfig.c)
 *     InitVideo @ 0x1C009C744 (InitVideo.c)
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C009CEF4 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     _DrvSetDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1C00578E4 (_DrvSetDisplayConfig_--_2_--_AUTO--__AUTO.c)
 *     ?FreePathsModality@@YAXPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0057940 (-FreePathsModality@@YAXPEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 *     GetPathsModality @ 0x1C0057970 (GetPathsModality.c)
 *     ?AllocPathsModality@@YAPEAU_D3DKMT_GETPATHSMODALITY@@G@Z @ 0x1C0057A4C (-AllocPathsModality@@YAPEAU_D3DKMT_GETPATHSMODALITY@@G@Z.c)
 *     ??0AUTO_TGO@@IEAA@XZ @ 0x1C0057AC4 (--0AUTO_TGO@@IEAA@XZ.c)
 *     LogDiagSDC @ 0x1C0057B04 (LogDiagSDC.c)
 *     ?GetCcdRawmodeFlag@@YAIXZ @ 0x1C0057C44 (-GetCcdRawmodeFlag@@YAIXZ.c)
 *     ?CreatePathPersistentMonitorsIfNeeded@@YAJIPEAU_D3DKMT_GETPATHSMODALITY@@PEAG@Z @ 0x1C005A70C (-CreatePathPersistentMonitorsIfNeeded@@YAJIPEAU_D3DKMT_GETPATHSMODALITY@@PEAG@Z.c)
 *     ?DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C005A7BC (-DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAU_D3DKMT_GETPATHSMODALITY@.c)
 *     ApplyPathsModality @ 0x1C005B154 (ApplyPathsModality.c)
 *     ??8@YA_NAEBU_LUID@@0@Z @ 0x1C0068A68 (--8@YA_NAEBU_LUID@@0@Z.c)
 *     ?NotifyStatusChange@?$AUTO_STATUS_CHANGE_NOTIFY@$01$02@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C008D4B4 (-NotifyStatusChange@-$AUTO_STATUS_CHANGE_NOTIFY@$01$02@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@.c)
 *     ?DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z @ 0x1C00910C4 (-DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C009B960 (DrvDxgkLogCodePointPacket.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     ?AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO@@PEAPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00F4088 (-AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO@@PEAPEAU_D3DKMT_GETPATHSM.c)
 *     ?ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@IIIPEAUDISPLAYCONFIG_MODE_INFO@@IHPEAU_D3DKMT_GETPATHSMODALITY@@PEAH@Z @ 0x1C00F41A0 (-ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@IIIPEAUD.c)
 *     ?ConvertDisplayConfigScalingToPathModalityForPath@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@PEAU_D3DKMT_PATHMODALITY_DESCRIPTOR@@PEAH@Z @ 0x1C00F4754 (-ConvertDisplayConfigScalingToPathModalityForPath@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@PEAU_D3DKMT_P.c)
 *     ?ConvertDisplayConfigToPathModality@@YAJIPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAYCONFIG_MODE_INFO@@IPEAU_D3DKMT_GETPATHSMODALITY@@PEAH@Z @ 0x1C00F47D8 (-ConvertDisplayConfigToPathModality@@YAJIPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAYCONFIG_MODE_IN.c)
 *     ?ConvertPreferredScalingToAdapterDefault@@YAXPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00F49A0 (-ConvertPreferredScalingToAdapterDefault@@YAXPEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?DrvCreatePathModalityFromAllPaths@@YAJPEAPEAU_D3DKMT_GETPATHSMODALITY@@I0@Z @ 0x1C00F6AEC (-DrvCreatePathModalityFromAllPaths@@YAJPEAPEAU_D3DKMT_GETPATHSMODALITY@@I0@Z.c)
 *     ?DrvFunctionalizeBaseVidMode@@YAJAEBU_RETRY_MODE@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00F6D30 (-DrvFunctionalizeBaseVidMode@@YAJAEBU_RETRY_MODE@@PEAU_D3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?ReplacePreferredScaling@@YAJPEBU_D3DKMT_GETPATHSMODALITY@@PEAU1@@Z @ 0x1C00F7F34 (-ReplacePreferredScaling@@YAJPEBU_D3DKMT_GETPATHSMODALITY@@PEAU1@@Z.c)
 */

__int64 __fastcall DrvSetDisplayConfig(
        unsigned int a1,
        struct DISPLAYCONFIG_PATH_INFO *a2,
        unsigned int a3,
        struct DISPLAYCONFIG_MODE_INFO *a4,
        int a5,
        unsigned int a6,
        void *a7,
        char a8,
        __int64 a9,
        struct _MDEV *a10,
        struct _MDEV **a11,
        unsigned int *a12,
        unsigned int *a13,
        char *a14,
        _BYTE *a15,
        __int64 a16)
{
  int v17; // r14d
  __int64 v18; // rax
  unsigned int v19; // r13d
  char v20; // bl
  __int64 v21; // rdx
  __int64 v22; // rcx
  bool v23; // zf
  __int64 v24; // rcx
  char v25; // r15
  char v26; // si
  __int64 v27; // rdx
  __int64 v28; // rcx
  struct DISPLAYCONFIG_PATH_INFO *v29; // rdi
  struct _D3DKMT_GETPATHSMODALITY *v30; // r9
  __int64 v31; // rdx
  int v32; // eax
  unsigned int v33; // esi
  __int64 v34; // rbx
  __int64 v35; // rax
  unsigned int v36; // r12d
  int v37; // edi
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  int v45; // edi
  __int64 v46; // rcx
  int v47; // eax
  char v48; // r12
  unsigned int v49; // r14d
  wchar_t *v50; // rcx
  unsigned int v51; // r13d
  __int64 v52; // rax
  _DWORD *v53; // rax
  bool v54; // cf
  unsigned int v55; // eax
  char *v56; // rsi
  char *PoolWithTag; // rax
  wchar_t *v58; // rdx
  unsigned int v59; // r8d
  __int64 v60; // rcx
  int v61; // r8d
  struct _MDEV **v62; // rsi
  int v63; // eax
  int v64; // r14d
  struct _MDEV *v65; // r14
  int v66; // eax
  unsigned int v67; // eax
  char v68; // al
  struct _MDEV **v69; // rbx
  __int64 v70; // rcx
  unsigned int v71; // ebx
  struct _DISPLAYCONFIG_CDS_REQUEST *v72; // rax
  __int64 v73; // rdx
  _BOOL8 v74; // rcx
  bool v75; // sf
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rax
  struct _DISPLAYCONFIG_CDS_REQUEST *v80; // r12
  __int64 v81; // rax
  __int64 v82; // rcx
  void *v83; // r12
  int v84; // eax
  __int64 v85; // rax
  __int64 v86; // rax
  int v87; // ebx
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rax
  unsigned int v94; // edi
  const struct _RETRY_MODE *v95; // r14
  __int64 v96; // rcx
  int v97; // eax
  __int64 v98; // rax
  int v99; // eax
  __int64 v100; // rdx
  __int64 v101; // rax
  __int64 v102; // rax
  unsigned int v103; // r13d
  char *v104; // r14
  __int64 v105; // rdx
  __int64 v106; // rcx
  struct _D3DKMT_GETPATHSMODALITY *v107; // r9
  __int64 v108; // rax
  __int64 v109; // rax
  int v110; // r15d
  struct DISPLAYCONFIG_PATH_INFO *v111; // r12
  __int64 v112; // rax
  const struct _D3DKMT_GETPATHSMODALITY *v113; // r14
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // rax
  __int64 v117; // rax
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 v120; // rax
  __int64 v121; // rax
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 v124; // rax
  __int64 v125; // rax
  __int64 v126; // rax
  __int64 v127; // rax
  __int64 v128; // rax
  __int64 v129; // rax
  __int64 v130; // rax
  __int64 v131; // rcx
  __int64 v132; // rax
  __int64 v133; // rax
  struct _MDEV *v134; // r12
  __int64 v135; // rax
  int v136; // edx
  __int64 v137; // rax
  __int64 v138; // rax
  int v139; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v140[4]; // [rsp+50h] [rbp-B0h] BYREF
  int v141; // [rsp+54h] [rbp-ACh] BYREF
  bool v142; // [rsp+58h] [rbp-A8h]
  char v143; // [rsp+59h] [rbp-A7h]
  char v144; // [rsp+5Ah] [rbp-A6h]
  char v145; // [rsp+5Bh] [rbp-A5h] BYREF
  int v146; // [rsp+5Ch] [rbp-A4h]
  bool v147; // [rsp+60h] [rbp-A0h]
  bool v148; // [rsp+61h] [rbp-9Fh]
  int v149; // [rsp+64h] [rbp-9Ch] BYREF
  int v150; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v151; // [rsp+6Ch] [rbp-94h]
  unsigned int v152; // [rsp+70h] [rbp-90h]
  unsigned int v153; // [rsp+74h] [rbp-8Ch]
  unsigned int v154; // [rsp+78h] [rbp-88h]
  unsigned int v155; // [rsp+7Ch] [rbp-84h]
  struct _MDEV **v156; // [rsp+80h] [rbp-80h]
  struct _MDEV *v157; // [rsp+88h] [rbp-78h]
  unsigned __int16 v158; // [rsp+90h] [rbp-70h] BYREF
  struct _DISPLAYCONFIG_CDS_REQUEST *v159; // [rsp+98h] [rbp-68h]
  int v160; // [rsp+A0h] [rbp-60h]
  void *v161; // [rsp+A8h] [rbp-58h]
  struct DISPLAYCONFIG_MODE_INFO *v162; // [rsp+B0h] [rbp-50h]
  struct DISPLAYCONFIG_PATH_INFO *v163; // [rsp+B8h] [rbp-48h]
  __int64 v164; // [rsp+C0h] [rbp-40h]
  _QWORD v165[6]; // [rsp+D0h] [rbp-30h] BYREF
  struct _D3DKMT_GETPATHSMODALITY *v166[2]; // [rsp+100h] [rbp+0h] BYREF
  struct _D3DKMT_GETPATHSMODALITY *v167; // [rsp+110h] [rbp+10h] BYREF
  char v168; // [rsp+118h] [rbp+18h]
  __int64 v169; // [rsp+120h] [rbp+20h]
  int v170; // [rsp+130h] [rbp+30h]
  __int64 v171; // [rsp+138h] [rbp+38h]
  void *v172; // [rsp+140h] [rbp+40h] BYREF
  unsigned int *v173; // [rsp+148h] [rbp+48h]
  unsigned int *v174; // [rsp+150h] [rbp+50h]
  char *v175; // [rsp+158h] [rbp+58h]
  _BYTE *v176; // [rsp+160h] [rbp+60h]
  __int64 v177; // [rsp+168h] [rbp+68h]
  _DWORD v178[4]; // [rsp+170h] [rbp+70h] BYREF
  void *retaddr; // [rsp+1D8h] [rbp+D8h]

  v161 = a7;
  v173 = a12;
  v175 = a14;
  v176 = a15;
  v171 = a16;
  v152 = a1;
  v174 = a13;
  v162 = a4;
  v155 = a3;
  v17 = 0;
  v147 = gbBaseVideo != 0;
  v163 = a2;
  v160 = -1;
  v159 = (struct _DISPLAYCONFIG_CDS_REQUEST *)a9;
  v157 = a10;
  v156 = a11;
  v151 = 0;
  v153 = gbBaseVideo != 0 ? 3 : 0;
  v144 = 0;
  v140[0] = 0;
  v145 = 0;
  v141 = 0;
  v149 = -5;
  v146 = 0;
  v154 = 0;
  v18 = WdLogNewEntry5_WdEvent(0LL, a2);
  v19 = a5;
  *(_QWORD *)(v18 + 24) = (unsigned int)a5;
  WdLogEvent5_WdEvent(v18);
  v164 = MEMORY[0xFFFFF78000000320];
  v20 = a6;
  v177 = v164 * KeQueryTimeIncrement();
  DisplayScenarioJournalBegin((unsigned int)a5, a6, (unsigned __int16)gProtocolType);
  DisplayScenarioJournalSetSDCPathsAndModes(72 * v152, v152, a2, v155 << 6, v155, v162);
  v172 = retaddr;
  AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v172, 4LL);
  v23 = gOldModeChange == 0;
  *a11 = 0LL;
  if ( !v23 )
  {
    v85 = WdLogNewEntry5_WdAssertion(v22, v21);
    WdLogEvent5_WdAssertion(v85);
  }
  if ( (a5 & 0x1000) != 0 && a8 )
    WdDiagNotifyUser(40LL, 3LL, 0LL, 0LL);
  v148 = (a6 & 2) != 0 && (a5 & 0x88F) == 2191;
  AUTO_TGO::AUTO_TGO((AUTO_TGO *)v165);
  v165[0] = &off_1C015AEB8;
  v169 = v171;
  v25 = 1;
  *(_OWORD *)v166 = 0LL;
  v167 = 0LL;
  v168 = 0;
  if ( gProtocolType || (a6 & 1) != 0 )
  {
    if ( (a6 & 0x20) != 0 )
    {
      v133 = WdLogNewEntry5_WdAssertion(v24, 0LL);
      WdLogEvent5_WdAssertion(v133);
    }
    v83 = v161;
    v84 = DrvChangeDisplayFallback(
            v161,
            BYTE1(a5) & 1,
            a6 & 1,
            a10,
            a11,
            (enum _DXGK_DIAG_SDC_STAGE *)&v141,
            v140,
            &v149);
    v33 = v141;
    LODWORD(v29) = v84;
    if ( v84 < 0 )
    {
      v69 = v156;
      goto LABEL_162;
    }
    if ( (a6 & 1) != 0 )
      v33 = 30;
    goto LABEL_139;
  }
  if ( (a5 & 0x40000000) != 0 )
  {
    if ( gbBaseVideo )
    {
      v86 = WdLogNewEntry5_WdAssertion(v24, 0LL);
      WdLogEvent5_WdAssertion(v86);
    }
    LODWORD(v29) = GetPathsModality(v24, v166, 15LL, 0LL);
    if ( (int)v29 >= 0 )
    {
      v87 = *((_DWORD *)v166[0] + 8) & 0xF;
      if ( v87 == 1 || v87 == 8 )
      {
        v33 = 25;
        LODWORD(v29) = -1073741637;
        v141 = 25;
        goto LABEL_161;
      }
      LOBYTE(v28) = 1;
      v143 = 1;
      LOBYTE(v27) = v87 == 4;
      v26 = 1;
      ((void (__fastcall *)(__int64, __int64, _QWORD))qword_1C018BC80)(v28, v27, 0LL);
      if ( v87 != 4 )
      {
        v20 = a6;
        v19 = 132;
        a5 = 132;
        goto LABEL_12;
      }
      v33 = 26;
      goto LABEL_158;
    }
    v33 = 2;
LABEL_139:
    v141 = v33;
    goto LABEL_140;
  }
  if ( a5 < 0 )
  {
    v143 = 0;
    v26 = 0;
    if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD))qword_1C018BC80)(0LL) )
    {
      v19 = 2191;
LABEL_170:
      a5 = v19;
      goto LABEL_12;
    }
    v33 = 18;
LABEL_158:
    v69 = v156;
    LODWORD(v29) = 0;
    v140[0] = 1;
    goto LABEL_89;
  }
  if ( (a5 & 0xF) == 0xF && ((a6 & 0x20) == 0 || !*(_DWORD *)(a9 + 20)) )
  {
    v143 = ((__int64 (*)(void))qword_1C018BC88)();
    v26 = v143;
    if ( !v143 )
      goto LABEL_12;
    v19 = a5 & 0xFFFFFFF0 | 4;
    goto LABEL_170;
  }
  if ( (a5 & 0x200) != 0 || (a6 & 0x20) != 0 && *(_DWORD *)(a9 + 20) || (a5 & 0x1F) != 0 && (a5 & 0x40) == 0 )
  {
    v26 = 0;
    v143 = 0;
    ((void (__fastcall *)(_QWORD))qword_1C018BC80)(0LL);
  }
  else
  {
    v26 = ((__int64 (*)(void))qword_1C018BC88)();
    v143 = v26;
  }
LABEL_12:
  LODWORD(v29) = ((__int64 (*)(void))qword_1C018BA50)();
  if ( (int)v29 < 0 )
  {
    v33 = 12;
    v17 = 6;
    goto LABEL_139;
  }
  v168 = 1;
  v170 = v19 & 0x80;
  if ( (v19 & 0x80) != 0 )
  {
    v31 = 1LL;
    if ( !v26 && (v19 & 0xF) != 0 && (v20 & 0x20) == 0 )
      v31 = 3LL;
    v32 = ((__int64 (__fastcall *)(__int64))qword_1C018BA70)(v31);
    v29 = (struct DISPLAYCONFIG_PATH_INFO *)v32;
    if ( v32 < 0 )
    {
      v91 = WdLogNewEntry5_WdEvent(v28, v27);
      *(_QWORD *)(v91 + 24) = v29;
      WdLogEvent5_WdEvent(v91);
      DrvDxgkLogCodePointPacket(4LL, (unsigned int)v29, 0LL, 0LL);
      LODWORD(v29) = 0;
    }
  }
  v33 = v141;
  LODWORD(v34) = v164;
  v142 = (v19 & 0x240) == 512;
  while ( 1 )
  {
    v35 = WdLogNewEntry5_WdEvent(v28, v27);
    *(_QWORD *)(v35 + 24) = v151;
    *(_QWORD *)(v35 + 32) = (int)v29;
    WdLogEvent5_WdEvent(v35);
    v36 = 0;
    v150 = 0;
    v145 = 0;
    v140[0] = 0;
    FreePathsModality(v166[0]);
    FreePathsModality(v166[1]);
    v166[1] = 0LL;
    v166[0] = 0LL;
    if ( v147 )
      break;
    v37 = v19 & 0xF;
    if ( (v19 & 0xF) != 0 )
    {
      if ( (a6 & 0x20) == 0 || !*((_QWORD *)v159 + 4) )
        v25 = 0;
      if ( v37 != 15 && (a6 & 0x20) != 0 )
      {
        LOBYTE(v28) = v37 != 15;
        v52 = WdLogNewEntry5_WdAssertion(v28, v27);
        WdLogEvent5_WdAssertion(v52);
      }
      if ( v25 && !*((_DWORD *)v159 + 5) )
        v37 = 0x2000000;
      LODWORD(v29) = GetPathsModality(v25 != 0, v166, ((a6 & 0x20) != 0 ? 0x9000 : 0) | (unsigned int)v37, v25 != 0);
      if ( (int)v29 < 0 )
      {
        v33 = 2;
        v17 = 7;
      }
      else
      {
        if ( !*((_WORD *)v166[0] + 10) )
        {
          v102 = WdLogNewEntry5_WdAssertion(v28, v27);
          WdLogEvent5_WdAssertion(v102);
        }
        if ( v143 || (v142 = 1, (v19 & 0x40) != 0) )
          v142 = 0;
        if ( !v25 )
          goto LABEL_34;
        v80 = v159;
        if ( !*((_DWORD *)v159 + 5) || (v142 = 1, !*((_DWORD *)v159 + 6)) )
          v142 = 0;
        LODWORD(v29) = DrvValidateAndApplyDevMode(v159, v166);
        if ( (int)v29 >= 0 )
        {
          v36 = *((_DWORD *)v159 + 5) != 0;
          v150 = v36;
LABEL_34:
          v17 = 10;
          v146 = 10;
          v25 = 1;
          goto LABEL_35;
        }
        v33 = 2;
        v17 = *((_DWORD *)v80 + 13);
        v149 = *((_DWORD *)v80 + 12);
        if ( (_DWORD)v29 == -1073741266 )
          v33 = 23;
      }
      v146 = v17;
      v25 = 1;
      goto LABEL_82;
    }
    if ( (v19 & 0x10) == 0 )
    {
      if ( (v19 & 0x20) == 0 )
      {
        v130 = WdLogNewEntry5_WdAssertion(v28, v27);
        *(_QWORD *)(v130 + 24) = v19;
        WdLogEvent5_WdAssertion(v130);
        v33 = 9;
        goto LABEL_267;
      }
      v150 = 0;
      if ( (a6 & 8) != 0 )
      {
        LODWORD(v29) = GetPathsModality(v28, v166, 64LL, 0LL);
        if ( (int)v29 < 0 )
        {
          v33 = 32;
          goto LABEL_82;
        }
        v30 = v166[0];
        v103 = *((unsigned __int16 *)v166[0] + 10);
        if ( (_WORD)v103 )
        {
          while ( 1 )
          {
            v29 = v163;
            v104 = (char *)v30 + 264 * v36;
            if ( (unsigned __int8)operator==(v104 + 64, v163, 0LL)
              && *((_DWORD *)v104 + 18) == *((_DWORD *)v29 + 2)
              && *((_DWORD *)v104 + 19) == *((_DWORD *)v29 + 7) )
            {
              if ( (*((_DWORD *)v104 + 12) & 0x800LL) == 0 )
              {
                v108 = WdLogNewEntry5_WdAssertion(v106, v105);
                WdLogEvent5_WdAssertion(v108);
                v107 = v166[0];
              }
              v34 = *((_QWORD *)v104 + 24);
              v164 = v34;
              if ( (*((_QWORD *)v104 + 6) & 0x4000000000000LL) == 0 )
              {
                v109 = WdLogNewEntry5_WdAssertion(0x4000000000000LL, v105);
                WdLogEvent5_WdAssertion(v109);
                v107 = v166[0];
              }
              v110 = *((_DWORD *)v104 + 70);
              v103 = v36;
              LODWORD(v29) = ConvertDisplayConfigPathIntoExistingPathModalityAtIdx(
                               v29,
                               v36,
                               0xFFFFFFFF,
                               v155,
                               v162,
                               a5,
                               0,
                               v107,
                               &v150);
              if ( (int)v29 < 0 )
              {
                v33 = 34;
                v25 = 1;
                goto LABEL_187;
              }
              *((_DWORD *)v104 + 70) = v110;
              *((_QWORD *)v104 + 6) |= 0x4000000000000uLL;
              v25 = 1;
            }
            else
            {
              LODWORD(v29) = ConvertDisplayConfigScalingToPathModalityForPath(
                               v29,
                               (struct _D3DKMT_PATHMODALITY_DESCRIPTOR *)(v104 + 48),
                               &v150);
              if ( (int)v29 < 0 )
              {
                v33 = 35;
                goto LABEL_187;
              }
            }
            v30 = v166[0];
            if ( ++v36 >= *((unsigned __int16 *)v166[0] + 10) )
            {
              v17 = v146;
              break;
            }
          }
        }
        if ( v103 >= *((unsigned __int16 *)v30 + 10)
          || (v28 = 264LL * v103, __PAIR64__(HIDWORD(v164), v34) != *(_QWORD *)((char *)v30 + v28 + 192)) )
        {
          LODWORD(v29) = -1073741811;
          v33 = 33;
          goto LABEL_82;
        }
        v19 = a5;
      }
      else
      {
        v111 = v163;
        LODWORD(v29) = AllocatePathModalityForDisplayConfig(v152, v163, v166);
        if ( (int)v29 < 0 )
        {
          v33 = 6;
          goto LABEL_82;
        }
        LODWORD(v29) = ConvertDisplayConfigToPathModality(v152, v111, v155, v162, v19, v166[0], &v150);
        if ( (int)v29 < 0 )
        {
          v33 = 7;
          goto LABEL_82;
        }
        v30 = v166[0];
      }
      if ( v150 )
      {
        if ( !*((_WORD *)v30 + 10) )
        {
          v112 = WdLogNewEntry5_WdAssertion(v28, v27);
          WdLogEvent5_WdAssertion(v112);
          v30 = v166[0];
        }
        v113 = AllocPathsModality(*((_WORD *)v30 + 10));
        if ( (int)((__int64 (__fastcall *)(const struct _D3DKMT_GETPATHSMODALITY *, struct _D3DKMT_GETPATHSMODALITY *, _QWORD))qword_1C018BDE0)(
                    v113,
                    v166[0],
                    0LL) < 0 )
        {
          v116 = WdLogNewEntry5_WdAssertion(v115, v114);
          WdLogEvent5_WdAssertion(v116);
        }
        if ( (int)((__int64 (__fastcall *)(__int64, const struct _D3DKMT_GETPATHSMODALITY *))qword_1C018B9B8)(
                    47LL,
                    v113) < 0 )
        {
          ConvertPreferredScalingToAdapterDefault(v166[0]);
        }
        else
        {
          LODWORD(v29) = ReplacePreferredScaling(v113, v166[0]);
          if ( (int)v29 < 0 )
          {
            FreePathsModality(v113);
            v33 = 20;
            goto LABEL_190;
          }
        }
        FreePathsModality(v113);
        v30 = v166[0];
      }
      LODWORD(v29) = ((__int64 (__fastcall *)(__int64, struct _D3DKMT_GETPATHSMODALITY *, _QWORD))qword_1C018B9B8)(
                       256LL,
                       v30,
                       0LL);
      if ( (int)v29 < 0 )
      {
        v33 = 8;
LABEL_187:
        v17 = v146;
        goto LABEL_82;
      }
      v36 = 1;
      v150 = 1;
LABEL_247:
      v17 = v146;
      goto LABEL_35;
    }
    LODWORD(v29) = AllocatePathModalityForDisplayConfig(v152, v163, v166);
    if ( (int)v29 < 0 )
    {
      v33 = 3;
      v141 = 3;
      goto LABEL_83;
    }
    LODWORD(v29) = ConvertDisplayConfigToPathModality(v152, v163, v155, v162, v19, v166[0], 0LL);
    if ( (int)v29 < 0 )
    {
      v33 = 4;
      goto LABEL_82;
    }
    LODWORD(v29) = ((__int64 (__fastcall *)(_QWORD, struct _D3DKMT_GETPATHSMODALITY *, _QWORD))qword_1C018B9B8)(
                     v19 & 0x2000 | 0x2F,
                     v166[0],
                     0LL);
    if ( (int)v29 < 0 )
    {
      v33 = 5;
      goto LABEL_82;
    }
    v142 = !v143 && (v19 & 0x40) == 0;
LABEL_35:
    if ( (v19 & 0x800) == 0 )
      goto LABEL_40;
    v38 = CreatePathPersistentMonitorsIfNeeded(v28, v166[0], &v158);
    v29 = (struct DISPLAYCONFIG_PATH_INFO *)v38;
    if ( v38 < 0 )
    {
      v117 = WdLogNewEntry5_WdError(v40, v39, v41);
      *(_QWORD *)(v117 + 24) = v29;
      WdLogEvent5_WdError(v117);
      v33 = 10;
      goto LABEL_82;
    }
    v42 = ((__int64 (__fastcall *)(__int64, struct _D3DKMT_GETPATHSMODALITY *))qword_1C018B9D8)(0x80000000LL, v166[0]);
    v29 = (struct DISPLAYCONFIG_PATH_INFO *)v42;
    if ( v42 == -1073741266 )
    {
      v118 = WdLogNewEntry5_WdEvent(v44, v43);
      *(_QWORD *)(v118 + 24) = v151;
      *(_QWORD *)(v118 + 32) = -1073741266LL;
      WdLogEvent5_WdEvent(v118);
      v33 = 23;
      v141 = 23;
    }
    else
    {
      if ( v42 < 0 )
      {
        v120 = WdLogNewEntry5_WdError(v44, v43, 0LL);
        *(_QWORD *)(v120 + 24) = v29;
        WdLogEvent5_WdError(v120);
        v33 = 22;
        goto LABEL_82;
      }
      if ( !v158 )
      {
LABEL_40:
        if ( (a6 & 0x20) != 0 && (!*((_QWORD *)v159 + 4) || *((_DWORD *)v159 + 2)) )
          v45 = 0x20000;
        else
          v45 = 0;
        v46 = v45 | GetCcdRawmodeFlag();
        LODWORD(v46) = v46 | 0x8000;
        v47 = ((__int64 (__fastcall *)(__int64, struct _D3DKMT_GETPATHSMODALITY *))qword_1C018B9C0)(v46, v166[0]);
        v29 = (struct DISPLAYCONFIG_PATH_INFO *)v47;
        if ( v47 < 0 )
        {
          v121 = WdLogNewEntry5_WdEvent(v28, v27);
          *(struct _D3DKMT_GETPATHSMODALITY **)(v121 + 24) = v166[0];
          *(_QWORD *)(v121 + 32) = v29;
          WdLogEvent5_WdEvent(v121);
          v33 = 11;
          v17 = 7;
          goto LABEL_254;
        }
        if ( v170 )
        {
          v48 = 0;
          LODWORD(v29) = GetPathsModality(v28, &v166[1], 1048640LL, 0LL);
          if ( (int)v29 < 0 )
          {
            v33 = 13;
            v17 = 7;
            goto LABEL_81;
          }
          v49 = (16 * (v19 & 0x1000)) | 0x400000;
          if ( (a6 & 0x10) == 0 )
            v49 = 16 * (v19 & 0x1000);
          if ( (v19 & 0x1100) != 0 )
          {
            v48 = 1;
            v49 |= 0x4000u;
          }
          if ( v49 )
          {
            LODWORD(v29) = ((__int64 (__fastcall *)(_QWORD, struct _D3DKMT_GETPATHSMODALITY *, _QWORD))qword_1C018B9B8)(
                             v49,
                             v166[0],
                             0LL);
            if ( (int)v29 < 0 )
            {
              v33 = 14;
              goto LABEL_187;
            }
          }
          v50 = gpGraphicsDeviceList;
          v51 = 0;
          while ( v50 )
          {
            v53 = v50 + 80;
            v50 = (wchar_t *)*((_QWORD *)v50 + 16);
            v54 = (*v53 & 0x800000) != 0;
            v55 = v51 + 1;
            if ( !v54 )
              v55 = v51;
            v51 = v55;
          }
          v56 = 0LL;
          if ( v51 )
          {
            PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 76LL * v51, 0x7774656Cu);
            v56 = PoolWithTag;
            if ( PoolWithTag )
            {
              memset(PoolWithTag, 0, 76LL * v51);
              v58 = gpGraphicsDeviceList;
              v59 = 0;
              if ( gpGraphicsDeviceList )
              {
                do
                {
                  if ( (*((_DWORD *)v58 + 40) & 0x800000) != 0 )
                  {
                    v60 = 76LL * v59++;
                    *(_DWORD *)&v56[v60] = *((_DWORD *)v58 + 66);
                    *(_DWORD *)&v56[v60 + 4] = *((_DWORD *)v58 + 67);
                    *(_DWORD *)&v56[v60 + 8] = *((_DWORD *)v58 + 68);
                  }
                  v58 = (wchar_t *)*((_QWORD *)v58 + 16);
                }
                while ( v58 );
                LODWORD(v34) = v164;
              }
            }
          }
          DisplayScenarioJournalSetExpectedPathModality(
            264 * (unsigned int)*((unsigned __int16 *)v166[0] + 10),
            *((unsigned __int16 *)v166[0] + 10),
            (char *)v166[0] + 48,
            v51,
            v56);
          LOBYTE(v61) = v48;
          v62 = v156;
          v63 = ApplyPathsModality(v166[0], v49, v61, (_DWORD)v161, (__int64)v157, (__int64)&v145, (__int64)v156, v171);
          v160 = v63;
          v64 = v63;
          v149 = v63;
          v25 = 1;
          if ( v63 >= 0 && v63 != 1 )
          {
            if ( v145 )
            {
              v122 = WdLogNewEntry5_WdAssertion(v28, v27);
              WdLogEvent5_WdAssertion(v122);
            }
            if ( v64 == 2 )
            {
              if ( v48 || *v62 )
              {
                v123 = WdLogNewEntry5_WdAssertion(v28, v27);
                WdLogEvent5_WdAssertion(v123);
              }
              LOBYTE(v19) = a5;
              v36 = v150;
              v140[0] = 1;
LABEL_74:
              v65 = v157;
            }
            else
            {
              if ( !*v62 )
              {
                v124 = WdLogNewEntry5_WdAssertion(v28, v27);
                WdLogEvent5_WdAssertion(v124);
              }
              LOBYTE(v19) = a5;
              v65 = 0LL;
              v36 = v150;
              v157 = 0LL;
            }
            if ( !v142 )
            {
              if ( (int)v29 >= 0 )
                goto LABEL_79;
              v33 = 17;
              goto LABEL_80;
            }
            v66 = ((__int64 (__fastcall *)(_QWORD, struct _D3DKMT_GETPATHSMODALITY *))qword_1C018B9D8)(v36, v166[0]);
            v29 = (struct DISPLAYCONFIG_PATH_INFO *)v66;
            if ( !a8 )
            {
              if ( v66 < 0 )
              {
                v125 = WdLogNewEntry5_WdError(v28, v27, 0LL);
                *(_QWORD *)(v125 + 24) = v29;
                WdLogEvent5_WdError(v125);
                LODWORD(v29) = 0;
              }
              goto LABEL_79;
            }
            if ( v66 == -1073741266 )
            {
              if ( (v19 & 0x10) != 0 )
              {
                v126 = WdLogNewEntry5_WdAssertion(v28, v27);
                WdLogEvent5_WdAssertion(v126);
              }
              v127 = WdLogNewEntry5_WdEvent(v28, v27);
              *(_QWORD *)(v127 + 24) = v151;
              *(_QWORD *)(v127 + 32) = -1073741266LL;
              WdLogEvent5_WdEvent(v127);
              if ( !v140[0] )
              {
                if ( v65 )
                {
                  v128 = WdLogNewEntry5_WdAssertion(v28, v27);
                  WdLogEvent5_WdAssertion(v128);
                }
                v157 = *v62;
                *v62 = 0LL;
                v144 = 1;
              }
              v33 = 24;
              v17 = 9;
            }
            else
            {
              if ( v66 < 0 )
              {
                v33 = 29;
                LODWORD(v29) = 0;
                v17 = 9;
                v146 = 9;
                goto LABEL_82;
              }
LABEL_79:
              v33 = 18;
LABEL_80:
              v17 = ((int)v29 >> 31) + 10;
            }
LABEL_81:
            v146 = v17;
LABEL_82:
            v141 = v33;
            goto LABEL_83;
          }
          v33 = 16;
          LODWORD(v29) = -1073741823;
          v17 = 5;
LABEL_254:
          v146 = v17;
          goto LABEL_82;
        }
        if ( (v19 & 0x40) != 0 )
        {
          v62 = v156;
          v149 = 0;
          goto LABEL_74;
        }
        v129 = WdLogNewEntry5_WdAssertion(v28, v27);
        *(_QWORD *)(v129 + 24) = v19;
        WdLogEvent5_WdAssertion(v129);
        v33 = 21;
LABEL_267:
        LODWORD(v29) = -1073741811;
        goto LABEL_82;
      }
      v119 = WdLogNewEntry5_WdWarning(v44);
      *(_QWORD *)(v119 + 24) = v151;
      *(_QWORD *)(v119 + 32) = v29;
      WdLogEvent5_WdWarning(v119);
      LODWORD(v29) = -1073741266;
    }
LABEL_83:
    v67 = ++v151;
    if ( (_DWORD)v29 == -1073741266 )
    {
      if ( !v147 && v67 < 4 )
      {
        v131 = 3221226030LL;
        goto LABEL_273;
      }
    }
    else if ( (int)v29 >= 0 )
    {
      goto LABEL_85;
    }
    if ( !v148 )
      goto LABEL_140;
    v147 = 1;
    v131 = (unsigned int)v29;
    v142 = 0;
LABEL_273:
    DisplayScenarioJournalRetry(v131);
    v19 = a5;
  }
  if ( (v19 & 0xF) != 0xF )
  {
    v92 = WdLogNewEntry5_WdAssertion(v28, v27);
    WdLogEvent5_WdAssertion(v92);
  }
  if ( v142 )
  {
    v93 = WdLogNewEntry5_WdAssertion(v28, v27);
    WdLogEvent5_WdAssertion(v93);
  }
  if ( v153 < 6 )
  {
    v94 = v153;
    v95 = (const struct _RETRY_MODE *)((char *)&unk_1C016DA90 + 12 * v153);
    DrvDxgkLogCodePointPacket(75LL, *((unsigned int *)v95 + 1), *((unsigned int *)v95 + 2), 0LL);
    if ( *(_BYTE *)v95 )
    {
      v154 = 0;
      v153 = v94 + 1;
      LODWORD(v29) = GetPathsModality(v96, v166, 15LL, 0LL);
    }
    else
    {
      v97 = DrvCreatePathModalityFromAllPaths(&v167, v154++, v166);
      LODWORD(v29) = v97;
      if ( v97 >= 0 )
      {
        if ( *((_WORD *)v166[0] + 10) != 1 )
        {
          v98 = WdLogNewEntry5_WdAssertion(v28, v27);
          WdLogEvent5_WdAssertion(v98);
        }
      }
      else
      {
        ++v153;
        v154 = 0;
      }
    }
    if ( (int)v29 < 0 )
    {
      v33 = 2;
      goto LABEL_187;
    }
    v99 = DrvFunctionalizeBaseVidMode(v95, v166[0]);
    v29 = (struct DISPLAYCONFIG_PATH_INFO *)v99;
    if ( v99 < 0 )
    {
      v101 = WdLogNewEntry5_WdError(v28, v100, 0LL);
      *(_QWORD *)(v101 + 24) = v29;
      WdLogEvent5_WdError(v101);
      v33 = 2;
LABEL_190:
      v17 = v146;
      goto LABEL_82;
    }
    goto LABEL_247;
  }
  if ( (int)v29 >= 0 )
  {
    v132 = WdLogNewEntry5_WdAssertion(v28, v27);
    WdLogEvent5_WdAssertion(v132);
LABEL_140:
    if ( (int)v29 >= 0 )
    {
LABEL_85:
      v68 = v144;
      goto LABEL_86;
    }
  }
  v68 = v144;
  if ( v144 )
  {
    v33 = 29;
    v149 = 0;
    v141 = 29;
    LODWORD(v29) = 0;
    v17 = 9;
  }
  if ( (int)v29 >= 0 )
  {
LABEL_86:
    v69 = v156;
    if ( v68 && !*v156 )
    {
      v134 = v157;
      if ( !v157 )
      {
        v135 = WdLogNewEntry5_WdAssertion(v28, v27);
        WdLogEvent5_WdAssertion(v135);
      }
      v136 = v149;
      v23 = v149 == 2;
      *v69 = v134;
      if ( v23 )
        v136 = 0;
      v157 = 0LL;
      v149 = v136;
    }
LABEL_87:
    v19 = a5;
    goto LABEL_88;
  }
LABEL_161:
  v69 = v156;
  v83 = v161;
LABEL_162:
  if ( !v148 )
    goto LABEL_87;
  if ( a8 )
  {
    v88 = WdLogNewEntry5_WdAssertion(v28, v27);
    WdLogEvent5_WdAssertion(v88);
  }
  v19 = a5;
  LODWORD(v29) = DrvChangeDisplayFallback(
                   v83,
                   BYTE1(a5) & 1,
                   1u,
                   v157,
                   v69,
                   (enum _DXGK_DIAG_SDC_STAGE *)&v141,
                   v140,
                   &v149);
  if ( (int)v29 < 0 )
  {
    v137 = WdLogNewEntry5_WdAssertion(v90, v89);
    WdLogEvent5_WdAssertion(v137);
    v33 = v141;
  }
  else
  {
    v33 = 31;
    v17 = 10;
  }
LABEL_88:
  if ( (_DWORD)v29 != -1073741811 )
  {
LABEL_89:
    FreePathsModality(v166[1]);
    v166[1] = 0LL;
    if ( (int)GetPathsModality(v70, &v166[1], 16777232LL, 0LL) >= 0 )
      DisplayScenarioJournalSetActualPathModality(
        264 * (unsigned int)*((unsigned __int16 *)v166[1] + 10),
        *((unsigned __int16 *)v166[1] + 10),
        (char *)v166[1] + 48);
    if ( *v69 )
    {
      v81 = *((_QWORD *)*v69 + 4);
      if ( v81 )
      {
        v82 = *(_QWORD *)(v81 + 2592);
        if ( ((v82 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
          DisplayScenarioJounralSetTSDDDState((*(_DWORD *)(v82 + 160) & 0x2000000) != 0);
      }
    }
  }
  v71 = v151;
  if ( v173 )
    *v173 = v151;
  if ( v174 )
    *v174 = v33;
  if ( v175 )
  {
    if ( !v140[0] || v144 )
      v25 = 0;
    *v175 = v25;
  }
  if ( v176 )
    *v176 = v145;
  if ( (a6 & 0x20) != 0 )
  {
    v72 = v159;
    v73 = (unsigned int)v149;
    v74 = (int)v29 >= 0;
    v75 = v149 < 0;
    *((_DWORD *)v159 + 12) = v149;
    *((_DWORD *)v72 + 13) = v17;
    if ( v74 != !v75 )
    {
      v138 = WdLogNewEntry5_WdAssertion(v74, v73);
      WdLogEvent5_WdAssertion(v138);
    }
    v178[2] = v149;
    v178[0] = 0;
    v178[1] = 16;
    v178[3] = v17;
    DisplayScenarioJournalSetSpecializedData(v178);
  }
  if ( (a6 & 0x40) == 0 )
    LogDiagSDC(v152, v163, v155, v162, v19, (_DWORD)v29, v71, v33, v177, v140[0]);
  if ( gpGdiSharedMemory )
    DisplayScenarioJournalSetUniqueness(
      *((unsigned int *)gpGdiSharedMemory + 393256),
      *((unsigned int *)gpGdiSharedMemory + 393252));
  LOBYTE(v30) = v140[0];
  LOBYTE(v139) = v145;
  DisplayScenarioJournalFinalize((unsigned int)v29, v33, v71, v30, v139, v160, v171);
  v78 = WdLogNewEntry5_WdEvent(v77, v76);
  *(_QWORD *)(v78 + 24) = (int)v29;
  WdLogEvent5_WdEvent(v78);
  DrvSetDisplayConfig_::_2_::_AUTO::__AUTO((AUTO_TGO *)v165);
  AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v172, 5LL);
  return (unsigned int)v29;
}
