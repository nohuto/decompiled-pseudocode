/*
 * XREFs of CmpCompleteUnloadKey @ 0x14054D8E8
 * Callers:
 *     CmpPerformUnloadKey @ 0x14054D0B4 (CmpPerformUnloadKey.c)
 *     CmpLateUnloadHiveWorker @ 0x14054D5D0 (CmpLateUnloadHiveWorker.c)
 * Callees:
 *     CmpRemoveHiveFromNamespace @ 0x1400A1E60 (CmpRemoveHiveFromNamespace.c)
 *     CmpDecrementAppHiveUnloadCount @ 0x1400A20B8 (CmpDecrementAppHiveUnloadCount.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     EtwWrite @ 0x1400EF820 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x1401A70F0 (ExfUnblockPushLock.c)
 *     ZwDeleteValueKey @ 0x1401A8EC0 (ZwDeleteValueKey.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     HvMarkBaseBlockDirty @ 0x14049360C (HvMarkBaseBlockDirty.c)
 *     CmpDiscardKcb @ 0x14049AB30 (CmpDiscardKcb.c)
 *     UNLOCK_HIVE_LOAD @ 0x14049BB10 (UNLOCK_HIVE_LOAD.c)
 *     CmpFlushHive @ 0x14049D2A8 (CmpFlushHive.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     HvHiveCleanup @ 0x140513E70 (HvHiveCleanup.c)
 *     CmpCleanUpSubKeyInfo @ 0x140516B80 (CmpCleanUpSubKeyInfo.c)
 *     CmpCmdHiveClose @ 0x14054DC44 (CmpCmdHiveClose.c)
 *     CmpDestroySecurityCache @ 0x14054DD80 (CmpDestroySecurityCache.c)
 *     CmpMarkKeyUnbacked @ 0x14054DED8 (CmpMarkKeyUnbacked.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x14054DF64 (CmpFlushNotifiesOnKeyBodyList.c)
 *     CmpVolumeContextDecrementRefCount @ 0x14054E060 (CmpVolumeContextDecrementRefCount.c)
 *     CmpDoFileSetSizeEx @ 0x140566A0C (CmpDoFileSetSizeEx.c)
 *     CmpRemoveHiveFromMapping @ 0x1405EEB4C (CmpRemoveHiveFromMapping.c)
 */

