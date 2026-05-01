/*
 * XREFs of ?RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180009AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEAU_RM_POLICY_WORK_BUFFER@@GP6AEPEAU_RM_ACTIVITY_HOST@@PEAX@Z4@Z @ 0x18000475C (-RmpPolicyPopulateActivityHostMetrics@@YAXPEAU_RM_PARTITION@@W4Enum@Priority@ExecutionModel@@PEA.c)
 *     ?RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x180008A64 (-RmpActivityHostQueryCommitDebt@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     ?RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@_KPEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x1800096F0 (-RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU.c)
 *     ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x18000A840 (-RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS.c)
 *     ?RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z @ 0x18000CE50 (-RmpActivityHostUpdateCommitUseState@@YAXPEAU_RM_ACTIVITY_HOST@@_KW4_RM_COMMIT_LEVEL@@@Z.c)
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001A388 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostFinalCleanup@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001ACD0 (-RmpActivityHostFinalCleanup@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001F020 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001F6F0 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     memset_0 @ 0x180026AAB (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 *     ?RmpResourceSetCleanup@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x180034C90 (-RmpResourceSetCleanup@@YAXPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800366DC (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?RmpPolicyGenerateReclaimListForCommit@@YAEPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@PEAU_RM_ACTIVITY_HOST@@_KW4Enum@Priority@ExecutionModel@@W4_RM_REVOKE_POLICY@@@Z @ 0x18003B8E8 (-RmpPolicyGenerateReclaimListForCommit@@YAEPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@PEAU_R.c)
 *     ?RmpPolicyReclaimHostList@@YAXPEAU_RM_POLICY_WORK_BUFFER@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAVResourceSet@ExecutionModel@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18003BD1C (-RmpPolicyReclaimHostList@@YAXPEAU_RM_POLICY_WORK_BUFFER@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REAS.c)
 */

