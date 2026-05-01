/*
 * XREFs of ?HampHostQueueTerminate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@@Z @ 0x180006920
 * Callers:
 *     ?HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x180005CE8 (-HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 *     ?HampActTerminate@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_K@Z @ 0x1800066B8 (-HampActTerminate@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEA_K@Z.c)
 *     ?HampHostCacheTimeoutCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800067A0 (-HampHostCacheTimeoutCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x180009D04 (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCER_CONTEXT@@T_RM_OPTIMIZA.c)
 *     ?HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK@Z @ 0x18000B204 (-HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK@Z.c)
 *     ?HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x1800108C4 (-HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800172C0 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800182E0 (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_DENY_REASON@@@Z @ 0x18001B320 (-HampActStartAsync@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_START_TYPE@@PEAW4_HAM_ACTIVITY_START_D.c)
 *     ?HamSrvTerminateSelf@@YAJPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18003FF94 (-HamSrvTerminateSelf@@YAJPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAVResourceSet@ExecutionModel@@@Z @ 0x180054958 (-RmpActivityHostRevokeResourceSets@@YAXPEAU_RM_ACTIVITY_HOST@@W4_RM_REVOKE_POLICY@@W4_RM_REVOKE_.c)
 *     ?HamSrvTerminateHostForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HAM_TERMINATE_REASON@@@Z @ 0x180063E54 (-HamSrvTerminateHostForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HAM_TERMINATE_REASON@@@Z.c)
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180064564 (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampHostTerminateIfSuspended@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAE@Z @ 0x1800655D0 (-HampHostTerminateIfSuspended@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMI.c)
 *     ?HampHostTryEnterConnectedStandby@@YA?AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800656FC (-HampHostTryEnterConnectedStandby@@YA-AW4_HAM_PDC_BLOCK_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampAppQueueTerminate@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@@Z @ 0x180066560 (-HampAppQueueTerminate@@YAXPEAU_HAM_APPLICATION@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@.c)
 * Callees:
 *     ?HampActCanBeInvalidated@@YAKPEAU_HAM_ACTIVITY@@@Z @ 0x180006784 (-HampActCanBeInvalidated@@YAKPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostCheckQueueTerminateWorker@@YAEPEAU_RM_HAM_ACTIVITY_HOST@@E@Z @ 0x180006CD0 (-HampHostCheckQueueTerminateWorker@@YAEPEAU_RM_HAM_ACTIVITY_HOST@@E@Z.c)
 *     ?HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z @ 0x1800087C8 (-HampHostGetNextActivity@@YAPEAU_HAM_ACTIVITY@@PEAU1@@Z.c)
 *     ?HampDepGroupQueueWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000AB98 (-HampDepGroupQueueWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupTryEnterStateChange@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEA_K@Z @ 0x18000BAF4 (-HampDepGroupTryEnterStateChange@@YAKPEAU_HAM_DEPENDENCY_GROUP@@PEA_K@Z.c)
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000F450 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000F4B8 (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     _TlgWrite @ 0x18000FC80 (_TlgWrite.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000FD20 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180014210 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _TlgCreateWsz @ 0x180014DC0 (_TlgCreateWsz.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800165D0 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001A390 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001B210 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _TlgKeywordOn @ 0x180022DC0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 *     ?HampActRequestStopForTerminate@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180041100 (-HampActRequestStopForTerminate@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 */