BOOLEAN __fastcall CmpCompleteUnloadKey(ULONG_PTR a1, __int64 a2, _DWORD *a3)
{
  ULONG_PTR v3; // rdi
  int v6; // r12d
  __int64 v7; // rax
  REGHANDLE v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v14; // rbx
  int v15; // esi
  unsigned int v16; // ebx
  struct _PRIVILEGE_SET *v17; // rcx
  unsigned int v18; // r14d
  REGHANDLE v19; // rbx
  BOOLEAN result; // al
  unsigned int v21; // eax
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  _QWORD *v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rdx
  __int64 v28; // rdx
  int v29; // ecx
  unsigned int v30; // ecx
  ULONGLONG v31; // rax
  unsigned int v32; // r9d
  __int64 v33; // rax
  unsigned int v34; // r9d
  ULONGLONG v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  signed __int32 v38[8]; // [rsp+0h] [rbp-99h] BYREF
  __int16 v39; // [rsp+30h] [rbp-69h] BYREF
  int v40; // [rsp+38h] [rbp-61h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-59h] BYREF
  EVENT_DESCRIPTOR v42; // [rsp+50h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+60h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[4]; // [rsp+70h] [rbp-29h] BYREF

  v3 = *(_QWORD *)(a1 + 24);
  v6 = *(_DWORD *)(v3 + 4152) & 0x20;
  *(_DWORD *)(v3 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 4292), 1u) & 0x7F) + 4296) = 6;
  _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 2944), 1LL, 0LL);
  v7 = *(_QWORD *)(v3 + 4192);
  if ( v7 )
  {
    v28 = *(_QWORD *)(v3 + 64);
    v29 = *(_DWORD *)(v28 + 144);
    if ( *(_QWORD *)(v7 + 16) == v7 + 16 )
      v30 = v29 & 0xFFFFFFFE;
    else
      v30 = v29 | 1;
    *(_DWORD *)(v28 + 144) = v30;
    HvMarkBaseBlockDirty(v3);
  }
  *(_DWORD *)(v3 + 160) |= 0x40u;
  v8 = EtwpRegTraceHandle;
  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_UNLOAD_START;
  if ( EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor) )
  {
    v31 = *(_QWORD *)(v3 + 1840);
    v32 = 0;
    v39 = 0;
    if ( v31 )
    {
      UserData[0].Ptr = v31;
      v32 = 1;
      UserData[0].Size = *(unsigned __int16 *)(v3 + 1832);
      UserData[0].Reserved = 0;
    }
    v33 = v32;
    v34 = v32 + 1;
    UserData[v33].Ptr = (ULONGLONG)&v39;
    *(_QWORD *)&UserData[v33].Size = 2LL;
    v35 = *(_QWORD *)(v3 + 1856);
    if ( v35 )
    {
      v36 = v34++;
      UserData[v36].Ptr = v35;
      UserData[v36].Size = *(unsigned __int16 *)(v3 + 1848);
      *(&UserData[0].Reserved + 1 * v36) = 0;
    }
    v37 = v34;
    UserData[v37].Ptr = (ULONGLONG)&v39;
    *(_QWORD *)&UserData[v37].Size = 2LL;
    EtwWrite(v8, &EventDescriptor, 0LL, v34 + 1, UserData);
  }
  CmpRemoveHiveFromNamespace(v3, a1);
  *(_DWORD *)(v3 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 4292), 1u) & 0x7F) + 4296) = 8;
  if ( v6 )
  {
    *(_DWORD *)(v3 + 4824) = 1;
    CmpDecrementAppHiveUnloadCount();
  }
  CmpFlushNotifiesOnKeyBodyList(a1, 1LL);
  CmpMarkKeyUnbacked(a1);
  CmpDiscardKcb(a1);
  CmpCleanUpSubKeyInfo(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 64LL), 1);
  CmpUnlockRegistry();
  *a3 &= ~2u;
  if ( (*a3 & 4) != 0 )
  {
    UNLOCK_HIVE_LOAD(v10, v9, v11, v12);
    *a3 &= ~4u;
  }
  ZwDeleteValueKey(CmpHiveFileListHandle, (PUNICODE_STRING)(v3 + 1848));
  CmpDestroySecurityCache(v3);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v14 = v3 + 4160;
  if ( *(_QWORD *)v14 != v14 )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
    v24 = *(_QWORD *)v14;
    if ( *(_QWORD *)(*(_QWORD *)v14 + 8LL) != v14 || (v25 = *(_QWORD **)(v3 + 4168), *v25 != v14) )
      __fastfail(3u);
    *v25 = v24;
    *(_QWORD *)(v24 + 8) = v25;
    ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL, v22, v23);
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( (*(_DWORD *)(v3 + 160) & 0x400) != 0 )
  {
    v26 = *(_QWORD *)(v3 + 1616);
    if ( *(_QWORD *)(v26 + 8) != v3 + 1616 || (v27 = *(_QWORD **)(v3 + 1624), *v27 != v3 + 1616) )
      __fastfail(3u);
    *v27 = v26;
    *(_QWORD *)(v26 + 8) = v27;
  }
  if ( (*(_DWORD *)(v3 + 4152) & 2) != 0 )
    CmpRemoveHiveFromMapping(v3);
  v15 = CmpFlushHive(v3, 0x2Cu);
  if ( v15 == -1073741811 )
    v15 = 0;
  v16 = *(_DWORD *)(v3 + 272) + 4096;
  HvHiveCleanup(v3);
  if ( v15 >= 0 && (*(_DWORD *)(v3 + 160) & 0x8000) == 0 && (__int64)(*(_QWORD *)(v3 + 1792) - v16) > 0x100000 )
    CmpDoFileSetSizeEx(v3, 0LL, v16, 0LL);
  CmpCmdHiveClose(v3);
  v17 = *(struct _PRIVILEGE_SET **)(v3 + 4848);
  if ( v17 )
    CmpVolumeContextDecrementRefCount(v17);
  if ( v6 )
  {
    *(_DWORD *)(v3 + 4824) = 0;
    _InterlockedOr(v38, 0);
    if ( *(_QWORD *)(v3 + 4832) )
      ExfUnblockPushLock((volatile __int64 *)(v3 + 4832), 0LL);
  }
  v18 = 0;
  if ( *(_DWORD *)(v3 + 2912) )
  {
    do
    {
      KeSetEvent(*(PRKEVENT *)(*(_QWORD *)(v3 + 2920) + 8LL * v18), 0, 0);
      ObfDereferenceObject(*(PVOID *)(*(_QWORD *)(v3 + 2920) + 8LL * v18));
      v21 = *(_DWORD *)(v3 + 2912);
      ++v18;
    }
    while ( v18 < v21 );
    if ( v21 )
      ExFreePoolWithTag(*(PVOID *)(v3 + 2920), 0);
  }
  v19 = EtwpRegTraceHandle;
  v40 = v15;
  v42 = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_UNLOAD_STOP;
  result = EtwEventEnabled(EtwpRegTraceHandle, &v42);
  if ( result )
  {
    *(_QWORD *)&v43.Size = 4LL;
    v43.Ptr = (ULONGLONG)&v40;
    return EtwWrite(v19, &v42, 0LL, 1u, &v43);
  }
  return result;
}
