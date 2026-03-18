/*
 * XREFs of CmShutdownSystem @ 0x14068BC1C
 * Callers:
 *     PopGracefulShutdown @ 0x140431740 (PopGracefulShutdown.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     EtwWrite @ 0x140087CA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     ExWaitForRundownProtectionRelease @ 0x1400A9850 (ExWaitForRundownProtectionRelease.c)
 *     ExRundownCompleted @ 0x1400ADB30 (ExRundownCompleted.c)
 *     ExBlockOnAddressPushLock @ 0x1400BD710 (ExBlockOnAddressPushLock.c)
 *     KeCancelTimer @ 0x1400E2110 (KeCancelTimer.c)
 *     CmpGetNextFailedUnloadHive @ 0x140131358 (CmpGetNextFailedUnloadHive.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     TlgAggregateFlush @ 0x140294764 (TlgAggregateFlush.c)
 *     HvMarkBaseBlockDirty @ 0x14046F414 (HvMarkBaseBlockDirty.c)
 *     CmpCmdHiveClose @ 0x14046FEEC (CmpCmdHiveClose.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpFlushHive @ 0x1404DD950 (CmpFlushHive.c)
 *     CmpGetNextActiveHive @ 0x1404E3AA0 (CmpGetNextActiveHive.c)
 *     UNLOCK_HIVE_LOAD @ 0x1404E3B40 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryExclusive @ 0x1404E3BCC (CmpLockRegistryExclusive.c)
 *     LOCK_HIVE_LOAD @ 0x1404E3C0C (LOCK_HIVE_LOAD.c)
 *     CmpDoFileSetSizeEx @ 0x1404E657C (CmpDoFileSetSizeEx.c)
 *     CmpFlushUnsupportedOperationTelemetry @ 0x140596294 (CmpFlushUnsupportedOperationTelemetry.c)
 *     CmpRunDownCmRM @ 0x140597B4C (CmpRunDownCmRM.c)
 *     CmpStopRMLog @ 0x140597D54 (CmpStopRMLog.c)
 *     HvViewMapCleanup @ 0x14059CCA8 (HvViewMapCleanup.c)
 *     CmCloseRmHandle @ 0x14059EC4C (CmCloseRmHandle.c)
 *     CmCloseTmHandle @ 0x14059EC70 (CmCloseTmHandle.c)
 *     CmpTraceShutdownRundownComplete @ 0x14068A8C0 (CmpTraceShutdownRundownComplete.c)
 *     CmpTraceShutdownStart @ 0x14068A92C (CmpTraceShutdownStart.c)
 *     CmpFreeAllMemory @ 0x14068C138 (CmpFreeAllMemory.c)
 *     CmpRecordShutdownStopTime @ 0x14068C3F0 (CmpRecordShutdownStopTime.c)
 *     CmpRemoveHiveFromMapping @ 0x140692404 (CmpRemoveHiveFromMapping.c)
 *     CmpSendBootDeviceUsageNotification @ 0x140694FC4 (CmpSendBootDeviceUsageNotification.c)
 */

