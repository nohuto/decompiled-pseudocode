/*
 * XREFs of DrvSetDisplayConfig @ 0x1C00662E0
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0065520 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     DrvChangeDisplaySettings @ 0x1C006586C (DrvChangeDisplaySettings.c)
 *     InitVideo @ 0x1C00A6740 (InitVideo.c)
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00A6E44 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     xxxUserSetDisplayConfig @ 0x1C00DDDC0 (xxxUserSetDisplayConfig.c)
 * Callees:
 *     ??0AUTO_TGO@@IEAA@XZ @ 0x1C001B1F0 (--0AUTO_TGO@@IEAA@XZ.c)
 *     ?CreatePathPersistentMonitorsIfNeeded@@YAJIPEAUD3DKMT_GETPATHSMODALITY@@PEAG@Z @ 0x1C00642BC (-CreatePathPersistentMonitorsIfNeeded@@YAJIPEAUD3DKMT_GETPATHSMODALITY@@PEAG@Z.c)
 *     _DrvSetDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1C0066ED8 (_DrvSetDisplayConfig_--_2_--_AUTO--__AUTO.c)
 *     ?FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0066F38 (-FreePathsModality@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     GetPathsModality @ 0x1C0066F68 (GetPathsModality.c)
 *     ?AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z @ 0x1C0067044 (-AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z.c)
 *     LogDiagSDC @ 0x1C0067094 (LogDiagSDC.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00671C8 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCcdRawmodeFlag@@YAIXZ @ 0x1C0067434 (-GetCcdRawmodeFlag@@YAIXZ.c)
 *     ApplyPathsModality @ 0x1C0067D1C (ApplyPathsModality.c)
 *     ?DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C006B444 (-DrvValidateAndApplyDevMode@@YAJPEAU_DISPLAYCONFIG_CDS_REQUEST@@PEAPEAUD3DKMT_GETPATHSMODALITY@@.c)
 *     ?NotifyStatusChange@?$AUTO_STATUS_CHANGE_NOTIFY@$01$02@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C009478C (-NotifyStatusChange@-$AUTO_STATUS_CHANGE_NOTIFY@$01$02@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@.c)
 *     ??8@YA_NAEBU_LUID@@0@Z @ 0x1C0098090 (--8@YA_NAEBU_LUID@@0@Z.c)
 *     ?DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z @ 0x1C0099E18 (-DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00A4550 (DrvDxgkLogCodePointPacket.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     ?AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00F5308 (-AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_G.c)
 *     ?ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IIHPEAUD3DKMT_GETPATHSMODALITY@@PEAH@Z @ 0x1C00F53A0 (-ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@.c)
 *     ?ConvertDisplayConfigScalingToPathModalityForPath@@YAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@PEAH@Z @ 0x1C00F5784 (-ConvertDisplayConfigScalingToPathModalityForPath@@YAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAU.c)
 *     ?ConvertDisplayConfigToPathModality@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_GETPATHSMODALITY@@PEAH@Z @ 0x1C00F5808 (-ConvertDisplayConfigToPathModality@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_GETPAT.c)
 *     ?ConvertPreferredScalingToAdapterDefault@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00F5A14 (-ConvertPreferredScalingToAdapterDefault@@YAXPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?DrvCreatePathModalityFromAllPaths@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@I0@Z @ 0x1C00F7B70 (-DrvCreatePathModalityFromAllPaths@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@I0@Z.c)
 *     ?DrvFunctionalizeBaseVidMode@@YAJAEBU_RETRY_MODE@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00F7DB4 (-DrvFunctionalizeBaseVidMode@@YAJAEBU_RETRY_MODE@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?ReplacePreferredScaling@@YAJPEBUD3DKMT_GETPATHSMODALITY@@PEAU1@@Z @ 0x1C00F8E10 (-ReplacePreferredScaling@@YAJPEBUD3DKMT_GETPATHSMODALITY@@PEAU1@@Z.c)
 */

