/*
 * XREFs of CmShutdownSystem @ 0x1406EFFE4
 * Callers:
 *     PopGracefulShutdown @ 0x140485D40 (PopGracefulShutdown.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     ExWaitForRundownProtectionRelease @ 0x140040D50 (ExWaitForRundownProtectionRelease.c)
 *     KeCancelTimer @ 0x14005A760 (KeCancelTimer.c)
 *     ExRundownCompleted @ 0x14008AE10 (ExRundownCompleted.c)
 *     ExBlockOnAddressPushLock @ 0x1400A1CF0 (ExBlockOnAddressPushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     EtwWrite @ 0x1400EF820 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     TlgAggregateFlush @ 0x1402CA2B4 (TlgAggregateFlush.c)
 *     HvMarkBaseBlockDirty @ 0x14049360C (HvMarkBaseBlockDirty.c)
 *     CmpGetNextActiveHive @ 0x14049BA70 (CmpGetNextActiveHive.c)
 *     UNLOCK_HIVE_LOAD @ 0x14049BB10 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryExclusive @ 0x14049BC8C (CmpLockRegistryExclusive.c)
 *     LOCK_HIVE_LOAD @ 0x14049BCCC (LOCK_HIVE_LOAD.c)
 *     CmpFlushHive @ 0x14049D2A8 (CmpFlushHive.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x1404AC4D0 (CmpAttachToRegistryProcess.c)
 *     HvHiveCleanup @ 0x140513E70 (HvHiveCleanup.c)
 *     CmpCmdHiveClose @ 0x14054DC44 (CmpCmdHiveClose.c)
 *     CmpVolumeContextDecrementRefCount @ 0x14054E060 (CmpVolumeContextDecrementRefCount.c)
 *     CmpRunDownCmRM @ 0x14054E698 (CmpRunDownCmRM.c)
 *     CmpStopRMLog @ 0x14054E8A0 (CmpStopRMLog.c)
 *     CmCloseTmHandle @ 0x14054E94C (CmCloseTmHandle.c)
 *     CmCloseRmHandle @ 0x14054E970 (CmCloseRmHandle.c)
 *     CmpDoFileSetSizeEx @ 0x140566A0C (CmpDoFileSetSizeEx.c)
 *     CmpFlushUnsupportedOperationTelemetry @ 0x14057DD64 (CmpFlushUnsupportedOperationTelemetry.c)
 *     CmpRemoveHiveFromMapping @ 0x1405EEB4C (CmpRemoveHiveFromMapping.c)
 *     CmpTraceShutdownRundownComplete @ 0x1406EECDC (CmpTraceShutdownRundownComplete.c)
 *     CmpTraceShutdownStart @ 0x1406EED48 (CmpTraceShutdownStart.c)
 *     CmpFreeAllMemory @ 0x1406F052C (CmpFreeAllMemory.c)
 *     CmpRecordShutdownStopTime @ 0x1406F0804 (CmpRecordShutdownStopTime.c)
 */

