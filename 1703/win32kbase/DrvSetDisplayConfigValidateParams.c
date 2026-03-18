/*
 * XREFs of DrvSetDisplayConfigValidateParams @ 0x1C00A25FC
 * Callers:
 *     xxxUserSetDisplayConfig @ 0x1C0062EA0 (xxxUserSetDisplayConfig.c)
 *     UserFunctionalizeDisplayConfig @ 0x1C00D7E44 (UserFunctionalizeDisplayConfig.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C003F7F8 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     ?DrvIsTemporarySettingChangeDisabled@@YAHXZ @ 0x1C0057C6C (-DrvIsTemporarySettingChangeDisabled@@YAHXZ.c)
 *     ?DrvIsPermanentSettingChangesDisabled@@YAHXZ @ 0x1C008DF5C (-DrvIsPermanentSettingChangesDisabled@@YAHXZ.c)
 *     UserIsConsoleConnection @ 0x1C0092620 (UserIsConsoleConnection.c)
 *     _stricmp @ 0x1C009D9A4 (_stricmp.c)
 *     ?Convert16bitSdcModeInfoIdxTo32bit@@YAIG@Z @ 0x1C00F4120 (-Convert16bitSdcModeInfoIdxTo32bit@@YAIG@Z.c)
 *     ?EnforceSDCCloneSourceIndexCoherency@@YAXIPEAUDISPLAYCONFIG_PATH_INFO@@PEAI@Z @ 0x1C00F7D70 (-EnforceSDCCloneSourceIndexCoherency@@YAXIPEAUDISPLAYCONFIG_PATH_INFO@@PEAI@Z.c)
 *     ?GetTargetVirtualization@@YAJU_LUID@@IPEAE1PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2@Z @ 0x1C00F7DF8 (-GetTargetVirtualization@@YAJU_LUID@@IPEAE1PEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2@Z.c)
 *     ?LogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@III@Z @ 0x1C00F7E98 (-LogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@III@Z.c)
 *     ?ValidateSDCv1ModeInfoArray@@YAJPEAU_DISPLAYCONFIG_MODE_INFO_SUMMARY@@I_NI@Z @ 0x1C00F81A4 (-ValidateSDCv1ModeInfoArray@@YAJPEAU_DISPLAYCONFIG_MODE_INFO_SUMMARY@@I_NI@Z.c)
 */