__int64 __fastcall HampHostQueueTerminate(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4, int a5)
{
  int v5; // r15d
  unsigned __int64 v7; // rbx
  __int64 v9; // rsi
  BOOL v10; // r12d
  __int64 v11; // rdx
  char v12; // cl
  __int64 v13; // rax
  unsigned int v14; // ebx
  __int64 v15; // r8
  unsigned __int8 v16; // r9
  struct _HAM_ACTIVITY *FirstActivity; // r14
  __int64 v18; // rcx
  int v19; // ebx
  unsigned __int8 v20; // cl
  unsigned __int64 v21; // rcx
  int v22; // r14d
  __int64 v23; // r9
  int v24; // r10d
  unsigned __int8 v26; // [rsp+30h] [rbp-A1h] BYREF
  _BYTE v27[3]; // [rsp+31h] [rbp-A0h] BYREF
  unsigned int v28; // [rsp+34h] [rbp-9Dh] BYREF
  unsigned int v29; // [rsp+38h] [rbp-99h]
  int v30; // [rsp+3Ch] [rbp-95h] BYREF
  __int64 v31; // [rsp+40h] [rbp-91h] BYREF
  __int64 v32; // [rsp+48h] [rbp-89h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-81h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-61h] BYREF
  unsigned __int8 *v35; // [rsp+80h] [rbp-51h]
  int v36; // [rsp+88h] [rbp-49h]
  int v37; // [rsp+8Ch] [rbp-45h]
  int *v38; // [rsp+90h] [rbp-41h]
  int v39; // [rsp+98h] [rbp-39h]
  int v40; // [rsp+9Ch] [rbp-35h]
  __int64 *v41; // [rsp+A0h] [rbp-31h]
  int v42; // [rsp+A8h] [rbp-29h]
  int v43; // [rsp+ACh] [rbp-25h]
  _BYTE *v44; // [rsp+B0h] [rbp-21h]
  int v45; // [rsp+B8h] [rbp-19h]
  int v46; // [rsp+BCh] [rbp-15h]
  unsigned int *v47; // [rsp+C0h] [rbp-11h]
  int v48; // [rsp+C8h] [rbp-9h]
  int v49; // [rsp+CCh] [rbp-5h]

  v5 = a5;
  v7 = a2;
  v29 = a2;
  v28 = a3;
  if ( !a5 )
    HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)a1, 0);
  v9 = *(_QWORD *)(a1 + 664);
  v10 = a5 == 0;
  v11 = *(_QWORD *)(a1 + 632) >> 16;
  v12 = BYTE2(*(_QWORD *)(a1 + 632));
  v30 = v10;
  if ( (v12 & 3u) >= v7 )
  {
    if ( _volatile_metadata > 5u )
    {
      v13 = *(_QWORD *)(a1 - 32);
      pDesc.Reserved = 0;
      v37 = 0;
      v40 = 0;
      v31 = v13;
      pDesc.Ptr = (ULONGLONG)&v31;
      v35 = &v26;
      v38 = (int *)v27;
      pDesc.Size = 8;
      v26 = v7;
      v36 = 1;
      v27[0] = v11 & 3;
      v39 = 1;
      TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_18008267A, 0LL, 0LL, 5u, &pData);
    }
    v14 = 0;
    goto LABEL_38;
  }
  v26 = 80;
  FirstActivity = HampHostGetFirstActivity((struct _RM_HAM_ACTIVITY_HOST *)a1);
  if ( FirstActivity )
  {
    do
    {
      if ( HampActCanBeInvalidated(FirstActivity) && *((_BYTE *)FirstActivity + 540) == 3 )
      {
        v19 = HIBYTE(*((_DWORD *)FirstActivity + 106));
        HampActRequestStopForTerminate(v18, v29, v28, a4);
        v20 = v19;
        if ( v26 < (unsigned __int8)v19 )
          v20 = v26;
        v26 = v20;
      }
      FirstActivity = HampHostGetNextActivity(FirstActivity);
    }
    while ( FirstActivity );
    v15 = *(_QWORD *)(a1 + 632);
    v5 = a5;
    v10 = v30;
    LODWORD(v7) = v29;
  }
  *(_QWORD *)(a1 + 632) = v15 ^ ((unsigned int)v15 ^ ((_DWORD)v7 << 16)) & 0x30000;
  *(_WORD *)(a1 + 632) = v28;
  v21 = *(_QWORD *)(a1 + 632) & 0xFFFFFFFFFC03FFFFuLL | ((unsigned __int64)v16 << 18);
  *(_QWORD *)(a1 + 632) = v21;
  if ( (_DWORD)v7 == 2 )
  {
    *(_QWORD *)(a1 + 632) = v21 | 0x800000000000LL;
    if ( *(_DWORD *)(a1 + 624) != GetCurrentThreadId() )
      HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)a1, 0);
  }
  else
  {
    HampHostCheckQueueTerminateWorker((struct _RM_HAM_ACTIVITY_HOST *)a1, 0);
  }
  if ( a4 )
    v22 = *(_DWORD *)(a4 + 136);
  else
    v22 = 0;
  if ( v9 )
  {
    if ( v5 == 2 )
    {
      ++*(_QWORD *)(v9 + 112);
      v14 = 0;
      goto LABEL_32;
    }
    HampDepGroupAcquireLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v9);
    if ( v5 == 3 )
    {
      HampDepGroupQueueWorker((struct _HAM_DEPENDENCY_GROUP *)v9);
      v14 = 0;
    }
    else
    {
      v14 = HampDepGroupTryEnterStateChange((struct _HAM_DEPENDENCY_GROUP *)v9, (unsigned __int64 *)(a1 + 600));
    }
    HampDepGroupReleaseLockExclusive((struct _HAM_DEPENDENCY_GROUP *)v9);
  }
  else
  {
    v14 = 0;
  }
  if ( v5 != 2 )
    HampHostCheckQueueStateWorker((struct _RM_HAM_ACTIVITY_HOST *)a1, 0);
LABEL_32:
  if ( _volatile_metadata > 4u && TlgKeywordOn((TraceLoggingHProvider)&_volatile_metadata, 0x400000000008uLL) )
  {
    TlgCreateWsz(&pDesc, (LPCWSTR)(a1 + 24));
    v23 = *(_QWORD *)(a1 - 32);
    v37 = 0;
    v40 = 0;
    v43 = 0;
    v46 = 0;
    v49 = 0;
    v35 = (unsigned __int8 *)&v32;
    v30 = *(_DWORD *)(a1 + 560);
    v38 = &v30;
    v41 = &v31;
    v27[0] = v29;
    v44 = v27;
    v47 = &v28;
    v32 = v23;
    v36 = 8;
    v39 = v24;
    LODWORD(v31) = v22;
    v42 = v24;
    v45 = 1;
    v48 = v24;
    TlgWrite((TraceLoggingHProvider)&_volatile_metadata, &unk_180082ACA, 0LL, 0LL, 8u, &pData);
  }
  if ( !v5 )
  {
    HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)a1, v11);
    v10 = 0;
    if ( !v14 )
      return v14;
    v14 = 0;
    HampDepGroupRunStateChangeWorker((struct _HAM_DEPENDENCY_GROUP *)v9);
  }
LABEL_38:
  if ( v10 )
    HampHostReleaseLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)a1, v11);
  return v14;
}