char __fastcall CmShutdownSystem(int a1)
{
  _UNKNOWN **v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct _EX_RUNDOWN_REF *i; // rcx
  void *v10; // rdi
  char v11; // dl
  void *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 *NextActiveHive; // rax
  struct _EX_RUNDOWN_REF *v18; // rbx
  struct _KTIMER *v19; // rdi
  __int64 v20; // rsi
  __int64 *j; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  int v24; // eax
  unsigned int v25; // eax
  struct _EX_RUNDOWN_REF *v26; // rbx
  __int64 v27; // r8
  __int64 v28; // rdx
  int v29; // ecx
  unsigned int v30; // ecx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r8
  __int64 v36; // r9
  REGHANDLE v37; // rbx
  struct _EX_RUNDOWN_REF *k; // rcx
  __int64 *v39; // rax
  struct _EX_RUNDOWN_REF *v40; // rbx
  REGHANDLE v41; // rbx
  struct _KTHREAD *v42; // rax
  struct _EX_RUNDOWN_REF *m; // rcx
  __int64 v44; // rbx
  __int64 *v45; // rax
  struct _EX_RUNDOWN_REF *v46; // rdi
  struct _EX_RUNDOWN_REF *n; // rcx
  __int64 *v48; // rdi
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rcx
  __int64 **v52; // rax
  unsigned int v53; // edi
  struct _PRIVILEGE_SET *v54; // rcx
  __int64 *v55; // rax
  __int64 v56; // rbx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 **v63; // rax
  int v64; // ebx
  struct _PRIVILEGE_SET *v65; // rcx
  REGHANDLE v66; // rbx
  __int64 v68; // [rsp+38h] [rbp-29h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-21h] BYREF
  EVENT_DESCRIPTOR v70; // [rsp+50h] [rbp-11h] BYREF
  EVENT_DESCRIPTOR v71; // [rsp+60h] [rbp-1h] BYREF
  _BYTE v72[48]; // [rsp+70h] [rbp+Fh] BYREF
  _UNKNOWN *retaddr; // [rsp+C0h] [rbp+5Fh] BYREF

  v1 = &retaddr;
  if ( a1 )
  {
    CmpTraceShutdownStart();
    if ( CmpRegistryRootObject )
      ObfDereferenceObject(CmpRegistryRootObject);
    CmpRecordShutdownStopTime();
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    ExRundownCompleted((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    CmpTraceShutdownRundownComplete();
    CmpFlushUnsupportedOperationTelemetry();
    TlgAggregateFlush(v3, v2);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpShutdownLock, 0LL);
    LOCK_HIVE_LOAD();
    CmpLockRegistryExclusive();
    LODWORD(v68) = CmpActiveHiveRundownCount;
    if ( CmpActiveHiveRundownCount > 0 )
    {
      CmpUnlockRegistry();
      UNLOCK_HIVE_LOAD(v6, v5, v7, v8);
      do
      {
        ExBlockOnAddressPushLock((__int64)&CmpActiveHiveRundownEvent, &CmpActiveHiveRundownCount, &v68, 4uLL, 0LL);
        LODWORD(v68) = CmpActiveHiveRundownCount;
      }
      while ( CmpActiveHiveRundownCount > 0 );
      LOCK_HIVE_LOAD();
      CmpLockRegistryExclusive();
    }
    for ( i = 0LL; ; i = v18 )
    {
      NextActiveHive = CmpGetNextActiveHive(i);
      v18 = (struct _EX_RUNDOWN_REF *)NextActiveHive;
      if ( !NextActiveHive )
        break;
      v10 = (void *)CmCloseRmHandle(NextActiveHive[524], 1);
      v12 = (void *)CmCloseTmHandle(v18[524].Count, v11);
      CmpUnlockRegistry();
      UNLOCK_HIVE_LOAD(v14, v13, v15, v16);
      if ( v10 )
      {
        ZwClose(v10);
        ZwClose(v12);
      }
      LOCK_HIVE_LOAD();
      CmpLockRegistryExclusive();
    }
    if ( !(_BYTE)CmFirstTime )
    {
      v19 = &CmpLazyWriterData;
      v20 = 2LL;
      do
      {
        KeCancelTimer(v19);
        v19 += 3;
        --v20;
      }
      while ( v20 );
    }
    for ( j = CmpGetNextActiveHive(0LL); ; j = CmpGetNextActiveHive(v26) )
    {
      v26 = (struct _EX_RUNDOWN_REF *)j;
      if ( !j )
        break;
      v22 = j[524];
      if ( v22 )
      {
        v23 = j[8];
        v24 = *(_DWORD *)(v23 + 144);
        if ( *(_QWORD *)(v22 + 16) == v22 + 16 )
          v25 = v24 & 0xFFFFFFFE;
        else
          v25 = v24 | 1;
        *(_DWORD *)(v23 + 144) = v25;
        HvMarkBaseBlockDirty((__int64)v26);
      }
    }
    v27 = qword_140396A80;
    if ( CmRmSystem )
    {
      v28 = *(_QWORD *)(qword_140396A80 + 64);
      v29 = *(_DWORD *)(v28 + 144);
      if ( *((PVOID *)CmRmSystem + 2) == (char *)CmRmSystem + 16 )
        v30 = v29 & 0xFFFFFFFE;
      else
        v30 = v29 | 1;
      *(_DWORD *)(v28 + 144) = v30;
      HvMarkBaseBlockDirty(v27);
    }
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD(v32, v31, v33, v34);
    ExReleasePushLockEx((ULONG_PTR)&CmpShutdownLock, 0LL, v35, v36);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    CmpAttachToRegistryProcess((__int64)v72);
    v37 = EtwpRegTraceHandle;
    EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_SHUTDOWN_FLUSH_START;
    if ( EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor) )
      EtwWrite(v37, &EventDescriptor, 0LL, 0, 0LL);
    for ( k = 0LL; ; k = v40 )
    {
      v39 = CmpGetNextActiveHive(k);
      v40 = (struct _EX_RUNDOWN_REF *)v39;
      if ( !v39 )
        break;
      if ( !CmpNoWrite && (v39[20] & 2) == 0 )
        *((_BYTE *)v39 + 4840) = (int)CmpFlushHive((ULONG_PTR)v39, 0xCu) >= 0;
    }
    v41 = EtwpRegTraceHandle;
    v70 = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_SHUTDOWN_FLUSH_STOP;
    if ( EtwEventEnabled(EtwpRegTraceHandle, &v70) )
      EtwWrite(v41, &v70, 0LL, 0, 0LL);
    KiUnstackDetachProcess((__int64)v72, 0LL);
    v42 = KeGetCurrentThread();
    --v42->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpShutdownLock, 0LL);
    LOCK_HIVE_LOAD();
    CmpLockRegistryExclusive();
    for ( m = 0LL; ; m = v46 )
    {
      v45 = CmpGetNextActiveHive(m);
      v46 = (struct _EX_RUNDOWN_REF *)v45;
      if ( !v45 )
        break;
      v44 = v45[524];
      if ( v44 )
      {
        if ( *(_DWORD *)(v44 + 64) )
        {
          _InterlockedAdd((volatile signed __int32 *)(v44 + 64), 0xFFFFFFFF);
          if ( !*(_DWORD *)(v44 + 64) )
            CmpStopRMLog(v44);
        }
      }
      CmpRunDownCmRM((__int64 *)v44, 0);
    }
    for ( n = 0LL; ; n = (struct _EX_RUNDOWN_REF *)v56 )
    {
      v55 = CmpGetNextActiveHive(n);
      v56 = (__int64)v55;
      if ( !v55 )
        break;
      v48 = v55 + 520;
      if ( (__int64 *)*v48 != v48 )
      {
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
        v51 = *v48;
        if ( *(__int64 **)(*v48 + 8) != v48 || (v52 = *(__int64 ***)(v56 + 4168), *v52 != v48) )
          __fastfail(3u);
        *v52 = (__int64 *)v51;
        *(_QWORD *)(v51 + 8) = v52;
        ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL, v49, v50);
      }
      if ( (*(_DWORD *)(v56 + 4152) & 2) != 0 )
        CmpRemoveHiveFromMapping(v56);
      v53 = *(_DWORD *)(v56 + 272) + 4096;
      CmpAttachToRegistryProcess((__int64)v72);
      HvHiveCleanup(v56);
      KiUnstackDetachProcess((__int64)v72, 0LL);
      if ( *(_BYTE *)(v56 + 4840)
        && (*(_DWORD *)(v56 + 160) & 0x8000) == 0
        && (__int64)(*(_QWORD *)(v56 + 1792) - v53) > 0x100000 )
      {
        CmpDoFileSetSizeEx(v56, 0, v53, 0);
      }
      CmpCmdHiveClose(v56);
      v54 = *(struct _PRIVILEGE_SET **)(v56 + 4848);
      if ( v54 )
        CmpVolumeContextDecrementRefCount(v54);
    }
    HvShutdownComplete = 1;
    if ( (PopShutdownCleanly & 8) != 0 && !(_BYTE)CmFirstTime )
      CmpFreeAllMemory();
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD(v58, v57, v59, v60);
    ExReleasePushLockEx((ULONG_PTR)&CmpShutdownLock, 0LL, v61, v62);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v63 = &CmpWellKnownVolumeList;
    v64 = 0;
    if ( CmpWellKnownVolumeList )
    {
      do
      {
        v65 = (struct _PRIVILEGE_SET *)v63[1];
        if ( v65 )
          CmpVolumeContextDecrementRefCount(v65);
        v63 = &(&CmpWellKnownVolumeList)[2 * (unsigned int)++v64];
      }
      while ( *v63 );
    }
    v66 = EtwpRegTraceHandle;
    v71 = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_SHUTDOWN_STOP;
    LOBYTE(v1) = EtwEventEnabled(EtwpRegTraceHandle, &v71);
    if ( (_BYTE)v1 )
      LOBYTE(v1) = EtwWrite(v66, &v71, 0LL, 0, 0LL);
  }
  else
  {
    CmpDoIdleProcessing = 0;
    CmpNoMoreTx = 1;
  }
  return (char)v1;
}