void __fastcall CmShutdownSystem(int a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF *i; // rcx
  void *v5; // rdi
  char v6; // dl
  void *v7; // rsi
  __int64 *NextActiveHive; // rax
  struct _EX_RUNDOWN_REF *v9; // rbx
  struct _KTIMER *v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  REGHANDLE v17; // rbx
  struct _EX_RUNDOWN_REF *j; // rcx
  __int64 *v19; // rax
  struct _EX_RUNDOWN_REF *v20; // rbx
  REGHANDLE v21; // rbx
  struct _KTHREAD *v22; // rax
  struct _EX_RUNDOWN_REF *k; // rcx
  __int64 v24; // rbx
  __int64 *v25; // rax
  struct _EX_RUNDOWN_REF *v26; // rdi
  struct _EX_RUNDOWN_REF *m; // rcx
  __int64 *v28; // rdi
  __int64 v29; // rcx
  __int64 **v30; // rax
  unsigned __int64 v31; // r8
  __int64 *v32; // rax
  __int64 v33; // rbx
  __int64 n; // rcx
  __int64 NextFailedUnloadHive; // rax
  __int64 v36; // rbx
  __int64 v37; // rcx
  REGHANDLE v38; // rbx
  __int64 v39; // [rsp+30h] [rbp-40h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-38h] BYREF
  EVENT_DESCRIPTOR v41; // [rsp+48h] [rbp-28h] BYREF
  EVENT_DESCRIPTOR v42; // [rsp+58h] [rbp-18h] BYREF

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
    TlgAggregateFlush(v2, v1);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpShutdownLock, 0LL);
    LOCK_HIVE_LOAD();
    CmpLockRegistryExclusive();
    LODWORD(v39) = CmpActiveHiveRundownCount;
    if ( CmpActiveHiveRundownCount > 0 )
    {
      CmpUnlockRegistry();
      UNLOCK_HIVE_LOAD();
      do
      {
        ExBlockOnAddressPushLock(&CmpActiveHiveRundownEvent, &CmpActiveHiveRundownCount, &v39, 4uLL, 0LL);
        LODWORD(v39) = CmpActiveHiveRundownCount;
      }
      while ( CmpActiveHiveRundownCount > 0 );
      LOCK_HIVE_LOAD();
      CmpLockRegistryExclusive();
    }
    for ( i = 0LL; ; i = v9 )
    {
      NextActiveHive = CmpGetNextActiveHive(i);
      v9 = (struct _EX_RUNDOWN_REF *)NextActiveHive;
      if ( !NextActiveHive )
        break;
      v5 = (void *)CmCloseRmHandle(NextActiveHive[675], 1);
      v7 = (void *)CmCloseTmHandle(v9[675].Count, v6);
      CmpUnlockRegistry();
      UNLOCK_HIVE_LOAD();
      if ( v5 )
      {
        ZwClose(v5);
        ZwClose(v7);
      }
      LOCK_HIVE_LOAD();
      CmpLockRegistryExclusive();
    }
    if ( !CmFirstTime )
    {
      v10 = &CmpLazyWriterData;
      v11 = 2LL;
      do
      {
        KeCancelTimer(v10);
        v10 += 3;
        --v11;
      }
      while ( v11 );
    }
    while ( 1 )
    {
      v14 = CmpGetNextActiveHive(v9);
      v9 = (struct _EX_RUNDOWN_REF *)v14;
      if ( !v14 )
        break;
      v12 = v14[675];
      if ( v12 )
      {
        v13 = v14[8];
        if ( *(_QWORD *)(v12 + 16) == v12 + 16 )
          *(_DWORD *)(v13 + 144) &= ~1u;
        else
          *(_DWORD *)(v13 + 144) |= 1u;
        HvMarkBaseBlockDirty((__int64)v9);
      }
    }
    v15 = qword_140353EA0;
    if ( CmRmSystem )
    {
      v16 = *(_QWORD *)(qword_140353EA0 + 64);
      if ( *((PVOID *)CmRmSystem + 2) == (char *)CmRmSystem + 16 )
        *(_DWORD *)(v16 + 144) &= ~1u;
      else
        *(_DWORD *)(v16 + 144) |= 1u;
      HvMarkBaseBlockDirty(v15);
    }
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    ExReleasePushLockEx((ULONG_PTR)&CmpShutdownLock, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v17 = EtwpRegTraceHandle;
    EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_SHUTDOWN_FLUSH_START;
    if ( EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor) )
      EtwWrite(v17, &EventDescriptor, 0LL, 0, 0LL);
    for ( j = 0LL; ; j = v20 )
    {
      v19 = CmpGetNextActiveHive(j);
      v20 = (struct _EX_RUNDOWN_REF *)v19;
      if ( !v19 )
        break;
      if ( !CmpNoWrite && (v19[18] & 2) == 0 )
        *((_BYTE *)v19 + 6048) = (int)CmpFlushHive((ULONG_PTR)v19, 0xCu) >= 0;
    }
    v21 = EtwpRegTraceHandle;
    v41 = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_SHUTDOWN_FLUSH_STOP;
    if ( EtwEventEnabled(EtwpRegTraceHandle, &v41) )
      EtwWrite(v21, &v41, 0LL, 0, 0LL);
    v22 = KeGetCurrentThread();
    --v22->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpShutdownLock, 0LL);
    LOCK_HIVE_LOAD();
    CmpLockRegistryExclusive();
    for ( k = 0LL; ; k = v26 )
    {
      v25 = CmpGetNextActiveHive(k);
      v26 = (struct _EX_RUNDOWN_REF *)v25;
      if ( !v25 )
        break;
      v24 = v25[675];
      if ( v24 )
      {
        if ( *(_DWORD *)(v24 + 64) )
        {
          _InterlockedAdd((volatile signed __int32 *)(v24 + 64), 0xFFFFFFFF);
          if ( !*(_DWORD *)(v24 + 64) )
            CmpStopRMLog(v24);
        }
      }
      CmpRunDownCmRM((__int64 *)v24, 0);
    }
    for ( m = 0LL; ; m = (struct _EX_RUNDOWN_REF *)v33 )
    {
      v32 = CmpGetNextActiveHive(m);
      v33 = (__int64)v32;
      if ( !v32 )
        break;
      v28 = v32 + 671;
      if ( (__int64 *)*v28 != v28 )
      {
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
        v29 = *v28;
        if ( *(__int64 **)(*v28 + 8) != v28 || (v30 = *(__int64 ***)(v33 + 5376), *v30 != v28) )
          __fastfail(3u);
        *v30 = (__int64 *)v29;
        *(_QWORD *)(v29 + 8) = v30;
        ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
      }
      if ( (*(_DWORD *)(v33 + 5360) & 2) != 0 )
        CmpRemoveHiveFromMapping(v33);
      HvViewMapCleanup(v33 + 200, v33, 0);
      *(_BYTE *)(v33 + 124) &= ~4u;
      if ( *(_BYTE *)(v33 + 6048) && (*(_DWORD *)(v33 + 144) & 0x8000) == 0 )
      {
        v31 = (unsigned int)(*(_DWORD *)(v33 + 1400) + 4096);
        if ( (__int64)(*(_QWORD *)(v33 + 2968) - v31) > 0x100000 )
          CmpDoFileSetSizeEx(v33, 0, v31, 0);
        CmpCmdHiveClose(v33);
      }
    }
    for ( n = 0LL; ; n = v36 )
    {
      NextFailedUnloadHive = CmpGetNextFailedUnloadHive(n);
      v36 = NextFailedUnloadHive;
      if ( !NextFailedUnloadHive )
        break;
      HvViewMapCleanup(NextFailedUnloadHive + 200, NextFailedUnloadHive, 0);
    }
    HvShutdownComplete = 1;
    if ( (PopShutdownCleanly & 8) != 0 && !CmFirstTime )
      CmpFreeAllMemory();
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    ExReleasePushLockEx((ULONG_PTR)&CmpShutdownLock, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( CmpBootDeviceUsageNotificationSent )
    {
      LOBYTE(v37) = 1;
      CmpSendBootDeviceUsageNotification(v37);
      CmpBootDeviceUsageNotificationSent = 0;
    }
    v38 = EtwpRegTraceHandle;
    v42 = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_SHUTDOWN_STOP;
    if ( EtwEventEnabled(EtwpRegTraceHandle, &v42) )
      EtwWrite(v38, &v42, 0LL, 0, 0LL);
  }
  else
  {
    CmpDoIdleProcessing = 0;
    CmpNoMoreTx = 1;
  }
}
