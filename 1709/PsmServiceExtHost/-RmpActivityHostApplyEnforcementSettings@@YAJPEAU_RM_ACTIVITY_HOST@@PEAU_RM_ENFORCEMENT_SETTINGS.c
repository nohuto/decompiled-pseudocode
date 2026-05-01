/*
 * XREFs of ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x18000A840
 * Callers:
 *     ?RmpCoreApiSetHostLimits@@YAJPEAU_RM_ACTIVATOR@@_KPEAU_RM_RESOURCE_LIMITS@@@Z @ 0x1800058A4 (-RmpCoreApiSetHostLimits@@YAJPEAU_RM_ACTIVATOR@@_KPEAU_RM_RESOURCE_LIMITS@@@Z.c)
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180007988 (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180009AF0 (-RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000E8E0 (-ApplyResourceSet_Modern@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEAPEAU_RM_ACTIV.c)
 * Callees:
 *     ?RmpQoSEnableDisableForHost@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180003B0C (-RmpQoSEnableDisableForHost@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?_EmplaceImpl@?$_HashTable@U_RM_PSM_HOST_INFO@@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@U?$hash@U_RM_PSM_HOST_INFO@@@3@U?$equal_to@U_RM_PSM_HOST_INFO@@@3@V?$allocator@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@@3@$0A@@utl@@AEAA?AU?$pair@V?$_DlistIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@@utl@@@utl@@_N@2@U?$integral_constant@_N$0A@@2@V?$_DlistConstIt@U?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@@utl@@@2@PEAU?$_HashNode@U?$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicationState@@@utl@@@2@@Z @ 0x180006D00 (-_EmplaceImpl@-$_HashTable@U_RM_PSM_HOST_INFO@@U-$pair@$$CBU_RM_PSM_HOST_INFO@@VEnforcerApplicat.c)
 *     ??$?RU_RM_PSM_HOST_INFO@@AEAU0@@?$construct@U_RM_PSM_HOST_INFO@@@utl@@QEBA_NPEAU_RM_PSM_HOST_INFO@@AEAU2@@Z @ 0x180006ED4 (--$-RU_RM_PSM_HOST_INFO@@AEAU0@@-$construct@U_RM_PSM_HOST_INFO@@@utl@@QEBA_NPEAU_RM_PSM_HOST_INF.c)
 *     ?RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST@@KW4_RM_RESOURCE_SET_CATEGORY@@@Z @ 0x180006F70 (-RmpActivityHostEnumerateResourceSetGetFirst@@YAPEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY.c)
 *     ?PsmSetApplicationProperties@ModernResourceEnforcer@@MEAAJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW4_PSM_APPLICATION_PRIORITY@@4@Z @ 0x18000CCE0 (-PsmSetApplicationProperties@ModernResourceEnforcer@@MEAAJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW4_.c)
 *     ?CommitMemoryLimitChange@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_PSM_HOST_INFO@@_K1@Z @ 0x18000D98C (-CommitMemoryLimitChange@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_PSM_HOST_INFO@@_K1@Z.c)
 *     ?RmpActivityHostGetNextResourceSetInList@@YAPEAVResourceSet@ExecutionModel@@PEAV12@@Z @ 0x180014A9C (-RmpActivityHostGetNextResourceSetInList@@YAPEAVResourceSet@ExecutionModel@@PEAV12@@Z.c)
 *     ?RmpActivityHostApplyExecutionSpeed@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x18001F1DC (-RmpActivityHostApplyExecutionSpeed@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800269DC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800269EC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcmp_0 @ 0x180026A9F (memcmp_0.c)
 *     memcpy_0 @ 0x180026AA5 (memcpy_0.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 *     ?RmpResourceSetUpdateReceivedCommit@@YAXPEAU_RM_RESOURCE_SET@@_K@Z @ 0x180035060 (-RmpResourceSetUpdateReceivedCommit@@YAXPEAU_RM_RESOURCE_SET@@_K@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800366DC (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?RmpEnforcementApplyLimitsProcessHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x18003AC78 (-RmpEnforcementApplyLimitsProcessHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@.c)
 *     ?RmpGpuMonitorDisableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003DE40 (-RmpGpuMonitorDisableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpGpuMonitorEnableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003DFE4 (-RmpGpuMonitorEnableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall RmpActivityHostApplyEnforcementSettings(
        struct _RM_ACTIVITY_HOST *a1,
        struct _RM_ENFORCEMENT_SETTINGS *a2,
        char a3)
{
  char *v4; // r13
  struct _RM_ACTIVITY_HOST *v6; // r14
  unsigned __int8 v7; // dl
  unsigned __int8 v8; // r8
  unsigned __int8 v9; // cl
  __int64 v10; // r15
  int v11; // ecx
  unsigned __int8 v12; // dl
  char v13; // r8
  int v14; // edx
  __int64 v15; // rsi
  __int64 v16; // rcx
  wchar_t *v17; // r15
  PSID v18; // rbx
  unsigned __int64 v19; // rax
  __int64 v20; // r14
  struct _RTL_CRITICAL_SECTION *v21; // rax
  ULONG v22; // eax
  WCHAR *v23; // rbx
  unsigned __int64 v24; // rsi
  unsigned __int8 *v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // r15
  unsigned __int64 v31; // rax
  __int64 v32; // rcx
  union _RM_SID *v33; // r15
  int *v34; // r14
  ModernResourceEnforcer *v35; // rsi
  __int64 (__fastcall *v36)(ModernResourceEnforcer *__hidden, const unsigned __int16 *, union _RM_SID *, unsigned int, unsigned int, unsigned __int64, unsigned int *, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *, enum _PSM_APPLICATION_PRIORITY *, unsigned __int64 *); // rax
  int v37; // ecx
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rax
  int v40; // ecx
  unsigned __int64 v41; // rax
  int v42; // ebx
  char v43; // cl
  char v44; // cl
  unsigned __int64 v45; // rbx
  unsigned __int64 v46; // r8
  int v47; // ecx
  __int64 **v48; // rdx
  __int64 v49; // r11
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  struct ExecutionModel::ResourceSet *v53; // r10
  int v54; // r8d
  struct ExecutionModel::ResourceSet *NextResourceSetInList; // rax
  unsigned int v56; // esi
  __int128 *v57; // rax
  __int64 v58; // r8
  unsigned __int16 *v59; // rcx
  __int128 v60; // xmm0
  __int128 v61; // xmm1
  __int128 v62; // xmm0
  __int128 v63; // xmm1
  __int128 v64; // xmm0
  __int128 v65; // xmm1
  __int128 v66; // xmm0
  __int128 v67; // xmm1
  int v68; // r8d
  int v69; // edx
  __int128 v70; // xmm1
  int v71; // r9d
  __int128 v72; // xmm0
  __int128 v73; // xmm1
  __int128 v74; // xmm0
  int v75; // eax
  __int128 v76; // xmm1
  __int128 v77; // xmm0
  __int64 v78; // rax
  __int128 v79; // xmm1
  __int128 v80; // xmm0
  int v82; // eax
  bool v83; // al
  __int64 v85; // r10
  ULONG v86; // eax
  char *v87; // rax
  __int64 v88; // rcx
  __int64 v89; // r8
  char *v90; // r10
  char v91; // al
  __int64 *v92; // rbx
  int v93; // eax
  __int64 (__fastcall *v94)(ModernResourceEnforcer *__hidden, const unsigned __int16 *, union _RM_SID *, unsigned int, unsigned int, unsigned __int64, unsigned int *, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *, enum _PSM_APPLICATION_PRIORITY *, unsigned __int64 *); // rax
  int v95; // eax
  unsigned __int64 v96; // rax
  _QWORD *v97; // rdx
  struct _RM_ACTIVITY_HOST *v98; // rcx
  __int64 v99; // rax
  ULONG UserDataCount[2]; // [rsp+20h] [rbp-E0h]
  char v101; // [rsp+70h] [rbp-90h] BYREF
  bool v102; // [rsp+71h] [rbp-8Fh] BYREF
  unsigned int v103; // [rsp+74h] [rbp-8Ch]
  unsigned int v104; // [rsp+78h] [rbp-88h]
  unsigned int v105; // [rsp+7Ch] [rbp-84h] BYREF
  int v106; // [rsp+80h] [rbp-80h]
  WCHAR v107; // [rsp+84h] [rbp-7Ch]
  wchar_t *Source; // [rsp+88h] [rbp-78h]
  unsigned __int64 v109; // [rsp+90h] [rbp-70h]
  PSID Sid; // [rsp+98h] [rbp-68h]
  char v111; // [rsp+A0h] [rbp-60h]
  __int16 v112; // [rsp+A2h] [rbp-5Eh]
  int v113; // [rsp+A4h] [rbp-5Ch] BYREF
  int v114; // [rsp+A8h] [rbp-58h]
  unsigned __int64 *v115; // [rsp+B0h] [rbp-50h]
  unsigned __int64 *v116; // [rsp+B8h] [rbp-48h]
  int v117[2]; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v118; // [rsp+C8h] [rbp-38h] BYREF
  unsigned __int64 v119; // [rsp+D0h] [rbp-30h] BYREF
  int v120; // [rsp+D8h] [rbp-28h] BYREF
  int v121; // [rsp+DCh] [rbp-24h] BYREF
  int v122; // [rsp+E0h] [rbp-20h] BYREF
  int v123; // [rsp+E4h] [rbp-1Ch] BYREF
  int *v124; // [rsp+E8h] [rbp-18h]
  struct _RM_ACTIVITY_HOST *v125; // [rsp+F0h] [rbp-10h]
  PRTL_CRITICAL_SECTION CriticalSection; // [rsp+F8h] [rbp-8h]
  __int64 v127; // [rsp+100h] [rbp+0h] BYREF
  __int64 v128; // [rsp+108h] [rbp+8h] BYREF
  ModernResourceEnforcer *v129; // [rsp+110h] [rbp+10h]
  __int64 v130; // [rsp+118h] [rbp+18h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+120h] [rbp+20h] BYREF
  int v132[2]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v133; // [rsp+140h] [rbp+40h]
  __int64 v134; // [rsp+150h] [rbp+50h] BYREF
  unsigned __int64 v135; // [rsp+158h] [rbp+58h]
  unsigned __int64 v136; // [rsp+160h] [rbp+60h]
  unsigned __int64 v137; // [rsp+168h] [rbp+68h]
  __int64 v138; // [rsp+170h] [rbp+70h]
  unsigned __int64 v139; // [rsp+178h] [rbp+78h]
  unsigned __int16 v140[232]; // [rsp+180h] [rbp+80h] BYREF
  __int128 v141; // [rsp+350h] [rbp+250h] BYREF
  __int128 v142; // [rsp+360h] [rbp+260h]
  __int128 v143; // [rsp+370h] [rbp+270h]
  __int128 v144; // [rsp+380h] [rbp+280h]
  int v145; // [rsp+390h] [rbp+290h]
  int v146; // [rsp+394h] [rbp+294h]
  int v147; // [rsp+398h] [rbp+298h]
  __int64 v148; // [rsp+3A0h] [rbp+2A0h] BYREF
  int v149; // [rsp+3A8h] [rbp+2A8h]
  wchar_t Destination[232]; // [rsp+3B0h] [rbp+2B0h] BYREF
  _QWORD Buf1[8]; // [rsp+580h] [rbp+480h] BYREF
  int v152; // [rsp+5C0h] [rbp+4C0h]
  unsigned int v153; // [rsp+5C4h] [rbp+4C4h]
  unsigned int v154; // [rsp+5C8h] [rbp+4C8h]
  unsigned __int64 v155; // [rsp+5D0h] [rbp+4D0h]
  wchar_t v156[232]; // [rsp+5E0h] [rbp+4E0h] BYREF
  _BYTE v157[68]; // [rsp+7B0h] [rbp+6B0h] BYREF
  unsigned int v158; // [rsp+7F4h] [rbp+6F4h]
  unsigned int v159; // [rsp+7F8h] [rbp+6F8h]
  unsigned __int64 v160; // [rsp+800h] [rbp+700h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+810h] [rbp+710h] BYREF
  void *v162; // [rsp+820h] [rbp+720h]
  int v163; // [rsp+828h] [rbp+728h]
  int v164; // [rsp+82Ch] [rbp+72Ch]
  unsigned int *v165; // [rsp+830h] [rbp+730h]
  __int64 v166; // [rsp+838h] [rbp+738h]
  unsigned __int16 *v167; // [rsp+840h] [rbp+740h]
  int v168; // [rsp+848h] [rbp+748h]
  int v169; // [rsp+84Ch] [rbp+74Ch]
  __int128 *v170; // [rsp+850h] [rbp+750h]
  int v171; // [rsp+858h] [rbp+758h]
  int v172; // [rsp+85Ch] [rbp+75Ch]
  int *v173; // [rsp+860h] [rbp+760h]
  __int64 v174; // [rsp+868h] [rbp+768h]
  int *v175; // [rsp+870h] [rbp+770h]
  __int64 v176; // [rsp+878h] [rbp+778h]
  __int64 *v177; // [rsp+880h] [rbp+780h]
  __int64 v178; // [rsp+888h] [rbp+788h]
  int *v179; // [rsp+890h] [rbp+790h]
  __int64 v180; // [rsp+898h] [rbp+798h]
  int *v181; // [rsp+8A0h] [rbp+7A0h]
  __int64 v182; // [rsp+8A8h] [rbp+7A8h]
  char *v183; // [rsp+8B0h] [rbp+7B0h]
  __int64 v184; // [rsp+8B8h] [rbp+7B8h]
  char *v185; // [rsp+8C0h] [rbp+7C0h]
  __int64 v186; // [rsp+8C8h] [rbp+7C8h]
  char *v187; // [rsp+8D0h] [rbp+7D0h]
  __int64 v188; // [rsp+8D8h] [rbp+7D8h]
  char *v189; // [rsp+8E0h] [rbp+7E0h]
  __int64 v190; // [rsp+8E8h] [rbp+7E8h]
  bool *v191; // [rsp+8F0h] [rbp+7F0h]
  __int64 v192; // [rsp+8F8h] [rbp+7F8h]
  __int64 *v193; // [rsp+900h] [rbp+800h]
  __int64 v194; // [rsp+908h] [rbp+808h]

  v125 = a1;
  v4 = (char *)a1 + 872;
  v6 = a1;
  if ( !memcmp_0(a2, (char *)a1 + 872, 0x38uLL) && (a3 & 1) == 0 )
    return 0;
  v7 = v4[52];
  v8 = *((_BYTE *)a2 + 52);
  if ( ((v8 >> 1) & (unsigned __int8)~(v7 >> 1) & 1) != 0 )
  {
    RmpGpuMonitorEnableForHost(v6);
  }
  else if ( (v7 & 2) != 0 && (v8 & 2) == 0 )
  {
    RmpGpuMonitorDisableForHost(v6);
  }
  v9 = *((_BYTE *)a2 + 52);
  v10 = -1LL;
  if ( (((unsigned __int8)v4[52] ^ v9) & 8) == 0 )
    goto LABEL_5;
  v93 = RmpQoSEnableDisableForHost(v6, (v9 >> 3) & 1);
  v105 = v93;
  v42 = v93;
  if ( v93 == -1073741822 )
  {
    *((_BYTE *)a2 + 52) ^= (v4[52] ^ *((_BYTE *)a2 + 52)) & 8;
    goto LABEL_5;
  }
  if ( v93 >= 0 )
  {
LABEL_5:
    v11 = *((_DWORD *)a2 + 12);
    if ( *((_DWORD *)v4 + 12) == v11 )
    {
      v12 = *((_BYTE *)a2 + 52);
      v13 = v4[52];
      if ( (((unsigned __int8)v13 ^ v12) & 1) == 0
        && *((_QWORD *)v4 + 4) == *((_QWORD *)a2 + 4)
        && *((_DWORD *)v4 + 11) == *((_DWORD *)a2 + 11)
        && *((_QWORD *)v4 + 2) == *((_QWORD *)a2 + 2)
        && *((_QWORD *)v4 + 1) == *((_QWORD *)a2 + 1)
        && *(_QWORD *)v4 == *(_QWORD *)a2
        && *((_DWORD *)v4 + 10) == *((_DWORD *)a2 + 10)
        && (((unsigned __int8)v13 ^ v12) & 4) == 0
        && (a3 & 1) == 0 )
      {
LABEL_80:
        v42 = 0;
        v105 = 0;
        goto LABEL_81;
      }
    }
    v14 = *((_DWORD *)v6 + 14);
    if ( v14 )
    {
      if ( v14 != 1 )
      {
        v42 = -1073741811;
        goto LABEL_66;
      }
      v42 = RmpEnforcementApplyLimitsProcessHost(v6, a2);
      if ( v42 < 0 )
      {
LABEL_57:
        if ( v42 < 0 )
        {
LABEL_124:
          v6 = v125;
        }
        else
        {
          v43 = v4[52];
          *(_QWORD *)v4 = *(_QWORD *)a2;
          *((_QWORD *)v4 + 1) = *((_QWORD *)a2 + 1);
          *((_QWORD *)v4 + 2) = *((_QWORD *)a2 + 2);
          *((_QWORD *)v4 + 3) = *((_QWORD *)a2 + 3);
          *((_QWORD *)v4 + 4) = *((_QWORD *)a2 + 4);
          *((_DWORD *)v4 + 11) = *((_DWORD *)a2 + 11);
          *((_DWORD *)v4 + 12) = *((_DWORD *)a2 + 12);
          v44 = v4[52] ^ (*((_BYTE *)a2 + 52) ^ v43) & 1;
          v4[52] = v44;
          if ( *((_DWORD *)v4 + 10) == *((_DWORD *)a2 + 10) && ((*((_BYTE *)a2 + 52) ^ (unsigned __int8)v44) & 4) == 0 )
          {
            v6 = v125;
LABEL_61:
            v45 = *((_QWORD *)a2 + 2);
            if ( !*((_DWORD *)v6 + 14) )
            {
              v46 = *((_QWORD *)v6 + 153);
              if ( *((_QWORD *)v6 + 150) < v45 )
                v45 = *((_QWORD *)v6 + 150);
              if ( v45 != v46
                && (int)ExecutionModel::ResourceManager::CommitMemoryLimitChange(
                          *(ExecutionModel::ResourceManager **)(*((_QWORD *)v6 + 5) + 1896LL),
                          (struct _RM_ACTIVITY_HOST *)((char *)v6 + 88),
                          v46,
                          v45) >= 0 )
              {
                *((_QWORD *)v6 + 153) = v45;
              }
            }
            v42 = 0;
            goto LABEL_66;
          }
          v6 = v125;
          v42 = RmpActivityHostApplyExecutionSpeed(v125, a2);
          if ( v42 >= 0 )
            goto LABEL_61;
        }
LABEL_66:
        v105 = v42;
        if ( v42 < 0 )
          goto LABEL_81;
        v47 = 0;
        v48 = (__int64 **)((char *)v6 + 816);
        while ( 1 )
        {
          if ( v47 == 1 && *v48 != (__int64 *)v48 )
          {
            v49 = (__int64)(*v48 - 177);
            if ( *v48 != (__int64 *)1416 )
              break;
          }
          ++v47;
          v48 += 3;
          if ( v47 >= 2 )
            goto LABEL_80;
        }
        v50 = **v48;
        v51 = *(int *)(v49 + 1448);
        v52 = *(_QWORD *)(v49 + 1440);
        v53 = 0LL;
        if ( v50 != v52 + 24 * (v51 + 34) )
          v53 = (struct ExecutionModel::ResourceSet *)(v50 - 1416);
        if ( !v53 )
        {
          v54 = v51 + 1;
          if ( v54 < 2 )
          {
            v97 = (_QWORD *)(v52 + 24 * (v54 + 34LL));
            do
            {
              if ( v54 == 1 && (_QWORD *)*v97 != v97 )
              {
                v53 = (struct ExecutionModel::ResourceSet *)(*v97 - 1416LL);
                if ( *v97 != 1416LL )
                  goto LABEL_76;
              }
              ++v54;
              v97 += 3;
            }
            while ( v54 < 2 );
          }
          v53 = 0LL;
        }
LABEL_76:
        while ( (*(_BYTE *)(v49 + 1498) & 7) != 4 )
        {
          v49 = (__int64)v53;
          if ( v53 )
          {
            NextResourceSetInList = RmpActivityHostGetNextResourceSetInList(v53);
            if ( !NextResourceSetInList )
              NextResourceSetInList = (struct ExecutionModel::ResourceSet *)RmpActivityHostEnumerateResourceSetGetFirst(
                                                                              *(_QWORD *)(v85 + 1440),
                                                                              2,
                                                                              *(_DWORD *)(v85 + 1448) + 1);
          }
          else
          {
            NextResourceSetInList = 0LL;
          }
          v53 = NextResourceSetInList;
          if ( !v49 )
            goto LABEL_80;
        }
        RmpResourceSetUpdateReceivedCommit(*(struct _RM_RESOURCE_SET **)(v49 + 1432), *((_QWORD *)a2 + 1));
        goto LABEL_80;
      }
    }
    else
    {
      v15 = *(_QWORD *)(*((_QWORD *)v6 + 5) + 56LL);
      v129 = (ModernResourceEnforcer *)v15;
      if ( v11 == 100 )
      {
        v106 = -1;
      }
      else
      {
        v106 = v11;
        if ( v11 != -1 )
          v106 = 100 * v11;
      }
      if ( *((_QWORD *)v4 + 4) == *((_QWORD *)a2 + 4) )
      {
        v115 = 0LL;
      }
      else
      {
        v127 = *((_QWORD *)a2 + 4);
        v115 = (unsigned __int64 *)&v127;
      }
      v16 = *((_QWORD *)a2 + 2);
      v118 = *((_QWORD *)a2 + 1);
      v119 = *(_QWORD *)a2;
      v128 = v16;
      if ( v16 )
        v116 = (unsigned __int64 *)&v128;
      else
        v116 = 0LL;
      v17 = (wchar_t *)((char *)v6 + 88);
      v104 = *((_DWORD *)v6 + 155);
      v18 = (char *)v6 + 552;
      v103 = *((_DWORD *)v6 + 156);
      v19 = *((_QWORD *)v6 + 3);
      v20 = v15 + 304;
      v109 = v19;
      v21 = (struct _RTL_CRITICAL_SECTION *)(v15 + 16);
      CriticalSection = (PRTL_CRITICAL_SECTION)(v15 + 16);
      v124 = 0LL;
      v113 = -1;
      Source = v17;
      Sid = v18;
      v114 = 0;
      *(_QWORD *)v117 = v15 + 304;
      while ( 1 )
      {
        RtlEnterCriticalSection(v21);
        memset_0(Destination, 0, 0x228uLL);
        wcscpy_s(Destination, 0xE8uLL, v17);
        memset(Buf1, 0, sizeof(Buf1));
        v152 = 0;
        v22 = RtlLengthSid(v18);
        memcpy_0(Buf1, v18, v22);
        v153 = v104;
        v154 = v103;
        v155 = v109;
        if ( *(_QWORD *)(v20 + 16) )
        {
          v23 = Destination;
          v24 = 314159LL;
          do
          {
            v107 = RtlUpcaseUnicodeChar(*v23++);
            v24 = HIBYTE(v107) + 37 * ((unsigned __int8)v107 + 37 * v24);
          }
          while ( v23 < (WCHAR *)Buf1 );
          v25 = (unsigned __int8 *)Buf1;
          v26 = 11LL;
          do
          {
            v27 = *v25;
            v25 += 8;
            v24 = *(v25 - 1)
                + 37
                * (*(v25 - 2)
                 + 37
                 * (*(v25 - 3)
                  + 37
                  * (*(v25 - 4) + 37 * (*(v25 - 5) + 37 * (*(v25 - 6) + 37 * (*(v25 - 7) + 37 * (v27 + 37 * v24)))))));
            --v26;
          }
          while ( v26 );
          v28 = *(_QWORD *)(v20 + 16) + 16 * (v24 & ((8LL << *(_BYTE *)(v20 + 32)) - 1));
          v29 = *(_QWORD *)v28;
          if ( *(_QWORD *)v28 )
          {
            v30 = **(_QWORD **)(v28 + 8);
            if ( v29 != v30 )
            {
              do
              {
                v31 = *(_QWORD *)(v29 + 16);
                if ( v31 >= v24 )
                {
                  if ( v31 > v24 )
                    break;
                  if ( !_wcsicmp(Destination, (const wchar_t *)(v29 + 24))
                    && !memcmp_0(Buf1, (const void *)(v29 + 488), 0x58uLL) )
                  {
                    v20 = *(_QWORD *)v117;
                    goto LABEL_31;
                  }
                }
                v29 = *(_QWORD *)v29;
              }
              while ( v29 != v30 );
              v20 = *(_QWORD *)v117;
            }
          }
        }
        v29 = v20;
LABEL_31:
        v32 = v29 + 576;
        if ( v29 == v20 )
          v32 = 0LL;
        if ( v32 )
        {
          v33 = (union _RM_SID *)Sid;
        }
        else
        {
          v111 = 0;
          v112 = -1;
          v133 = 0LL;
          memset_0(v156, 0, 0x228uLL);
          wcscpy_s(v156, 0xE8uLL, Source);
          memset_0(v157, 0, sizeof(v157));
          v33 = (union _RM_SID *)Sid;
          v86 = RtlLengthSid(Sid);
          memcpy_0(v157, Sid, v86);
          v158 = v104;
          v159 = v103;
          v160 = v109;
          v87 = (char *)operator new(0x248uLL, (const struct std::nothrow_t *)&unk_180052632);
          v90 = v87;
          if ( !v87 )
            goto LABEL_146;
          v91 = utl::construct<_RM_PSM_HOST_INFO>::operator()<_RM_PSM_HOST_INFO,_RM_PSM_HOST_INFO &>(
                  v88,
                  v87 + 24,
                  v156);
          v90[576] = v111;
          *((_WORD *)v90 + 289) = -1;
          if ( v91 )
          {
            v92 = (__int64 *)v90;
          }
          else
          {
LABEL_146:
            v92 = (__int64 *)v90;
            if ( v90 )
            {
              v92 = 0LL;
              operator delete(v90);
            }
          }
          utl::_HashTable<_RM_PSM_HOST_INFO,utl::pair<_RM_PSM_HOST_INFO const,EnforcerApplicationState>,utl::hash<_RM_PSM_HOST_INFO>,utl::equal_to<_RM_PSM_HOST_INFO>,utl::allocator<utl::pair<_RM_PSM_HOST_INFO const,EnforcerApplicationState>>,0>::_EmplaceImpl(
            v20,
            (__int64)v132,
            v89,
            0LL,
            v92);
          v133 = *(_QWORD *)v132;
          v32 = *(_QWORD *)v132 + 576LL;
          if ( *(_QWORD *)v132 == -576LL )
            __fastfail(0x80004003);
        }
        *(_BYTE *)v32 |= 0x80u;
        if ( *(char *)v32 < 0 )
        {
          if ( v106 == -1 )
            *(_WORD *)(v32 + 2) = -1;
          else
            *(_WORD *)(v32 + 2) = v106;
        }
        if ( (*(_BYTE *)v32 & 1) != 0 )
        {
          v34 = 0LL;
          v124 = 0LL;
        }
        else
        {
          v34 = &v113;
          v124 = &v113;
          v113 = v106;
        }
        RtlLeaveCriticalSection(CriticalSection);
        v35 = v129;
        v36 = *(__int64 (__fastcall **)(ModernResourceEnforcer *__hidden, const unsigned __int16 *, union _RM_SID *, unsigned int, unsigned int, unsigned __int64, unsigned int *, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *, enum _PSM_APPLICATION_PRIORITY *, unsigned __int64 *))(*(_QWORD *)v129 + 32LL);
        if ( v36 == ModernResourceEnforcer::PsmSetApplicationProperties )
        {
          v134 = 0LL;
          v37 = 0;
          v135 = 0LL;
          v136 = 0LL;
          v137 = 0LL;
          v138 = 0LL;
          v139 = 0LL;
          if ( v34 )
          {
            v37 = 1;
            HIDWORD(v134) = *v34;
          }
          if ( v116 )
          {
            v38 = *v116;
            v37 |= 2u;
            if ( *v116 == -1LL )
              v38 = 0LL;
            v135 = v38;
          }
          v39 = v119;
          v40 = v37 | 4;
          if ( v119 == -1LL )
            v39 = 0LL;
          v10 = -1LL;
          v136 = v39;
          v41 = v118;
          LODWORD(v134) = v40 | 8;
          if ( v118 == -1LL )
            v41 = 0LL;
          v137 = v41;
          if ( v115 )
          {
            v96 = *v115;
            LODWORD(v134) = v40 | 0x28;
            v139 = v96;
          }
          v42 = (*((__int64 (__fastcall **)(PSID, _QWORD, wchar_t *, _QWORD, unsigned __int64, __int64 *))v129 + 11))(
                  Sid,
                  v104,
                  Source,
                  v103,
                  v109,
                  &v134);
          if ( v42 >= 0 )
            v42 = 0;
        }
        else
        {
          UserDataCount[0] = v103;
          v42 = v36(
                  v129,
                  Source,
                  v33,
                  v104,
                  *(_QWORD *)UserDataCount,
                  v109,
                  (unsigned int *)v34,
                  v116,
                  &v119,
                  &v118,
                  0LL,
                  v115);
          v10 = -1LL;
        }
        if ( v42 >= 0 )
          break;
        if ( !v34 || v42 != -1073741776 )
        {
          if ( v42 == -1073741637 || v42 == -1073741776 )
          {
LABEL_134:
            v94 = *(__int64 (__fastcall **)(ModernResourceEnforcer *__hidden, const unsigned __int16 *, union _RM_SID *, unsigned int, unsigned int, unsigned __int64, unsigned int *, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *, enum _PSM_APPLICATION_PRIORITY *, unsigned __int64 *))(*(_QWORD *)v35 + 32LL);
            if ( v94 == ModernResourceEnforcer::PsmSetApplicationProperties )
              v95 = ModernResourceEnforcer::PsmSetApplicationProperties(
                      v35,
                      Source,
                      (union _RM_SID *)Sid,
                      v104,
                      v103,
                      v109,
                      0LL,
                      v116,
                      &v119,
                      &v118,
                      0LL,
                      v115);
            else
              v95 = v94(v35, Source, (union _RM_SID *)Sid, v104, v103, v109, 0LL, v116, &v119, &v118, 0LL, v115);
            v42 = v95;
          }
          if ( v42 >= 0 )
            break;
          goto LABEL_124;
        }
        if ( (unsigned int)++v114 > 2 )
          goto LABEL_134;
        v20 = *(_QWORD *)v117;
        v18 = Sid;
        v21 = CriticalSection;
        v17 = Source;
      }
    }
    v42 = 0;
    goto LABEL_57;
  }
LABEL_81:
  v56 = hProvider;
  if ( hProvider )
  {
    memset_0(v140, 0, 0x230uLL);
    if ( *((_DWORD *)v6 + 14) )
    {
      v98 = (struct _RM_ACTIVITY_HOST *)*((_QWORD *)v6 + 105);
      if ( v98 != (struct _RM_ACTIVITY_HOST *)((char *)v6 + 840) && v98 != (struct _RM_ACTIVITY_HOST *)1416 )
      {
        StringCchCopyW(v140, 0xE8uLL, *((const unsigned __int16 **)v98 - 173));
        v42 = v105;
        v56 = hProvider;
      }
      v99 = *((_QWORD *)v6 + 5);
      v69 = *((_DWORD *)v6 + 22);
      v71 = v147;
      v68 = v146;
      v141 = *(_OWORD *)(v99 + 1756);
      v142 = *(_OWORD *)(v99 + 1772);
      v143 = *(_OWORD *)(v99 + 1788);
      v144 = *(_OWORD *)(v99 + 1804);
      v145 = *(_DWORD *)(v99 + 1820);
      v78 = *((_QWORD *)v6 + 3);
    }
    else
    {
      v57 = (__int128 *)((char *)v6 + 88);
      v58 = 3LL;
      v59 = v140;
      do
      {
        v59 += 64;
        v60 = *v57;
        v61 = v57[1];
        v57 += 8;
        *((_OWORD *)v59 - 8) = v60;
        v62 = *(v57 - 6);
        *((_OWORD *)v59 - 7) = v61;
        v63 = *(v57 - 5);
        *((_OWORD *)v59 - 6) = v62;
        v64 = *(v57 - 4);
        *((_OWORD *)v59 - 5) = v63;
        v65 = *(v57 - 3);
        *((_OWORD *)v59 - 4) = v64;
        v66 = *(v57 - 2);
        *((_OWORD *)v59 - 3) = v65;
        v67 = *(v57 - 1);
        *((_OWORD *)v59 - 2) = v66;
        *((_OWORD *)v59 - 1) = v67;
        --v58;
      }
      while ( v58 );
      v68 = *((_DWORD *)v6 + 155);
      v69 = 0;
      v70 = v57[1];
      v71 = *((_DWORD *)v6 + 156);
      *(_OWORD *)v59 = *v57;
      v72 = v57[2];
      *((_OWORD *)v59 + 1) = v70;
      v73 = v57[3];
      *((_OWORD *)v59 + 2) = v72;
      v74 = v57[4];
      v75 = *((_DWORD *)v6 + 154);
      *((_OWORD *)v59 + 3) = v73;
      v76 = *(_OWORD *)((char *)v6 + 568);
      *((_OWORD *)v59 + 4) = v74;
      v145 = v75;
      v77 = *(_OWORD *)((char *)v6 + 552);
      v78 = *((_QWORD *)v6 + 79);
      v142 = v76;
      v79 = *(_OWORD *)((char *)v6 + 600);
      v146 = v68;
      v141 = v77;
      v80 = *(_OWORD *)((char *)v6 + 584);
      v147 = v71;
      v144 = v79;
      v143 = v80;
    }
    v149 = v69;
    v148 = v78;
    if ( v56 > 4 && (qword_1800670D0 & 9) != 0 && (qword_1800670D8 & 9) == qword_1800670D8 )
    {
      v166 = 4LL;
      v165 = &v105;
      while ( v140[++v10] != 0 )
        ;
      v169 = 0;
      v167 = v140;
      v168 = 2 * v10 + 2;
      if ( BYTE1(v141) > 0xFu )
        v82 = 15;
      else
        v82 = BYTE1(v141);
      v172 = 0;
      v171 = 4 * v82 + 8;
      v170 = &v141;
      v173 = &v120;
      v175 = &v121;
      v177 = &v148;
      v179 = &v122;
      v123 = *((_DWORD *)v4 + 12);
      v181 = &v123;
      v183 = v4 + 16;
      v187 = v4 + 8;
      v101 = v4[40];
      v189 = &v101;
      v83 = (v4[52] & 4) != 0;
      v120 = v68;
      v102 = v83;
      v191 = &v102;
      v130 = *((_QWORD *)v4 + 4);
      v193 = &v130;
      v174 = 4LL;
      v121 = v71;
      v176 = 4LL;
      v178 = 8LL;
      v122 = v69;
      v180 = 4LL;
      v182 = 4LL;
      v184 = 8LL;
      v185 = v4;
      v186 = 8LL;
      v188 = 8LL;
      v190 = 1LL;
      v192 = 1LL;
      v194 = 8LL;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_1800670C8;
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180057B72 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      EventDescriptor.Keyword = 9LL;
      UserData.Size = *(unsigned __int16 *)off_1800670C8;
      v162 = &unk_180057B7D;
      UserData.Reserved = 2;
      v163 = 246;
      v164 = 1;
      EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 0x10u, &UserData);
      return v105;
    }
  }
  return (unsigned int)v42;
}
