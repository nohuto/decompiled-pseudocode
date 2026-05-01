/*
 * XREFs of ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800165D0
 * Callers:
 *     ?HampHostQueueTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@@Z @ 0x180006920 (-HampHostQueueTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800072D8 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800124B0 (-RmpActivityHostCommitUseUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180012AF0 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?ProcessWorkItem@ModernResourceEnforcer@@IEAAXPEAUModernResourceEnforcerWorkItem@1@@Z @ 0x180014FA0 (-ProcessWorkItem@ModernResourceEnforcer@@IEAAXPEAUModernResourceEnforcerWorkItem@1@@Z.c)
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@@Z @ 0x18001B320 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 *     ?MemoryLimitNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K@Z @ 0x18001C730 (-MemoryLimitNotification@ResourceManager@ExecutionModel@@UEAAJPEBGPEAT_RM_SID@@KK_K@Z.c)
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAVResourceSet@2@6PEAPEAV82@@Z @ 0x18001DAC0 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITIO.c)
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x180020220 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     ?HampActNotifyResourcesAcquired@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x180023100 (-HampActNotifyResourcesAcquired@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 *     ?RmHamHostUpdateSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180023E40 (-RmHamHostUpdateSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z @ 0x180023FF0 (-HampActUpdateProperties@@YAJPEAU_HAM_ACTIVITY@@PEAU_HAM_ACTIVITY_DYNAMIC_PROPERTIES@@@Z.c)
 *     ?HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x180029E5C (-HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002DAA0 (-RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostDelayedEnforcementTimerCallback@@YAXPEAX0@Z @ 0x180032470 (-HampHostDelayedEnforcementTimerCallback@@YAXPEAX0@Z.c)
 *     ?RmpQoSDisableForHostOnTimerExpiry@@YAXPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18005EF30 (-RmpQoSDisableForHostOnTimerExpiry@@YAXPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostDebugQueueSuspend@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180064F50 (-HampHostDebugQueueSuspend@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampHostTryEnterConnectedStandby@@YA?AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800656FC (-HampHostTryEnterConnectedStandby@@YA-AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostTrySetPpleCommitTarget@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x180065930 (-HampHostTrySetPpleCommitTarget@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 *     ?HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z @ 0x180066BB8 (-HampDepGroupDereferenceMembers@@YAXPEAU_HAM_DEPENDENCY_WORKER_CONTEXT@@@Z.c)
 * Callees:
 *     ?HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z @ 0x180004214 (-HampActIsStartedOrReachedPendState@@YAKPEAU_HAM_ACTIVITY@@W4_HAM_PEND_STATE@@@Z.c)
 *     ?HampActIsIgnored@@YAKPEAU_HAM_ACTIVITY@@@Z @ 0x180004E20 (-HampActIsIgnored@@YAKPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostIsTerminateQueued@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180006460 (-HampHostIsTerminateQueued@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x1800087C8 (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     ?HampPkgSnapshotDebugState@@YAEPEAU_HAM_PACKAGE@@@Z @ 0x18000BF04 (-HampPkgSnapshotDebugState@@YAEPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@PEAU_RM_COMMIT_THRESHOLDS@@2PEAPEAU_HAM_ACTIVITY@@@Z @ 0x180019AC0 (-HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SET.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001A390 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x180041D10 (memcmp_0.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x180041DDC (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 *     ?RmHamEnforcementEmptySignalAbort@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18005C07C (-RmHamEnforcementEmptySignalAbort@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall HampHostCheckQueueStateWorker(struct _RM_HAM_ACTIVITY_HOST *a1, int a2)
{
  unsigned int v3; // r15d
  int v4; // edi
  __int64 v5; // rdx
  __int64 v7; // rsi
  DWORD v8; // edi
  _QWORD *Value; // rbx
  __int64 v10; // rcx
  BOOL v11; // ebx
  BOOL v12; // edi
  int v13; // r12d
  bool v14; // al
  int v15; // edx
  int v16; // r8d
  unsigned __int64 v17; // rax
  _QWORD *v18; // rax
  int v20; // edi
  int v21; // ebx
  char v22; // cl
  unsigned __int64 v23; // r8
  char v24; // dl
  __int128 v25; // xmm1
  unsigned __int64 v26; // rcx
  __int128 v27; // xmm1
  struct _HAM_ACTIVITY *FirstActivity; // rcx
  __int64 v29; // rcx
  int v30; // ebx
  int v31; // [rsp+30h] [rbp-D0h]
  int v32; // [rsp+34h] [rbp-CCh] BYREF
  int v33; // [rsp+38h] [rbp-C8h]
  int v34; // [rsp+3Ch] [rbp-C4h] BYREF
  int v35; // [rsp+40h] [rbp-C0h] BYREF
  int v36; // [rsp+44h] [rbp-BCh] BYREF
  int v37; // [rsp+48h] [rbp-B8h] BYREF
  char v38[4]; // [rsp+4Ch] [rbp-B4h] BYREF
  int v39; // [rsp+50h] [rbp-B0h]
  struct _HAM_ACTIVITY *v40; // [rsp+58h] [rbp-A8h] BYREF
  struct _HAM_ACTIVITY *v41; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v42[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v43; // [rsp+88h] [rbp-78h]
  _OWORD v44[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v45; // [rsp+B0h] [rbp-50h]
  char v46[16]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v47; // [rsp+C8h] [rbp-38h]
  __int64 v48; // [rsp+D0h] [rbp-30h]
  char v49[16]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v50; // [rsp+E8h] [rbp-18h]
  __int64 v51; // [rsp+F0h] [rbp-10h]
  _OWORD Buf2[2]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v53; // [rsp+118h] [rbp+18h]
  _OWORD Buf1[2]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v55; // [rsp+140h] [rbp+40h]
  _OWORD v56[2]; // [rsp+148h] [rbp+48h] BYREF
  __int64 v57; // [rsp+168h] [rbp+68h]
  _OWORD v58[2]; // [rsp+170h] [rbp+70h] BYREF
  __int64 v59; // [rsp+190h] [rbp+90h]
  _BYTE v60[32]; // [rsp+198h] [rbp+98h] BYREF
  _BYTE v61[32]; // [rsp+1B8h] [rbp+B8h] BYREF

  v39 = a2;
  v31 = a2 & 1;
  if ( (*((_BYTE *)a1 + 740) & 1) == 0 )
  {
    v3 = 0;
LABEL_3:
    v4 = v31;
    goto LABEL_4;
  }
  v7 = *((_QWORD *)a1 + 83);
  if ( v7 )
  {
    v8 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v8) & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
        __int2c();
      *Value |= 8uLL;
      ++Value[4];
    }
    RtlAcquireSRWLockExclusive(v7 + 8);
    v32 = 1;
    *(_DWORD *)(v7 + 16) = GetCurrentThreadId();
    v10 = *((_QWORD *)a1 + 83);
    v11 = *(_QWORD *)(v10 + 104) < *((_QWORD *)a1 + 75);
    v12 = *(_DWORD *)(v10 + 92) != 0;
  }
  else
  {
    v11 = 0;
    v32 = 0;
    v12 = 0;
  }
  v13 = 0;
  if ( (*((_BYTE *)a1 + 740) & 1) != 0 )
  {
    RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v37, (union _RM_OPTIMIZATION_STATE *)v38);
    v14 = HampPkgSnapshotDebugState(*(struct _HAM_PACKAGE **)(*((_QWORD *)a1 + 93) + 88LL));
    v15 = v37;
    if ( !v14 || (*((_BYTE *)a1 + 638) & 1) != 0 || HampHostIsTerminateQueued(a1) || !v16 )
    {
      if ( v11 )
      {
        v13 = v15 & 0x188;
      }
      else
      {
        v17 = *((_QWORD *)a1 + 79);
        if ( (v17 & 0x2000000000LL) != 0 )
        {
          if ( v12 )
            v13 = v15;
        }
        else
        {
          v13 = ~(unsigned __int8)(v17 >> 37) & 8 | 0x180;
        }
      }
    }
  }
  if ( v32 )
  {
    *(_DWORD *)(v7 + 16) = 0;
    RtlReleaseSRWLockExclusive(v7 + 8);
    if ( HampLockTrackerId != -1 )
    {
      v18 = TlsGetValue(HampLockTrackerId);
      if ( (*(_BYTE *)v18 & 8) == 0 )
        __int2c();
      if ( v18[4]-- == 1LL )
        *v18 &= ~8uLL;
    }
  }
  RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v35, (union _RM_OPTIMIZATION_STATE *)&v36);
  v20 = v35 & 0x180;
  v21 = v36 & 0x180;
  if ( v13 != v35 )
    goto LABEL_49;
  RmHamHostGetCurrentState(a1, (union _RM_OPTIMIZATION_STATE *)&v32, (union _RM_OPTIMIZATION_STATE *)&v34);
  v22 = v32 & 0x80;
  v23 = *((_QWORD *)a1 + 79);
  v24 = v34 & 0x80;
  v32 &= 0x180u;
  v34 &= 0x180u;
  if ( ((v23 >> 16) & 3) != 0 )
  {
    if ( ((v23 >> 16) & 3) != 1 )
    {
      if ( ((v23 >> 16) & 3) == 2 )
      {
        if ( ((v23 >> 47) & 1) != 0 )
          goto LABEL_39;
      }
      else if ( ((v23 >> 16) & 3) != 3 )
      {
        goto LABEL_39;
      }
LABEL_49:
      v31 = 1;
      goto LABEL_50;
    }
    if ( v22 < 0 && v24 >= 0 && (v23 & 0x8000000000LL) == 0 )
    {
      FirstActivity = HampHostGetFirstActivity(a1);
      if ( !FirstActivity )
        goto LABEL_49;
      while ( HampActIsIgnored(FirstActivity)
           || !HampActIsStartedOrReachedPendState(v29, 4u)
           || (*(_BYTE *)(v29 + 112) & 0x10) == 0 )
      {
        FirstActivity = HampHostGetNextActivity((struct _HAM_ACTIVITY *)v29);
        if ( !FirstActivity )
          goto LABEL_49;
      }
    }
  }
LABEL_39:
  if ( (v23 & 0x800000000000LL) != 0 )
    goto LABEL_49;
  if ( (v23 & 0x4000000000000LL) != 0 )
    goto LABEL_49;
  if ( (v23 & 0x2000000000000LL) != 0 )
    goto LABEL_49;
  HampHostComputeStaticEnforcementSettings(
    a1,
    (struct _RM_ENFORCEMENT_SETTINGS *)v42,
    (struct _RM_COMMIT_THRESHOLDS *)v60,
    (struct _RM_COMMIT_THRESHOLDS *)v46,
    &v40);
  if ( *((struct _HAM_ACTIVITY **)a1 + 116) != v40 )
    goto LABEL_49;
  v25 = *(_OWORD *)((char *)a1 + 1016);
  Buf1[0] = *((unsigned __int64 *)a1 + 125);
  v55 = *((_QWORD *)a1 + 129);
  *(_QWORD *)&Buf1[0] = 0LL;
  Buf1[1] = v25;
  v53 = v43;
  Buf2[1] = v42[1];
  Buf2[0] = 0uLL;
  if ( memcmp_0(Buf1, Buf2, 0x28uLL)
    || v48 != *((_QWORD *)a1 + 101)
    || v47 != *((_QWORD *)a1 + 102)
    || memcmp_0(v60, (char *)a1 + 824, 0x20uLL) )
  {
    goto LABEL_49;
  }
LABEL_50:
  v26 = *((_QWORD *)a1 + 79);
  if ( (v26 & 0x800000000000LL) == 0 || ((v26 >> 29) & 7) == 0 || (v33 = 1, (unsigned int)v26 >> 29 == 5LL) )
    v33 = 0;
  if ( (v26 & 0x4000000000000LL) != 0 )
    goto LABEL_85;
  if ( (v26 & 0x2000000000000LL) != 0 )
    goto LABEL_85;
  HampHostComputeStaticEnforcementSettings(
    a1,
    (struct _RM_ENFORCEMENT_SETTINGS *)v44,
    (struct _RM_COMMIT_THRESHOLDS *)v61,
    (struct _RM_COMMIT_THRESHOLDS *)v49,
    &v41);
  if ( *((struct _HAM_ACTIVITY **)a1 + 116) != v41 )
    goto LABEL_85;
  v27 = *(_OWORD *)((char *)a1 + 1016);
  v58[0] = *((unsigned __int64 *)a1 + 125);
  v59 = *((_QWORD *)a1 + 129);
  *(_QWORD *)&v58[0] = 0LL;
  v58[1] = v27;
  v57 = v45;
  v56[1] = v44[1];
  v56[0] = 0uLL;
  if ( memcmp_0(v58, v56, 0x28uLL)
    || v51 != *((_QWORD *)a1 + 101)
    || v50 != *((_QWORD *)a1 + 102)
    || memcmp_0(v61, (char *)a1 + 824, 0x20uLL) )
  {
LABEL_85:
    v3 = 1;
    v30 = 1;
    goto LABEL_86;
  }
  if ( (v13 & 0x80u) != 0 || ((v20 | v21) & 0x80u) == 0 )
  {
    if ( (v13 & 8) == 0 && ((v35 & 8) != 0 || (v36 & 8) != 0) )
      goto LABEL_76;
    if ( (v39 & 2) != 0 )
    {
      if ( (v13 & 0x180) != v20 )
      {
LABEL_76:
        v3 = 1;
        goto LABEL_82;
      }
      if ( v21 )
      {
        v3 = 1;
        goto LABEL_82;
      }
    }
    v3 = (*((_QWORD *)a1 + 79) >> 47) & 1;
    goto LABEL_82;
  }
  v3 = 1;
LABEL_82:
  v30 = v33;
  if ( !v33 && !v3 )
    goto LABEL_3;
LABEL_86:
  v4 = v31;
  if ( !v31 )
    return v3;
  if ( (*((_BYTE *)a1 + 1096) & 0x27) != 0 )
    RmHamEnforcementEmptySignalAbort(a1);
  if ( v30 )
    RtlWakeAllConditionVariable((char *)a1 + 656);
LABEL_4:
  if ( v4 )
  {
    v5 = *((_QWORD *)a1 + 79);
    if ( (v5 & 0x100000000LL) == 0 )
    {
      *((_QWORD *)a1 + 79) = v5 | 0x100000000LL;
      if ( _InterlockedIncrement64((volatile signed __int64 *)a1 - 6) <= 1 )
        __fastfail(0xEu);
      TpPostWork(*((_QWORD *)a1 + 77));
    }
  }
  return v3;
}
