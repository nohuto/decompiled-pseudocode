/*
 * XREFs of ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18001A400
 * Callers:
 *     <none>
 * Callees:
 *     ?HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x180004214 (-HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 *     ?HampActIsIgnored@@YAKPEAU_HAM_ACTIVITY@@@Z @ 0x180004E20 (-HampActIsIgnored@@YAKPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostIsTerminateQueued@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180006460 (-HampHostIsTerminateQueued@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800073E8 (-RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x1800087C8 (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x180009D04 (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@T_RM_OPTIMIZA.c)
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18000AC4C (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?HampPkgSnapshotDebugState@@YAEPEAU_HAM_PACKAGE@@@Z @ 0x18000BF04 (-HampPkgSnapshotDebugState@@YAEPEAU_HAM_PACKAGE@@@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800141C0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180014210 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800172C0 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001A390 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001B210 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001B2C0 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCanDelete@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18001B850 (-RmpActivityHostCanDelete@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x18001B8A0 (-HampActTryStart@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 *     ?RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z @ 0x1800229A4 (-RmpPartitionRelease@@YAXPEAU_RM_PARTITION@@@Z.c)
 *     ?RmpPolicyGetDesiredEmptyOptimizationsForHost@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180024CF0 (-RmpPolicyGetDesiredEmptyOptimizationsForHost@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU.c)
 *     ?HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18002A038 (-HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?RmpActivityHostIsRunnable@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18002DC44 (-RmpActivityHostIsRunnable@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostIsJobFrozen@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002DC64 (-RmpActivityHostIsJobFrozen@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostGetResourceSetCount@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18002DCD4 (-RmpActivityHostGetResourceSetCount@@YAKPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpPolicyIsHostCommitSaveEligible@@YAKPEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18002DE24 (-RmpPolicyIsHostCommitSaveEligible@@YAKPEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpPolicyComputeDesiredEmptyState@@YA?AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVITY_HOST@@W4_RM_EMPTY_POLICY@@@Z @ 0x18002DEA8 (-RmpPolicyComputeDesiredEmptyState@@YA-AT_RM_OPTIMIZATION_STATE@@PEAU_RM_POLICY@@PEAU_RM_ACTIVIT.c)
 *     ?RmpPolicyIsActivityHostSwappable@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002E1AC (-RmpPolicyIsActivityHostSwappable@@YAEPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCleanup@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003217C (-HampHostCleanup@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpEmptyWorkerCleanup@@YAXPEAU_RM_EMPTY_WORKER_CONTEXT@@@Z @ 0x18003222C (-RmpEmptyWorkerCleanup@@YAXPEAU_RM_EMPTY_WORKER_CONTEXT@@@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180041D1C (memset_0.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x180041DDC (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 *     ?RmpResourceSetCleanup@@YAXPEAU_RM_RESOURCE_SET@@@Z @ 0x1800527F0 (-RmpResourceSetCleanup@@YAXPEAU_RM_RESOURCE_SET@@@Z.c)
 *     ?RmpActivityHostRemoveFromRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x1800548F8 (-RmpActivityHostRemoveFromRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z.c)
 *     ?HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180064AB8 (-HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall RmHamHostStateWorker(struct _TP_CALLBACK_INSTANCE *a1, char *a2, struct _TP_WORK *a3)
{
  DWORD v4; // ebx
  __int64 v5; // r14
  int v6; // r15d
  DWORD v7; // esi
  _QWORD *Value; // rbx
  DWORD CurrentThreadId; // eax
  DWORD v10; // esi
  _QWORD *v11; // rbx
  char *v12; // rbx
  char *v13; // rcx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  char v17; // cl
  unsigned __int64 v18; // r8
  char v19; // dl
  struct _HAM_ACTIVITY *FirstActivity; // rcx
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // r13
  DWORD v24; // esi
  _QWORD *v25; // rbx
  __int64 v26; // rcx
  BOOL v27; // esi
  BOOL v28; // r14d
  unsigned int v29; // ebx
  bool v30; // al
  unsigned __int64 v31; // r9
  unsigned int v32; // edx
  int v33; // r8d
  _QWORD *v34; // rax
  bool v35; // zf
  int v36; // eax
  int v37; // esi
  unsigned int IsJobFrozen; // eax
  __int64 v39; // r14
  int v40; // eax
  int v41; // ecx
  char v42; // r11
  int v43; // edx
  char *v44; // rbx
  char *v45; // rcx
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  DWORD v49; // ecx
  _QWORD *v50; // rax
  __int64 v51; // rcx
  int v52; // eax
  int v53; // ecx
  _QWORD *v54; // rax
  signed __int64 v55; // rax
  bool v56; // cc
  signed __int64 v57; // rax
  DWORD v58; // r14d
  unsigned __int64 v59; // rbx
  __int64 v60; // r15
  _QWORD *v61; // rsi
  __int64 v62; // rsi
  _QWORD *v63; // rax
  int v64; // ecx
  int v65; // ecx
  struct _RM_PARTITION *v66; // rcx
  DWORD v67; // ebx
  int v68; // [rsp+30h] [rbp-D0h]
  __int64 v69; // [rsp+38h] [rbp-C8h]
  int v70; // [rsp+40h] [rbp-C0h] BYREF
  int v71; // [rsp+44h] [rbp-BCh] BYREF
  int v72; // [rsp+48h] [rbp-B8h] BYREF
  int v73; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned int v74; // [rsp+50h] [rbp-B0h] BYREF
  char v75[4]; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v76; // [rsp+58h] [rbp-A8h] BYREF
  int v77; // [rsp+5Ch] [rbp-A4h] BYREF
  int v78; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v79; // [rsp+68h] [rbp-98h] BYREF
  __int64 v80; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+78h] [rbp-88h] BYREF
  EVENT_DESCRIPTOR v82; // [rsp+88h] [rbp-78h] BYREF
  EVENT_DESCRIPTOR v83; // [rsp+98h] [rbp-68h] BYREF
  _BYTE TlsValue[144]; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+140h] [rbp+40h] BYREF
  void *v86; // [rsp+150h] [rbp+50h]
  int v87; // [rsp+158h] [rbp+58h]
  int v88; // [rsp+15Ch] [rbp+5Ch]
  __int64 *v89; // [rsp+160h] [rbp+60h]
  __int64 v90; // [rsp+168h] [rbp+68h]
  int *v91; // [rsp+170h] [rbp+70h]
  __int64 v92; // [rsp+178h] [rbp+78h]
  struct _EVENT_DATA_DESCRIPTOR v93; // [rsp+180h] [rbp+80h] BYREF
  void *v94; // [rsp+190h] [rbp+90h]
  int v95; // [rsp+198h] [rbp+98h]
  int v96; // [rsp+19Ch] [rbp+9Ch]
  __int64 *v97; // [rsp+1A0h] [rbp+A0h]
  __int64 v98; // [rsp+1A8h] [rbp+A8h]
  unsigned int *v99; // [rsp+1B0h] [rbp+B0h]
  __int64 v100; // [rsp+1B8h] [rbp+B8h]
  struct _EVENT_DATA_DESCRIPTOR v101; // [rsp+1C0h] [rbp+C0h] BYREF
  void *v102; // [rsp+1D0h] [rbp+D0h]
  int v103; // [rsp+1D8h] [rbp+D8h]
  int v104; // [rsp+1DCh] [rbp+DCh]
  __int64 *v105; // [rsp+1E0h] [rbp+E0h]
  __int64 v106; // [rsp+1E8h] [rbp+E8h]
  int *v107; // [rsp+1F0h] [rbp+F0h]
  __int64 v108; // [rsp+1F8h] [rbp+F8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+200h] [rbp+100h] BYREF
  char *v110; // [rsp+220h] [rbp+120h]
  __int64 v111; // [rsp+228h] [rbp+128h]
  int *v112; // [rsp+230h] [rbp+130h]
  __int64 v113; // [rsp+238h] [rbp+138h]
  EVENT_DATA_DESCRIPTOR v114; // [rsp+240h] [rbp+140h] BYREF
  char *v115; // [rsp+260h] [rbp+160h]
  __int64 v116; // [rsp+268h] [rbp+168h]
  int *v117; // [rsp+270h] [rbp+170h]
  __int64 v118; // [rsp+278h] [rbp+178h]

  memset_0(TlsValue, 0, 0x88uLL);
  v4 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v4, TlsValue);
  }
  v5 = *((_QWORD *)a2 + 6);
  v6 = 0;
  v69 = v5;
  v79 = *((_QWORD *)a2 + 4);
  if ( _volatile_metadata > 4u )
  {
    v90 = 8LL;
    v89 = &v79;
    v72 = *((_DWORD *)a2 + 289);
    v91 = &v72;
    v92 = 4LL;
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800920F8;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18007EB2E - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)off_1800920F8;
    v86 = &unk_18007EB39;
    UserData.Reserved = 2;
    v87 = 42;
    v88 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  v7 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( *(_QWORD *)TlsGetValue(v7) )
      __int2c();
    *Value |= 1uLL;
    ++Value[1];
  }
  RtlAcquireSRWLockExclusive(&RmpGlobalLock);
  CurrentThreadId = GetCurrentThreadId();
  v10 = HampLockTrackerId;
  dword_1800937F8 = CurrentThreadId;
  if ( HampLockTrackerId != -1 )
  {
    v11 = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v10) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *v11 |= 2uLL;
    ++v11[2];
  }
  RtlAcquireSRWLockExclusive(a2 + 64);
  *((_DWORD *)a2 + 18) = GetCurrentThreadId();
  *((_DWORD *)a2 + 172) = GetCurrentThreadId();
  while ( *((int *)a2 + 6) >= 0 )
  {
    v12 = 0LL;
    v13 = (char *)*((_QWORD *)a2 + 81);
    if ( v13 != a2 + 648 )
      v12 = v13 - 96;
    while ( v12 )
    {
      if ( v12[540] == 2 )
      {
        if ( v12[541] )
        {
          v14 = HampActTryStart(v12);
          if ( v14 )
          {
            if ( _volatile_metadata > 5u )
            {
              v73 = v14;
              v110 = v12 + 40;
              v112 = &v73;
              v111 = 8LL;
              v113 = 4LL;
              TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_1800829E5, 0LL, 0LL, 4u, &pData);
            }
          }
        }
      }
      v15 = *((_QWORD *)v12 + 12);
      v16 = *((_QWORD *)v12 + 10);
      v12 = 0LL;
      if ( v15 != v16 + 584 )
        v12 = (char *)(v15 - 96);
    }
    RmHamHostGetCurrentState(
      (struct _RM_HAM_ACTIVITY_HOST *)(a2 + 64),
      (union _RM_OPTIMIZATION_STATE *)&v70,
      (union _RM_OPTIMIZATION_STATE *)&v71);
    v17 = v70 & 0x80;
    v18 = *((_QWORD *)a2 + 87);
    v19 = v71 & 0x80;
    v70 &= 0x180u;
    v71 &= 0x180u;
    switch ( (v18 >> 16) & 3 )
    {
      case 0uLL:
        goto LABEL_32;
      case 1uLL:
        if ( v17 >= 0 || v19 < 0 || (v18 & 0x8000000000LL) != 0 )
          goto LABEL_32;
        FirstActivity = HampHostGetFirstActivity((struct _RM_HAM_ACTIVITY_HOST *)(a2 + 64));
        if ( FirstActivity )
        {
          while ( HampActIsIgnored(FirstActivity)
               || !HampActIsStartedOrReachedPendState(v21, 4u)
               || (*(_BYTE *)(v21 + 112) & 0x10) == 0 )
          {
            FirstActivity = HampHostGetNextActivity((struct _HAM_ACTIVITY *)v21);
            if ( !FirstActivity )
              goto LABEL_44;
          }
          goto LABEL_32;
        }
        goto LABEL_44;
      case 2uLL:
        if ( (v18 & 0x800000000000LL) != 0 )
          goto LABEL_32;
LABEL_44:
        if ( (v18 & 0x200000000LL) == 0 )
        {
          *((_QWORD *)a2 + 87) = v18 | 0x200000000LL;
          if ( _InterlockedIncrement64((volatile signed __int64 *)a2 + 2) <= 1 )
            __fastfail(0xEu);
          TpPostWork(*((_QWORD *)a2 + 84));
          v18 = *((_QWORD *)a2 + 87);
        }
        if ( (v18 & 0x30000) != 0 )
        {
          do
          {
            v80 = *((_QWORD *)a2 + 104);
            HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)(a2 + 64));
            RmpReleaseGlobalLock();
            RtlWaitOnAddress(a2 + 832, &v80, 8LL, 0LL);
            RmpAcquireGlobalLock();
            HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)(a2 + 64), 0);
          }
          while ( (*((_DWORD *)a2 + 174) & 0x30000) != 0 );
        }
        break;
      case 3uLL:
        goto LABEL_44;
      default:
LABEL_32:
        if ( (v18 & 0x800000000000LL) != 0 )
        {
          HampHostCollectErrorReport((struct _RM_HAM_ACTIVITY_HOST *)(a2 + 64));
        }
        else
        {
          v22 = *((_DWORD *)a2 + 201);
          if ( (v22 & 1) != 0 )
          {
            v68 = HampHostCheckUpdateEnforcementSettings((struct _RM_HAM_ACTIVITY_HOST *)(a2 + 64));
            v22 = *((_DWORD *)a2 + 201);
          }
          else
          {
            v68 = 0;
          }
          if ( (v22 & 1) != 0 )
          {
            v23 = *((_QWORD *)a2 + 91);
            if ( v23 )
            {
              v24 = HampLockTrackerId;
              if ( HampLockTrackerId != -1 )
              {
                v25 = TlsGetValue(HampLockTrackerId);
                if ( (*(_QWORD *)TlsGetValue(v24) & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
                  __int2c();
                *v25 |= 8uLL;
                ++v25[4];
              }
              RtlAcquireSRWLockExclusive(v23 + 8);
              *(_DWORD *)(v23 + 16) = GetCurrentThreadId();
              v26 = *((_QWORD *)a2 + 91);
              v6 = 1;
              v27 = *(_QWORD *)(v26 + 104) < *((_QWORD *)a2 + 83);
              v28 = *(_DWORD *)(v26 + 92) != 0;
            }
            else
            {
              v27 = 0;
              v28 = 0;
            }
            v29 = 0;
            if ( (a2[804] & 1) != 0 )
            {
              RmHamHostGetCurrentState(
                (struct _RM_HAM_ACTIVITY_HOST *)(a2 + 64),
                (union _RM_OPTIMIZATION_STATE *)&v74,
                (union _RM_OPTIMIZATION_STATE *)v75);
              v30 = HampPkgSnapshotDebugState(*(struct _HAM_PACKAGE **)(*((_QWORD *)a2 + 101) + 88LL));
              v31 = *((_QWORD *)a2 + 87);
              v32 = v74;
              if ( !v30
                || (v31 & 0x1000000000000LL) != 0
                || HampHostIsTerminateQueued((struct _RM_HAM_ACTIVITY_HOST *)(a2 + 64))
                || !v33 )
              {
                if ( v27 )
                {
                  v29 = v32 & 0x188;
                }
                else if ( (v31 & 0x2000000000LL) != 0 )
                {
                  if ( v28 )
                    v29 = v32;
                }
                else
                {
                  v29 = ~(unsigned __int8)(v31 >> 37) & 8 | 0x180;
                }
              }
            }
            if ( v6 )
            {
              v6 = 0;
              *(_DWORD *)(v23 + 16) = 0;
              RtlReleaseSRWLockExclusive(v23 + 8);
              if ( HampLockTrackerId != -1 )
              {
                v34 = TlsGetValue(HampLockTrackerId);
                if ( (*(_BYTE *)v34 & 8) == 0 )
                  __int2c();
                v35 = v34[4]-- == 1LL;
                if ( v35 )
                {
                  *v34 &= ~8uLL;
                  v35 = *((_QWORD *)a2 + 80) == 0LL;
                  goto LABEL_82;
                }
              }
            }
            else
            {
              v6 = 0;
            }
            v35 = *((_QWORD *)a2 + 80) == 0LL;
          }
          else
          {
            v29 = 0;
            v35 = RmpActivityHostGetResourceSetCount((struct _RM_ACTIVITY_HOST *)a2, 3u) == 0;
          }
LABEL_82:
          if ( v35 )
            goto LABEL_98;
          v36 = *((_DWORD *)a2 + 156);
          if ( v36 != 2 )
          {
            if ( v36 == 4 )
            {
              if ( (a2[1152] & 2) != 0 )
                v29 |= 0x40u;
            }
            else if ( v36 != 8 )
            {
              goto LABEL_98;
            }
          }
          if ( (*((_DWORD *)a2 + 201) & 1) != 0 )
          {
            v37 = (v29 >> 3) & 1;
            if ( v37 )
              goto LABEL_94;
          }
          else
          {
            IsJobFrozen = RmpActivityHostIsJobFrozen((struct _RM_ACTIVITY_HOST *)a2);
            if ( !RmpActivityHostIsRunnable((struct _RM_ACTIVITY_HOST *)a2, IsJobFrozen) )
            {
              v37 = 1;
LABEL_94:
              v39 = *((_QWORD *)a2 + 6) + 424LL;
              v40 = RmpPolicyComputeDesiredEmptyState(v39, a2, 0LL);
              v41 = v29 | 8;
              if ( (v42 & 1) != 0 )
                v41 = v29;
              v29 = RmpPolicyGetDesiredEmptyOptimizationsForHost(v39, a2) | v40 | v41;
              if ( RmpPolicyIsHostCommitSaveEligible((struct _RM_POLICY *)v39, (struct _RM_ACTIVITY_HOST *)a2, v37 ^ 1) )
                v29 ^= ((unsigned __int8)v29 ^ (unsigned __int8)(8 * *(_DWORD *)(v39 + 108))) & 0x10;
            }
          }
LABEL_98:
          if ( (v29 & 8) != 0
            && (a2[1156] & 8) == 0
            && (a2[1152] & 0x20) == 0
            && !RmpPolicyIsActivityHostSwappable((struct _RM_ACTIVITY_HOST *)a2) )
          {
            *((_DWORD *)a2 + 288) |= 0x20u;
          }
          v43 = *((_DWORD *)a2 + 289);
          if ( v43 == v29 )
          {
            if ( !v68 || RmpActivityHostCanDelete((struct _RM_ACTIVITY_HOST *)a2) )
            {
              v5 = v69;
              goto LABEL_107;
            }
LABEL_164:
            v5 = v69;
          }
          else
          {
            if ( _volatile_metadata > 4u )
            {
              v98 = 8LL;
              v97 = &v79;
              v99 = &v76;
              v76 = v29;
              v100 = 4LL;
              *(_DWORD *)&v82.Level = 4;
              v93.Ptr = (ULONGLONG)off_1800920F8;
              *(_DWORD *)&v82.Id = ((unsigned int)&unk_18007EBD2 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
              v82.Keyword = 0LL;
              v93.Size = *(unsigned __int16 *)off_1800920F8;
              v94 = &unk_18007EBDD;
              v93.Reserved = 2;
              v95 = 51;
              v96 = 1;
              EventWriteTransfer(RegHandle, &v82, 0LL, 0LL, 4u, &v93);
              v43 = *((_DWORD *)a2 + 289);
            }
            if ( (v43 & v29) == v29 )
            {
              v5 = v69;
              RmpEnforcementUnoptimizeHost((__int64)a2, v69 + 40, v43 & ~(_BYTE)v29);
            }
            else
            {
              RmpEnforcementOptimizeHost((__int64)a2, v29 & ~v43);
              v5 = v69;
            }
            RtlWakeAllConditionVariable(a2 + 1136);
            if ( (a2[804] & 1) != 0 )
            {
              v58 = HampLockTrackerId;
              v59 = (*(_QWORD *)((*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 101) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                            - 8) & 0xFFFFFFFFFFFFFFFCuLL)
                               - 8) & 0xFFFFFFFFFFFFFFFCuLL)
                  + 184;
              v60 = *(_QWORD *)v59;
              if ( HampLockTrackerId != -1 )
              {
                v61 = TlsGetValue(HampLockTrackerId);
                if ( (*(_QWORD *)TlsGetValue(v58) & 0xFFFFFFFFFFFFFC00uLL) != 0 )
                  __int2c();
                *v61 |= 0x400uLL;
                ++v61[11];
              }
              RtlAcquireSRWLockExclusive(v60);
              *(_DWORD *)(v60 + 8) = GetCurrentThreadId();
              v62 = *(_QWORD *)v59;
              if ( !*(_DWORD *)(v59 + 44) )
              {
                if ( HampLockTrackerId != -1 )
                {
                  v63 = TlsGetValue(HampLockTrackerId);
                  if ( (*(_DWORD *)v63 & 0x400LL) == 0 )
                    __int2c();
                  v35 = v63[11]-- == 1LL;
                  if ( v35 )
                    *v63 &= ~0x400uLL;
                }
                v6 = 0;
                *(_DWORD *)(v62 + 8) = 0;
                RtlReleaseSRWLockExclusive(v62);
                goto LABEL_164;
              }
              ++*(_QWORD *)(v59 + 48);
              HampManagerReleaseLockExclusive((struct _HOST_ACTIVITY_MANAGER *)v62);
              RtlWakeAddressAll(v59 + 48);
              v5 = v69;
              v6 = 0;
            }
          }
        }
        break;
    }
  }
LABEL_107:
  v44 = 0LL;
  v45 = (char *)*((_QWORD *)a2 + 81);
  if ( v45 != a2 + 648 )
    v44 = v45 - 96;
  while ( v44 )
  {
    if ( v44[540] == 2 )
    {
      if ( v44[541] )
      {
        v46 = HampActTryStart(v44);
        if ( v46 )
        {
          if ( _volatile_metadata > 5u )
          {
            v77 = v46;
            v115 = v44 + 40;
            v117 = &v77;
            v116 = 8LL;
            v118 = 4LL;
            TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_1800829E5, 0LL, 0LL, 4u, &v114);
          }
        }
      }
    }
    v47 = *((_QWORD *)v44 + 12);
    v48 = *((_QWORD *)v44 + 10);
    v44 = 0LL;
    if ( v47 != v48 + 584 )
      v44 = (char *)(v47 - 96);
  }
  v49 = HampLockTrackerId;
  *((_QWORD *)a2 + 87) &= ~0x100000000uLL;
  *((_DWORD *)a2 + 172) = 0;
  if ( v49 != -1 )
  {
    v50 = TlsGetValue(v49);
    if ( (*(_BYTE *)v50 & 2) == 0 )
      __int2c();
    v35 = v50[2]-- == 1LL;
    if ( v35 )
      *v50 &= ~2uLL;
  }
  *((_DWORD *)a2 + 18) = 0;
  RtlReleaseSRWLockExclusive(a2 + 64);
  v35 = *((_QWORD *)a2 + 178) == 0LL;
  *((_DWORD *)a2 + 368) = 0;
  if ( !v35 )
    RmpActivityHostRemoveFromRemediationGroup(a2, 1u);
  v51 = *(_QWORD *)(v5 + 2232);
  v52 = *(_DWORD *)(v51 + 184);
  if ( (v52 & 3) == 0 )
  {
    *(_DWORD *)(v51 + 184) = v52 | 1;
    TpPostWork(*(_QWORD *)(v51 + 168));
  }
  if ( *((int *)a2 + 6) >= 0 )
  {
    v53 = *((_DWORD *)a2 + 256);
    if ( (__ROL4__(1, 1) & 3) != 0 )
      v53 += *((_DWORD *)a2 + 262);
    if ( !v53 && !*((_QWORD *)a2 + 80) && (a2[1476] & 1) == 0 )
      RmpActivityHostDelete((struct _RM_PARTITION **)a2);
  }
  if ( _volatile_metadata > 4u && (byte_180092100 & 8) != 0 && (qword_180092108 & 8) == qword_180092108 )
  {
    v106 = 8LL;
    v105 = &v79;
    v78 = *((_DWORD *)a2 + 289);
    v107 = &v78;
    v108 = 4LL;
    *(_DWORD *)&v83.Level = 516;
    v101.Ptr = (ULONGLONG)off_1800920F8;
    *(_DWORD *)&v83.Id = ((unsigned int)&unk_18007ECD5 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v83.Keyword = 8LL;
    v101.Size = *(unsigned __int16 *)off_1800920F8;
    v102 = &unk_18007ECE0;
    v101.Reserved = 2;
    v103 = 42;
    v104 = 1;
    EventWriteTransfer(RegHandle, &v83, 0LL, 0LL, 4u, &v101);
  }
  dword_1800937F8 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v54 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v54 & 1) == 0 )
      __int2c();
    v35 = v54[1]-- == 1LL;
    if ( v35 )
      *v54 &= ~1uLL;
  }
  RtlWakeAllConditionVariable(a2 + 1136);
  v55 = _InterlockedExchangeAdd64((volatile signed __int64 *)a2 + 2, 0xFFFFFFFFFFFFFFFFuLL);
  v56 = v55 <= 1;
  v57 = v55 - 1;
  if ( v56 )
  {
    if ( v57 )
      __fastfail(0xEu);
    v64 = *((_DWORD *)a2 + 10);
    if ( v64 )
    {
      v65 = v64 - 1;
      if ( v65 )
      {
        if ( v65 == 1 && !*((_DWORD *)a2 + 24) && !*((_DWORD *)a2 + 25) )
          NtDeleteWnfStateName(a2 + 96);
      }
      else
      {
        RmpResourceSetCleanup((struct _RM_RESOURCE_SET *)a2);
      }
    }
    else
    {
      RmpEmptyWorkerCleanup((struct _RM_EMPTY_WORKER_CONTEXT *)(a2 + 1224));
      v66 = (struct _RM_PARTITION *)*((_QWORD *)a2 + 7);
      if ( v66 )
        RmpPartitionRelease(v66);
      HampHostCleanup((struct _RM_HAM_ACTIVITY_HOST *)(a2 + 64));
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a2);
  }
  v67 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v67, 0LL);
  }
}