void __fastcall RmpActivityHostCommitUseUpdateWorker(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_WORK *a3)
{
  DWORD v3; // ebx
  DWORD v5; // edi
  _BYTE *Value; // rbx
  int v7; // eax
  int v8; // ebx
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int128 v11; // xmm2
  __int64 v12; // xmm1_8
  __int128 v13; // xmm0
  int v14; // edx
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rdi
  __int64 v17; // rsi
  unsigned int v18; // r12d
  const GUID *v19; // r9
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  __int128 *v22; // rax
  __int64 v23; // r8
  unsigned __int16 *v24; // rcx
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  int v33; // r8d
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  int v38; // eax
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  int v41; // eax
  __int128 v42; // xmm1
  __int64 v43; // rax
  __int128 v44; // xmm0
  __int64 v45; // rax
  bool v46; // zf
  unsigned __int64 v47; // r9
  unsigned __int64 v48; // r11
  unsigned __int64 v49; // rbx
  unsigned __int64 v50; // rdi
  unsigned __int64 v51; // r10
  unsigned __int64 v52; // r8
  unsigned __int64 v53; // rcx
  unsigned __int64 v54; // r12
  __int64 v55; // rcx
  unsigned __int64 v56; // r8
  __int64 v57; // r8
  __int128 *v58; // rax
  unsigned __int16 *v59; // rcx
  __int128 v60; // xmm0
  __int128 v61; // xmm1
  __int128 v62; // xmm0
  __int128 v63; // xmm1
  __int128 v64; // xmm0
  __int128 v65; // xmm1
  __int128 v66; // xmm0
  __int128 v67; // xmm1
  int v68; // edx
  __int128 v69; // xmm1
  __int128 v70; // xmm0
  __int128 v71; // xmm1
  __int128 v72; // xmm0
  int v73; // eax
  __int128 v74; // xmm1
  __int128 v75; // xmm0
  int v76; // eax
  __int128 v77; // xmm0
  __int64 v78; // rax
  __int128 v79; // xmm1
  int v80; // eax
  _BYTE *v81; // rax
  int v82; // r15d
  DWORD v83; // ebx
  __int64 v84; // rbx
  __int64 v85; // rsi
  __int64 v86; // rcx
  unsigned __int64 v87; // rdi
  unsigned __int64 v88; // rbx
  __int64 v89; // rdi
  __int64 v90; // r12
  __int64 v91; // rbx
  unsigned int v92; // edx
  int v93; // ecx
  const GUID *v94; // r9
  const GUID *v95; // r8
  const GUID *v96; // r8
  const GUID *v97; // r8
  int v98; // eax
  const unsigned __int16 **v99; // rcx
  __int64 v100; // rax
  unsigned __int64 v101; // rcx
  const unsigned __int16 **v102; // rcx
  __int64 v103; // rax
  int v104; // ecx
  ULONG UserDataCount[2]; // [rsp+20h] [rbp-E0h]
  int v106; // [rsp+40h] [rbp-C0h] BYREF
  int v107; // [rsp+44h] [rbp-BCh]
  NTSTATUS InformationJobObject; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v109; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v110; // [rsp+58h] [rbp-A8h] BYREF
  int v111; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v112; // [rsp+68h] [rbp-98h]
  int v113; // [rsp+70h] [rbp-90h] BYREF
  int v114; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v115; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v116; // [rsp+80h] [rbp-80h] BYREF
  __int64 v117; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v118; // [rsp+90h] [rbp-70h] BYREF
  __int64 v119; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v120; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v121; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v122; // [rsp+B0h] [rbp-50h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+B8h] [rbp-48h] BYREF
  EVENT_DESCRIPTOR v124; // [rsp+C8h] [rbp-38h] BYREF
  EVENT_DESCRIPTOR v125; // [rsp+D8h] [rbp-28h] BYREF
  unsigned __int64 v126; // [rsp+E8h] [rbp-18h]
  __int64 v127; // [rsp+F0h] [rbp-10h]
  __int64 v128; // [rsp+F8h] [rbp-8h]
  __int64 v129; // [rsp+100h] [rbp+0h]
  _BYTE v130[48]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v131; // [rsp+140h] [rbp+40h]
  unsigned __int64 v132[2]; // [rsp+190h] [rbp+90h] BYREF
  unsigned __int64 v133; // [rsp+1A0h] [rbp+A0h]
  unsigned __int64 v134; // [rsp+1A8h] [rbp+A8h]
  unsigned __int64 v135; // [rsp+1B8h] [rbp+B8h]
  unsigned __int64 v136; // [rsp+1C0h] [rbp+C0h]
  unsigned __int64 v137; // [rsp+1C8h] [rbp+C8h]
  __int64 v138; // [rsp+1D0h] [rbp+D0h]
  _QWORD TlsValue[10]; // [rsp+1E0h] [rbp+E0h] BYREF
  _OWORD v140[3]; // [rsp+230h] [rbp+130h] BYREF
  __int64 v141; // [rsp+260h] [rbp+160h]
  _BYTE v142[4]; // [rsp+270h] [rbp+170h] BYREF
  __int64 v143; // [rsp+274h] [rbp+174h]
  __int64 v144; // [rsp+288h] [rbp+188h]
  __int64 v145; // [rsp+290h] [rbp+190h]
  __int64 v146; // [rsp+2A0h] [rbp+1A0h]
  __int64 v147; // [rsp+2B0h] [rbp+1B0h]
  __int64 v148; // [rsp+2B8h] [rbp+1B8h]
  __int64 v149; // [rsp+2C8h] [rbp+1C8h]
  __int64 v150; // [rsp+2D0h] [rbp+1D0h]
  __int64 v151; // [rsp+2D8h] [rbp+1D8h]
  __int64 v152; // [rsp+2E0h] [rbp+1E0h]
  __int64 v153; // [rsp+2E8h] [rbp+1E8h]
  __int64 v154; // [rsp+2F0h] [rbp+1F0h]
  __int64 v155; // [rsp+308h] [rbp+208h]
  __int64 v156; // [rsp+310h] [rbp+210h]
  __int64 v157; // [rsp+318h] [rbp+218h]
  __int64 v158; // [rsp+320h] [rbp+220h]
  __int64 v159; // [rsp+328h] [rbp+228h]
  __int64 v160; // [rsp+330h] [rbp+230h]
  __int64 v161; // [rsp+338h] [rbp+238h]
  __int64 v162; // [rsp+340h] [rbp+240h]
  __int64 v163; // [rsp+348h] [rbp+248h]
  __int64 v164; // [rsp+350h] [rbp+250h]
  _QWORD JobInformation[6]; // [rsp+360h] [rbp+260h] BYREF
  unsigned __int16 v166[232]; // [rsp+390h] [rbp+290h] BYREF
  __int128 v167; // [rsp+560h] [rbp+460h]
  __int128 v168; // [rsp+570h] [rbp+470h]
  __int128 v169; // [rsp+580h] [rbp+480h]
  __int128 v170; // [rsp+590h] [rbp+490h]
  int v171; // [rsp+5A0h] [rbp+4A0h]
  int v172; // [rsp+5A4h] [rbp+4A4h]
  int v173; // [rsp+5A8h] [rbp+4A8h]
  __int64 v174; // [rsp+5B0h] [rbp+4B0h] BYREF
  int v175; // [rsp+5B8h] [rbp+4B8h]
  unsigned __int16 v176[232]; // [rsp+5C0h] [rbp+4C0h] BYREF
  __int128 v177; // [rsp+790h] [rbp+690h]
  __int128 v178; // [rsp+7A0h] [rbp+6A0h]
  __int128 v179; // [rsp+7B0h] [rbp+6B0h]
  __int128 v180; // [rsp+7C0h] [rbp+6C0h]
  int v181; // [rsp+7D0h] [rbp+6D0h]
  int v182; // [rsp+7D4h] [rbp+6D4h]
  int v183; // [rsp+7D8h] [rbp+6D8h]
  __int64 v184; // [rsp+7E0h] [rbp+6E0h] BYREF
  int v185; // [rsp+7E8h] [rbp+6E8h]
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+7F0h] [rbp+6F0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+890h] [rbp+790h] BYREF
  void *v188; // [rsp+8A0h] [rbp+7A0h]
  int v189; // [rsp+8A8h] [rbp+7A8h]
  int v190; // [rsp+8ACh] [rbp+7ACh]
  struct _EVENT_DATA_DESCRIPTOR v191; // [rsp+8B0h] [rbp+7B0h] BYREF
  void *v192; // [rsp+8C0h] [rbp+7C0h]
  int v193; // [rsp+8C8h] [rbp+7C8h]
  int v194; // [rsp+8CCh] [rbp+7CCh]
  __int64 *v195; // [rsp+8D0h] [rbp+7D0h]
  __int64 v196; // [rsp+8D8h] [rbp+7D8h]
  int *v197; // [rsp+8E0h] [rbp+7E0h]
  __int64 v198; // [rsp+8E8h] [rbp+7E8h]
  unsigned __int64 *v199; // [rsp+8F0h] [rbp+7F0h]
  __int64 v200; // [rsp+8F8h] [rbp+7F8h]
  struct _EVENT_DATA_DESCRIPTOR v201; // [rsp+900h] [rbp+800h] BYREF
  void *v202; // [rsp+910h] [rbp+810h]
  int v203; // [rsp+918h] [rbp+818h]
  int v204; // [rsp+91Ch] [rbp+81Ch]
  __int64 *v205; // [rsp+920h] [rbp+820h]
  __int64 v206; // [rsp+928h] [rbp+828h]
  unsigned __int16 *v207; // [rsp+930h] [rbp+830h]
  int v208; // [rsp+938h] [rbp+838h]
  int v209; // [rsp+93Ch] [rbp+83Ch]
  int *v210; // [rsp+940h] [rbp+840h]
  __int64 v211; // [rsp+948h] [rbp+848h]
  __int64 *v212; // [rsp+950h] [rbp+850h]
  __int64 v213; // [rsp+958h] [rbp+858h]
  unsigned __int64 *v214; // [rsp+960h] [rbp+860h]
  __int64 v215; // [rsp+968h] [rbp+868h]
  __int64 *v216; // [rsp+970h] [rbp+870h]
  __int64 v217; // [rsp+978h] [rbp+878h]
  unsigned __int64 *v218; // [rsp+980h] [rbp+880h]
  __int64 v219; // [rsp+988h] [rbp+888h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+990h] [rbp+890h] BYREF
  NTSTATUS *p_InformationJobObject; // [rsp+9B0h] [rbp+8B0h]
  __int64 v222; // [rsp+9B8h] [rbp+8B8h]
  __int64 *v223; // [rsp+9C0h] [rbp+8C0h]
  __int64 v224; // [rsp+9C8h] [rbp+8C8h]
  int *v225; // [rsp+9D0h] [rbp+8D0h]
  __int64 v226; // [rsp+9D8h] [rbp+8D8h]
  EVENT_DATA_DESCRIPTOR v227; // [rsp+9E0h] [rbp+8E0h] BYREF
  int *v228; // [rsp+A00h] [rbp+900h]
  __int64 v229; // [rsp+A08h] [rbp+908h]
  __int64 *v230; // [rsp+A10h] [rbp+910h]
  __int64 v231; // [rsp+A18h] [rbp+918h]
  EVENT_DATA_DESCRIPTOR v232; // [rsp+A20h] [rbp+920h] BYREF
  int *v233; // [rsp+A40h] [rbp+940h]
  __int64 v234; // [rsp+A48h] [rbp+948h]
  __int64 *v235; // [rsp+A50h] [rbp+950h]
  __int64 v236; // [rsp+A58h] [rbp+958h]

  v3 = HampLockTrackerId;
  memset(TlsValue, 0, 72);
  if ( HampLockTrackerId != -1 )
  {
    TlsGetValue(HampLockTrackerId);
    TlsSetValue(v3, TlsValue);
  }
  v118 = 0LL;
  if ( hProvider > 4u && (qword_1800670D0 & 1) != 0 && (qword_1800670D8 & 1) == qword_1800670D8 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800670C8;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180057787 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_1800670C8;
    v188 = &unk_180057792;
    UserData.Reserved = 2;
    v189 = 32;
    v190 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v5 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v5) )
      __int2c();
    *(_QWORD *)Value |= 1uLL;
    ++Value[8];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  dword_1800681D0 = GetCurrentThreadId();
  *((_DWORD *)a2 + 333) &= ~1u;
  v7 = 0;
  v8 = __ROL4__(1, 1);
  v107 = v8;
  if ( (v8 & 2) != 0 )
    v7 = *((_DWORD *)a2 + 214);
  v9 = 3LL;
  if ( v7 )
  {
    v10 = *((_QWORD *)a2 + 5);
    if ( (*(_BYTE *)(v10 + 1892) & 2) == 0 )
    {
      v11 = *(_OWORD *)(a2 + 888);
      v12 = *((_QWORD *)a2 + 115);
      v140[0] = *(_OWORD *)(a2 + 872);
      v13 = *(_OWORD *)(a2 + 904);
      v141 = v12;
      v140[2] = v13;
      v140[1] = v11;
      if ( (_QWORD)v11 )
      {
        v14 = *((_DWORD *)a2 + 14);
        v15 = 0LL;
        v16 = 0LL;
        if ( v14 )
        {
          if ( v14 != 1 )
          {
LABEL_70:
            LOBYTE(v8) = v107;
            goto LABEL_71;
          }
          InformationJobObject = NtQueryInformationJobObject(
                                   *((HANDLE *)a2 + 117),
                                   MaxJobObjectInfoClass|0x10,
                                   JobInformation,
                                   0x28u,
                                   0LL);
          LODWORD(v94) = InformationJobObject;
          if ( InformationJobObject < 0 )
          {
            if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
            {
              v222 = 4LL;
              p_InformationJobObject = &InformationJobObject;
              v119 = *((_QWORD *)a2 + 3);
              v223 = &v119;
              v111 = *((_DWORD *)a2 + 22);
              v225 = &v111;
              v224 = 8LL;
              v226 = 4LL;
              TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005A535, v95, v94, 5u, &pData);
              LODWORD(v94) = InformationJobObject;
            }
            if ( (int)v94 < 0 )
              goto LABEL_70;
            v15 = v109;
LABEL_24:
            if ( (a2[1012] & 0x10) != 0
              && (v98 = RmpActivityHostQueryCommitDebt((struct _RM_ACTIVITY_HOST *)a2, &v110), v15 = v109, v98 >= 0) )
            {
              v20 = v110;
            }
            else
            {
              v20 = 0LL;
              v110 = 0LL;
            }
            if ( v20 >= v15 )
              v20 = v15;
            v21 = v15 - v20;
            if ( v15 && v21 <= 1 )
              v21 = 1LL;
            v121 = v117 + v21;
            if ( hProvider )
            {
              memset_0(v166, 0, 0x230uLL);
              if ( *((_DWORD *)a2 + 14) )
              {
                v99 = (const unsigned __int16 **)*((_QWORD *)a2 + 105);
                if ( v99 != (const unsigned __int16 **)(a2 + 840) && v99 != (const unsigned __int16 **)1416 )
                {
                  StringCchCopyW(v166, 0xE8uLL, *(v99 - 173));
                  v15 = v109;
                }
                v100 = *((_QWORD *)a2 + 5);
                v33 = v173;
                v167 = *(_OWORD *)(v100 + 1756);
                v168 = *(_OWORD *)(v100 + 1772);
                v169 = *(_OWORD *)(v100 + 1788);
                v170 = *(_OWORD *)(v100 + 1804);
                v171 = *(_DWORD *)(v100 + 1820);
                v174 = *((_QWORD *)a2 + 3);
                v175 = *((_DWORD *)a2 + 22);
              }
              else
              {
                v22 = (__int128 *)(a2 + 88);
                v23 = 3LL;
                v24 = v166;
                do
                {
                  v24 += 64;
                  v25 = *v22;
                  v26 = v22[1];
                  v22 += 8;
                  *((_OWORD *)v24 - 8) = v25;
                  v27 = *(v22 - 6);
                  *((_OWORD *)v24 - 7) = v26;
                  v28 = *(v22 - 5);
                  *((_OWORD *)v24 - 6) = v27;
                  v29 = *(v22 - 4);
                  *((_OWORD *)v24 - 5) = v28;
                  v30 = *(v22 - 3);
                  *((_OWORD *)v24 - 4) = v29;
                  v31 = *(v22 - 2);
                  *((_OWORD *)v24 - 3) = v30;
                  v32 = *(v22 - 1);
                  *((_OWORD *)v24 - 2) = v31;
                  *((_OWORD *)v24 - 1) = v32;
                  --v23;
                }
                while ( v23 );
                v33 = *((_DWORD *)a2 + 156);
                v34 = v22[1];
                *(_OWORD *)v24 = *v22;
                v35 = v22[2];
                *((_OWORD *)v24 + 1) = v34;
                v36 = v22[3];
                *((_OWORD *)v24 + 2) = v35;
                v37 = v22[4];
                v38 = *((_DWORD *)a2 + 154);
                *((_OWORD *)v24 + 3) = v36;
                v39 = *(_OWORD *)(a2 + 568);
                *((_OWORD *)v24 + 4) = v37;
                v171 = v38;
                v40 = *(_OWORD *)(a2 + 552);
                v41 = *((_DWORD *)a2 + 155);
                v168 = v39;
                v42 = *(_OWORD *)(a2 + 600);
                v172 = v41;
                v43 = *((_QWORD *)a2 + 79);
                v167 = v40;
                v44 = *(_OWORD *)(a2 + 584);
                v173 = v33;
                v170 = v42;
                v169 = v44;
                v174 = v43;
                v175 = 0;
              }
              if ( hProvider > 4u && (qword_1800670D0 & 1) != 0 && (qword_1800670D8 & 1) == qword_1800670D8 )
              {
                v206 = 8LL;
                v205 = &v174;
                v45 = -1LL;
                do
                  v46 = v166[++v45] == 0;
                while ( !v46 );
                v209 = 0;
                v207 = v166;
                v208 = 2 * v45 + 2;
                v210 = &v113;
                v212 = &v121;
                v214 = &v109;
                v216 = &v117;
                v218 = &v110;
                v113 = v33;
                v211 = 4LL;
                v213 = 8LL;
                v215 = 8LL;
                v217 = 8LL;
                v219 = 8LL;
                *(_DWORD *)&v124.Level = 4;
                v201.Ptr = (ULONGLONG)off_1800670C8;
                *(_DWORD *)&v124.Id = ((unsigned int)&unk_180057DE1 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
                v124.Keyword = 1LL;
                v201.Size = *(unsigned __int16 *)off_1800670C8;
                v202 = &unk_180057DEC;
                v201.Reserved = 2;
                v203 = 149;
                v204 = 1;
                EventWriteTransfer(RegHandle, &v124, 0LL, 0LL, 9u, &v201);
                v15 = v109;
              }
            }
            v47 = v15 + v117;
            v118 = v47;
            v48 = *((_QWORD *)a2 + 148);
            v49 = *((_QWORD *)a2 + 151);
            if ( v47 < v48 )
            {
              v50 = 0LL;
            }
            else if ( v47 < *((_QWORD *)a2 + 149) )
            {
              v50 = *((_QWORD *)a2 + 148);
              v48 = *((_QWORD *)a2 + 149);
            }
            else if ( v47 < *((_QWORD *)a2 + 150) )
            {
              v48 = *((_QWORD *)a2 + 150);
              v50 = *((_QWORD *)a2 + 149);
            }
            else
            {
              v50 = *((_QWORD *)a2 + 150);
              v48 = -1LL;
            }
            if ( v49 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
              v51 = v49 >> 4;
            else
              v51 = v47 >> 3;
            v52 = -1LL;
            if ( v51 <= 0x500000 )
              v51 = 5242880LL;
            v53 = (v51 + v47 - 1) / v51;
            v128 = (v53 * (unsigned __int128)v51) >> 64;
            if ( is_mul_ok(v53, v51) )
              v52 = v53 * v51;
            if ( v49 - 1 > 0xFFFFFFFFFFFFFFFDuLL
              || v52 <= v49
              || (v101 = (v51 + v49 - 1) / v51,
                  v129 = (v101 * (unsigned __int128)v51) >> 64,
                  v52 = v101 * v51,
                  is_mul_ok(v101, v51)) )
            {
              if ( v52 != -1LL )
              {
                v54 = v52 + v51;
                if ( v52 + v51 >= v52 )
                  goto LABEL_56;
              }
            }
            else
            {
              v52 = -1LL;
            }
            v54 = -1LL;
LABEL_56:
            if ( v49 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
            {
              if ( v52 >= v49 )
                v52 = v49;
              if ( v49 < v54 )
                v54 = v49;
            }
            v55 = v52;
            if ( 2 * v51 < v52 )
              v55 = 2 * v51;
            v56 = v52 - v55;
            v126 = v56;
            if ( v50 <= v56 )
              v50 = v56;
            if ( v47 <= v49 && v48 >= v54 )
              v48 = v54;
            *(_QWORD *)&v140[0] = v50;
            *((_QWORD *)&v140[0] + 1) = v48;
            if ( v47 < *((_QWORD *)a2 + 148) )
            {
              v57 = 1LL;
            }
            else if ( v47 < *((_QWORD *)a2 + 149) )
            {
              v57 = 2LL;
            }
            else
            {
              v57 = 4 - (unsigned int)(v47 < *((_QWORD *)a2 + 150));
            }
            RmpActivityHostUpdateCommitUseState(a2, v47, v57);
            v122 = v118;
            if ( v118 > *((_QWORD *)a2 + 110) && v118 < v54 )
            {
              v85 = *((_QWORD *)a2 + 5);
              v112 = *((_QWORD *)a2 + 6);
              v84 = v112;
              memset_0(v130, 0, 0x80uLL);
              memset_0(v142, 0, 0xF0uLL);
              v86 = *(_QWORD *)(v84 + 32);
              v143 = -1LL;
              NtManagePartition(v86, 0LL, 0LL, v142, 240);
              v87 = RmpPageSize;
              v88 = RmpPageSize * v164;
              memset_0(v132, 0, 0x50uLL);
              v138 += v158 + v159 + v160 + v161 + v162 + v155 + v156 + v157;
              v132[1] = v87 * v145 - v88;
              v135 = v87 * v146 - v88;
              v134 = v87 * v145 - v87 * v144;
              v133 = v87 * v144 - v88;
              v136 = v87 * (v147 + v148 + v149 + v150 + v151 + v152 + v154 + v153);
              v137 = v135 - v136;
              v132[0] = v87 * v163 - v88;
              RmpPolicyComputeUsageLimits(
                (struct _RM_USAGE_LIMIT_SETTINGS *)(v85 + 400),
                (struct _RM_REMEDIATION_ACTIONS *)(v85 + 456),
                (struct _RM_SYSTEM_MEMORY_METRICS *)v132,
                v132[0],
                (struct _RM_RESOURCE_USAGE_LIMITS *)v130);
              v89 = v112;
              v90 = v54 - v122 + 1;
              v91 = v131 - v133;
              *(_WORD *)(v112 + 188) = 0;
              if ( v91 < v90 )
              {
                RmpPolicyPopulateActivityHostMetrics(
                  (struct _RM_PARTITION *)v89,
                  0,
                  v89 + 144,
                  0x43u,
                  (unsigned __int8 (*)(struct _RM_ACTIVITY_HOST *, void *))RmpPolicyFilterActivityHostWithFlags,
                  (void *)2);
                RmpPolicyGenerateReclaimListForCommit(v89, v89 + 144, 0LL, v90 - v91, 0, 2);
                if ( *(_DWORD *)(v89 + 184) )
                  RmpPolicyReclaimHostList(v89 + 144, 2LL, 8LL, 0LL, 0LL);
              }
            }
            RmpActivityHostApplyEnforcementSettings(
              (struct _RM_ACTIVITY_HOST *)a2,
              (struct _RM_ENFORCEMENT_SETTINGS *)v140,
              1u);
            v9 = 3LL;
            goto LABEL_70;
          }
          v15 = JobInformation[0];
          v16 = JobInformation[2];
        }
        else
        {
          v17 = *(_QWORD *)(v10 + 56);
          v18 = *((_DWORD *)a2 + 156);
          *(_QWORD *)UserDataCount = *((_QWORD *)a2 + 3);
          LODWORD(v112) = *((_DWORD *)a2 + 155);
          v115 = *(_QWORD *)UserDataCount;
          v106 = (*(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, ULONG *, unsigned __int64 *, _QWORD))(v17 + 104))(
                   a2 + 552,
                   (unsigned int)v112,
                   a2 + 88,
                   v18,
                   *(ULONG **)UserDataCount,
                   &v120,
                   0LL);
          LODWORD(v19) = v106;
          if ( v106 < 0 )
          {
            if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
            {
              v229 = 4LL;
              v228 = &v106;
              v230 = &v115;
              v231 = 8LL;
              TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180055727, v96, v19, 4u, &v227);
              LODWORD(v19) = v106;
            }
          }
          else
          {
            v106 = (*(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, __int64, unsigned __int64 *))(v17 + 176))(
                     a2 + 552,
                     (unsigned int)v112,
                     a2 + 88,
                     v18,
                     v115,
                     &v116);
            LODWORD(v19) = v106;
            if ( v106 < 0 )
            {
              if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
              {
                v234 = 4LL;
                v233 = &v106;
                v235 = &v115;
                v236 = 8LL;
                TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005576F, v97, v19, 4u, &v232);
                LODWORD(v19) = v106;
              }
            }
            else
            {
              v127 = (v116 * (unsigned __int128)0x1000uLL) >> 64;
              v16 = v116 << 12;
              if ( is_mul_ok(v116, 0x1000uLL) )
              {
                v116 <<= 12;
                LODWORD(v19) = 0;
              }
              else
              {
                v16 = -1LL;
                v116 = -1LL;
                LODWORD(v19) = -1073741675;
              }
              v15 = v120;
              v106 = (int)v19;
            }
          }
          v9 = 3LL;
          if ( (int)v19 < 0 )
            goto LABEL_70;
        }
        v109 = v15;
        v117 = v16;
        InformationJobObject = 0;
        goto LABEL_24;
      }
    }
  }
