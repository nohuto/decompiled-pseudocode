/*
 * XREFs of ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800172C0
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001A400 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x180041E28 (-RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 * Callees:
 *     ?HampHostQueueTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@@Z @ 0x180006920 (-HampHostQueueTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 *     ?RmpSystemResourceTimerSet@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@_KPEAX@Z @ 0x1800088BC (-RmpSystemResourceTimerSet@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@_KPEAX@Z.c)
 *     ?HampDepGroupTryEnterStateChange@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEA_K@Z @ 0x18000BAF4 (-HampDepGroupTryEnterStateChange@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEA_K@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000F450 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000F4B8 (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000FD20 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?RmHamHostTryDecommitOffered@@YAJPEAU_RM_ACTIVITY_HOST@@_K1@Z @ 0x180011F40 (-RmHamHostTryDecommitOffered@@YAJPEAU_RM_ACTIVITY_HOST@@_K1@Z.c)
 *     ?RmpActivityHostCommitDebtCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x180014150 (-RmpActivityHostCommitDebtCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x1800142B0 (-RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS.c)
 *     _TlgCreateWsz @ 0x180014DC0 (_TlgCreateWsz.c)
 *     ?HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800165C0 (-HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@PEAU_RM_COMMIT_THRESHOLDS@@2PEAPEAU_HAM_ACTIVITY@@@Z @ 0x180019AC0 (-HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SET.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?CommitMemoryLimitChange@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_PSM_HOST_INFO@@_K1@Z @ 0x18001C274 (-CommitMemoryLimitChange@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_PSM_HOST_INFO@@_K1@Z.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     ?RmpCommitValuesAdd@@YAJ_K0PEA_K@Z @ 0x180025C9C (-RmpCommitValuesAdd@@YAJ_K0PEA_K@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?RmpCommitThresholdsAddValue@@YAXPEAU_RM_COMMIT_THRESHOLDS@@_K@Z @ 0x18003F87C (-RmpCommitThresholdsAddValue@@YAXPEAU_RM_COMMIT_THRESHOLDS@@_K@Z.c)
 *     ?HampHostIsElasticRecipient@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18004057C (-HampHostIsElasticRecipient@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     memcmp_0 @ 0x180041D10 (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 *     ?HampHostAcquireLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180064AA8 (-HampHostAcquireLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18006C948 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall HampHostCheckUpdateEnforcementSettings(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 v1; // rax
  __int128 v3; // xmm1
  char *v5; // rbx
  unsigned int v6; // r14d
  unsigned int v7; // r15d
  __int64 v8; // rsi
  unsigned __int64 v9; // r13
  int v10; // r9d
  int v11; // edx
  char *v12; // r15
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  unsigned int *Heap; // r14
  int v16; // esi
  unsigned int v17; // eax
  unsigned int *v18; // rcx
  unsigned int *v19; // rsi
  __int64 v20; // r15
  unsigned int v21; // r14d
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // r8
  const WCHAR *v27; // rcx
  __int64 v28; // rax
  unsigned __int64 v29; // rsi
  int v30; // r12d
  __int64 v31; // rsi
  unsigned __int64 v32; // r8
  unsigned __int64 v33; // r15
  unsigned __int64 v34; // r11
  unsigned __int64 v35; // r9
  unsigned __int64 v36; // r10
  unsigned __int64 v37; // rtt
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rtt
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rax
  __int64 v43; // rax
  unsigned __int64 v44; // rcx
  struct _HAM_DEPENDENCY_GROUP *v45; // r13
  struct _HAM_ACTIVITY *v46; // r11
  __int64 v47; // r10
  BOOL v48; // r14d
  __int64 v49; // r8
  __int128 v50; // xmm7
  unsigned __int64 v51; // rdx
  __int128 v52; // xmm6
  __int64 v53; // rax
  unsigned __int64 *v54; // r8
  unsigned __int64 v55; // rdx
  unsigned __int64 v56; // r15
  __int64 v57; // rdx
  unsigned int v58; // r15d
  unsigned int v59; // r12d
  int v60; // eax
  int v61; // esi
  unsigned __int64 v62; // rsi
  unsigned __int64 v63; // r8
  __int64 v64; // r8
  int v65; // r9d
  int v66; // ebx
  char v67; // [rsp+40h] [rbp-C0h] BYREF
  int v68; // [rsp+44h] [rbp-BCh] BYREF
  int v69; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v70; // [rsp+4Ch] [rbp-B4h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v72; // [rsp+58h] [rbp-A8h] BYREF
  PVOID P; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v74; // [rsp+68h] [rbp-98h] BYREF
  int v75; // [rsp+70h] [rbp-90h] BYREF
  int v76; // [rsp+74h] [rbp-8Ch] BYREF
  __int64 v77; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v78; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v79; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v80; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v81; // [rsp+98h] [rbp-68h]
  struct _CLIENT_ID ClientId; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v83; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v84; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v85; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v86; // [rsp+C8h] [rbp-38h] BYREF
  struct _HAM_ACTIVITY *v87; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v88; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v89; // [rsp+E0h] [rbp-20h] BYREF
  struct _HAM_ACTIVITY *v90; // [rsp+E8h] [rbp-18h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+F0h] [rbp-10h] BYREF
  EVENT_DESCRIPTOR v92; // [rsp+100h] [rbp+0h] BYREF
  char v93; // [rsp+110h] [rbp+10h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+118h] [rbp+18h] BYREF
  _OWORD v95[2]; // [rsp+148h] [rbp+48h] BYREF
  __int64 v96; // [rsp+168h] [rbp+68h]
  char v97[16]; // [rsp+170h] [rbp+70h] BYREF
  __int64 v98; // [rsp+180h] [rbp+80h]
  __int64 v99; // [rsp+188h] [rbp+88h]
  __int128 v100; // [rsp+190h] [rbp+90h] BYREF
  unsigned __int64 v101[2]; // [rsp+1A0h] [rbp+A0h] BYREF
  char v102[16]; // [rsp+1B0h] [rbp+B0h] BYREF
  __int64 v103; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v104; // [rsp+1C8h] [rbp+C8h] BYREF
  _OWORD Buf2[2]; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v106; // [rsp+1F0h] [rbp+F0h]
  _OWORD Buf1[2]; // [rsp+1F8h] [rbp+F8h] BYREF
  __int64 v108; // [rsp+218h] [rbp+118h]
  _QWORD v109[2]; // [rsp+220h] [rbp+120h] BYREF
  char v110; // [rsp+230h] [rbp+130h] BYREF
  _BYTE v111[40]; // [rsp+248h] [rbp+148h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+270h] [rbp+170h] BYREF
  void *v113; // [rsp+280h] [rbp+180h]
  int v114; // [rsp+288h] [rbp+188h]
  int v115; // [rsp+28Ch] [rbp+18Ch]
  __int64 *v116; // [rsp+290h] [rbp+190h]
  __int64 v117; // [rsp+298h] [rbp+198h]
  const WCHAR *v118; // [rsp+2A0h] [rbp+1A0h]
  int v119; // [rsp+2A8h] [rbp+1A8h]
  int v120; // [rsp+2ACh] [rbp+1ACh]
  int *v121; // [rsp+2B0h] [rbp+1B0h]
  __int64 v122; // [rsp+2B8h] [rbp+1B8h]
  unsigned __int64 *v123; // [rsp+2C0h] [rbp+1C0h]
  __int64 v124; // [rsp+2C8h] [rbp+1C8h]
  unsigned __int64 *v125; // [rsp+2D0h] [rbp+1D0h]
  __int64 v126; // [rsp+2D8h] [rbp+1D8h]
  unsigned __int64 *v127; // [rsp+2E0h] [rbp+1E0h]
  __int64 v128; // [rsp+2E8h] [rbp+1E8h]
  unsigned __int64 *v129; // [rsp+2F0h] [rbp+1F0h]
  __int64 v130; // [rsp+2F8h] [rbp+1F8h]
  struct _EVENT_DATA_DESCRIPTOR v131; // [rsp+300h] [rbp+200h] BYREF
  void *v132; // [rsp+310h] [rbp+210h]
  int v133; // [rsp+318h] [rbp+218h]
  int v134; // [rsp+31Ch] [rbp+21Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+320h] [rbp+220h] BYREF
  int *v136; // [rsp+330h] [rbp+230h]
  __int64 v137; // [rsp+338h] [rbp+238h]
  __int64 *v138; // [rsp+340h] [rbp+240h]
  __int64 v139; // [rsp+348h] [rbp+248h]
  char *v140; // [rsp+350h] [rbp+250h]
  __int64 v141; // [rsp+358h] [rbp+258h]
  unsigned __int64 *v142; // [rsp+360h] [rbp+260h]
  __int64 v143; // [rsp+368h] [rbp+268h]
  unsigned __int64 *v144; // [rsp+370h] [rbp+270h]
  __int64 v145; // [rsp+378h] [rbp+278h]
  char *v146; // [rsp+380h] [rbp+280h]
  __int64 v147; // [rsp+388h] [rbp+288h]
  EVENT_DATA_DESCRIPTOR v148; // [rsp+390h] [rbp+290h] BYREF
  __int64 *v149; // [rsp+3B0h] [rbp+2B0h]
  __int64 v150; // [rsp+3B8h] [rbp+2B8h]
  unsigned __int64 *v151; // [rsp+3C0h] [rbp+2C0h]
  __int64 v152; // [rsp+3C8h] [rbp+2C8h]
  unsigned __int64 *v153; // [rsp+3D0h] [rbp+2D0h]
  __int64 v154; // [rsp+3D8h] [rbp+2D8h]
  __int64 *v155; // [rsp+3E0h] [rbp+2E0h]
  __int64 v156; // [rsp+3E8h] [rbp+2E8h]
  __int64 *v157; // [rsp+3F0h] [rbp+2F0h]
  __int64 v158; // [rsp+3F8h] [rbp+2F8h]
  EVENT_DATA_DESCRIPTOR v159; // [rsp+400h] [rbp+300h] BYREF
  int *v160; // [rsp+420h] [rbp+320h]
  __int64 v161; // [rsp+428h] [rbp+328h]
  __int64 *v162; // [rsp+430h] [rbp+330h]
  __int64 v163; // [rsp+438h] [rbp+338h]
  EVENT_DATA_DESCRIPTOR v164; // [rsp+440h] [rbp+340h] BYREF
  int *v165; // [rsp+460h] [rbp+360h]
  __int64 v166; // [rsp+468h] [rbp+368h]
  __int64 *v167; // [rsp+470h] [rbp+370h]
  __int64 v168; // [rsp+478h] [rbp+378h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+480h] [rbp+380h] BYREF
  int *v170; // [rsp+4A0h] [rbp+3A0h]
  __int64 v171; // [rsp+4A8h] [rbp+3A8h]
  __int64 *v172; // [rsp+4B0h] [rbp+3B0h]
  __int64 v173; // [rsp+4B8h] [rbp+3B8h]

  v1 = *((_QWORD *)a1 + 79);
  if ( (v1 & 0x4000000000000LL) == 0 && (v1 & 0x2000000000000LL) == 0 )
  {
    HampHostComputeStaticEnforcementSettings(
      a1,
      (struct _RM_ENFORCEMENT_SETTINGS *)v95,
      (struct _RM_COMMIT_THRESHOLDS *)v111,
      (struct _RM_COMMIT_THRESHOLDS *)v97,
      &v90);
    if ( *((struct _HAM_ACTIVITY **)a1 + 116) == v90 )
    {
      v3 = *(_OWORD *)((char *)a1 + 1016);
      Buf1[0] = *((unsigned __int64 *)a1 + 125);
      v108 = *((_QWORD *)a1 + 129);
      *(_QWORD *)&Buf1[0] = 0LL;
      Buf1[1] = v3;
      v106 = v96;
      Buf2[1] = v95[1];
      Buf2[0] = 0uLL;
      if ( !memcmp_0(Buf1, Buf2, 0x28uLL)
        && v99 == *((_QWORD *)a1 + 101)
        && v98 == *((_QWORD *)a1 + 102)
        && !memcmp_0(v111, (char *)a1 + 824, 0x20uLL) )
      {
        return 0LL;
      }
    }
  }
  HampHostReleaseLockExclusive(a1);
  RmpReleaseGlobalLock();
  v5 = (char *)a1 - 64;
  v6 = *((_DWORD *)a1 + 140);
  v7 = *((_DWORD *)a1 + 139);
  v8 = *(_QWORD *)(*((_QWORD *)a1 - 2) + 40LL);
  v77 = *((_QWORD *)a1 - 4);
  v9 = -1LL;
  v68 = (*(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, __int64, unsigned __int64 *, _QWORD))(v8 + 24))(
          (char *)a1 + 488,
          v7,
          (char *)a1 + 24,
          v6,
          v77,
          &v83,
          0LL);
  v10 = v68;
  if ( v68 >= 0 )
  {
    v13 = v7;
    v12 = v5 + 552;
    v68 = (*(__int64 (__fastcall **)(char *, __int64, char *, _QWORD, __int64, unsigned __int64 *))(v8 + 96))(
            v5 + 552,
            v13,
            (char *)a1 + 24,
            v6,
            v77,
            &v78);
    v10 = v68;
    if ( v68 >= 0 )
    {
      v14 = v78 << 12;
      if ( is_mul_ok(v78, 0x1000uLL) )
      {
        v78 <<= 12;
        v10 = 0;
      }
      else
      {
        v14 = -1LL;
        v10 = -1073741675;
        v78 = -1LL;
      }
      v80 = v83;
      v68 = v10;
      v79 = v14;
    }
    else if ( hProvider > 4u )
    {
      if ( !TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
        goto LABEL_24;
      v161 = 4LL;
      v160 = &v68;
      v162 = &v77;
      v163 = 8LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007BD63, 0LL, 0LL, 4u, &v159);
      v10 = v68;
    }
  }
  else
  {
    v11 = 1;
    if ( hProvider <= 4u )
    {
      v12 = v5 + 552;
      goto LABEL_24;
    }
    if ( !TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    {
      v12 = v5 + 552;
      goto LABEL_24;
    }
    v171 = 4LL;
    v170 = &v68;
    v172 = &v77;
    v173 = 8LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18007BD1B, 0LL, 0LL, 4u, &pData);
    v10 = v68;
    v12 = v5 + 552;
  }
  v11 = 1;
LABEL_24:
  if ( v10 >= 0 )
  {
    v70 = v11;
    v72 = 0LL;
    Handle = 0LL;
    P = 0LL;
    Heap = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8uLL);
    if ( Heap )
    {
      v16 = (*(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, unsigned int *, unsigned int *))(*(_QWORD *)(*((_QWORD *)v5 + 6) + 40LL) + 72LL))(
              v12,
              *((unsigned int *)v5 + 155),
              (char *)a1 + 24,
              *((unsigned int *)v5 + 156),
              *((_QWORD *)v5 + 4),
              Heap,
              &v70);
      if ( v16 >= 0 )
      {
LABEL_31:
        v17 = v70;
        v18 = Heap;
        P = Heap;
      }
      else
      {
        while ( 1 )
        {
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
          if ( v16 != -2147483643 )
            break;
          Heap = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * v70);
          if ( !Heap )
          {
            v16 = -1073741801;
            break;
          }
          v16 = (*(__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, unsigned int *, unsigned int *))(*(_QWORD *)(*((_QWORD *)v5 + 6) + 40LL) + 72LL))(
                  v12,
                  *((unsigned int *)v5 + 155),
                  (char *)a1 + 24,
                  *((unsigned int *)v5 + 156),
                  *((_QWORD *)v5 + 4),
                  Heap,
                  &v70);
          if ( v16 >= 0 )
            goto LABEL_31;
        }
        v17 = v69;
        v18 = (unsigned int *)P;
      }
      if ( v16 >= 0 )
      {
        if ( v17 )
        {
          v19 = v18;
          v20 = v17;
          do
          {
            if ( Handle )
            {
              NtClose(Handle);
              Handle = 0LL;
            }
            v21 = *v19;
            ClientId.UniqueProcess = (HANDLE)*v19;
            ClientId.UniqueThread = 0LL;
            ObjectAttributes.Length = 48;
            memset(&ObjectAttributes.RootDirectory, 0, 20);
            *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
            if ( NtOpenProcess(&Handle, 0x1000u, &ObjectAttributes, &ClientId) >= 0
              && (*(unsigned __int8 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, HANDLE))(*(_QWORD *)(*((_QWORD *)v5 + 6) + 40LL) + 80LL))(
                   v5 + 552,
                   *((unsigned int *)v5 + 155),
                   (char *)a1 + 24,
                   *((unsigned int *)v5 + 156),
                   *((_QWORD *)v5 + 4),
                   Handle) )
            {
              RmpActivityHostCommitDebtCallback((struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 64), Handle, v21, &v72);
            }
            v19 += 2;
            --v20;
          }
          while ( v20 );
          v9 = -1LL;
        }
        v16 = 0;
      }
      if ( P && P != &v93 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
    }
    else
    {
      v16 = -1073741801;
    }
    if ( Handle )
      NtClose(Handle);
    v69 = v16;
    if ( v16 >= 0 )
    {
      v22 = v72;
      v69 = 0;
    }
    else
    {
      if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
      {
        v166 = 4LL;
        v165 = &v69;
        v84 = *((_QWORD *)v5 + 4);
        v167 = &v84;
        v168 = 8LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180080A08, 0LL, 0LL, 4u, &v164);
        v16 = v69;
      }
      v22 = v72;
      if ( v16 < 0 )
        v22 = 0LL;
      v72 = v22;
    }
    v23 = v80;
    v24 = v80;
    if ( v22 < v80 )
      v24 = v22;
    v25 = v80 - v24;
    if ( v80 && v25 <= 1 )
      v25 = 1LL;
    v26 = v79;
    v86 = v25 + v79;
    if ( hProvider > 4u && (qword_1800920C0 & 1) != 0 && (qword_1800920C8 & 1) == qword_1800920C8 )
    {
      v27 = &pwsz;
      v85 = *((_QWORD *)v5 + 4);
      v116 = &v85;
      LODWORD(v28) = 0;
      v117 = 8LL;
      if ( a1 != (struct _RM_HAM_ACTIVITY_HOST *)-24LL )
      {
        v27 = (const WCHAR *)((char *)a1 + 24);
        v28 = -1LL;
        do
          ++v28;
        while ( *((_WORD *)a1 + v28 + 12) );
      }
      v118 = v27;
      v119 = 2 * v28 + 2;
      v75 = *((_DWORD *)v5 + 156);
      v121 = &v75;
      v123 = &v86;
      v125 = &v80;
      v127 = &v79;
      v129 = &v72;
      v120 = 0;
      v122 = 4LL;
      v124 = 8LL;
      v126 = 8LL;
      v128 = 8LL;
      v130 = 8LL;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_1800920B8;
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18007DD49 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      EventDescriptor.Keyword = 1LL;
      UserData.Size = *(unsigned __int16 *)off_1800920B8;
      v113 = &unk_18007DD54;
      UserData.Reserved = 2;
      v114 = 150;
      v115 = 1;
      EventWriteTransfer(qword_1800920D0, &EventDescriptor, 0LL, 0LL, 9u, &UserData);
      v26 = v79;
      v23 = v80;
    }
    v74 = v23 + v26;
  }
  HampHostAcquireLockExclusive(a1);
  v29 = *((_QWORD *)a1 + 79);
  v30 = 0;
  if ( (v29 & 0x4000000000000LL) != 0 )
  {
    v29 &= ~0x4000000000000uLL;
    *((_QWORD *)a1 + 101) = 0LL;
    *((_QWORD *)a1 + 79) = v29;
    *((_QWORD *)a1 + 102) = 0LL;
  }
  v31 = (v29 >> 49) & 1;
  HampHostComputeStaticEnforcementSettings(
    a1,
    (struct _RM_ENFORCEMENT_SETTINGS *)v109,
    (struct _RM_COMMIT_THRESHOLDS *)&v100,
    (struct _RM_COMMIT_THRESHOLDS *)v102,
    &v87);
  v32 = v100;
  v33 = v101[0];
  if ( v74 >= (unsigned __int64)v100 )
  {
    if ( v74 >= *((_QWORD *)&v100 + 1) )
    {
      if ( v74 >= v101[0] )
      {
        v34 = v101[0];
        v32 = -1LL;
      }
      else
      {
        v34 = *((_QWORD *)&v100 + 1);
        v32 = v101[0];
      }
    }
    else
    {
      v32 = *((_QWORD *)&v100 + 1);
      v34 = v100;
    }
  }
  else
  {
    v34 = 0LL;
  }
  v35 = v101[1];
  v36 = v74 >> 3;
  if ( v101[1] - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    v36 = v101[1] >> 4;
  if ( v36 <= 0x500000 )
    v36 = 5242880LL;
  v37 = v36 + v74 - 1;
  v38 = v37 / v36 * v36;
  v39 = -1LL;
  if ( is_mul_ok(v37 / v36, v36) )
    v39 = v38;
  if ( v101[1] - 1 <= 0xFFFFFFFFFFFFFFFDuLL && v39 > v101[1] )
  {
    v40 = v36 + v101[1] - 1;
    v41 = v40 / v36 * v36;
    v39 = -1LL;
    if ( is_mul_ok(v40 / v36, v36) )
      v39 = v41;
  }
  if ( v39 != -1LL && v39 + v36 >= v39 )
    v9 = v39 + v36;
  if ( v101[1] - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v42 = v101[1];
    if ( v39 < v101[1] )
      v42 = v39;
    v39 = v42;
    if ( v101[1] < v9 )
      v9 = v101[1];
  }
  v43 = 2 * v36;
  if ( 2 * v36 >= v39 )
    v43 = v39;
  v44 = v39 - v43;
  if ( v34 > v44 )
    v44 = v34;
  if ( v74 <= v101[1] && v32 >= v9 )
    v32 = v9;
  v45 = (struct _HAM_DEPENDENCY_GROUP *)*((_QWORD *)a1 + 83);
  v46 = v87;
  v47 = *((_QWORD *)a1 + 79);
  v109[0] = v44;
  v109[1] = v32;
  if ( v45 )
  {
    v48 = (v47 & 0x10000000000000LL) != 0 && *((struct _HAM_ACTIVITY **)a1 + 116) != v87;
    if ( HampHostIsElasticRecipient(a1) && v49 != *((_QWORD *)a1 + 126) )
      v48 = 1;
    if ( *((_QWORD *)a1 + 114) )
      v48 = 1;
  }
  else
  {
    v48 = 0;
  }
  if ( (*((_QWORD *)a1 + 105) > v33 || *((_QWORD *)a1 + 106) > v35) && (v47 & 0x8000000000000LL) == 0 )
    v30 = 1;
  v50 = v100;
  v51 = *((_QWORD *)a1 + 113);
  v52 = *(_OWORD *)v101;
  *((_QWORD *)a1 + 101) = v104;
  v53 = v103;
  *(_OWORD *)((char *)a1 + 824) = v50;
  *((_QWORD *)a1 + 102) = v53;
  *(_OWORD *)((char *)a1 + 840) = v52;
  *((_QWORD *)a1 + 116) = v46;
  RmpCommitValuesAdd(v33, v51, (unsigned __int64 *)a1 + 111);
  RmpCommitValuesAdd(*v54, *((_QWORD *)a1 + 114), v54);
  v55 = *((_QWORD *)a1 + 114);
  *(_OWORD *)((char *)a1 + 856) = v50;
  *(_OWORD *)((char *)a1 + 872) = v52;
  RmpCommitThresholdsAddValue((struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 + 856), v55);
  *((_QWORD *)a1 + 79) &= ~0x2000000000000uLL;
  HampHostReleaseLockExclusive(a1);
  v56 = *(_QWORD *)((*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 93) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                               - 8) & 0xFFFFFFFFFFFFFFFCuLL)
                  - 8) & 0xFFFFFFFFFFFFFFFCuLL;
  v81 = v56;
  if ( v30 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*((_QWORD *)a1 - 2) + 40LL) + 216LL))(*((_QWORD *)a1 + 115));
    HampHostAcquireLockExclusive(a1);
    *((_QWORD *)a1 + 79) &= ~0x4000000000000uLL;
    HampHostReleaseLockExclusive(a1);
    RmpSystemResourceTimerSet(a1, *(unsigned int *)(v56 + 932), *((void **)a1 + 115));
    if ( _volatile_metadata > 4u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&_volatile_metadata, 8uLL) )
      {
        v88 = *((_QWORD *)a1 - 4);
        v149 = &v88;
        v151 = &v101[1];
        v153 = v101;
        v155 = &v104;
        v157 = &v103;
        v150 = v57;
        v152 = v57;
        v154 = v57;
        v156 = v57;
        v158 = v57;
        TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_180082A22, 0LL, 0LL, 7u, &v148);
      }
    }
  }
  if ( v74 >= (unsigned __int64)v100 )
  {
    if ( v74 >= *((_QWORD *)&v100 + 1) )
    {
      v58 = 3;
      if ( v74 >= v101[0] )
        v58 = 4;
    }
    else
    {
      v58 = 2;
    }
    v59 = v58;
  }
  else
  {
    v58 = 1;
    v59 = 1;
  }
  RmpAcquireGlobalLock();
  if ( v59 >= 4 )
    RmHamHostTryDecommitOffered((struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 64), v74, v101[0]);
  v60 = RmpActivityHostApplyEnforcementSettings(
          (struct _RM_HAM_ACTIVITY_HOST *)((char *)a1 - 64),
          (struct _RM_ENFORCEMENT_SETTINGS *)v109,
          v31);
  v61 = v60;
  if ( (*(_BYTE *)((*(_QWORD *)((*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 93) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                           - 8) & 0xFFFFFFFFFFFFFFFCuLL)
                              - 8) & 0xFFFFFFFFFFFFFFFCuLL)
                 + 508) & 1) != 0 )
    goto LABEL_137;
  if ( v60 < 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgs();
LABEL_137:
    if ( v61 < 0 )
    {
      RmpReleaseGlobalLock();
      HampHostQueueTerminate((__int64)a1, 3u, 0x1300u, 0LL, 0);
      RmpAcquireGlobalLock();
    }
  }
  HampHostAcquireLockExclusive(a1);
  if ( (v5[804] & 1) != 0 )
  {
    v62 = v101[0];
  }
  else
  {
    v62 = *((_QWORD *)v5 + 168);
    if ( v62 >= v101[0] )
      v62 = v101[0];
  }
  v63 = *((_QWORD *)v5 + 171);
  if ( v62 != v63
    && (int)ExecutionModel::ResourceManager::CommitMemoryLimitChange(
              *(ExecutionModel::ResourceManager **)(*((_QWORD *)v5 + 6) + 2232LL),
              (struct _RM_PSM_HOST_INFO *)(v5 + 88),
              v63,
              v62) >= 0 )
  {
    *((_QWORD *)v5 + 171) = v62;
  }
  v64 = *((unsigned int *)v5 + 344);
  if ( (_DWORD)v64 != v58 )
  {
    if ( _volatile_metadata > 4u )
    {
      TlgCreateWsz(&pDesc, (LPCWSTR)a1 + 12);
      v65 = *((_DWORD *)a1 + 140);
      v136 = &v76;
      v89 = *((_QWORD *)a1 - 4);
      v138 = &v89;
      v140 = &v67;
      v142 = &v74;
      v144 = v101;
      v146 = &v110;
      v76 = v65;
      v137 = 4LL;
      v139 = 8LL;
      v67 = v58;
      v141 = 1LL;
      v143 = 8LL;
      v145 = 8LL;
      v147 = 8LL;
      *(_DWORD *)&v92.Level = 4;
      v131.Ptr = (ULONGLONG)off_1800920F8;
      *(_DWORD *)&v92.Id = ((unsigned int)&unk_1800828E5 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      v92.Keyword = 0LL;
      v131.Size = *(unsigned __int16 *)off_1800920F8;
      v132 = &unk_1800828F0;
      v134 = 1;
      v131.Reserved = 2;
      v133 = 119;
      EventWriteTransfer(RegHandle, &v92, 0LL, 0LL, 9u, &v131);
      v64 = *((unsigned int *)v5 + 344);
    }
    (*(void (__fastcall **)(_QWORD, char *, __int64, _QWORD))(**(_QWORD **)(v81 + 768) + 32LL))(
      *(_QWORD *)(v81 + 768),
      (char *)a1 - 64,
      v64,
      v58);
    *((_DWORD *)v5 + 344) = v58;
  }
  if ( v48 )
  {
    HampDepGroupAcquireLockExclusive(v45);
    v66 = HampDepGroupTryEnterStateChange(v45, 0LL);
    HampDepGroupReleaseLockExclusive(v45);
    if ( v66 )
    {
      HampHostReleaseLockExclusive(a1);
      RmpReleaseGlobalLock();
      HampDepGroupRunStateChangeWorker(v45);
      RmpAcquireGlobalLock();
      HampHostAcquireLockExclusive(a1);
    }
  }
  return 1LL;
}
