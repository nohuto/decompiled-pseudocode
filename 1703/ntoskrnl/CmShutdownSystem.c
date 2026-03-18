/*
 * XREFs of CmShutdownSystem @ 0x14066270C
 * Callers:
 *     PopGracefulShutdown @ 0x1404199F0 (PopGracefulShutdown.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     KeCancelTimer @ 0x14004D010 (KeCancelTimer.c)
 *     ExBlockOnAddressPushLock @ 0x14006BD30 (ExBlockOnAddressPushLock.c)
 *     CmpGetNextFailedUnloadHive @ 0x14007EA48 (CmpGetNextFailedUnloadHive.c)
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     ExWaitForRundownProtectionRelease @ 0x14010EFC0 (ExWaitForRundownProtectionRelease.c)
 *     ExRundownCompleted @ 0x1401161E0 (ExRundownCompleted.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     TlgAggregateFlush @ 0x1402699F8 (TlgAggregateFlush.c)
 *     CmpDoFileSetSizeEx @ 0x14043B560 (CmpDoFileSetSizeEx.c)
 *     CmpFlushUnsupportedOperationTelemetry @ 0x1404592A4 (CmpFlushUnsupportedOperationTelemetry.c)
 *     HvViewMapCleanup @ 0x14045C15C (HvViewMapCleanup.c)
 *     CmCloseRmHandle @ 0x1404CA5B8 (CmCloseRmHandle.c)
 *     CmCloseTmHandle @ 0x1404CA5DC (CmCloseTmHandle.c)
 *     CmpRunDownCmRM @ 0x1404CA648 (CmpRunDownCmRM.c)
 *     CmpStopRMLog @ 0x1404CA850 (CmpStopRMLog.c)
 *     CmpCmdHiveClose @ 0x1404CD78C (CmpCmdHiveClose.c)
 *     CmpFlushHive @ 0x1404D6DE0 (CmpFlushHive.c)
 *     CmpGetNextActiveHive @ 0x1404D8480 (CmpGetNextActiveHive.c)
 *     UNLOCK_HIVE_LOAD @ 0x1404D8520 (UNLOCK_HIVE_LOAD.c)
 *     CmpLockRegistryExclusive @ 0x1404D85A8 (CmpLockRegistryExclusive.c)
 *     LOCK_HIVE_LOAD @ 0x1404D85E4 (LOCK_HIVE_LOAD.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     HvMarkBaseBlockDirty @ 0x1405D0948 (HvMarkBaseBlockDirty.c)
 *     CmpTraceShutdownRundownComplete @ 0x140661748 (CmpTraceShutdownRundownComplete.c)
 *     CmpTraceShutdownStart @ 0x140661798 (CmpTraceShutdownStart.c)
 *     CmpFreeAllMemory @ 0x140662C0C (CmpFreeAllMemory.c)
 *     CmpRecordShutdownStopTime @ 0x140662D78 (CmpRecordShutdownStopTime.c)
 *     CmpRemoveHiveFromMapping @ 0x140667944 (CmpRemoveHiveFromMapping.c)
 *     CmpSendBootDeviceUsageNotification @ 0x14066A940 (CmpSendBootDeviceUsageNotification.c)
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
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+30h] [rbp-30h] BYREF
  EVENT_DESCRIPTOR v40; // [rsp+40h] [rbp-20h] BYREF
  EVENT_DESCRIPTOR v41; // [rsp+50h] [rbp-10h] BYREF
  __int64 v42; // [rsp+80h] [rbp+20h] BYREF

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
    LODWORD(v42) = CmpActiveHiveRundownCount;
    if ( CmpActiveHiveRundownCount > 0 )
    {
      CmpUnlockRegistry();
      UNLOCK_HIVE_LOAD();
      do
      {
        ExBlockOnAddressPushLock((__int64)&CmpActiveHiveRundownEvent, &CmpActiveHiveRundownCount, &v42, 4uLL, 0LL);
        LODWORD(v42) = CmpActiveHiveRundownCount;
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
    v15 = qword_14033BE70;
    if ( CmRmSystem )
    {
      v16 = *(_QWORD *)(qword_14033BE70 + 64);
      if ( *((PVOID *)CmRmSystem + 2) == (char *)CmRmSystem + 16 )
        *(_DWORD *)(v16 + 144) &= ~1u;
      else
        *(_DWORD *)(v16 + 144) |= 1u;
      HvMarkBaseBlockDirty(v15);
    }
    CmpUnlockRegistry();
    UNLOCK_HIVE_LOAD();
    ExReleasePushLockEx((ULONG_PTR)&CmpShutdownLock, 0LL);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
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
    v40 = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_SHUTDOWN_FLUSH_STOP;
    if ( EtwEventEnabled(EtwpRegTraceHandle, &v40) )
      EtwWrite(v21, &v40, 0LL, 0, 0LL);
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
      CmpRunDownCmRM(v24, 0);
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
        v30 = *(__int64 ***)(v33 + 5376);
        if ( *(__int64 **)(*v28 + 8) != v28 || *v30 != v28 )
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
          CmpDoFileSetSizeEx(v33, 0LL, v31, 0);
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
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( CmpBootDeviceUsageNotificationSent )
    {
      LOBYTE(v37) = 1;
      CmpSendBootDeviceUsageNotification(v37);
      CmpBootDeviceUsageNotificationSent = 0;
    }
    v38 = EtwpRegTraceHandle;
    v41 = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_SHUTDOWN_STOP;
    if ( EtwEventEnabled(EtwpRegTraceHandle, &v41) )
      EtwWrite(v38, &v41, 0LL, 0, 0LL);
  }
  else
  {
    CmpDoIdleProcessing = 0;
    CmpNoMoreTx = 1;
  }
}