LABEL_71:
  if ( hProvider )
  {
    memset_0(v176, 0, 0x230uLL);
    if ( *((_DWORD *)a2 + 14) )
    {
      v102 = (const unsigned __int16 **)*((_QWORD *)a2 + 105);
      if ( v102 != (const unsigned __int16 **)(a2 + 840) && v102 != (const unsigned __int16 **)1416 )
        StringCchCopyW(v176, 0xE8uLL, *(v102 - 173));
      v103 = *((_QWORD *)a2 + 5);
      v68 = *((_DWORD *)a2 + 22);
      v177 = *(_OWORD *)(v103 + 1756);
      v178 = *(_OWORD *)(v103 + 1772);
      v179 = *(_OWORD *)(v103 + 1788);
      v180 = *(_OWORD *)(v103 + 1804);
      v181 = *(_DWORD *)(v103 + 1820);
      v78 = *((_QWORD *)a2 + 3);
    }
    else
    {
      v58 = (__int128 *)(a2 + 88);
      v59 = v176;
      do
      {
        v59 += 64;
        v60 = *v58;
        v61 = v58[1];
        v58 += 8;
        *((_OWORD *)v59 - 8) = v60;
        v62 = *(v58 - 6);
        *((_OWORD *)v59 - 7) = v61;
        v63 = *(v58 - 5);
        *((_OWORD *)v59 - 6) = v62;
        v64 = *(v58 - 4);
        *((_OWORD *)v59 - 5) = v63;
        v65 = *(v58 - 3);
        *((_OWORD *)v59 - 4) = v64;
        v66 = *(v58 - 2);
        *((_OWORD *)v59 - 3) = v65;
        v67 = *(v58 - 1);
        *((_OWORD *)v59 - 2) = v66;
        *((_OWORD *)v59 - 1) = v67;
        --v9;
      }
      while ( v9 );
      v68 = 0;
      v69 = v58[1];
      *(_OWORD *)v59 = *v58;
      v70 = v58[2];
      *((_OWORD *)v59 + 1) = v69;
      v71 = v58[3];
      *((_OWORD *)v59 + 2) = v70;
      v72 = v58[4];
      v73 = *((_DWORD *)a2 + 154);
      *((_OWORD *)v59 + 3) = v71;
      v74 = *(_OWORD *)(a2 + 568);
      *((_OWORD *)v59 + 4) = v72;
      v181 = v73;
      v75 = *(_OWORD *)(a2 + 552);
      v182 = *((_DWORD *)a2 + 155);
      v76 = *((_DWORD *)a2 + 156);
      v177 = v75;
      v77 = *(_OWORD *)(a2 + 584);
      v183 = v76;
      v78 = *((_QWORD *)a2 + 79);
      v178 = v74;
      v79 = *(_OWORD *)(a2 + 600);
      v179 = v77;
      v180 = v79;
    }
    v185 = v68;
    v184 = v78;
    if ( hProvider > 4u && (qword_1800670D0 & 1) != 0 && (qword_1800670D8 & 1) == qword_1800670D8 )
    {
      v196 = 8LL;
      v195 = &v184;
      v197 = &v114;
      v199 = &v118;
      v114 = v68;
      v198 = 4LL;
      v200 = 8LL;
      *(_DWORD *)&v125.Level = 516;
      v191.Ptr = (ULONGLONG)off_1800670C8;
      *(_DWORD *)&v125.Id = ((unsigned int)&unk_1800579A3 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      v125.Keyword = 1LL;
      v191.Size = *(unsigned __int16 *)off_1800670C8;
      v192 = &unk_1800579AE;
      v191.Reserved = 2;
      v193 = 57;
      v194 = 1;
      EventWriteTransfer(RegHandle, &v125, 0LL, 0LL, 5u, &v191);
    }
  }
  if ( *((int *)a2 + 5) >= 0 )
  {
    v80 = *((_DWORD *)a2 + 208);
    if ( (v8 & 3) != 0 )
      v80 += *((_DWORD *)a2 + 214);
    if ( !v80 && !*((_QWORD *)a2 + 80) && (a2[1332] & 1) == 0 )
    {
      HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)(a2 + 64), 0);
      HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)(a2 + 64), 2u);
      HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)(a2 + 64), v92);
    }
  }
  dword_1800681D0 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v81 = TlsGetValue(HampLockTrackerId);
    if ( (*v81 & 1) == 0 )
      __int2c();
    v46 = v81[8]-- == 1;
    if ( v46 )
      *(_QWORD *)v81 &= ~1uLL;
  }
  v82 = _InterlockedDecrement((volatile signed __int32 *)a2 + 4);
  if ( v82 < 0 )
  {
    memset_0(&pExceptionRecord.ExceptionFlags, 0, 0x94uLL);
    pExceptionRecord.ExceptionCode = -1073741675;
    pExceptionRecord.ExceptionFlags = 1;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  else if ( !v82 )
  {
    v93 = *((_DWORD *)a2 + 8);
    if ( v93 )
    {
      v104 = v93 - 1;
      if ( v104 )
      {
        if ( v104 == 1 && !*((_DWORD *)a2 + 22) && !*((_DWORD *)a2 + 23) )
          NtDeleteWnfStateName(a2 + 88);
      }
      else
      {
        RmpResourceSetCleanup((struct _RM_RESOURCE_SET *)a2);
      }
    }
    else
    {
      RmpActivityHostFinalCleanup((struct _RM_ACTIVITY_HOST *)a2);
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a2);
  }
  v83 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v83, 0LL);
  }
}