__int64 __fastcall DrvSetDisplayConfig(
        unsigned int a1,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        unsigned int a3,
        unsigned int a4,
        void *a5,
        char a6,
        __int64 a7,
        struct _MDEV *a8,
        struct _MDEV **a9,
        unsigned int *a10,
        unsigned int *a11,
        char *a12,
        _BYTE *a13,
        __int64 a14)
{
  unsigned int v14; // ebx
  struct _MDEV **v16; // r15
  __int64 v17; // r13
  int v18; // r14d
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  bool v24; // zf
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  char v28; // r12
  char v29; // si
  __int64 v30; // rdx
  __int64 v31; // rcx
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v32; // rdi
  __int64 v33; // r8
  struct D3DKMT_GETPATHSMODALITY *v34; // r9
  __int64 v35; // rdx
  int v36; // eax
  char v37; // r15
  unsigned int v38; // esi
  __int64 v39; // rbx
  __int64 v40; // rax
  __int64 v41; // r8
  __int64 v42; // r9
  struct _DISPLAYCONFIG_CDS_REQUEST *v43; // rcx
  bool v44; // r15
  int v45; // eax
  unsigned int v46; // edi
  int v47; // eax
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  char v51; // si
  int v52; // edi
  __int64 v53; // rcx
  int v54; // eax
  char v55; // r13
  char v56; // al
  unsigned int v57; // esi
  wchar_t *v58; // rcx
  unsigned int v59; // r15d
  _DWORD *v60; // rax
  bool v61; // cf
  unsigned int v62; // eax
  char *v63; // r14
  char *PoolWithTag; // rax
  wchar_t *v65; // rdx
  unsigned int v66; // r8d
  __int64 v67; // rcx
  int v68; // r8d
  struct _MDEV **v69; // r14
  int v70; // eax
  int v71; // esi
  struct _MDEV *v72; // rsi
  int v73; // eax
  unsigned int v74; // eax
  char v75; // al
  __int64 v76; // rcx
  unsigned int v77; // r15d
  char v78; // bl
  struct _DISPLAYCONFIG_CDS_REQUEST *v79; // rax
  __int64 v80; // rdx
  _BOOL8 v81; // rcx
  bool v82; // sf
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // rax
  struct _DISPLAYCONFIG_CDS_REQUEST *v87; // r14
  __int64 v88; // rax
  __int64 v89; // rcx
  int v90; // ebx
  int v91; // eax
  __int64 v92; // rax
  __int64 v93; // rdx
  __int64 v94; // r8
  __int64 v95; // r9
  __int64 v96; // rcx
  __int64 v97; // rax
  int v98; // ebx
  __int64 v99; // rax
  int v100; // eax
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 v105; // rax
  unsigned int v106; // edi
  const struct _RETRY_MODE *v107; // r14
  __int64 v108; // rcx
  int v109; // eax
  __int64 v110; // rax
  int v111; // eax
  __int64 v112; // rax
  __int64 v113; // rax
  int v114; // eax
  __int64 v115; // rax
  int v116; // r9d
  int v117; // r10d
  unsigned int v118; // r8d
  __int64 v119; // rdx
  __int64 v120; // r8
  __int64 v121; // rcx
  _QWORD *v122; // rdx
  __int64 v123; // rax
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v124; // r14
  unsigned int v125; // r12d
  unsigned int v126; // r13d
  char *v127; // r14
  __int64 v128; // rdx
  __int64 v129; // rcx
  __int64 v130; // r8
  struct D3DKMT_GETPATHSMODALITY *v131; // r9
  __int64 v132; // rax
  __int64 v133; // rax
  int v134; // r15d
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v135; // r14
  __int64 v136; // rdx
  __int64 v137; // r8
  __int64 v138; // r9
  struct D3DKMT_GETPATHSMODALITY *v139; // rax
  __int64 v140; // rax
  const struct D3DKMT_GETPATHSMODALITY *v141; // r14
  __int64 v142; // rdx
  __int64 v143; // rcx
  __int64 v144; // r8
  __int64 v145; // r9
  __int64 v146; // rax
  __int64 v147; // rax
  __int64 v148; // rax
  __int64 v149; // rax
  __int64 v150; // rax
  __int64 v151; // rax
  __int64 v152; // rax
  __int64 v153; // rax
  __int64 v154; // rax
  __int64 v155; // rax
  __int64 v156; // rax
  __int64 v157; // rax
  __int64 v158; // rax
  __int64 v159; // rax
  __int64 v160; // rax
  __int64 v161; // rcx
  __int64 v162; // rax
  __int64 v163; // rax
  struct _MDEV *v164; // rbx
  __int64 v165; // rax
  int v166; // edx
  __int64 v167; // rax
  __int64 v168; // rax
  int Environment; // [rsp+20h] [rbp-E0h]
  char v170; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v171[3]; // [rsp+41h] [rbp-BFh] BYREF
  int v172; // [rsp+44h] [rbp-BCh] BYREF
  int v173; // [rsp+48h] [rbp-B8h]
  char v174; // [rsp+4Ch] [rbp-B4h]
  char v175; // [rsp+4Dh] [rbp-B3h]
  char v176; // [rsp+4Eh] [rbp-B2h] BYREF
  bool v177; // [rsp+4Fh] [rbp-B1h]
  int v178; // [rsp+50h] [rbp-B0h]
  bool v179; // [rsp+54h] [rbp-ACh]
  int v180; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v181; // [rsp+5Ch] [rbp-A4h]
  int v182; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v183; // [rsp+64h] [rbp-9Ch]
  unsigned int v184; // [rsp+68h] [rbp-98h]
  unsigned int v185; // [rsp+6Ch] [rbp-94h]
  unsigned int v186; // [rsp+70h] [rbp-90h]
  struct _MDEV *v187; // [rsp+78h] [rbp-88h]
  unsigned __int16 v188; // [rsp+80h] [rbp-80h] BYREF
  char *v189; // [rsp+88h] [rbp-78h] BYREF
  int v190; // [rsp+90h] [rbp-70h]
  struct _MDEV **v191; // [rsp+98h] [rbp-68h]
  struct _DISPLAYCONFIG_CDS_REQUEST *v192; // [rsp+A0h] [rbp-60h]
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v193; // [rsp+A8h] [rbp-58h]
  _QWORD v194[6]; // [rsp+B0h] [rbp-50h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v195[2]; // [rsp+E0h] [rbp-20h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v196; // [rsp+F0h] [rbp-10h] BYREF
  char v197; // [rsp+F8h] [rbp-8h]
  __int64 v198; // [rsp+100h] [rbp+0h]
  __int64 v199; // [rsp+110h] [rbp+10h]
  int v200; // [rsp+118h] [rbp+18h]
  void *v201; // [rsp+120h] [rbp+20h]
  __int64 v202; // [rsp+128h] [rbp+28h]
  void *v203; // [rsp+130h] [rbp+30h] BYREF
  unsigned int *v204; // [rsp+138h] [rbp+38h]
  unsigned int *v205; // [rsp+140h] [rbp+40h]
  char *v206; // [rsp+148h] [rbp+48h]
  _BYTE *v207; // [rsp+150h] [rbp+50h]
  __int64 v208; // [rsp+158h] [rbp+58h]
  __int128 v209; // [rsp+160h] [rbp+60h] BYREF
  _DWORD v210[4]; // [rsp+170h] [rbp+70h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+180h] [rbp+80h] BYREF
  __int64 v212; // [rsp+1B8h] [rbp+B8h]
  int v213; // [rsp+1C0h] [rbp+C0h]
  const wchar_t *v214; // [rsp+1C8h] [rbp+C8h]
  char *v215; // [rsp+1D0h] [rbp+D0h]
  int v216; // [rsp+1D8h] [rbp+D8h]
  char **v217; // [rsp+1E0h] [rbp+E0h]
  int v218; // [rsp+1E8h] [rbp+E8h]
  __int64 v219; // [rsp+1F0h] [rbp+F0h]
  int v220; // [rsp+1F8h] [rbp+F8h]
  const wchar_t *v221; // [rsp+200h] [rbp+100h]
  char *v222; // [rsp+208h] [rbp+108h]
  int v223; // [rsp+210h] [rbp+110h]
  char **v224; // [rsp+218h] [rbp+118h]
  int v225; // [rsp+220h] [rbp+120h]
  __int64 v226; // [rsp+228h] [rbp+128h]
  int v227; // [rsp+230h] [rbp+130h]
  const wchar_t *v228; // [rsp+238h] [rbp+138h]
  char *v229; // [rsp+240h] [rbp+140h]
  int v230; // [rsp+248h] [rbp+148h]
  char **v231; // [rsp+250h] [rbp+150h]
  int v232; // [rsp+258h] [rbp+158h]
  __int64 v233; // [rsp+260h] [rbp+160h]
  int v234; // [rsp+268h] [rbp+168h]
  _BYTE v235[40]; // [rsp+270h] [rbp+170h] BYREF
  void *retaddr; // [rsp+2F8h] [rbp+1F8h]

  v14 = a4;
  v16 = a9;
  v201 = a5;
  v204 = a10;
  v206 = a12;
  v207 = a13;
  v202 = a14;
  v183 = a1;
  v205 = a11;
  v17 = a3;
  v186 = a4;
  v18 = 0;
  v177 = gbBaseVideo != 0;
  v178 = a3;
  v190 = -1;
  v193 = a2;
  v192 = (struct _DISPLAYCONFIG_CDS_REQUEST *)a7;
  v187 = a8;
  v191 = a9;
  v184 = gbBaseVideo != 0 ? 3 : 0;
  v181 = 0;
  v175 = 0;
  v171[0] = 0;
  v176 = 0;
  v172 = 0;
  v180 = -5;
  v173 = 0;
  v185 = 0;
  v19 = WdLogNewEntry5_WdEvent(0LL, a2);
  *(_QWORD *)(v19 + 24) = v17;
  WdLogEvent5_WdEvent(v19);
  v199 = MEMORY[0xFFFFF78000000320];
  v208 = v199 * KeQueryTimeIncrement();
  DisplayScenarioJournalBegin((unsigned int)v17, v14, (unsigned __int16)gProtocolType);
  DisplayScenarioJournalSetSDCPathsAndModes(192 * v183, v183, a2);
  v203 = retaddr;
  AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v203, 4LL);
  v24 = gOldModeChange == 0;
  *a9 = 0LL;
  if ( !v24 )
  {
    v92 = WdLogNewEntry5_WdAssertion(v21, v20, v22, v23);
    WdLogEvent5_WdAssertion(v92);
  }
  if ( (v17 & 0x1000) != 0 && a6 )
    WdDiagNotifyUser(40LL, 3LL, 0LL, 0LL);
  v179 = (v14 & 2) != 0 && (v17 & 0x88F) == 2191;
  AUTO_TGO::AUTO_TGO((AUTO_TGO *)v194);
  v194[0] = &off_1C01577C0;
  v198 = v202;
  v28 = 1;
  *(_OWORD *)v195 = 0LL;
  v196 = 0LL;
  v197 = 0;
  if ( !gProtocolType && (v14 & 1) == 0 )
  {
    if ( (v17 & 0x40000000) != 0 )
    {
      wil_details_FeaturePropertyCache_ReportUsageToService(
        &Feature_BrokeredDisplays_ModeChanges__private_propertyCache,
        10733637LL,
        &unk_1C01608E8);
      v96 = 0LL;
      if ( gbBaseVideo )
      {
        v97 = WdLogNewEntry5_WdAssertion(0LL, v93, v94, v95);
        WdLogEvent5_WdAssertion(v97);
      }
      LODWORD(v32) = GetPathsModality(v96, v195, 15LL, 0LL);
      if ( (int)v32 < 0 )
      {
        v38 = 2;
        goto LABEL_143;
      }
      v98 = *((_DWORD *)v195[0] + 8) & 0xF;
      if ( v98 == 1 || v98 == 8 )
      {
        v38 = 25;
        LODWORD(v32) = -1073741637;
        v172 = 25;
        goto LABEL_162;
      }
      LOBYTE(v31) = 1;
      v174 = 1;
      LOBYTE(v30) = v98 == 4;
      v29 = 1;
      ((void (__fastcall *)(__int64, __int64))qword_1C01908E8)(v31, v30);
      if ( v98 != 4 )
      {
        LOBYTE(v14) = v186;
        LODWORD(v17) = 132;
        v178 = 132;
        goto LABEL_12;
      }
      v171[0] = 1;
      LODWORD(v32) = 0;
      v38 = 26;
    }
    else
    {
      if ( (int)v17 >= 0 )
      {
        if ( (v17 & 0xF) != 0xF || (v14 & 0x20) != 0 && *(_DWORD *)(a7 + 20) )
        {
          if ( (v17 & 0x200) != 0 || (v14 & 0x20) != 0 && *(_DWORD *)(a7 + 20) || (v17 & 0x1F) != 0 && (v17 & 0x40) == 0 )
          {
            v29 = 0;
            v174 = 0;
            ((void (__fastcall *)(_QWORD))qword_1C01908E8)(0LL);
          }
          else
          {
            v29 = ((__int64 (*)(void))qword_1C01908F0)();
            v174 = v29;
          }
          goto LABEL_12;
        }
        v174 = ((__int64 (*)(void))qword_1C01908F0)();
        v29 = v174;
        if ( !v174 )
        {
LABEL_12:
          LODWORD(v32) = ((__int64 (*)(void))qword_1C01906B8)();
          if ( (int)v32 >= 0 )
          {
            v197 = 1;
            v200 = v17 & 0x80;
            if ( (v17 & 0x80) != 0 )
            {
              v35 = 1LL;
              if ( !v29 && (v17 & 0xF) != 0 && (v14 & 0x20) == 0 )
                v35 = 3LL;
              v36 = ((__int64 (__fastcall *)(__int64))qword_1C01906D8)(v35);
              v32 = (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)v36;
              if ( v36 < 0 )
              {
                v103 = WdLogNewEntry5_WdEvent(v31, v30);
                *(_QWORD *)(v103 + 24) = v32;
                WdLogEvent5_WdEvent(v103);
                DrvDxgkLogCodePointPacket(4LL, (unsigned int)v32, 0LL, 0LL);
                LODWORD(v32) = 0;
              }
            }
            if ( (v17 & 0x200) == 0 || (v17 & 0x40) != 0 )
            {
              v37 = 0;
              v170 = 0;
            }
            else
            {
              v37 = 1;
              v170 = 1;
            }
            v38 = v172;
            LODWORD(v39) = v199;
            while ( 1 )
            {
              v40 = WdLogNewEntry5_WdEvent(v31, v30);
              *(_QWORD *)(v40 + 24) = v181;
              *(_QWORD *)(v40 + 32) = (int)v32;
              WdLogEvent5_WdEvent(v40);
              v182 = 0;
              v176 = 0;
              v171[0] = 0;
              FreePathsModality(v195[0]);
              FreePathsModality(v195[1]);
              v195[1] = 0LL;
              v195[0] = 0LL;
              if ( v177 )
              {
                if ( (v17 & 0xF) != 0xF )
                {
                  v104 = WdLogNewEntry5_WdAssertion(v31, v30, v33, v34);
                  WdLogEvent5_WdAssertion(v104);
                }
                if ( v37 )
                {
                  v105 = WdLogNewEntry5_WdAssertion(v31, v30, v33, v34);
                  WdLogEvent5_WdAssertion(v105);
                }
                if ( v184 >= 6 )
                {
                  if ( (int)v32 < 0 )
                  {
                    v18 = v173;
                    goto LABEL_297;
                  }
                  v162 = WdLogNewEntry5_WdAssertion(v31, v30, v33, v34);
                  WdLogEvent5_WdAssertion(v162);
                  v18 = v173;
LABEL_144:
                  if ( (int)v32 >= 0 )
                  {
LABEL_89:
                    v75 = v175;
                  }
                  else
                  {
LABEL_297:
                    v75 = v175;
                    if ( v175 )
                    {
                      v38 = 29;
                      v180 = 0;
                      v172 = 29;
                      LODWORD(v32) = 0;
                      v18 = 9;
                    }
                    if ( (int)v32 < 0 )
                    {
                      v16 = v191;
                      goto LABEL_162;
                    }
                  }
                  v16 = v191;
                  if ( v75 && !*v191 )
                  {
                    v164 = v187;
                    if ( !v187 )
                    {
                      v165 = WdLogNewEntry5_WdAssertion(v31, v30, v33, v34);
                      WdLogEvent5_WdAssertion(v165);
                    }
                    v166 = v180;
                    v24 = v180 == 2;
                    *v16 = v164;
                    if ( v24 )
                      v166 = 0;
                    v187 = 0LL;
                    v180 = v166;
                  }
LABEL_91:
                  LODWORD(v17) = v178;
                  goto LABEL_92;
                }
                v106 = v184;
                v107 = (const struct _RETRY_MODE *)((char *)&unk_1C016DF00 + 12 * v184);
                DrvDxgkLogCodePointPacket(75LL, *((unsigned int *)v107 + 1), *((unsigned int *)v107 + 2), 0LL);
                if ( *(_BYTE *)v107 )
                {
                  v185 = 0;
                  v184 = v106 + 1;
                  LODWORD(v32) = GetPathsModality(v108, v195, 15LL, 0LL);
                }
                else
                {
                  v109 = DrvCreatePathModalityFromAllPaths(&v196, v185++, v195);
                  LODWORD(v32) = v109;
                  if ( v109 >= 0 )
                  {
                    if ( *((_WORD *)v195[0] + 10) != 1 )
                    {
                      v110 = WdLogNewEntry5_WdAssertion(v31, v30, v33, v34);
                      WdLogEvent5_WdAssertion(v110);
                    }
                  }
                  else
                  {
                    ++v184;
                    v185 = 0;
                  }
                }
                if ( (int)v32 < 0 )
                {
                  v38 = 2;
                  goto LABEL_287;
                }
                v111 = DrvFunctionalizeBaseVidMode(v107, v195[0]);
                v32 = (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)v111;
                if ( v111 < 0 )
                {
                  v112 = WdLogNewEntry5_WdError();
                  *(_QWORD *)(v112 + 24) = v32;
                  WdLogEvent5_WdError(v112);
                  v38 = 2;
                  goto LABEL_287;
                }
                goto LABEL_40;
              }
              if ( (v17 & 0xF) != 0 )
                break;
              if ( (v17 & 0x10) == 0 )
              {
                if ( (v17 & 0x20) == 0 )
                {
                  v160 = WdLogNewEntry5_WdAssertion(v31, v30, v33, v34);
                  *(_QWORD *)(v160 + 24) = (unsigned int)v17;
                  WdLogEvent5_WdAssertion(v160);
                  v38 = 9;
                  goto LABEL_286;
                }
                v182 = 0;
                if ( (v186 & 8) != 0 )
                {
                  LODWORD(v32) = GetPathsModality(v31, v195, 64LL, 0LL);
                  if ( (int)v32 < 0 )
                  {
                    v38 = 32;
                    goto LABEL_287;
                  }
                  v34 = v195[0];
                  v125 = 0;
                  v126 = *((unsigned __int16 *)v195[0] + 10);
                  if ( (_WORD)v126 )
                  {
                    v32 = v193;
                    v189 = (char *)v193 + 16;
                    while ( 1 )
                    {
                      v127 = (char *)v34 + 264 * v125;
                      if ( (unsigned __int8)operator==(v127 + 64)
                        && *((_DWORD *)v127 + 18) == *((_DWORD *)v32 + 6)
                        && *((_DWORD *)v127 + 19) == *((_DWORD *)v32 + 7) )
                      {
                        if ( (*((_DWORD *)v127 + 12) & 0x800LL) == 0 )
                        {
                          v132 = WdLogNewEntry5_WdAssertion(v129, v128, v130, v131);
                          WdLogEvent5_WdAssertion(v132);
                          v131 = v195[0];
                        }
                        v39 = *((_QWORD *)v127 + 24);
                        v199 = v39;
                        if ( (*((_QWORD *)v127 + 6) & 0x4000000000000LL) == 0 )
                        {
                          v133 = WdLogNewEntry5_WdAssertion(0x4000000000000LL, v128, v130, v131);
                          WdLogEvent5_WdAssertion(v133);
                          v131 = v195[0];
                        }
                        v134 = *((_DWORD *)v127 + 58);
                        v126 = v125;
                        LODWORD(v32) = ConvertDisplayConfigPathIntoExistingPathModalityAtIdx(
                                         v32,
                                         v125,
                                         0xFFFFFFFF,
                                         0,
                                         v131,
                                         &v182);
                        if ( (int)v32 < 0 )
                        {
                          v38 = 34;
                          goto LABEL_242;
                        }
                        *((_DWORD *)v127 + 58) = v134;
                        *((_QWORD *)v127 + 6) |= 0x4000000000000uLL;
                      }
                      else
                      {
                        LODWORD(v32) = ConvertDisplayConfigScalingToPathModalityForPath(
                                         v32,
                                         (struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v127 + 48),
                                         &v182);
                        if ( (int)v32 < 0 )
                        {
                          v38 = 35;
                          goto LABEL_242;
                        }
                      }
                      v34 = v195[0];
                      if ( ++v125 >= *((unsigned __int16 *)v195[0] + 10) )
                        break;
                      v32 = v193;
                    }
                  }
                  if ( v126 >= *((unsigned __int16 *)v34 + 10)
                    || (v31 = 264LL * v126, __PAIR64__(HIDWORD(v199), v39) != *(_QWORD *)((char *)v34 + v31 + 192)) )
                  {
                    LODWORD(v32) = -1073741811;
                    v38 = 33;
LABEL_242:
                    v28 = 1;
LABEL_244:
                    v37 = v170;
                    goto LABEL_287;
                  }
                  LODWORD(v17) = v178;
                  v28 = 1;
                }
                else
                {
                  v135 = v193;
                  LODWORD(v32) = AllocatePathModalityForDisplayConfig(v183, v193, v195);
                  if ( (int)v32 < 0 )
                  {
                    v38 = 6;
                    goto LABEL_287;
                  }
                  LODWORD(v32) = ConvertDisplayConfigToPathModality(v183, v135, v195[0], &v182);
                  if ( (int)v32 < 0 )
                  {
                    v38 = 7;
                    goto LABEL_287;
                  }
                  v34 = v195[0];
                }
                if ( v182 )
                {
                  wil_details_FeaturePropertyCache_ReportUsageToService(
                    &Feature_BrokeredDisplays_ModeChanges__private_propertyCache,
                    10733637LL,
                    &unk_1C01608E8);
                  v139 = v195[0];
                  if ( !*((_WORD *)v195[0] + 10) )
                  {
                    v140 = WdLogNewEntry5_WdAssertion(0LL, v136, v137, v138);
                    WdLogEvent5_WdAssertion(v140);
                    v139 = v195[0];
                  }
                  v141 = AllocPathsModality(*((_WORD *)v139 + 10));
                  if ( (int)((__int64 (__fastcall *)(const struct D3DKMT_GETPATHSMODALITY *, struct D3DKMT_GETPATHSMODALITY *))qword_1C0190A60)(
                              v141,
                              v195[0]) < 0 )
                  {
                    v146 = WdLogNewEntry5_WdAssertion(v143, v142, v144, v145);
                    WdLogEvent5_WdAssertion(v146);
                  }
                  if ( (int)((__int64 (__fastcall *)(__int64, const struct D3DKMT_GETPATHSMODALITY *))qword_1C0190620)(
                              47LL,
                              v141) < 0 )
                  {
                    ConvertPreferredScalingToAdapterDefault(v195[0]);
                  }
                  else
                  {
                    LODWORD(v32) = ReplacePreferredScaling(v141, v195[0]);
                    if ( (int)v32 < 0 )
                    {
                      FreePathsModality(v141);
                      v37 = v170;
                      v38 = 20;
                      goto LABEL_287;
                    }
                  }
                  FreePathsModality(v141);
                  v34 = v195[0];
                }
                LODWORD(v32) = ((__int64 (__fastcall *)(__int64, struct D3DKMT_GETPATHSMODALITY *, _QWORD))qword_1C0190620)(
                                 256LL,
                                 v34,
                                 0LL);
                if ( (int)v32 < 0 )
                {
                  v38 = 8;
                  goto LABEL_244;
                }
                v182 = 1;
LABEL_39:
                v37 = v170;
                goto LABEL_40;
              }
              wil_details_FeaturePropertyCache_ReportUsageToService(
                &Feature_BrokeredDisplays_ModeChanges__private_propertyCache,
                10733637LL,
                &unk_1C01608E8);
              v124 = v193;
              LODWORD(v32) = AllocatePathModalityForDisplayConfig(v183, v193, v195);
              if ( (int)v32 < 0 )
              {
                v18 = v173;
                v38 = 3;
                v172 = 3;
                goto LABEL_87;
              }
              LODWORD(v32) = ConvertDisplayConfigToPathModality(v183, v124, v195[0], 0LL);
              if ( (int)v32 < 0 )
              {
                v38 = 4;
                goto LABEL_287;
              }
              LODWORD(v32) = ((__int64 (__fastcall *)(__int64, struct D3DKMT_GETPATHSMODALITY *, _QWORD))qword_1C0190620)(
                               v17 & 0x2000 | 0x2F,
                               v195[0],
                               0LL);
              if ( (int)v32 < 0 )
              {
                v38 = 5;
                goto LABEL_287;
              }
              if ( v174 || (v17 & 0x40) != 0 )
              {
                v37 = 0;
                v170 = 0;
              }
              else
              {
                v37 = 1;
                v170 = 1;
              }
LABEL_40:
              if ( (v17 & 0x800) == 0 )
                goto LABEL_45;
              v47 = CreatePathPersistentMonitorsIfNeeded(v31, v195[0], &v188);
              v32 = (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)v47;
              if ( v47 < 0 )
              {
                v147 = WdLogNewEntry5_WdError();
                *(_QWORD *)(v147 + 24) = v32;
                WdLogEvent5_WdError(v147);
                v38 = 10;
                goto LABEL_287;
              }
              v48 = ((__int64 (__fastcall *)(__int64, struct D3DKMT_GETPATHSMODALITY *))qword_1C0190640)(
                      0x80000000LL,
                      v195[0]);
              v32 = (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)v48;
              if ( v48 == -1073741266 )
              {
                v148 = WdLogNewEntry5_WdEvent(v50, v49);
                *(_QWORD *)(v148 + 24) = v181;
                *(_QWORD *)(v148 + 32) = -1073741266LL;
                WdLogEvent5_WdEvent(v148);
                v38 = 23;
                v172 = 23;
              }
              else
              {
                if ( v48 < 0 )
                {
                  v150 = WdLogNewEntry5_WdError();
                  *(_QWORD *)(v150 + 24) = v32;
                  WdLogEvent5_WdError(v150);
                  v38 = 22;
                  goto LABEL_287;
                }
                if ( !v188 )
                {
LABEL_45:
                  v51 = v186;
                  if ( (v186 & 0x20) != 0 && (!*((_QWORD *)v192 + 4) || *((_DWORD *)v192 + 2)) )
                    v52 = 0x20000;
                  else
                    v52 = 0;
                  v53 = v52 | GetCcdRawmodeFlag();
                  LODWORD(v53) = v53 | 0x8000;
                  v54 = ((__int64 (__fastcall *)(__int64, struct D3DKMT_GETPATHSMODALITY *))qword_1C0190628)(
                          v53,
                          v195[0]);
                  v32 = (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)v54;
                  if ( v54 < 0 )
                  {
                    v151 = WdLogNewEntry5_WdEvent(v31, v30);
                    *(struct D3DKMT_GETPATHSMODALITY **)(v151 + 24) = v195[0];
                    *(_QWORD *)(v151 + 32) = v32;
                    WdLogEvent5_WdEvent(v151);
                    v38 = 11;
                    v18 = 7;
                    goto LABEL_272;
                  }
                  if ( v200 )
                  {
                    v55 = 0;
                    LODWORD(v32) = GetPathsModality(v31, &v195[1], 1048640LL, 0LL);
                    if ( (int)v32 < 0 )
                    {
                      v38 = 13;
                      v18 = 7;
                      goto LABEL_85;
                    }
                    v56 = v51;
                    v57 = (16 * (v178 & 0x1000)) | 0x400000;
                    if ( (v56 & 0x10) == 0 )
                      v57 = 16 * (v178 & 0x1000);
                    if ( (v178 & 0x1100) != 0 )
                    {
                      v55 = 1;
                      v57 |= 0x4000u;
                    }
                    if ( v57 )
                    {
                      LODWORD(v32) = ((__int64 (__fastcall *)(_QWORD, struct D3DKMT_GETPATHSMODALITY *, _QWORD))qword_1C0190620)(
                                       v57,
                                       v195[0],
                                       0LL);
                      if ( (int)v32 < 0 )
                      {
                        v38 = 14;
                        goto LABEL_287;
                      }
                    }
                    v58 = gpGraphicsDeviceList;
                    v59 = 0;
                    while ( v58 )
                    {
                      v60 = v58 + 80;
                      v58 = (wchar_t *)*((_QWORD *)v58 + 16);
                      v61 = (*v60 & 0x800000) != 0;
                      v62 = v59 + 1;
                      if ( !v61 )
                        v62 = v59;
                      v59 = v62;
                    }
                    v63 = 0LL;
                    if ( v59 )
                    {
                      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 76LL * v59, 0x7774656Cu);
                      v63 = PoolWithTag;
                      if ( PoolWithTag
                        && (memset(PoolWithTag, 0, 76LL * v59), v65 = gpGraphicsDeviceList,
                                                                v66 = 0,
                                                                gpGraphicsDeviceList) )
                      {
                        do
                        {
                          v28 = 1;
                          if ( (*((_DWORD *)v65 + 40) & 0x800000) != 0 )
                          {
                            v67 = 76LL * v66++;
                            *(_DWORD *)&v63[v67] = *((_DWORD *)v65 + 66);
                            *(_DWORD *)&v63[v67 + 4] = *((_DWORD *)v65 + 67);
                            *(_DWORD *)&v63[v67 + 8] = *((_DWORD *)v65 + 68);
                          }
                          v65 = (wchar_t *)*((_QWORD *)v65 + 16);
                        }
                        while ( v65 );
                      }
                      else
                      {
                        v28 = 1;
                      }
                    }
                    DisplayScenarioJournalSetExpectedPathModality(
                      264 * (unsigned int)*((unsigned __int16 *)v195[0] + 10),
                      *((unsigned __int16 *)v195[0] + 10),
                      (char *)v195[0] + 48,
                      v59,
                      v63);
                    LOBYTE(v68) = v55;
                    v69 = v191;
                    v70 = ApplyPathsModality(
                            v195[0],
                            v57,
                            v68,
                            (_DWORD)v201,
                            (__int64)v187,
                            (__int64)&v176,
                            (__int64)v191,
                            v202);
                    v190 = v70;
                    v71 = v70;
                    v180 = v70;
                    if ( v70 >= 0 && v70 != 1 )
                    {
                      if ( v176 )
                      {
                        v152 = WdLogNewEntry5_WdAssertion(v31, v30, v33, v34);
                        WdLogEvent5_WdAssertion(v152);
                      }
                      if ( v71 == 2 )
                      {
                        if ( v55 || *v69 )
                        {
                          v153 = WdLogNewEntry5_WdAssertion(v31, v30, v33, v34);
                          WdLogEvent5_WdAssertion(v153);
                        }
                        LOBYTE(v17) = v178;
                        v37 = v170;
                        v171[0] = 1;
LABEL_78:
                        v72 = v187;
                      }
                      else
                      {
                        if ( !*v69 )
                        {
                          v154 = WdLogNewEntry5_WdAssertion(v31, v30, v33, v34);
                          WdLogEvent5_WdAssertion(v154);
                        }
                        LOBYTE(v17) = v178;
                        v72 = 0LL;
                        v37 = v170;
                        v187 = 0LL;
                      }
                      if ( v37 )
                      {
                        v73 = ((__int64 (__fastcall *)(_QWORD, struct D3DKMT_GETPATHSMODALITY *))qword_1C0190640)(
                                (unsigned int)v182,
                                v195[0]);
                        v32 = (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)v73;
                        if ( a6 )
                        {
                          if ( v73 != -1073741266 )
                          {
                            if ( v73 >= 0 )
                              goto LABEL_83;
                            v38 = 29;
                            LODWORD(v32) = 0;
                            v18 = 9;
                            v173 = 9;
LABEL_86:
                            v172 = v38;
                            goto LABEL_87;
                          }
                          if ( (v17 & 0x10) != 0 )
                          {
                            v156 = WdLogNewEntry5_WdAssertion(v31, v30, v33, v34);
                            WdLogEvent5_WdAssertion(v156);
                          }
                          v157 = WdLogNewEntry5_WdEvent(v31, v30);
                          *(_QWORD *)(v157 + 24) = v181;
                          *(_QWORD *)(v157 + 32) = -1073741266LL;
                          WdLogEvent5_WdEvent(v157);
                          if ( !v171[0] )
                          {
                            if ( v72 )
                            {
                              v158 = WdLogNewEntry5_WdAssertion(v31, v30, v33, v34);
                              WdLogEvent5_WdAssertion(v158);
                            }
                            v187 = *v69;
                            *v69 = 0LL;
                            v175 = 1;
                          }
                          v38 = 24;
                          v18 = 9;
LABEL_85:
                          v173 = v18;
                          goto LABEL_86;
                        }
                        if ( v73 < 0 )
                        {
                          v155 = WdLogNewEntry5_WdError();
                          *(_QWORD *)(v155 + 24) = v32;
                          WdLogEvent5_WdError(v155);
                          LODWORD(v32) = 0;
                        }
LABEL_83:
                        v38 = 18;
                      }
                      else
                      {
                        if ( (int)v32 >= 0 )
                          goto LABEL_83;
                        v38 = 17;
                      }
                      v18 = ((int)v32 >> 31) + 10;
                      goto LABEL_85;
                    }
                    v37 = v170;
                    v38 = 16;
                    LODWORD(v32) = -1073741823;
                    v18 = 5;
LABEL_272:
                    v173 = v18;
                    goto LABEL_86;
                  }
                  if ( (v17 & 0x40) != 0 )
                  {
                    v69 = v191;
                    v180 = 0;
                    goto LABEL_78;
                  }
                  v159 = WdLogNewEntry5_WdAssertion(v31, v30, v33, v34);
                  *(_QWORD *)(v159 + 24) = (unsigned int)v17;
                  WdLogEvent5_WdAssertion(v159);
                  v38 = 21;
LABEL_286:
                  LODWORD(v32) = -1073741811;
LABEL_287:
                  v18 = v173;
                  goto LABEL_86;
                }
                v149 = WdLogNewEntry5_WdWarning(v50);
                *(_QWORD *)(v149 + 24) = v181;
                *(_QWORD *)(v149 + 32) = v32;
                WdLogEvent5_WdWarning(v149);
                LODWORD(v32) = -1073741266;
              }
              v18 = v173;
LABEL_87:
              v74 = ++v181;
              if ( (_DWORD)v32 == -1073741266 )
              {
                if ( !v177 && v74 < 4 )
                {
                  v161 = 3221226030LL;
                  goto LABEL_293;
                }
              }
              else if ( (int)v32 >= 0 )
              {
                goto LABEL_89;
              }
              if ( !v179 )
                goto LABEL_144;
              v177 = 1;
              v37 = 0;
              v170 = 0;
              v161 = (unsigned int)v32;
LABEL_293:
              DisplayScenarioJournalRetry(v161);
              LODWORD(v17) = v178;
            }
            wil_details_FeaturePropertyCache_ReportUsageToService(
              &Feature_BrokeredDisplays_ModeChanges__private_propertyCache,
              10733637LL,
              &unk_1C01608E8);
            v43 = v192;
            v44 = (v186 & 0x20) != 0 && *((_QWORD *)v192 + 4);
            if ( !v44 || (v45 = 0x2000000, *((_DWORD *)v192 + 5)) )
              v45 = v17 & 0xF;
            v46 = v45 | ((v186 & 0x20) != 0 ? 0x9000 : 0);
            if ( (v45 & 0x2000000) != 0 && (v17 & 0xF) != 0xF )
            {
              v113 = WdLogNewEntry5_WdAssertion(v192, 0LL, v41, v42);
              WdLogEvent5_WdAssertion(v113);
            }
            LODWORD(v32) = GetPathsModality(v43, v195, v46, v44);
            if ( (int)v32 < 0 )
            {
              v38 = 2;
              v18 = 7;
LABEL_197:
              v37 = v170;
              v173 = v18;
              goto LABEL_86;
            }
            if ( !*((_WORD *)v195[0] + 10) )
            {
              v115 = WdLogNewEntry5_WdAssertion(v31, v30, v33, v34);
              WdLogEvent5_WdAssertion(v115);
            }
            if ( v174 || (v170 = 1, (v17 & 0x40) != 0) )
              v170 = 0;
            LODWORD(v189) = 0;
            v209 = 0uLL;
            QueryTable.DefaultType = 67108868;
            QueryTable.Flags = 288;
            QueryTable.Name = L"ScreenPosition.Left";
            QueryTable.EntryContext = &v209;
            v213 = 288;
            QueryTable.DefaultData = &v189;
            v214 = L"ScreenPosition.Top";
            v215 = (char *)&v209 + 4;
            v217 = &v189;
            v221 = L"ScreenPosition.Right";
            v222 = (char *)&v209 + 8;
            v224 = &v189;
            v228 = L"ScreenPosition.Bottom";
            v229 = (char *)&v209 + 12;
            v216 = 67108868;
            v220 = 288;
            v223 = 67108868;
            v227 = 288;
            v230 = 67108868;
            v231 = &v189;
            QueryTable.QueryRoutine = 0LL;
            QueryTable.DefaultLength = 4;
            v212 = 0LL;
            v218 = 4;
            v219 = 0LL;
            v225 = 4;
            v226 = 0LL;
            v232 = 4;
            v233 = 0LL;
            v234 = 0;
            memset(v235, 0, sizeof(v235));
            if ( RtlQueryRegistryValues(3u, L"GRE_Initialize\\OverrideScreenLayout", &QueryTable, 0LL, 0LL) >= 0 )
            {
              v116 = DWORD2(v209);
              v117 = v209;
              if ( (int)v209 >= SDWORD2(v209) || SDWORD1(v209) >= SHIDWORD(v209) )
              {
                v120 = WdLogNewEntry5_WdError();
                v121 = 0LL;
                v122 = (_QWORD *)(v120 + 24);
                do
                {
                  v123 = (int)v210[v121++ - 4];
                  *v122++ = v123;
                }
                while ( v121 < 4 );
                WdLogEvent5_WdError(v120);
              }
              else
              {
                v118 = 0;
                if ( *((_WORD *)v195[0] + 10) )
                {
                  do
                  {
                    v119 = 264LL * v118;
                    if ( *(_DWORD *)((char *)v195[0] + v119 + 136) == 0x80000000
                      && *(_DWORD *)((char *)v195[0] + v119 + 200)
                      && *(_DWORD *)((char *)v195[0] + v119 + 204) )
                    {
                      *(_DWORD *)((char *)v195[0] + v119 + 200) = v116 - v117;
                      *(_DWORD *)((char *)v195[0] + v119 + 204) = HIDWORD(v209) - DWORD1(v209);
                      *(_OWORD *)((char *)v195[0] + v119 + 216) = v209;
                      v116 = DWORD2(v209);
                      v117 = v209;
                    }
                    ++v118;
                    v31 = *((unsigned __int16 *)v195[0] + 10);
                  }
                  while ( v118 < (unsigned int)v31 );
                }
              }
            }
            if ( v44 )
            {
              v87 = v192;
              if ( !*((_DWORD *)v192 + 5) || (v170 = 1, !*((_DWORD *)v192 + 6)) )
                v170 = 0;
              LODWORD(v32) = DrvValidateAndApplyDevMode(v192, v195);
              if ( (int)v32 < 0 )
              {
                v114 = *((_DWORD *)v87 + 12);
                v38 = 2;
                v18 = *((_DWORD *)v87 + 13);
                v180 = v114;
                if ( (_DWORD)v32 == -1073741266 )
                  v38 = 23;
                goto LABEL_197;
              }
              v182 = *((_DWORD *)v87 + 5) != 0;
            }
            v173 = 10;
            goto LABEL_39;
          }
          v38 = 12;
          v18 = 6;
LABEL_143:
          v172 = v38;
          goto LABEL_144;
        }
        LODWORD(v17) = v17 & 0xFFFFFFF0 | 4;
LABEL_171:
        v178 = v17;
        goto LABEL_12;
      }
      wil_details_FeaturePropertyCache_ReportUsageToService(
        &Feature_BrokeredDisplays_ModeChanges__private_propertyCache,
        10733637LL,
        &unk_1C01608E8);
      LODWORD(v32) = 0;
      v174 = 0;
      v29 = 0;
      if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C01908E8)(0LL, 0LL) )
      {
        LODWORD(v17) = 2191;
        goto LABEL_171;
      }
      v171[0] = 1;
      v38 = 18;
    }
    goto LABEL_93;
  }
  if ( (v14 & 0x20) != 0 )
  {
    v163 = WdLogNewEntry5_WdAssertion(v25, 0LL, v26, v27);
    WdLogEvent5_WdAssertion(v163);
  }
  v90 = v14 & 1;
  v91 = DrvChangeDisplayFallback(v201, BYTE1(v17) & 1, v90, a8, a9, (enum _DXGK_DIAG_SDC_STAGE *)&v172, v171, &v180);
  v38 = v172;
  LODWORD(v32) = v91;
  if ( v91 >= 0 )
  {
    if ( v90 )
      v38 = 30;
    goto LABEL_143;
  }
