/*
 * XREFs of ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x1800142B0
 * Callers:
 *     ?RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800124B0 (-RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800172C0 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180025D6C (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpCoreApiSetHostLimits@@YAJPEAU_RM_ACTIVATOR@@_KPEAU_RM_RESOURCE_LIMITS@@@Z @ 0x180051BB8 (-RmpCoreApiSetHostLimits@@YAJPEAU_RM_ACTIVATOR@@_KPEAU_RM_RESOURCE_LIMITS@@@Z.c)
 * Callees:
 *     ?RmpQoSEnableDisableForHost@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180001240 (-RmpQoSEnableDisableForHost@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostApplyExecutionSpeed@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x18001065C (-RmpActivityHostApplyExecutionSpeed@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z.c)
 *     ?CreateApplicationState@ModernResourceEnforcer@@IEAAPEAVEnforcerApplicationState@@PEBGPEAT_RM_SID@@KK_K@Z @ 0x180016170 (-CreateApplicationState@ModernResourceEnforcer@@IEAAPEAVEnforcerApplicationState@@PEBGPEAT_RM_SI.c)
 *     ?CommitMemoryLimitChange@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_PSM_HOST_INFO@@_K1@Z @ 0x18001C274 (-CommitMemoryLimitChange@ResourceManager@ExecutionModel@@QEAAJPEAU_RM_PSM_HOST_INFO@@_K1@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x180041D10 (memcmp_0.c)
 *     memcpy_0 @ 0x180041D16 (memcpy_0.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 *     ?RmpResourceSetUpdateReceivedCommit@@YAXPEAU_RM_RESOURCE_SET@@_K@Z @ 0x180053360 (-RmpResourceSetUpdateReceivedCommit@@YAXPEAU_RM_RESOURCE_SET@@_K@Z.c)
 *     ?RmpGpuMonitorDisableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18005CF4C (-RmpGpuMonitorDisableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpGpuMonitorEnableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18005D0FC (-RmpGpuMonitorEnableForHost@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall RmpActivityHostApplyEnforcementSettings(
        struct _RM_ACTIVITY_HOST *a1,
        struct _RM_ENFORCEMENT_SETTINGS *a2,
        char a3)
{
  char *v4; // r12
  char *v6; // rbx
  struct _RM_ACTIVITY_HOST *v7; // r14
  char v8; // dl
  char v9; // r8
  DWORD v10; // edi
  _QWORD *Value; // rbx
  DWORD CurrentThreadId; // eax
  DWORD v13; // ecx
  _QWORD *v14; // rax
  bool v15; // zf
  unsigned __int8 v16; // cl
  int v17; // r9d
  char v18; // r10
  unsigned __int8 v19; // r11
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rdi
  union _RM_SID *v24; // rbx
  __int64 *v25; // rsi
  unsigned int v26; // eax
  unsigned __int64 v27; // r14
  struct _RTL_CRITICAL_SECTION *v28; // rax
  __int64 *v29; // rsi
  ULONG v30; // eax
  WCHAR *v31; // rbx
  unsigned __int64 v32; // rdi
  unsigned __int8 *v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 *v37; // rbx
  __int64 *v38; // r14
  unsigned __int64 v39; // rax
  union _RM_SID *v40; // r14
  struct EnforcerApplicationState *ApplicationState; // rax
  ModernResourceEnforcer *v42; // rdi
  __int16 v43; // cx
  int *v44; // rbx
  __int64 (__fastcall *v45)(ModernResourceEnforcer *__hidden, const unsigned __int16 *, union _RM_SID *, unsigned int, unsigned int, unsigned __int64, unsigned int *, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *, enum _PSM_APPLICATION_PRIORITY *, unsigned __int64 *); // rax
  int v46; // ecx
  __int64 *v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rax
  int v50; // ecx
  __int64 v51; // rax
  int v52; // edx
  struct _RM_PSM_HOST_INFO *v53; // rsi
  DWORD v54; // edi
  _QWORD *v55; // rbx
  char *v56; // rbx
  DWORD v57; // eax
  DWORD v58; // ecx
  _QWORD *v59; // rax
  int v60; // edx
  _QWORD *v61; // r9
  __int64 v62; // r8
  __int64 v63; // rdx
  __int64 v64; // r10
  __int64 v65; // r11
  __int64 v66; // r9
  __int64 v67; // r10
  const WCHAR *v68; // rdx
  __int64 v69; // rax
  bool v70; // al
  __int64 v72; // rdx
  __int64 v73; // r8
  __int64 v74; // r11
  int v75; // r8d
  int v76; // r10d
  unsigned __int64 v77; // rbx
  unsigned __int64 v78; // r8
  int v79; // eax
  _QWORD *v80; // rdx
  _QWORD *v81; // rdx
  ULONG UserDataCount[2]; // [rsp+20h] [rbp-E0h]
  __int64 *v83; // [rsp+38h] [rbp-C8h]
  char v84; // [rsp+70h] [rbp-90h] BYREF
  bool v85; // [rsp+71h] [rbp-8Fh] BYREF
  unsigned int v86; // [rsp+74h] [rbp-8Ch]
  unsigned int v87; // [rsp+78h] [rbp-88h]
  int v88; // [rsp+7Ch] [rbp-84h]
  unsigned int v89; // [rsp+80h] [rbp-80h] BYREF
  WCHAR v90; // [rsp+84h] [rbp-7Ch]
  wchar_t *Source; // [rsp+88h] [rbp-78h]
  int v92; // [rsp+90h] [rbp-70h] BYREF
  int v93; // [rsp+94h] [rbp-6Ch]
  unsigned __int64 v94; // [rsp+98h] [rbp-68h]
  __int64 *v95; // [rsp+A0h] [rbp-60h]
  struct _RM_ACTIVITY_HOST *v96; // [rsp+A8h] [rbp-58h]
  int v97; // [rsp+B0h] [rbp-50h] BYREF
  int v98; // [rsp+B4h] [rbp-4Ch] BYREF
  int v99; // [rsp+B8h] [rbp-48h] BYREF
  union _RM_SID *v100; // [rsp+C0h] [rbp-40h]
  __int64 v101; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v102; // [rsp+D0h] [rbp-30h] BYREF
  ModernResourceEnforcer *v103; // [rsp+D8h] [rbp-28h]
  __int64 *v104; // [rsp+E0h] [rbp-20h]
  PRTL_CRITICAL_SECTION CriticalSection; // [rsp+E8h] [rbp-18h]
  __int64 v106; // [rsp+F0h] [rbp-10h] BYREF
  char *v107; // [rsp+F8h] [rbp-8h]
  __int64 v108; // [rsp+100h] [rbp+0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+108h] [rbp+8h] BYREF
  __int64 v110; // [rsp+118h] [rbp+18h] BYREF
  __int64 v111; // [rsp+120h] [rbp+20h]
  __int64 v112; // [rsp+128h] [rbp+28h]
  __int64 v113; // [rsp+130h] [rbp+30h]
  __int64 v114; // [rsp+138h] [rbp+38h]
  __int64 v115; // [rsp+140h] [rbp+40h]
  wchar_t Destination[232]; // [rsp+150h] [rbp+50h] BYREF
  _QWORD Buf1[8]; // [rsp+320h] [rbp+220h] BYREF
  int v118; // [rsp+360h] [rbp+260h]
  unsigned int v119; // [rsp+364h] [rbp+264h]
  unsigned int v120; // [rsp+368h] [rbp+268h]
  unsigned __int64 v121; // [rsp+370h] [rbp+270h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+380h] [rbp+280h] BYREF
  void *v123; // [rsp+390h] [rbp+290h]
  int v124; // [rsp+398h] [rbp+298h]
  int v125; // [rsp+39Ch] [rbp+29Ch]
  unsigned int *v126; // [rsp+3A0h] [rbp+2A0h]
  __int64 v127; // [rsp+3A8h] [rbp+2A8h]
  const WCHAR *v128; // [rsp+3B0h] [rbp+2B0h]
  int v129; // [rsp+3B8h] [rbp+2B8h]
  int v130; // [rsp+3BCh] [rbp+2BCh]
  char *v131; // [rsp+3C0h] [rbp+2C0h]
  int v132; // [rsp+3C8h] [rbp+2C8h]
  int v133; // [rsp+3CCh] [rbp+2CCh]
  int *v134; // [rsp+3D0h] [rbp+2D0h]
  __int64 v135; // [rsp+3D8h] [rbp+2D8h]
  int *v136; // [rsp+3E0h] [rbp+2E0h]
  __int64 v137; // [rsp+3E8h] [rbp+2E8h]
  __int64 *v138; // [rsp+3F0h] [rbp+2F0h]
  __int64 v139; // [rsp+3F8h] [rbp+2F8h]
  int *v140; // [rsp+400h] [rbp+300h]
  __int64 v141; // [rsp+408h] [rbp+308h]
  char *v142; // [rsp+410h] [rbp+310h]
  __int64 v143; // [rsp+418h] [rbp+318h]
  char *v144; // [rsp+420h] [rbp+320h]
  __int64 v145; // [rsp+428h] [rbp+328h]
  char *v146; // [rsp+430h] [rbp+330h]
  __int64 v147; // [rsp+438h] [rbp+338h]
  char *v148; // [rsp+440h] [rbp+340h]
  __int64 v149; // [rsp+448h] [rbp+348h]
  bool *v150; // [rsp+450h] [rbp+350h]
  __int64 v151; // [rsp+458h] [rbp+358h]

  v96 = a1;
  v4 = (char *)a1 + 1064;
  v6 = (char *)a1 + 64;
  v7 = a1;
  v107 = (char *)a1 + 64;
  if ( !memcmp_0(a2, (char *)a1 + 1064, 0x28uLL) && (a3 & 1) == 0 )
    return 0LL;
  v8 = v4[32] & 2;
  v9 = *((_BYTE *)a2 + 32) & 2;
  if ( v8 == 0 && v9 != 0 )
  {
    RmpGpuMonitorEnableForHost(v7);
  }
  else if ( v8 && !v9 )
  {
    RmpGpuMonitorDisableForHost(v7);
  }
  v10 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v10) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *Value |= 2uLL;
    ++Value[2];
    v6 = (char *)v7 + 64;
  }
  RtlAcquireSRWLockExclusive(v6);
  CurrentThreadId = GetCurrentThreadId();
  v13 = HampLockTrackerId;
  *((_DWORD *)v6 + 2) = CurrentThreadId;
  v4[32] ^= (v4[32] ^ *((_BYTE *)a2 + 32)) & 2;
  if ( v13 != -1 )
  {
    v14 = TlsGetValue(v13);
    if ( (*(_BYTE *)v14 & 2) == 0 )
      __int2c();
    v15 = v14[2]-- == 1LL;
    if ( v15 )
      *v14 &= ~2uLL;
  }
  *((_DWORD *)v6 + 2) = 0;
  RtlReleaseSRWLockExclusive(v6);
  v16 = *((_BYTE *)a2 + 32);
  if ( (((unsigned __int8)v4[32] ^ v16) & 8) != 0 )
  {
    v79 = RmpQoSEnableDisableForHost(v7, (v16 >> 3) & 1);
    v89 = v79;
    v52 = v79;
    if ( v79 == -1073741822 )
    {
      v4[32] ^= (v4[32] ^ *((_BYTE *)a2 + 32)) & 8;
    }
    else if ( v79 < 0 )
    {
      goto LABEL_88;
    }
  }
  v17 = *((_DWORD *)a2 + 7);
  if ( *((_DWORD *)v4 + 7) == v17
    && (v18 = v4[32], v19 = *((_BYTE *)a2 + 32), ((v19 ^ (unsigned __int8)v18) & 1) == 0)
    && (v20 = *((_QWORD *)a2 + 2), *((_QWORD *)v4 + 2) == v20)
    && (v21 = *((_QWORD *)a2 + 1), *((_QWORD *)v4 + 1) == v21)
    && (v22 = *(_QWORD *)a2, *(_QWORD *)v4 == *(_QWORD *)a2)
    && *((_DWORD *)v4 + 6) == *((_DWORD *)a2 + 6)
    && ((v19 ^ (unsigned __int8)v18) & 4) == 0 )
  {
    if ( (a3 & 1) == 0 )
      goto LABEL_87;
  }
  else
  {
    v20 = *((_QWORD *)a2 + 2);
    v21 = *((_QWORD *)a2 + 1);
    v22 = *(_QWORD *)a2;
  }
  v23 = *(_QWORD *)(*((_QWORD *)v7 + 6) + 40LL);
  v103 = (ModernResourceEnforcer *)v23;
  if ( v17 == 100 )
  {
    v88 = -1;
  }
  else
  {
    v88 = v17;
    if ( v17 != -1 )
      v88 = 100 * v17;
  }
  v106 = v20;
  Source = (wchar_t *)((char *)v7 + 88);
  v24 = (struct _RM_ACTIVITY_HOST *)((char *)v7 + 552);
  v25 = &v106;
  v87 = *((_DWORD *)v7 + 155);
  v26 = *((_DWORD *)v7 + 156);
  v27 = *((_QWORD *)v7 + 4);
  if ( !v20 )
    v25 = 0LL;
  v86 = v26;
  v28 = (struct _RTL_CRITICAL_SECTION *)(v23 + 248);
  v104 = v25;
  v29 = (__int64 *)(v23 + 320);
  CriticalSection = (PRTL_CRITICAL_SECTION)(v23 + 248);
  v101 = v21;
  v102 = v22;
  v92 = -1;
  v100 = v24;
  v94 = v27;
  v93 = 0;
  v95 = (__int64 *)(v23 + 320);
  while ( 1 )
  {
    RtlEnterCriticalSection(v28);
    memset_0(Destination, 0, 0x228uLL);
    wcscpy_s(Destination, 0xE8uLL, Source);
    memset(Buf1, 0, sizeof(Buf1));
    v118 = 0;
    v30 = RtlLengthSid(v24);
    memcpy_0(Buf1, v24, v30);
    v119 = v87;
    v120 = v86;
    v121 = v27;
    if ( v29[2] )
    {
      v31 = Destination;
      v32 = 314159LL;
      do
      {
        v90 = RtlUpcaseUnicodeChar(*v31++);
        v32 = HIBYTE(v90) + 37 * ((unsigned __int8)v90 + 37 * v32);
      }
      while ( v31 < (WCHAR *)Buf1 );
      v33 = (unsigned __int8 *)Buf1;
      v34 = 11LL;
      do
      {
        v35 = *v33;
        v33 += 8;
        v32 = *(v33 - 1)
            + 37
            * (*(v33 - 2)
             + 37
             * (*(v33 - 3)
              + 37 * (*(v33 - 4) + 37 * (*(v33 - 5) + 37 * (*(v33 - 6) + 37 * (*(v33 - 7) + 37 * (v35 + 37 * v32)))))));
        --v34;
      }
      while ( v34 );
      v36 = v29[2] + 16 * (v32 & ((8LL << *((_BYTE *)v29 + 32)) - 1));
      v37 = *(__int64 **)v36;
      if ( *(_QWORD *)v36 )
      {
        v38 = **(__int64 ***)(v36 + 8);
        if ( v37 != v38 )
        {
          do
          {
            v39 = v37[2];
            if ( v39 >= v32 )
            {
              if ( v39 > v32 )
                break;
              if ( !_wcsicmp(Destination, (const wchar_t *)v37 + 12) && !memcmp_0(Buf1, v37 + 61, 0x58uLL) )
              {
                v29 = v95;
                goto LABEL_36;
              }
            }
            v37 = (__int64 *)*v37;
          }
          while ( v37 != v38 );
          v29 = v95;
        }
      }
    }
    v37 = v29;
LABEL_36:
    v40 = v100;
    ApplicationState = (struct EnforcerApplicationState *)(v37 + 72);
    v42 = v103;
    if ( v37 == v29 )
      ApplicationState = 0LL;
    if ( !ApplicationState )
    {
      ApplicationState = ModernResourceEnforcer::CreateApplicationState(v103, Source, v100, v87, v86, v94);
      if ( !ApplicationState )
      {
        RtlLeaveCriticalSection(CriticalSection);
        v52 = -1073741801;
        goto LABEL_142;
      }
    }
    *(_BYTE *)ApplicationState |= 0x80u;
    if ( *(char *)ApplicationState < 0 )
    {
      v43 = v88;
      if ( v88 == -1 )
        v43 = -1;
      *((_WORD *)ApplicationState + 1) = v43;
    }
    if ( (*(_BYTE *)ApplicationState & 1) != 0 )
    {
      v44 = 0LL;
    }
    else
    {
      v44 = &v92;
      v92 = v88;
    }
    RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)((char *)v42 + 248));
    v45 = *(__int64 (__fastcall **)(ModernResourceEnforcer *__hidden, const unsigned __int16 *, union _RM_SID *, unsigned int, unsigned int, unsigned __int64, unsigned int *, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *, enum _PSM_APPLICATION_PRIORITY *, unsigned __int64 *))(*(_QWORD *)v42 + 32LL);
    if ( v45 == ModernResourceEnforcer::PsmSetApplicationProperties )
    {
      v110 = 0LL;
      v111 = 0LL;
      v112 = 0LL;
      v113 = 0LL;
      v114 = 0LL;
      v115 = 0LL;
      if ( v44 )
      {
        v46 = 1;
        HIDWORD(v110) = *v44;
      }
      else
      {
        v46 = v110;
      }
      v47 = v104;
      if ( v104 )
      {
        v48 = *v104;
        v46 |= 2u;
        if ( *v104 == -1 )
          v48 = 0LL;
        v111 = v48;
      }
      v49 = v102;
      v50 = v46 | 4;
      if ( v102 == -1 )
        v49 = 0LL;
      v112 = v49;
      v51 = v101;
      LODWORD(v110) = v50 | 8;
      if ( v101 == -1 )
        v51 = 0LL;
      v113 = v51;
      v52 = (*((__int64 (__fastcall **)(union _RM_SID *, _QWORD, wchar_t *, _QWORD, unsigned __int64, __int64 *))v42 + 1))(
              v40,
              v87,
              Source,
              v86,
              v94,
              &v110);
      if ( v52 >= 0 )
        v52 = 0;
    }
    else
    {
      v47 = v104;
      UserDataCount[0] = v86;
      v52 = v45(
              v42,
              Source,
              v40,
              v87,
              *(_QWORD *)UserDataCount,
              v94,
              (unsigned int *)v44,
              (unsigned __int64 *)v104,
              (unsigned __int64 *)&v102,
              (unsigned __int64 *)&v101,
              0LL,
              0LL);
    }
    if ( v52 >= 0 )
      goto LABEL_59;
    if ( !v44 || v52 != -1073741776 )
      break;
    if ( (unsigned int)++v93 > 2 )
      goto LABEL_145;
    v29 = v95;
    v24 = v100;
    v28 = CriticalSection;
    v27 = v94;
  }
  if ( v52 == -1073741637 || v52 == -1073741776 )
  {
LABEL_145:
    v83 = v47;
    v53 = (struct _RM_PSM_HOST_INFO *)Source;
    v52 = (*(__int64 (__fastcall **)(ModernResourceEnforcer *, wchar_t *, union _RM_SID *, _QWORD, unsigned int, unsigned __int64, _QWORD, __int64 *, __int64 *, __int64 *, _QWORD, _QWORD))(*(_QWORD *)v42 + 32LL))(
            v42,
            Source,
            v40,
            v87,
            v86,
            v94,
            0LL,
            v83,
            &v102,
            &v101,
            0LL,
            0LL);
  }
  else
  {
LABEL_59:
    v53 = (struct _RM_PSM_HOST_INFO *)Source;
  }
  if ( v52 < 0 )
  {
LABEL_142:
    v7 = v96;
    goto LABEL_75;
  }
  v54 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    v55 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v54) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *v55 |= 2uLL;
    ++v55[2];
  }
  v56 = v107;
  RtlAcquireSRWLockExclusive(v107);
  v57 = GetCurrentThreadId();
  v58 = HampLockTrackerId;
  *((_DWORD *)v56 + 2) = v57;
  *(_QWORD *)v4 = *(_QWORD *)a2;
  *((_QWORD *)v4 + 1) = *((_QWORD *)a2 + 1);
  *((_QWORD *)v4 + 2) = *((_QWORD *)a2 + 2);
  *((_DWORD *)v4 + 7) = *((_DWORD *)a2 + 7);
  v4[32] ^= (v4[32] ^ *((_BYTE *)a2 + 32)) & 1;
  if ( v58 != -1 )
  {
    v59 = TlsGetValue(v58);
    if ( (*(_BYTE *)v59 & 2) == 0 )
      __int2c();
    v15 = v59[2]-- == 1LL;
    if ( v15 )
      *v59 &= ~2uLL;
  }
  *((_DWORD *)v56 + 2) = 0;
  RtlReleaseSRWLockExclusive(v56);
  if ( *((_DWORD *)v4 + 6) != *((_DWORD *)a2 + 6) || (((unsigned __int8)v4[32] ^ *((_BYTE *)a2 + 32)) & 4) != 0 )
  {
    v7 = v96;
    v52 = RmpActivityHostApplyExecutionSpeed(v96, a2);
    if ( v52 < 0 )
      goto LABEL_75;
  }
  else
  {
    v7 = v96;
  }
  if ( (*((_BYTE *)v7 + 804) & 1) == 0 )
  {
    v77 = *((_QWORD *)a2 + 2);
    v78 = *((_QWORD *)v7 + 171);
    if ( *((_QWORD *)v7 + 168) < v77 )
      v77 = *((_QWORD *)v7 + 168);
    if ( v77 != v78
      && (int)ExecutionModel::ResourceManager::CommitMemoryLimitChange(
                *(ExecutionModel::ResourceManager **)(*((_QWORD *)v7 + 6) + 2232LL),
                v53,
                v78,
                v77) >= 0 )
    {
      *((_QWORD *)v7 + 171) = v77;
    }
  }
  v52 = 0;
LABEL_75:
  v89 = v52;
  if ( v52 >= 0 )
  {
    v60 = 0;
    v61 = (_QWORD *)((char *)v7 + 1008);
    while ( 1 )
    {
      if ( v60 == 1 )
      {
        v62 = 0LL;
        if ( (_QWORD *)*v61 != v61 )
          v62 = *v61 - 1416LL;
        if ( v62 )
          break;
      }
      ++v60;
      v61 += 3;
      if ( v60 >= 2 )
        goto LABEL_87;
    }
    v63 = *(_QWORD *)(v62 + 1416);
    v64 = *(int *)(v62 + 1448);
    v65 = *(_QWORD *)(v62 + 1440);
    v66 = 0LL;
    if ( v63 != v65 + 24 * (v64 + 42) )
      v66 = v63 - 1416;
    if ( !v66 )
    {
      v76 = v64 + 1;
      if ( v76 < 2 )
      {
        v80 = (_QWORD *)(v65 + 24 * (v76 + 42LL));
        do
        {
          if ( v76 == 1 )
          {
            v66 = 0LL;
            if ( (_QWORD *)*v80 != v80 )
              v66 = *v80 - 1416LL;
            if ( v66 )
              goto LABEL_84;
          }
          ++v76;
          v80 += 3;
        }
        while ( v76 < 2 );
      }
      v66 = 0LL;
    }
LABEL_84:
    while ( (*(_BYTE *)(v62 + 1498) & 7) != 4 )
    {
      v67 = 0LL;
      if ( v66 )
      {
        v72 = *(_QWORD *)(v66 + 1416);
        v73 = *(int *)(v66 + 1448);
        v74 = *(_QWORD *)(v66 + 1440);
        if ( v72 != v74 + 24 * (v73 + 42) )
          v67 = v72 - 1416;
        if ( !v67 )
        {
          v75 = v73 + 1;
          if ( v75 < 2 )
          {
            v81 = (_QWORD *)(v74 + 24 * (v75 + 42LL));
            while ( 1 )
            {
              if ( v75 == 1 )
              {
                v67 = 0LL;
                if ( (_QWORD *)*v81 != v81 )
                  v67 = *v81 - 1416LL;
                if ( v67 )
                  break;
              }
              ++v75;
              v81 += 3;
              if ( v75 >= 2 )
                goto LABEL_105;
            }
          }
          else
          {
LABEL_105:
            v67 = 0LL;
          }
        }
      }
      v62 = v66;
      v66 = v67;
      if ( !v62 )
        goto LABEL_87;
    }
    RmpResourceSetUpdateReceivedCommit(*(struct _RM_RESOURCE_SET **)(v62 + 1432), *((_QWORD *)a2 + 1));
LABEL_87:
    v52 = 0;
    v89 = 0;
  }
LABEL_88:
  if ( hProvider > 4u && (qword_1800920C0 & 9) != 0 && (qword_1800920C8 & 9) == qword_1800920C8 )
  {
    v127 = 4LL;
    v126 = &v89;
    v68 = &pwsz;
    LODWORD(v69) = 0;
    if ( v7 != (struct _RM_ACTIVITY_HOST *)-88LL )
    {
      v68 = (const WCHAR *)((char *)v7 + 88);
      v69 = -1LL;
      do
        ++v69;
      while ( *((_WORD *)v7 + v69 + 44) );
    }
    v128 = v68;
    v129 = 2 * v69 + 2;
    LOBYTE(v69) = *((_BYTE *)v7 + 553);
    v130 = 0;
    if ( (unsigned __int8)v69 > 0xFu )
      LODWORD(v69) = 15;
    else
      LODWORD(v69) = (unsigned __int8)v69;
    v131 = (char *)v7 + 552;
    v132 = 4 * v69 + 8;
    v97 = *((_DWORD *)v7 + 155);
    v134 = &v97;
    v98 = *((_DWORD *)v7 + 156);
    v136 = &v98;
    v108 = *((_QWORD *)v7 + 4);
    v138 = &v108;
    v99 = *((_DWORD *)v4 + 7);
    v140 = &v99;
    v142 = v4 + 16;
    v146 = v4 + 8;
    v84 = v4[24];
    v148 = &v84;
    v70 = (v4[32] & 4) != 0;
    v133 = 0;
    v85 = v70;
    v150 = &v85;
    v135 = 4LL;
    v137 = 4LL;
    v139 = 8LL;
    v141 = 4LL;
    v143 = 8LL;
    v144 = v4;
    v145 = 8LL;
    v147 = 8LL;
    v149 = 1LL;
    v151 = 1LL;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800920B8;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18007DA8A - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 9LL;
    UserData.Size = *(unsigned __int16 *)off_1800920B8;
    v123 = &unk_18007DA95;
    UserData.Reserved = 2;
    v124 = 231;
    v125 = 1;
    EventWriteTransfer(qword_1800920D0, &EventDescriptor, 0LL, 0LL, 0xEu, &UserData);
    return v89;
  }
  return (unsigned int)v52;
}