__int64 __fastcall DrvSetDisplayConfigValidateParams(
        __int64 a1,
        struct DISPLAYCONFIG_PATH_INFO *a2,
        __int64 a3,
        struct _DISPLAYCONFIG_MODE_INFO_SUMMARY *a4,
        unsigned int a5,
        unsigned int a6,
        char a7)
{
  __int64 CurrentProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned __int64 LowPart; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  struct _DISPLAYCONFIG_MODE_INFO_SUMMARY *v22; // rdx
  __int64 v23; // rcx
  struct _DISPLAYCONFIG_MODE_INFO_SUMMARY *v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  int TargetVirtualization; // [rsp+30h] [rbp-3B8h]
  unsigned int HighPart; // [rsp+34h] [rbp-3B4h]
  unsigned int v31; // [rsp+34h] [rbp-3B4h]
  unsigned int v32; // [rsp+34h] [rbp-3B4h]
  unsigned __int8 v33[3]; // [rsp+39h] [rbp-3AFh] BYREF
  unsigned int j; // [rsp+3Ch] [rbp-3ACh]
  unsigned int m; // [rsp+40h] [rbp-3A8h]
  struct _DISPLAYCONFIG_MODE_INFO_SUMMARY *v36; // [rsp+48h] [rbp-3A0h]
  struct _LUID *v37; // [rsp+50h] [rbp-398h]
  unsigned __int8 v38[4]; // [rsp+58h] [rbp-390h] BYREF
  unsigned int n; // [rsp+5Ch] [rbp-38Ch]
  bool v40; // [rsp+60h] [rbp-388h]
  char *v41; // [rsp+68h] [rbp-380h]
  _DWORD *v42; // [rsp+70h] [rbp-378h]
  char *v43; // [rsp+78h] [rbp-370h]
  bool v44; // [rsp+80h] [rbp-368h]
  unsigned int k; // [rsp+84h] [rbp-364h]
  char *v46; // [rsp+88h] [rbp-360h]
  unsigned int v47; // [rsp+90h] [rbp-358h]
  _DWORD *v48; // [rsp+98h] [rbp-350h]
  unsigned int i; // [rsp+A0h] [rbp-348h]
  int v50; // [rsp+A4h] [rbp-344h]
  struct DISPLAYCONFIG_PATH_INFO *v51; // [rsp+A8h] [rbp-340h]
  DWORD v52; // [rsp+B0h] [rbp-338h]
  unsigned int v53; // [rsp+B4h] [rbp-334h]
  char v54; // [rsp+B8h] [rbp-330h]
  char v55; // [rsp+B9h] [rbp-32Fh]
  char v56; // [rsp+BAh] [rbp-32Eh]
  char v57; // [rsp+BBh] [rbp-32Dh]
  char v58; // [rsp+BCh] [rbp-32Ch]
  char v59; // [rsp+BDh] [rbp-32Bh]
  char v60; // [rsp+BEh] [rbp-32Ah]
  char v61; // [rsp+BFh] [rbp-329h]
  char v62; // [rsp+C0h] [rbp-328h]
  char v63; // [rsp+C1h] [rbp-327h]
  char v64; // [rsp+C2h] [rbp-326h]
  char v65; // [rsp+C3h] [rbp-325h]
  char v66; // [rsp+C4h] [rbp-324h]
  char v67; // [rsp+C5h] [rbp-323h]
  char v68; // [rsp+C6h] [rbp-322h]
  char v69; // [rsp+C7h] [rbp-321h]
  char v70; // [rsp+C8h] [rbp-320h]
  char v71; // [rsp+C9h] [rbp-31Fh]
  char v72; // [rsp+CAh] [rbp-31Eh]
  char v73; // [rsp+CBh] [rbp-31Dh]
  char v74; // [rsp+CCh] [rbp-31Ch]
  char v75; // [rsp+CDh] [rbp-31Bh]
  char v76; // [rsp+CEh] [rbp-31Ah]
  char v77; // [rsp+CFh] [rbp-319h]
  char v78; // [rsp+D0h] [rbp-318h]
  char v79; // [rsp+D1h] [rbp-317h]
  char v80; // [rsp+D2h] [rbp-316h]
  char v81; // [rsp+D3h] [rbp-315h]
  char v82; // [rsp+D4h] [rbp-314h]
  char v83; // [rsp+D5h] [rbp-313h]
  char v84; // [rsp+D6h] [rbp-312h]
  char v85; // [rsp+D7h] [rbp-311h]
  char v86; // [rsp+D8h] [rbp-310h]
  char v87; // [rsp+D9h] [rbp-30Fh]
  char v88; // [rsp+DAh] [rbp-30Eh]
  char v89; // [rsp+DBh] [rbp-30Dh]
  char v90; // [rsp+DCh] [rbp-30Ch]
  char v91; // [rsp+DDh] [rbp-30Bh]
  char v92; // [rsp+DEh] [rbp-30Ah]
  char v93; // [rsp+DFh] [rbp-309h]
  char v94; // [rsp+E0h] [rbp-308h]
  char v95; // [rsp+E1h] [rbp-307h]
  char v96; // [rsp+E2h] [rbp-306h]
  char v97; // [rsp+E3h] [rbp-305h]
  char v98; // [rsp+E4h] [rbp-304h]
  char v99; // [rsp+E5h] [rbp-303h]
  char v100; // [rsp+E6h] [rbp-302h]
  char v101; // [rsp+E7h] [rbp-301h]
  char v102; // [rsp+E8h] [rbp-300h]
  char v103; // [rsp+E9h] [rbp-2FFh]
  char v104; // [rsp+EAh] [rbp-2FEh]
  char v105; // [rsp+EBh] [rbp-2FDh]
  char v106; // [rsp+ECh] [rbp-2FCh]
  char v107; // [rsp+EDh] [rbp-2FBh]
  char v108; // [rsp+EEh] [rbp-2FAh]
  char v109; // [rsp+EFh] [rbp-2F9h]
  char v110; // [rsp+F0h] [rbp-2F8h]
  char v111; // [rsp+F1h] [rbp-2F7h]
  char v112; // [rsp+F2h] [rbp-2F6h]
  char v113; // [rsp+F3h] [rbp-2F5h]
  char v114; // [rsp+F4h] [rbp-2F4h]
  char v115; // [rsp+F5h] [rbp-2F3h]
  char v116; // [rsp+F6h] [rbp-2F2h]
  char v117; // [rsp+F7h] [rbp-2F1h]
  char v118; // [rsp+F8h] [rbp-2F0h]
  char v119; // [rsp+F9h] [rbp-2EFh]
  char v120; // [rsp+FAh] [rbp-2EEh]
  char v121; // [rsp+FBh] [rbp-2EDh]
  char v122; // [rsp+FCh] [rbp-2ECh]
  char v123; // [rsp+FDh] [rbp-2EBh]
  char v124; // [rsp+FEh] [rbp-2EAh]
  char v125; // [rsp+FFh] [rbp-2E9h]
  char v126; // [rsp+100h] [rbp-2E8h]
  char v127; // [rsp+101h] [rbp-2E7h]
  unsigned int v128; // [rsp+104h] [rbp-2E4h] BYREF
  int v129; // [rsp+108h] [rbp-2E0h]
  char v130; // [rsp+10Ch] [rbp-2DCh]
  char v131; // [rsp+10Dh] [rbp-2DBh]
  char v132; // [rsp+10Eh] [rbp-2DAh]
  char v133; // [rsp+10Fh] [rbp-2D9h]
  char v134; // [rsp+110h] [rbp-2D8h]
  char v135; // [rsp+111h] [rbp-2D7h]
  char v136; // [rsp+112h] [rbp-2D6h]
  char v137; // [rsp+113h] [rbp-2D5h]
  char v138; // [rsp+114h] [rbp-2D4h]
  _QWORD *v139; // [rsp+118h] [rbp-2D0h]
  _QWORD *v140; // [rsp+120h] [rbp-2C8h]
  _QWORD *v141; // [rsp+128h] [rbp-2C0h]
  _QWORD *v142; // [rsp+130h] [rbp-2B8h]
  _QWORD *v143; // [rsp+138h] [rbp-2B0h]
  _QWORD *v144; // [rsp+140h] [rbp-2A8h]
  _QWORD *v145; // [rsp+148h] [rbp-2A0h]
  unsigned int Size; // [rsp+150h] [rbp-298h]
  BOOL Size_4; // [rsp+154h] [rbp-294h]
  int v148; // [rsp+158h] [rbp-290h]
  BOOL v149; // [rsp+15Ch] [rbp-28Ch]
  int v150; // [rsp+160h] [rbp-288h]
  BOOL v151; // [rsp+164h] [rbp-284h]
  int v152; // [rsp+168h] [rbp-280h]
  int v153; // [rsp+16Ch] [rbp-27Ch]
  _QWORD *v154; // [rsp+170h] [rbp-278h]
  _QWORD *v155; // [rsp+178h] [rbp-270h]
  _QWORD *v156; // [rsp+180h] [rbp-268h]
  _QWORD *v157; // [rsp+188h] [rbp-260h]
  _QWORD *v158; // [rsp+190h] [rbp-258h]
  _QWORD *v159; // [rsp+198h] [rbp-250h]
  _QWORD *v160; // [rsp+1A0h] [rbp-248h]
  _QWORD *v161; // [rsp+1A8h] [rbp-240h]
  _QWORD *v162; // [rsp+1B0h] [rbp-238h]
  _QWORD *v163; // [rsp+1B8h] [rbp-230h]
  _QWORD *v164; // [rsp+1C0h] [rbp-228h]
  _QWORD *v165; // [rsp+1C8h] [rbp-220h]
  _QWORD *v166; // [rsp+1D0h] [rbp-218h]
  _QWORD *v167; // [rsp+1D8h] [rbp-210h]
  _QWORD *v168; // [rsp+1E0h] [rbp-208h]
  _QWORD *v169; // [rsp+1E8h] [rbp-200h]
  _QWORD *v170; // [rsp+1F0h] [rbp-1F8h]
  _QWORD *v171; // [rsp+1F8h] [rbp-1F0h]
  _QWORD *v172; // [rsp+200h] [rbp-1E8h]
  _QWORD *v173; // [rsp+208h] [rbp-1E0h]
  _QWORD *v174; // [rsp+210h] [rbp-1D8h]
  __int64 v175; // [rsp+218h] [rbp-1D0h]
  __int64 v176; // [rsp+220h] [rbp-1C8h]
  __int64 v177; // [rsp+228h] [rbp-1C0h]
  __int64 v178; // [rsp+230h] [rbp-1B8h]
  __int64 v179; // [rsp+238h] [rbp-1B0h]
  __int64 v180; // [rsp+240h] [rbp-1A8h]
  __int64 v181; // [rsp+248h] [rbp-1A0h]
  __int64 v182; // [rsp+250h] [rbp-198h]
  __int64 v183; // [rsp+258h] [rbp-190h]
  __int64 v184; // [rsp+260h] [rbp-188h]
  __int64 v185; // [rsp+268h] [rbp-180h]
  __int64 v186; // [rsp+270h] [rbp-178h]
  __int64 v187; // [rsp+278h] [rbp-170h]
  __int64 v188; // [rsp+280h] [rbp-168h]
  __int64 v189; // [rsp+288h] [rbp-160h]
  __int64 v190; // [rsp+290h] [rbp-158h]
  __int64 v191; // [rsp+298h] [rbp-150h]
  __int64 v192; // [rsp+2A0h] [rbp-148h]
  __int64 v193; // [rsp+2A8h] [rbp-140h]
  __int64 v194; // [rsp+2B0h] [rbp-138h]
  __int64 v195; // [rsp+2B8h] [rbp-130h]
  __int64 v196; // [rsp+2C0h] [rbp-128h]
  __int64 v197; // [rsp+2C8h] [rbp-120h]
  __int64 v198; // [rsp+2D0h] [rbp-118h]
  __int64 v199; // [rsp+2D8h] [rbp-110h]
  __int64 v200; // [rsp+2E0h] [rbp-108h]
  __int64 v201; // [rsp+2E8h] [rbp-100h]
  __int64 v202; // [rsp+2F0h] [rbp-F8h]
  __int64 v203; // [rsp+2F8h] [rbp-F0h]
  __int64 v204; // [rsp+300h] [rbp-E8h]
  __int64 v205; // [rsp+308h] [rbp-E0h]
  __int64 v206; // [rsp+310h] [rbp-D8h]
  __int64 v207; // [rsp+318h] [rbp-D0h]
  __int64 v208; // [rsp+320h] [rbp-C8h]
  __int64 v209; // [rsp+328h] [rbp-C0h]
  __int64 v210; // [rsp+330h] [rbp-B8h]
  __int64 v211; // [rsp+338h] [rbp-B0h]
  __int64 v212; // [rsp+340h] [rbp-A8h]
  __int64 v213; // [rsp+348h] [rbp-A0h]
  __int64 v214; // [rsp+350h] [rbp-98h]
  __int64 v215; // [rsp+358h] [rbp-90h]
  __int64 v216; // [rsp+360h] [rbp-88h]
  __int64 v217; // [rsp+368h] [rbp-80h]
  __int64 v218; // [rsp+370h] [rbp-78h]
  __int64 v219; // [rsp+378h] [rbp-70h]
  __int64 v220; // [rsp+380h] [rbp-68h]
  char *Str1; // [rsp+388h] [rbp-60h]
  __int64 v222; // [rsp+390h] [rbp-58h]
  __int64 v223; // [rsp+398h] [rbp-50h]
  __int64 v224; // [rsp+3A0h] [rbp-48h]
  __int64 v225; // [rsp+3A8h] [rbp-40h]
  __int64 v226; // [rsp+3B0h] [rbp-38h]
  __int64 v227; // [rsp+3B8h] [rbp-30h]
  __int64 v228; // [rsp+3C0h] [rbp-28h]
  __int64 v229; // [rsp+3C8h] [rbp-20h]
  __int64 v230; // [rsp+3D0h] [rbp-18h]
  __int64 v231; // [rsp+3D8h] [rbp-10h]
  unsigned int v232; // [rsp+3F0h] [rbp+8h]
  unsigned int v234; // [rsp+400h] [rbp+18h]

  v234 = a3;
  v232 = a1;
  TargetVirtualization = 0;
  v36 = 0LL;
  if ( a7 )
  {
    if ( (a5 & 0x80) != 0 && DrvIsTemporarySettingChangeDisabled() )
    {
      TargetVirtualization = -1073741790;
      v219 = WdLogNewEntry5_WdError(a1, a2, a3);
      *(_QWORD *)(v219 + 24) = -1073741790LL;
      v117 = WdLogEvent5_WdError(v219);
      goto LABEL_366;
    }
    if ( (a5 & 0x200) != 0 && DrvIsPermanentSettingChangesDisabled() )
    {
      TargetVirtualization = -1073741790;
      v220 = WdLogNewEntry5_WdError(a1, a2, a3);
      *(_QWORD *)(v220 + 24) = -1073741790LL;
      v119 = WdLogEvent5_WdError(v220);
      goto LABEL_366;
    }
  }
  if ( (a5 & 0xC0000000) != 0 )
  {
    if ( (a5 & 0x80) != 0 )
    {
      if ( a5 == 1073741952 || a5 == -2147483520 )
      {
        CurrentProcess = PsGetCurrentProcess(a1, a2, a3, a4);
        Str1 = (char *)PsGetProcessImageFileName(CurrentProcess);
        if ( gbBypassPresenterViewProcessCheck || Str1 && !stricmp(Str1, "explorer.exe") )
        {
          if ( v232 || a2 || v234 || a4 )
          {
            TargetVirtualization = -1073741811;
            v222 = WdLogNewEntry5_WdError(v9, v8, v10);
            *(_QWORD *)(v222 + 24) = -1073741811LL;
            v123 = WdLogEvent5_WdError(v222);
          }
          else
          {
            TargetVirtualization = 0;
            v223 = WdLogNewEntry5_WdTrace(v9);
            *(_QWORD *)(v223 + 24) = a5;
            v124 = WdLogEvent5_WdTrace(v223);
          }
        }
        else
        {
          TargetVirtualization = -1073741581;
          v177 = WdLogNewEntry5_WdError(v9, v8, v10);
          *(_QWORD *)(v177 + 24) = a5;
          *(_QWORD *)(v177 + 32) = -1073741581LL;
          v122 = WdLogEvent5_WdError(v177);
        }
      }
      else
      {
        TargetVirtualization = -1073741581;
        v176 = WdLogNewEntry5_WdError(a1, a2, a3);
        *(_QWORD *)(v176 + 24) = a5;
        *(_QWORD *)(v176 + 32) = -1073741581LL;
        v121 = WdLogEvent5_WdError(v176);
      }
    }
    else
    {
      TargetVirtualization = -1073741581;
      v175 = WdLogNewEntry5_WdError(a1, a2, a3);
      *(_QWORD *)(v175 + 24) = a5;
      *(_QWORD *)(v175 + 32) = -1073741581LL;
      v120 = WdLogEvent5_WdError(v175);
    }
    goto LABEL_366;
  }
  if ( (a6 & 1) != 0 )
  {
    if ( a6 == 1 && a5 == 128 && !v232 && !v234 )
    {
      TargetVirtualization = 0;
    }
    else
    {
      TargetVirtualization = -1073741581;
      v178 = WdLogNewEntry5_WdAssertion(a1, a2);
      *(_QWORD *)(v178 + 24) = a5;
      *(_QWORD *)(v178 + 32) = -1073741581LL;
      v125 = WdLogEvent5_WdAssertion(v178);
    }
    goto LABEL_366;
  }
  if ( ((a6 & 2) != 0 || (a6 & 4) != 0) && (a5 & 0x88F) != 0x88F )
  {
    TargetVirtualization = -1073741581;
    v179 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v179 + 24) = a5;
    *(_QWORD *)(v179 + 32) = -1073741581LL;
    v126 = WdLogEvent5_WdAssertion(v179);
    goto LABEL_366;
  }
  if ( (a6 & 0x10) != 0 && (a6 & 8) == 0 )
  {
    TargetVirtualization = -1073741581;
    v180 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v180 + 24) = a5;
    *(_QWORD *)(v180 + 32) = -1073741581LL;
    v127 = WdLogEvent5_WdAssertion(v180);
    goto LABEL_366;
  }
  if ( (a6 & 8) != 0 && (v232 != 1 || v234 != 2) )
  {
    TargetVirtualization = -1073741581;
    v154 = (_QWORD *)WdLogNewEntry5_WdAssertion(a1, a2);
    v154[3] = v232;
    v154[4] = v234;
    v154[5] = a5;
    v154[6] = -1073741581LL;
    v130 = WdLogEvent5_WdAssertion(v154);
    goto LABEL_366;
  }
  if ( (a6 & 8) != 0 && (a5 & 0x20) == 0 )
  {
    TargetVirtualization = -1073741581;
    v181 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v181 + 24) = a5;
    *(_QWORD *)(v181 + 32) = -1073741581LL;
    v132 = WdLogEvent5_WdAssertion(v181);
    goto LABEL_366;
  }
  if ( !UserIsConsoleConnection() && (a5 & 0x88F) != 0x88F )
  {
    TargetVirtualization = -1073741790;
    v182 = WdLogNewEntry5_WdError(v12, LowPart, v13);
    *(_QWORD *)(v182 + 24) = a5;
    *(_QWORD *)(v182 + 32) = -1073741790LL;
    v133 = WdLogEvent5_WdError(v182);
    goto LABEL_366;
  }
  if ( (a5 & 0xFFFF0000) != 0 )
  {
    TargetVirtualization = -1073741581;
    v183 = WdLogNewEntry5_WdError(v12, LowPart, v13);
    *(_QWORD *)(v183 + 24) = a5;
    *(_QWORD *)(v183 + 32) = -1073741581LL;
    v134 = WdLogEvent5_WdError(v183);
    goto LABEL_366;
  }
  if ( (a5 & 0xC0) == 0 || (a5 & 0xC0) == 0xC0 )
  {
    TargetVirtualization = -1073741581;
    v184 = WdLogNewEntry5_WdError(v12, LowPart, v13);
    *(_QWORD *)(v184 + 24) = a5;
    *(_QWORD *)(v184 + 32) = -1073741581LL;
    v135 = WdLogEvent5_WdError(v184);
    goto LABEL_366;
  }
  if ( (a5 & 0x180) == 0x100 )
  {
    TargetVirtualization = -1073741581;
    v185 = WdLogNewEntry5_WdError(v12, LowPart, v13);
    *(_QWORD *)(v185 + 24) = a5;
    *(_QWORD *)(v185 + 32) = -1073741581LL;
    v136 = WdLogEvent5_WdError(v185);
    goto LABEL_366;
  }
  if ( (a5 & 0x1000) != 0 && (a5 & 0xA0) != 0xA0 )
  {
    TargetVirtualization = -1073741581;
    v186 = WdLogNewEntry5_WdError(v12, LowPart, v13);
    *(_QWORD *)(v186 + 24) = a5;
    *(_QWORD *)(v186 + 32) = -1073741581LL;
    v137 = WdLogEvent5_WdError(v186);
    goto LABEL_366;
  }
  if ( (a5 & 0x2000) != 0 && (a5 & 0x10) == 0 )
  {
    TargetVirtualization = -1073741581;
    v187 = WdLogNewEntry5_WdError(v12, LowPart, v13);
    *(_QWORD *)(v187 + 24) = a5;
    *(_QWORD *)(v187 + 32) = -1073741581LL;
    v138 = WdLogEvent5_WdError(v187);
    goto LABEL_366;
  }
  if ( (a5 & 0x1F) != 0 )
  {
    if ( (a5 & 0x400) != 0 )
    {
      TargetVirtualization = -1073741581;
      v188 = WdLogNewEntry5_WdError(v12, LowPart, v13);
      *(_QWORD *)(v188 + 24) = a5;
      *(_QWORD *)(v188 + 32) = -1073741581LL;
      v54 = WdLogEvent5_WdError(v188);
    }
    else if ( (a5 & 0x20) != 0 )
    {
      TargetVirtualization = -1073741581;
      v189 = WdLogNewEntry5_WdError(v12, LowPart, v13);
      *(_QWORD *)(v189 + 24) = a5;
      *(_QWORD *)(v189 + 32) = -1073741581LL;
      v55 = WdLogEvent5_WdError(v189);
    }
    else if ( (a5 & 0x200) != 0 )
    {
      TargetVirtualization = -1073741581;
      v190 = WdLogNewEntry5_WdError(v12, LowPart, v13);
      *(_QWORD *)(v190 + 24) = a5;
      *(_QWORD *)(v190 + 32) = -1073741581LL;
      v56 = WdLogEvent5_WdError(v190);
    }
    else if ( a4 )
    {
      TargetVirtualization = -1073741582;
      v191 = WdLogNewEntry5_WdError(v12, LowPart, v13);
      *(_QWORD *)(v191 + 24) = a5;
      *(_QWORD *)(v191 + 32) = -1073741582LL;
      v57 = WdLogEvent5_WdError(v191);
    }
    else if ( v234 )
    {
      TargetVirtualization = -1073741583;
      v192 = WdLogNewEntry5_WdError(v12, LowPart, v13);
      *(_QWORD *)(v192 + 24) = a5;
      *(_QWORD *)(v192 + 32) = -1073741583LL;
      v58 = WdLogEvent5_WdError(v192);
    }
    else if ( (a5 & 0x10) != 0 )
    {
      if ( (a5 & 0x800) != 0 )
      {
        TargetVirtualization = -1073741581;
        v193 = WdLogNewEntry5_WdError(v12, LowPart, v13);
        *(_QWORD *)(v193 + 24) = a5;
        *(_QWORD *)(v193 + 32) = -1073741581LL;
        v59 = WdLogEvent5_WdError(v193);
      }
      else if ( a2 )
      {
        if ( v232 )
        {
          v51 = a2;
          for ( i = 0; i < v232; ++i )
          {
            if ( (a5 & 0x8000) != 0 )
            {
              if ( (*((_DWORD *)v51 + 17) & 1) != 0
                && ((unsigned __int16)HIWORD(*((_DWORD *)v51 + 3)) != 0xFFFF
                 || (unsigned __int16)HIWORD(*((_DWORD *)v51 + 8)) != 0xFFFF
                 || (unsigned __int16)*((_DWORD *)v51 + 8) != 0xFFFF
                 || (unsigned __int16)*((_DWORD *)v51 + 3) == 0xFFFF) )
              {
                TargetVirtualization = -1073741584;
                v157 = (_QWORD *)WdLogNewEntry5_WdError(v12, LowPart, v13);
                v157[3] = a5;
                v157[4] = i;
                v157[5] = -1073741584LL;
                v62 = WdLogEvent5_WdError(v157);
                break;
              }
            }
            else if ( (*((_DWORD *)v51 + 17) & 1) != 0 && (*((_DWORD *)v51 + 3) != -1 || *((_DWORD *)v51 + 8) != -1) )
            {
              TargetVirtualization = -1073741584;
              v158 = (_QWORD *)WdLogNewEntry5_WdError(v12, LowPart, v13);
              v158[3] = a5;
              v158[4] = i;
              v158[5] = -1073741584LL;
              v63 = WdLogEvent5_WdError(v158);
              break;
            }
            v51 = (struct DISPLAYCONFIG_PATH_INFO *)((char *)v51 + 72);
          }
        }
        else
        {
          TargetVirtualization = -1073741585;
          v195 = WdLogNewEntry5_WdError(v12, LowPart, v13);
          *(_QWORD *)(v195 + 24) = a5;
          *(_QWORD *)(v195 + 32) = -1073741585LL;
          v61 = WdLogEvent5_WdError(v195);
        }
      }
      else
      {
        TargetVirtualization = -1073741584;
        v194 = WdLogNewEntry5_WdError(v12, LowPart, v13);
        *(_QWORD *)(v194 + 24) = a5;
        *(_QWORD *)(v194 + 32) = -1073741584LL;
        v60 = WdLogEvent5_WdError(v194);
      }
    }
    else if ( a2 )
    {
      TargetVirtualization = -1073741584;
      v196 = WdLogNewEntry5_WdError(v12, LowPart, v13);
      *(_QWORD *)(v196 + 24) = a5;
      *(_QWORD *)(v196 + 32) = -1073741584LL;
      v64 = WdLogEvent5_WdError(v196);
    }
    else if ( v232 )
    {
      TargetVirtualization = -1073741585;
      v197 = WdLogNewEntry5_WdError(v12, LowPart, v13);
      *(_QWORD *)(v197 + 24) = a5;
      *(_QWORD *)(v197 + 32) = -1073741585LL;
      v65 = WdLogEvent5_WdError(v197);
    }
  }
  else
  {
    v44 = (a5 & 0x8000u) != 0;
    if ( (a5 & 0x20) == 0 )
    {
      TargetVirtualization = -1073741581;
      v198 = WdLogNewEntry5_WdError(v12, LowPart, v13);
      *(_QWORD *)(v198 + 24) = a5;
      *(_QWORD *)(v198 + 32) = -1073741581LL;
      v66 = WdLogEvent5_WdError(v198);
      goto LABEL_366;
    }
    if ( (a5 & 0x800) != 0 )
    {
      TargetVirtualization = -1073741581;
      v199 = WdLogNewEntry5_WdError(v12, LowPart, v13);
      *(_QWORD *)(v199 + 24) = a5;
      *(_QWORD *)(v199 + 32) = -1073741581LL;
      v67 = WdLogEvent5_WdError(v199);
      goto LABEL_366;
    }
    if ( !a2 )
    {
      TargetVirtualization = -1073741584;
      v200 = WdLogNewEntry5_WdError(v12, LowPart, v13);
      *(_QWORD *)(v200 + 24) = a5;
      *(_QWORD *)(v200 + 32) = -1073741584LL;
      v68 = WdLogEvent5_WdError(v200);
      goto LABEL_366;
    }
    if ( !v232 )
    {
      TargetVirtualization = -1073741585;
      v201 = WdLogNewEntry5_WdError(v12, LowPart, v13);
      *(_QWORD *)(v201 + 24) = a5;
      *(_QWORD *)(v201 + 32) = -1073741585LL;
      v69 = WdLogEvent5_WdError(v201);
      goto LABEL_366;
    }
    if ( a4 && !v234 || !a4 && v234 )
    {
      TargetVirtualization = -1073741583;
      v155 = (_QWORD *)WdLogNewEntry5_WdError(v12, LowPart, v13);
      v155[3] = a5;
      v155[4] = a4;
      v155[5] = v234;
      v155[6] = -1073741583LL;
      v70 = WdLogEvent5_WdError(v155);
      goto LABEL_366;
    }
    if ( (a5 & 0x8000u) != 0 )
    {
      EnforceSDCCloneSourceIndexCoherency(v232, a2, &v128);
      if ( v128 != -1 )
      {
        v224 = WdLogNewEntry5_WdError(v12, LowPart, v13);
        *(_QWORD *)(v224 + 24) = v128;
        v71 = WdLogEvent5_WdError(v224);
        LogCodePointPacket(57LL, v128, 0LL, 0LL);
      }
    }
    if ( v234 )
    {
      Size = 16 * v234;
      v36 = (struct _DISPLAYCONFIG_MODE_INFO_SUMMARY *)PALLOCMEM2(16 * v234, 1936876615LL, 1);
      if ( !v36 )
      {
        TargetVirtualization = -1073741801;
        v159 = (_QWORD *)WdLogNewEntry5_WdError(v14, LowPart, v13);
        v159[3] = v234;
        v159[4] = a5;
        v159[5] = -1073741801LL;
        v72 = WdLogEvent5_WdError(v159);
        goto LABEL_366;
      }
      v228 = Size;
      memset(v36, 0, Size);
      v12 = 0LL;
    }
    v40 = 0;
    for ( j = 0; j < v232; ++j )
    {
      v12 = (__int64)a2 + 72 * j;
      v37 = (struct _LUID *)v12;
      v46 = 0LL;
      v41 = 0LL;
      v43 = 0LL;
      if ( (a5 & 0x8000u) != 0 && (v37[8].HighPart & 0xFFFFFFF2) != 0 )
      {
        TargetVirtualization = -1073741584;
        v160 = (_QWORD *)WdLogNewEntry5_WdError(v12, LowPart, v13);
        v160[3] = (unsigned int)v37[8].HighPart;
        v160[4] = 13LL;
        v160[5] = -1073741584LL;
        v73 = WdLogEvent5_WdError(v160);
        goto LABEL_366;
      }
      if ( (v37[8].HighPart & 1) != 0 )
      {
        TargetVirtualization = GetTargetVirtualization(*v37, v37[3].HighPart, v38, v33, 0LL, 0LL);
        if ( TargetVirtualization < 0 )
        {
          v225 = WdLogNewEntry5_WdError(v15, LowPart, v13);
          *(_QWORD *)(v225 + 24) = TargetVirtualization;
          v74 = WdLogEvent5_WdError(v225);
          TargetVirtualization = -1073741584;
          goto LABEL_366;
        }
        if ( v38[0] && v33[0] )
        {
          v12 = (__int64)v37;
          v37[8].HighPart &= ~8u;
        }
        else
        {
          v12 = (__int64)v37;
          v37[8].HighPart |= 8u;
        }
        if ( (a5 & 0x8000u) == 0 )
        {
          if ( (v37[8].HighPart & 4) != 0 )
          {
            TargetVirtualization = -1073741584;
            v203 = WdLogNewEntry5_WdError(v12, LowPart, v13);
            *(_QWORD *)(v203 + 24) = j;
            *(_QWORD *)(v203 + 32) = -1073741584LL;
            v76 = WdLogEvent5_WdError(v203);
            goto LABEL_366;
          }
        }
        else if ( v38[0] && (v37[8].HighPart & 4) != 0 )
        {
          TargetVirtualization = -1073741584;
          v202 = WdLogNewEntry5_WdError(v12, LowPart, v13);
          *(_QWORD *)(v202 + 24) = j;
          *(_QWORD *)(v202 + 32) = -1073741584LL;
          v75 = WdLogEvent5_WdError(v202);
          goto LABEL_366;
        }
        if ( (a5 & 0x8000u) == 0 )
          HighPart = v37[1].HighPart;
        else
          HighPart = Convert16bitSdcModeInfoIdxTo32bit(HIWORD(v37[1].HighPart));
        if ( HighPart == -1 )
        {
          if ( (a5 & 0x8000u) != 0 )
          {
            if ( (unsigned __int16)v37[1].HighPart == 0xFFFF )
            {
              TargetVirtualization = -1073741582;
              v205 = WdLogNewEntry5_WdError(v12, LowPart, v13);
              *(_QWORD *)(v205 + 24) = j;
              *(_QWORD *)(v205 + 32) = -1073741582LL;
              v83 = WdLogEvent5_WdError(v205);
              goto LABEL_366;
            }
            for ( k = 0; k < j; ++k )
            {
              if ( (v37[8].HighPart & 1) != 0 )
              {
                v12 = (unsigned __int16)v37[1].HighPart;
                if ( (unsigned __int16)*((_DWORD *)a2 + 18 * k + 3) == (_DWORD)v12 )
                  break;
              }
            }
            if ( k < j )
            {
              v12 = v37[8].HighPart & 8;
              if ( (*((_DWORD *)a2 + 18 * k + 17) & 8) != (_DWORD)v12 )
              {
                TargetVirtualization = -1073741582;
                v163 = (_QWORD *)WdLogNewEntry5_WdError(v12, LowPart, v13);
                v163[3] = k;
                v163[4] = j;
                v163[5] = -1073741582LL;
                v84 = WdLogEvent5_WdError(v163);
                goto LABEL_366;
              }
              if ( v33[0] )
              {
                v12 = (__int64)a2;
                LowPart = v37->LowPart;
                if ( *((_DWORD *)a2 + 18 * k) != (_DWORD)LowPart
                  || (v12 = (__int64)a2,
                      LowPart = (unsigned int)v37->HighPart,
                      *((_DWORD *)a2 + 18 * k + 1) != (_DWORD)LowPart) )
                {
                  TargetVirtualization = -1073741582;
                  v164 = (_QWORD *)WdLogNewEntry5_WdError(v12, LowPart, v13);
                  v164[3] = k;
                  v164[4] = j;
                  v164[5] = -1073741582LL;
                  v85 = WdLogEvent5_WdError(v164);
                  goto LABEL_366;
                }
              }
            }
          }
          v40 = 1;
        }
        else
        {
          if ( HighPart >= v234 )
          {
            TargetVirtualization = -1073741583;
            v139 = (_QWORD *)WdLogNewEntry5_WdError(v12, LowPart, v13);
            v139[3] = HighPart;
            v139[4] = v234;
            v139[5] = j;
            v139[6] = a5;
            v139[7] = -1073741583LL;
            v77 = WdLogEvent5_WdError(v139);
            goto LABEL_366;
          }
          v43 = (char *)a4 + 64 * (unsigned __int64)HighPart;
          if ( (a5 & 0x8000u) != 0 && (unsigned __int16)v37[1].HighPart != 0xFFFF )
          {
            TargetVirtualization = -1073741582;
            v204 = WdLogNewEntry5_WdError((char *)a4 + 64 * (unsigned __int64)HighPart, LowPart, v13);
            *(_QWORD *)(v204 + 24) = j;
            *(_QWORD *)(v204 + 32) = -1073741582LL;
            v78 = WdLogEvent5_WdError(v204);
            goto LABEL_366;
          }
          v16 = *((unsigned int *)v43 + 2);
          Size_4 = v37->LowPart == (_DWORD)v16 && (v16 = *((unsigned int *)v43 + 3), v37->HighPart == (_DWORD)v16);
          if ( !Size_4 || (v16 = *((unsigned int *)v43 + 1), __PAIR64__(v37[1].LowPart, 1) != *(_QWORD *)v43) )
          {
            TargetVirtualization = -1073741582;
            v140 = (_QWORD *)WdLogNewEntry5_WdError(v16, LowPart, v13);
            v140[3] = j;
            v140[4] = v37[1].LowPart;
            v140[5] = *((unsigned int *)v43 + 1);
            v140[6] = a5;
            v140[7] = -1073741582LL;
            v79 = WdLogEvent5_WdError(v140);
            goto LABEL_366;
          }
          if ( *((_DWORD *)v43 + 6) == 1 || *((_DWORD *)v43 + 6) == 2 || *((_DWORD *)v43 + 6) == 3 )
          {
            TargetVirtualization = -1073741582;
            v141 = (_QWORD *)WdLogNewEntry5_WdError(v16, LowPart, v13);
            v141[3] = j;
            v141[4] = v37[1].LowPart;
            v141[5] = *((unsigned int *)v43 + 1);
            v141[6] = a5;
            v141[7] = -1073741582LL;
            v80 = WdLogEvent5_WdError(v141);
            goto LABEL_366;
          }
          if ( v33[0] )
            v17 = *((_DWORD *)v36 + 4 * HighPart) | 0x200000;
          else
            v17 = *((_DWORD *)v36 + 4 * HighPart) | 0x100000;
          *((_DWORD *)v36 + 4 * HighPart) = v17;
          if ( v37[5].LowPart == 2 || v37[5].LowPart == 4 )
            *((_DWORD *)v36 + 4 * HighPart) |= 0x2000000u;
          *((_DWORD *)v36 + 4 * HighPart) = (unsigned __int16)(*((_DWORD *)v36 + 4 * HighPart) + 1) | *((_DWORD *)v36 + 4 * HighPart) & 0xFFFF0000;
          *((_QWORD *)v36 + 2 * HighPart + 1) = *((_QWORD *)v43 + 1);
          *((_DWORD *)v36 + 4 * HighPart + 1) = *((_DWORD *)v43 + 1);
          v148 = v33[0] == 0;
          *((_DWORD *)v36 + 4 * HighPart) = (v148 << 23) | *((_DWORD *)v36 + 4 * HighPart) & 0xFF7FFFFF;
          if ( *((_DWORD *)v43 + 7) || *((_DWORD *)v43 + 8) )
          {
            LowPart = (unsigned __int64)v36;
            *((_DWORD *)v36 + 4 * HighPart) |= 0x20000u;
          }
          else
          {
            LowPart = (unsigned __int64)v36;
            *((_DWORD *)v36 + 4 * HighPart) |= 0x10000u;
          }
          if ( (v37[8].HighPart & 4) != 0 )
          {
            if ( ((*((_DWORD *)v36 + 4 * HighPart) >> 22) & 1) != 0 )
            {
              TargetVirtualization = -1073741584;
              v161 = (_QWORD *)WdLogNewEntry5_WdError(v36, LowPart, v13);
              v161[3] = j;
              v161[4] = v37[1].LowPart;
              v161[5] = -1073741584LL;
              v81 = WdLogEvent5_WdError(v161);
              goto LABEL_366;
            }
            LowPart = (unsigned __int64)v36;
            *((_DWORD *)v36 + 4 * HighPart) |= 0x400000u;
          }
          v12 = (__int64)v36;
          if ( ((*((_DWORD *)v36 + 4 * HighPart) >> 20) & 1) != 0 )
          {
            v12 = (__int64)v36;
            if ( ((*((_DWORD *)v36 + 4 * HighPart) >> 21) & 1) != 0 )
            {
              TargetVirtualization = -1073741582;
              v162 = (_QWORD *)WdLogNewEntry5_WdError(v36, LowPart, v13);
              v162[3] = v37[1].LowPart;
              v162[4] = *((unsigned int *)v43 + 1);
              v162[5] = -1073741582LL;
              v82 = WdLogEvent5_WdError(v162);
              goto LABEL_366;
            }
          }
        }
        if ( (a5 & 0x8000u) == 0 )
          v31 = v37[4].LowPart;
        else
          v31 = Convert16bitSdcModeInfoIdxTo32bit(HIWORD(v37[4].LowPart));
        if ( v31 == -1 )
        {
          v50 = v37[7].LowPart;
          v52 = v37[6].LowPart;
          v53 = v37[6].HighPart;
        }
        else
        {
          if ( v31 >= v234 )
          {
            TargetVirtualization = -1073741583;
            v142 = (_QWORD *)WdLogNewEntry5_WdError(v12, LowPart, v13);
            v142[3] = v31;
            v142[4] = v234;
            v142[5] = j;
            v142[6] = a5;
            v142[7] = -1073741583LL;
            v86 = WdLogEvent5_WdError(v142);
            goto LABEL_366;
          }
          v46 = (char *)a4 + 64 * (unsigned __int64)v31;
          if ( !v43 )
          {
            TargetVirtualization = -1073741584;
            v165 = (_QWORD *)WdLogNewEntry5_WdError((char *)a4 + 64 * (unsigned __int64)v31, LowPart, v13);
            v165[3] = j;
            v165[4] = a5;
            v165[5] = -1073741584LL;
            v87 = WdLogEvent5_WdError(v165);
            goto LABEL_366;
          }
          v18 = *((unsigned int *)v46 + 2);
          v149 = v37[2].HighPart == (_DWORD)v18 && (v18 = *((unsigned int *)v46 + 3), v37[3].LowPart == (_DWORD)v18);
          if ( !v149 || (v18 = *((unsigned int *)v46 + 1), __PAIR64__(v37[3].HighPart, 2) != *(_QWORD *)v46) )
          {
            TargetVirtualization = -1073741582;
            v143 = (_QWORD *)WdLogNewEntry5_WdError(v18, LowPart, v13);
            v143[3] = j;
            v143[4] = (unsigned int)v37[3].HighPart;
            v143[5] = *((unsigned int *)v46 + 1);
            v143[6] = a5;
            v143[7] = -1073741582LL;
            v88 = WdLogEvent5_WdError(v143);
            goto LABEL_366;
          }
          v50 = *((_DWORD *)v46 + 15);
          v52 = *((_DWORD *)v46 + 8);
          v53 = *((_DWORD *)v46 + 9);
          *((_DWORD *)v36 + 4 * v31) = (unsigned __int16)(*((_DWORD *)v36 + 4 * v31) + 1) | *((_DWORD *)v36 + 4 * v31) & 0xFFFF0000;
          *((_QWORD *)v36 + 2 * v31 + 1) = *((_QWORD *)v46 + 1);
          *((_DWORD *)v36 + 4 * v31 + 1) = *((_DWORD *)v46 + 1);
          *((_DWORD *)v36 + 4 * v31) |= 0x40000u;
          v150 = v33[0] == 0;
          v12 = 16LL * v31;
          LowPart = (unsigned __int64)v36;
          *(_DWORD *)((char *)v36 + v12) = (v150 << 23) | *(_DWORD *)((_BYTE *)v36 + v12) & 0xFF7FFFFF;
        }
        if ( (a5 & 0x8000u) == 0 )
          v32 = -1;
        else
          v32 = Convert16bitSdcModeInfoIdxTo32bit(v37[4].LowPart);
        if ( v32 != -1 )
        {
          if ( v32 >= v234 )
          {
            TargetVirtualization = -1073741583;
            v144 = (_QWORD *)WdLogNewEntry5_WdError(v12, LowPart, v13);
            v144[3] = v32;
            v144[4] = v234;
            v144[5] = j;
            v144[6] = a5;
            v144[7] = -1073741583LL;
            v89 = WdLogEvent5_WdError(v144);
            goto LABEL_366;
          }
          v41 = (char *)a4 + 64 * (unsigned __int64)v32;
          v19 = *((unsigned int *)v41 + 2);
          v151 = v37[2].HighPart == (_DWORD)v19 && (v19 = *((unsigned int *)v41 + 3), v37[3].LowPart == (_DWORD)v19);
          if ( !v151 || (v19 = *((unsigned int *)v41 + 1), __PAIR64__(v37[3].HighPart, 3) != *(_QWORD *)v41) )
          {
            TargetVirtualization = -1073741582;
            v145 = (_QWORD *)WdLogNewEntry5_WdError(v19, LowPart, v13);
            v145[3] = j;
            v145[4] = (unsigned int)v37[3].HighPart;
            v145[5] = *((unsigned int *)v41 + 1);
            v145[6] = a5;
            v145[7] = -1073741582LL;
            v90 = WdLogEvent5_WdError(v145);
            goto LABEL_366;
          }
          if ( v38[0] && v33[0] )
          {
            TargetVirtualization = -1073741584;
            v206 = WdLogNewEntry5_WdError(v19, LowPart, v13);
            *(_QWORD *)(v206 + 24) = j;
            *(_QWORD *)(v206 + 32) = -1073741584LL;
            v91 = WdLogEvent5_WdError(v206);
            goto LABEL_366;
          }
          if ( !v43 )
          {
            TargetVirtualization = -1073741584;
            v207 = WdLogNewEntry5_WdError(v19, LowPart, v13);
            *(_QWORD *)(v207 + 24) = j;
            *(_QWORD *)(v207 + 32) = -1073741584LL;
            v92 = WdLogEvent5_WdError(v207);
            goto LABEL_366;
          }
          if ( *((_DWORD *)v41 + 11)
            || *((_DWORD *)v41 + 10)
            || (v19 = *((unsigned int *)v43 + 4), *((_DWORD *)v41 + 12) != (_DWORD)v19)
            || (v19 = *((unsigned int *)v43 + 5), *((_DWORD *)v41 + 13) != (_DWORD)v19) )
          {
            TargetVirtualization = -1073741582;
            v208 = WdLogNewEntry5_WdError(v19, LowPart, v13);
            *(_QWORD *)(v208 + 24) = j;
            *(_QWORD *)(v208 + 32) = -1073741582LL;
            v93 = WdLogEvent5_WdError(v208);
            goto LABEL_366;
          }
          v20 = *((unsigned int *)v41 + 9);
          if ( *((_DWORD *)v41 + 7) >= (int)v20 || (v20 = *((unsigned int *)v41 + 8), *((_DWORD *)v41 + 6) >= (int)v20) )
          {
            TargetVirtualization = -1073741582;
            v209 = WdLogNewEntry5_WdError(v20, LowPart, v13);
            *(_QWORD *)(v209 + 24) = j;
            *(_QWORD *)(v209 + 32) = -1073741582LL;
            v94 = WdLogEvent5_WdError(v209);
            goto LABEL_366;
          }
          if ( *((int *)v41 + 7) < 0
            || *((int *)v41 + 6) < 0
            || (v20 = *((unsigned int *)v41 + 5), *((_DWORD *)v41 + 9) > (int)v20)
            || (v20 = *((unsigned int *)v41 + 4), *((_DWORD *)v41 + 8) > (int)v20) )
          {
            TargetVirtualization = -1073741582;
            v210 = WdLogNewEntry5_WdError(v20, LowPart, v13);
            *(_QWORD *)(v210 + 24) = j;
            *(_QWORD *)(v210 + 32) = -1073741582LL;
            v95 = WdLogEvent5_WdError(v210);
            goto LABEL_366;
          }
          *((_DWORD *)v36 + 4 * v32) = (unsigned __int16)(*((_DWORD *)v36 + 4 * v32) + 1) | *((_DWORD *)v36 + 4 * v32) & 0xFFFF0000;
          *((_QWORD *)v36 + 2 * v32 + 1) = *((_QWORD *)v41 + 1);
          *((_DWORD *)v36 + 4 * v32 + 1) = *((_DWORD *)v41 + 1);
          *((_DWORD *)v36 + 4 * v32) |= 0x80000u;
          v152 = v33[0] == 0;
          v12 = 16LL * v32;
          LowPart = (unsigned __int64)v36;
          *(_DWORD *)((char *)v36 + v12) = (v152 << 23) | *(_DWORD *)((_BYTE *)v36 + v12) & 0xFF7FFFFF;
        }
        if ( (a5 & 0x8000u) != 0 )
        {
          if ( v38[0] && v33[0] )
          {
            if ( (v43 || v41 || v46) && (!v43 || v41 || !v46) && (!v43 || v41 || v46) )
            {
              TargetVirtualization = -1073741584;
              v212 = WdLogNewEntry5_WdError(v12, LowPart, v13);
              *(_QWORD *)(v212 + 24) = j;
              *(_QWORD *)(v212 + 32) = -1073741584LL;
              v97 = WdLogEvent5_WdError(v212);
              goto LABEL_366;
            }
          }
          else if ( (v43 || v41 || v46) && (!v43 || !v41 || !v46) && (!v43 || v41 || !v46) && (!v43 || v41 || v46) )
          {
            TargetVirtualization = -1073741584;
            v211 = WdLogNewEntry5_WdError(v12, LowPart, v13);
            *(_QWORD *)(v211 + 24) = j;
            *(_QWORD *)(v211 + 32) = -1073741584LL;
            v96 = WdLogEvent5_WdError(v211);
            goto LABEL_366;
          }
        }
        if ( v52 && v53 )
        {
          v153 = v50;
          if ( v50 <= 0 || v153 > 3 )
          {
            TargetVirtualization = -1073741582;
            v213 = WdLogNewEntry5_WdError(v12, LowPart, v13);
            *(_QWORD *)(v213 + 24) = v50;
            *(_QWORD *)(v213 + 32) = -1073741582LL;
            v98 = WdLogEvent5_WdError(v213);
            goto LABEL_366;
          }
        }
        else
        {
          if ( v52 || v53 )
          {
            TargetVirtualization = -1073741582;
            v156 = (_QWORD *)WdLogNewEntry5_WdError(v12, LowPart, v13);
            v156[3] = v52;
            v156[4] = v53;
            v156[5] = j;
            v156[6] = -1073741582LL;
            v100 = WdLogEvent5_WdError(v156);
            goto LABEL_366;
          }
          if ( v50 )
          {
            TargetVirtualization = -1073741582;
            v166 = (_QWORD *)WdLogNewEntry5_WdError(v12, LowPart, v13);
            v166[3] = v50;
            v166[4] = j;
            v166[5] = -1073741582LL;
            v99 = WdLogEvent5_WdError(v166);
            goto LABEL_366;
          }
        }
      }
    }
    if ( v234 )
    {
      if ( (a5 & 0x8000u) != 0 )
      {
        v47 = 0;
        v129 = 0;
        for ( m = 0; m < v234; ++m )
        {
          v12 = (__int64)v36 + 16 * m;
          v42 = (_DWORD *)v12;
          if ( (unsigned __int16)*(_DWORD *)v12 )
          {
            if ( ((*v42 >> 18) & 1) != 0 )
            {
              v12 = (__int64)a4;
              if ( *((_DWORD *)a4 + 16 * (unsigned __int64)m) != 2 )
              {
                v229 = WdLogNewEntry5_WdAssertion(a4, LowPart);
                v101 = WdLogEvent5_WdAssertion(v229);
              }
              if ( (unsigned __int16)*v42 > 1u )
              {
                TargetVirtualization = -1073741584;
                v167 = (_QWORD *)WdLogNewEntry5_WdError(v12, LowPart, v13);
                v167[3] = (unsigned int)v42[1];
                v167[4] = (unsigned __int16)*v42;
                v167[5] = -1073741584LL;
                v102 = WdLogEvent5_WdError(v167);
                goto LABEL_366;
              }
            }
            else if ( ((*v42 >> 19) & 1) != 0 )
            {
              v12 = (__int64)a4;
              if ( *((_DWORD *)a4 + 16 * (unsigned __int64)m) != 3 )
              {
                v230 = WdLogNewEntry5_WdAssertion(a4, LowPart);
                v103 = WdLogEvent5_WdAssertion(v230);
              }
              if ( (unsigned __int16)*v42 > 1u )
              {
                TargetVirtualization = -1073741584;
                v168 = (_QWORD *)WdLogNewEntry5_WdError(v12, LowPart, v13);
                v168[3] = (unsigned int)v42[1];
                v168[4] = (unsigned __int16)*v42;
                v168[5] = -1073741584LL;
                v104 = WdLogEvent5_WdError(v168);
                goto LABEL_366;
              }
            }
            else
            {
              if ( (*v42 & 0x10000) == 0 && ((*v42 >> 17) & 1) == 0 )
              {
                TargetVirtualization = -1073741811;
                v215 = WdLogNewEntry5_WdAssertion(v12, LowPart);
                *(_QWORD *)(v215 + 24) = v42;
                *(_QWORD *)(v215 + 32) = m;
                v107 = WdLogEvent5_WdAssertion(v215);
                goto LABEL_366;
              }
              v12 = (__int64)a4;
              if ( *((_DWORD *)a4 + 16 * (unsigned __int64)m) != 1 )
              {
                v231 = WdLogNewEntry5_WdAssertion(a4, LowPart);
                v105 = WdLogEvent5_WdAssertion(v231);
              }
              if ( (*v42 & 0x1000000) == 0 )
              {
                ++v129;
                if ( (*v42 & 0x10000) != 0 )
                  ++v47;
              }
              if ( ((*v42 >> 20) & 1) != 0 && (unsigned __int16)*v42 > 1u )
              {
                TargetVirtualization = -1073741584;
                v214 = WdLogNewEntry5_WdError(v12, LowPart, v13);
                *(_QWORD *)(v214 + 24) = (unsigned int)v42[1];
                *(_QWORD *)(v214 + 32) = -1073741584LL;
                v106 = WdLogEvent5_WdError(v214);
                goto LABEL_366;
              }
            }
            for ( n = m + 1; n < v234; ++n )
            {
              v12 = (__int64)v36 + 16 * n;
              v48 = (_DWORD *)v12;
              if ( (unsigned __int16)*(_DWORD *)v12 )
              {
                v12 = (unsigned int)v48[2];
                if ( v42[2] == (_DWORD)v12 )
                {
                  v12 = (unsigned int)v48[3];
                  if ( v42[3] == (_DWORD)v12 )
                  {
                    v12 = (unsigned int)v48[1];
                    if ( v42[1] == (_DWORD)v12 )
                    {
                      LowPart = (unsigned __int64)a4;
                      v12 = *((unsigned int *)a4 + 16 * (unsigned __int64)n);
                      if ( *((_DWORD *)a4 + 16 * (unsigned __int64)m) == (_DWORD)v12 )
                      {
                        v12 = (__int64)a4;
                        if ( *((_DWORD *)a4 + 16 * (unsigned __int64)m) != 1 || ((*v42 >> 23) & 1) != 0 )
                        {
                          TargetVirtualization = -1073741582;
                          v216 = WdLogNewEntry5_WdError(a4, a4, v13);
                          *(_QWORD *)(v216 + 24) = (unsigned int)v48[1];
                          *(_QWORD *)(v216 + 32) = -1073741582LL;
                          v108 = WdLogEvent5_WdError(v216);
                          goto LABEL_366;
                        }
                      }
                    }
                  }
                }
                if ( (*v42 & 0x1000000) == 0 )
                {
                  v12 = (__int64)a4;
                  if ( *((_DWORD *)a4 + 16 * (unsigned __int64)n) == 1 )
                  {
                    v12 = (__int64)a4;
                    if ( *((_DWORD *)a4 + 16 * (unsigned __int64)m) == 1 )
                    {
                      LowPart = (unsigned __int64)a4;
                      v12 = *((unsigned int *)a4 + 16 * (unsigned __int64)m + 7);
                      if ( *((_DWORD *)a4 + 16 * (unsigned __int64)n + 7) == (_DWORD)v12 )
                      {
                        LowPart = (unsigned __int64)a4;
                        v12 = *((unsigned int *)a4 + 16 * (unsigned __int64)m + 8);
                        if ( *((_DWORD *)a4 + 16 * (unsigned __int64)n + 8) == (_DWORD)v12 )
                        {
                          v21 = (*v48 >> 20) & 1;
                          if ( ((*v42 >> 20) & 1) != (_DWORD)v21
                            || (v21 = (*v48 >> 21) & 1, ((*v42 >> 21) & 1) != (_DWORD)v21) )
                          {
                            TargetVirtualization = -1073741582;
                            v169 = (_QWORD *)WdLogNewEntry5_WdError(v21, a4, v13);
                            v169[3] = m;
                            v169[4] = n;
                            v169[5] = -1073741582LL;
                            v109 = WdLogEvent5_WdError(v169);
                            goto LABEL_366;
                          }
                          if ( (unsigned __int16)*v48 > 1u )
                          {
                            TargetVirtualization = -1073741584;
                            v217 = WdLogNewEntry5_WdError(v21, a4, v13);
                            *(_QWORD *)(v217 + 24) = (unsigned int)v48[1];
                            *(_QWORD *)(v217 + 32) = -1073741584LL;
                            v110 = WdLogEvent5_WdError(v217);
                            goto LABEL_366;
                          }
                          if ( ((*v42 >> 25) & 1) == ((*v48 >> 25) & 1) )
                          {
                            v22 = a4;
                            v23 = *((unsigned int *)a4 + 16 * (unsigned __int64)m + 5);
                            if ( *((_DWORD *)a4 + 16 * (unsigned __int64)n + 5) != (_DWORD)v23
                              || (v22 = a4,
                                  v23 = *((unsigned int *)a4 + 16 * (unsigned __int64)m + 4),
                                  *((_DWORD *)a4 + 16 * (unsigned __int64)n + 4) != (_DWORD)v23) )
                            {
                              TargetVirtualization = -1073741582;
                              v170 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22, v13);
                              v170[3] = m;
                              v170[4] = n;
                              v170[5] = -1073741582LL;
                              v111 = WdLogEvent5_WdError(v170);
                              goto LABEL_366;
                            }
                          }
                          else
                          {
                            v24 = a4;
                            v25 = *((unsigned int *)a4 + 16 * (unsigned __int64)m + 5);
                            if ( *((_DWORD *)a4 + 16 * (unsigned __int64)n + 4) != (_DWORD)v25
                              || (v24 = a4,
                                  v25 = *((unsigned int *)a4 + 16 * (unsigned __int64)m + 4),
                                  *((_DWORD *)a4 + 16 * (unsigned __int64)n + 5) != (_DWORD)v25) )
                            {
                              TargetVirtualization = -1073741582;
                              v171 = (_QWORD *)WdLogNewEntry5_WdError(v25, v24, v13);
                              v171[3] = m;
                              v171[4] = n;
                              v171[5] = -1073741582LL;
                              v112 = WdLogEvent5_WdError(v171);
                              goto LABEL_366;
                            }
                          }
                          LowPart = (unsigned __int64)a4;
                          v26 = *((unsigned int *)a4 + 16 * (unsigned __int64)m + 6);
                          if ( *((_DWORD *)a4 + 16 * (unsigned __int64)n + 6) != (_DWORD)v26 )
                          {
                            TargetVirtualization = -1073741582;
                            v172 = (_QWORD *)WdLogNewEntry5_WdError(v26, a4, v13);
                            v172[3] = m;
                            v172[4] = n;
                            v172[5] = -1073741582LL;
                            v113 = WdLogEvent5_WdError(v172);
                            goto LABEL_366;
                          }
                          if ( ((*v42 >> 20) & 1) != 0 )
                          {
                            if ( ((*v42 >> 23) & 1) == 0 || ((*v48 >> 23) & 1) == 0 )
                            {
                              TargetVirtualization = -1073741582;
                              v173 = (_QWORD *)WdLogNewEntry5_WdError(v26, a4, v13);
                              v173[3] = m;
                              v173[4] = n;
                              v173[5] = -1073741582LL;
                              v114 = WdLogEvent5_WdError(v173);
                              goto LABEL_366;
                            }
                          }
                          else
                          {
                            v27 = (unsigned int)v48[2];
                            if ( v42[2] != (_DWORD)v27 || (v27 = (unsigned int)v48[3], v42[3] != (_DWORD)v27) )
                            {
                              TargetVirtualization = -1073741582;
                              v174 = (_QWORD *)WdLogNewEntry5_WdError(v27, a4, v13);
                              v174[3] = m;
                              v174[4] = n;
                              v174[5] = -1073741582LL;
                              v115 = WdLogEvent5_WdError(v174);
                              goto LABEL_366;
                            }
                          }
                          v12 = (__int64)v48;
                          *v48 |= 0x1000000u;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        if ( v129 && v47 != 1 )
        {
          if ( v40 && v47 <= 1 )
          {
            v226 = WdLogNewEntry5_WdEvent(v12, LowPart);
            *(_QWORD *)(v226 + 24) = v47;
            v116 = WdLogEvent5_WdEvent(v226);
          }
          else if ( (a6 & 8) != 0 && v47 <= 1 )
          {
            v227 = WdLogNewEntry5_WdEvent(v12, LowPart);
            *(_QWORD *)(v227 + 24) = v47;
            v131 = WdLogEvent5_WdEvent(v227);
          }
          else
          {
            TargetVirtualization = -1073741583;
            v218 = WdLogNewEntry5_WdError(v12, LowPart, v13);
            *(_QWORD *)(v218 + 24) = v47;
            *(_QWORD *)(v218 + 32) = -1073741583LL;
            v118 = WdLogEvent5_WdError(v218);
          }
        }
      }
      else
      {
        TargetVirtualization = ValidateSDCv1ModeInfoArray(v36, v234, v40, a6);
      }
    }
  }
LABEL_366:
  if ( v36 )
    Win32FreePool((__int64)v36);
  return (unsigned int)TargetVirtualization;
}