LABEL_162:
  if ( !v179 )
    goto LABEL_91;
  if ( a6 )
  {
    v99 = WdLogNewEntry5_WdAssertion(v31, v30, v33, v34);
    WdLogEvent5_WdAssertion(v99);
  }
  LODWORD(v17) = v178;
  v100 = DrvChangeDisplayFallback(v201, BYTE1(v178) & 1, 1u, v187, v16, (enum _DXGK_DIAG_SDC_STAGE *)&v172, v171, &v180);
  v32 = (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)v100;
  if ( v100 < 0 )
  {
    v167 = WdLogNewEntry5_WdAssertion(v102, v101, v33, v34);
    WdLogEvent5_WdAssertion(v167);
    v38 = v172;
    if ( !byte_1C01968F1 )
    {
      byte_1C01968F1 = 1;
      ((void (__fastcall *)(__int64, __int64, struct DISPLAYCONFIG_PATH_INFO_INTERNAL *, _QWORD, _QWORD))qword_1C0190C58)(
        400LL,
        22LL,
        v32,
        v180,
        v172);
    }
  }
  else
  {
    v38 = 31;
    v18 = 10;
  }
LABEL_92:
  if ( (_DWORD)v32 != -1073741811 )
  {
LABEL_93:
    FreePathsModality(v195[1]);
    v195[1] = 0LL;
    if ( (int)GetPathsModality(v76, &v195[1], 16777232LL, 0LL) >= 0 )
      DisplayScenarioJournalSetActualPathModality(
        264 * (unsigned int)*((unsigned __int16 *)v195[1] + 10),
        *((unsigned __int16 *)v195[1] + 10),
        (char *)v195[1] + 48);
    if ( *v16 )
    {
      v88 = *((_QWORD *)*v16 + 4);
      if ( v88 )
      {
        v89 = *(_QWORD *)(v88 + 2592);
        if ( ((v89 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
          DisplayScenarioJounralSetTSDDDState((*(_DWORD *)(v89 + 160) & 0x2000000) != 0);
      }
    }
  }
  v77 = v181;
  if ( v204 )
    *v204 = v181;
  if ( v205 )
    *v205 = v38;
  if ( v206 )
  {
    if ( !v171[0] || v175 )
      v28 = 0;
    *v206 = v28;
  }
  if ( v207 )
    *v207 = v176;
  v78 = v186;
  if ( (v186 & 0x20) != 0 )
  {
    v79 = v192;
    v80 = (unsigned int)v180;
    v81 = (int)v32 >= 0;
    v82 = v180 < 0;
    *((_DWORD *)v192 + 12) = v180;
    *((_DWORD *)v79 + 13) = v18;
    if ( v81 != !v82 )
    {
      v168 = WdLogNewEntry5_WdAssertion(v81, v80, v33, v34);
      WdLogEvent5_WdAssertion(v168);
    }
    v210[2] = v180;
    v210[0] = 0;
    v210[1] = 16;
    v210[3] = v18;
    DisplayScenarioJournalSetSpecializedData(v210);
  }
  if ( (v78 & 0x40) == 0 )
    LogDiagSDC(v183, (_DWORD)v193, v17, (_DWORD)v32, v77, v38, v208, v171[0]);
  if ( gpGdiSharedMemory )
    DisplayScenarioJournalSetUniqueness(
      *((unsigned int *)gpGdiSharedMemory + 393256),
      *((unsigned int *)gpGdiSharedMemory + 393252));
  LOBYTE(v34) = v171[0];
  LOBYTE(Environment) = v176;
  DisplayScenarioJournalFinalize((unsigned int)v32, v38, v77, v34, Environment, v190, v202);
  v85 = WdLogNewEntry5_WdEvent(v84, v83);
  *(_QWORD *)(v85 + 24) = (int)v32;
  WdLogEvent5_WdEvent(v85);
  DrvSetDisplayConfig_::_2_::_AUTO::__AUTO((AUTO_TGO *)v194);
  AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(&v203, 5LL);
  return (unsigned int)v32;
}
