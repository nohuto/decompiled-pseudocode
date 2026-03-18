/*
 * XREFs of CmpCompleteUnloadKey @ 0x1404CD454
 * Callers:
 *     CmpPerformUnloadKey @ 0x1404CB738 (CmpPerformUnloadKey.c)
 *     CmpLateUnloadHiveWorker @ 0x1404CC580 (CmpLateUnloadHiveWorker.c)
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     CmpDecrementAppHiveUnloadCount @ 0x14007EC20 (CmpDecrementAppHiveUnloadCount.c)
 *     CmpRemoveHiveFromNamespace @ 0x14007FC2C (CmpRemoveHiveFromNamespace.c)
 *     EtwWrite @ 0x140094650 (EtwWrite.c)
 *     CmpArmLazyWriter @ 0x1400A8190 (CmpArmLazyWriter.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExfUnblockPushLock @ 0x14017DAD0 (ExfUnblockPushLock.c)
 *     ZwDeleteValueKey @ 0x14017F900 (ZwDeleteValueKey.c)
 *     CmpDoFileSetSizeEx @ 0x14043B560 (CmpDoFileSetSizeEx.c)
 *     CmpSignalUnloadEventArrayForHive @ 0x1404CD710 (CmpSignalUnloadEventArrayForHive.c)
 *     CmpCmdHiveClose @ 0x1404CD78C (CmpCmdHiveClose.c)
 *     CmpDestroySecurityCache @ 0x1404CF38C (CmpDestroySecurityCache.c)
 *     CmpDiscardKcb @ 0x1404D00DC (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x1404D0304 (CmpMarkKeyUnbacked.c)
 *     CmpCleanUpSubKeyInfo @ 0x1404D0ED8 (CmpCleanUpSubKeyInfo.c)
 *     CmpFlushNotifiesOnKeyBodyList @ 0x1404D1090 (CmpFlushNotifiesOnKeyBodyList.c)
 *     HvFreeHive @ 0x1404D2664 (HvFreeHive.c)
 *     CmpFlushHive @ 0x1404D6DE0 (CmpFlushHive.c)
 *     UNLOCK_HIVE_LOAD @ 0x1404D8520 (UNLOCK_HIVE_LOAD.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x140500604 (CmpReferenceKeyControlBlockUnsafe.c)
 *     HvMarkBaseBlockDirty @ 0x1405D0948 (HvMarkBaseBlockDirty.c)
 *     CmpRemoveHiveFromMapping @ 0x140667944 (CmpRemoveHiveFromMapping.c)
 */

BOOLEAN __fastcall CmpCompleteUnloadKey(ULONG_PTR a1, __int64 a2, _DWORD *a3)
{
  ULONG_PTR v3; // rbx
  int v6; // r12d
  __int64 v7; // rax
  REGHANDLE v8; // r15
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v10; // rdi
  __int64 v11; // rdx
  int v12; // edi
  unsigned int v13; // esi
  REGHANDLE v14; // rbx
  BOOLEAN result; // al
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  bool v18; // zf
  __int64 v19; // rax
  ULONGLONG v20; // rax
  unsigned int v21; // r9d
  __int64 v22; // rax
  unsigned int v23; // r9d
  ULONGLONG v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  _QWORD *v28; // rax
  _QWORD *v29; // rcx
  _QWORD *v30; // rax
  signed __int32 v31[8]; // [rsp+0h] [rbp-99h] BYREF
  __int16 v32; // [rsp+30h] [rbp-69h] BYREF
  int v33; // [rsp+38h] [rbp-61h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-59h] BYREF
  EVENT_DESCRIPTOR v35; // [rsp+50h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[4]; // [rsp+60h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+A0h] [rbp+7h] BYREF

  v3 = *(_QWORD *)(a1 + 24);
  v6 = *(_DWORD *)(v3 + 5360) & 0x20;
  *(_DWORD *)(v3 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 5500), 1u) & 0x7F) + 5504) = 6;
  _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 4120), 1LL, 0LL);
  v7 = *(_QWORD *)(v3 + 5400);
  if ( v7 )
  {
    v18 = *(_QWORD *)(v7 + 16) == v7 + 16;
    v19 = *(_QWORD *)(v3 + 64);
    if ( v18 )
      *(_DWORD *)(v19 + 144) &= ~1u;
    else
      *(_DWORD *)(v19 + 144) |= 1u;
    HvMarkBaseBlockDirty(v3);
  }
  *(_DWORD *)(v3 + 144) |= 0x40u;
  v8 = EtwpRegTraceHandle;
  EventDescriptor = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_UNLOAD_START;
  if ( EtwEventEnabled(EtwpRegTraceHandle, &EventDescriptor) )
  {
    v20 = *(_QWORD *)(v3 + 3016);
    v21 = 0;
    v32 = 0;
    if ( v20 )
    {
      UserData[0].Ptr = v20;
      v21 = 1;
      UserData[0].Size = *(unsigned __int16 *)(v3 + 3008);
      UserData[0].Reserved = 0;
    }
    v22 = v21;
    v23 = v21 + 1;
    UserData[v22].Ptr = (ULONGLONG)&v32;
    *(_QWORD *)&UserData[v22].Size = 2LL;
    v24 = *(_QWORD *)(v3 + 3032);
    if ( v24 )
    {
      v25 = v23++;
      UserData[v25].Ptr = v24;
      UserData[v25].Size = *(unsigned __int16 *)(v3 + 3024);
      *(&UserData[0].Reserved + 1 * v25) = 0;
    }
    v26 = v23;
    UserData[v26].Ptr = (ULONGLONG)&v32;
    *(_QWORD *)&UserData[v26].Size = 2LL;
    EtwWrite(v8, &EventDescriptor, 0LL, v23 + 1, UserData);
  }
  CmpRemoveHiveFromNamespace(v3, a1);
  *(_DWORD *)(v3 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 5500), 1u) & 0x7F) + 5504) = 8;
  if ( v6 )
  {
    *(_DWORD *)(v3 + 6032) = 1;
    CmpDecrementAppHiveUnloadCount();
  }
  CmpFlushNotifiesOnKeyBodyList(a1, 1LL);
  CmpMarkKeyUnbacked(a1);
  CmpDiscardKcb(a1);
  CmpCleanUpSubKeyInfo(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 64LL));
  CmpUnlockRegistry();
  *a3 &= ~2u;
  if ( (*a3 & 4) != 0 )
  {
    UNLOCK_HIVE_LOAD();
    *a3 &= ~4u;
  }
  ZwDeleteValueKey(CmpHiveFileListHandle, (PUNICODE_STRING)(v3 + 3024));
  CmpDestroySecurityCache(v3);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = v3 + 5368;
  if ( *(_QWORD *)v10 != v10 )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
    v27 = *(_QWORD *)v10;
    v28 = *(_QWORD **)(v3 + 5376);
    if ( *(_QWORD *)(*(_QWORD *)v10 + 8LL) != v10 || *v28 != v10 )
      __fastfail(3u);
    *v28 = v27;
    *(_QWORD *)(v27 + 8) = v28;
    ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( (*(_DWORD *)(v3 + 144) & 0x400) != 0 )
  {
    v16 = *(_QWORD *)(v3 + 2744);
    v17 = *(_QWORD **)(v3 + 2752);
    if ( *(_QWORD *)(v16 + 8) != v3 + 2744 || *v17 != v3 + 2744 )
      __fastfail(3u);
    *v17 = v16;
    *(_QWORD *)(v16 + 8) = v17;
  }
  if ( (*(_DWORD *)(v3 + 5360) & 2) != 0 )
    CmpRemoveHiveFromMapping(v3);
  v12 = CmpFlushHive(v3);
  if ( v12 == -1073741811 )
    v12 = 0;
  if ( v12 < 0 && (*(_BYTE *)(v3 + 124) & 4) != 0 )
  {
    CmpReferenceKeyControlBlockUnsafe(a1);
    *(_QWORD *)(v3 + 4104) = a1;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
    v29 = (_QWORD *)qword_1407AD060;
    v30 = (_QWORD *)(v3 + 2760);
    if ( *(__int64 **)qword_1407AD060 != &CmpFailedUnloadListHead )
      __fastfail(3u);
    *v30 = &CmpFailedUnloadListHead;
    *(_QWORD *)(v3 + 2768) = v29;
    *v29 = v30;
    qword_1407AD060 = v3 + 2760;
    ExReleasePushLockEx((ULONG_PTR)&CmpHiveListHeadLock, 0LL);
    CmpArmLazyWriter(1, 0LL, 0);
    *(_BYTE *)(v3 + 6049) = 1;
    if ( v6 )
    {
      *(_DWORD *)(v3 + 6032) = 0;
      _InterlockedOr(v31, 0);
      if ( *(_QWORD *)(v3 + 6040) )
        ExfUnblockPushLock((volatile __int64 *)(v3 + 6040), 0LL);
    }
  }
  else
  {
    LOBYTE(v11) = 1;
    v13 = *(_DWORD *)(v3 + 1400) + 4096;
    HvFreeHive(v3, v11);
    if ( v12 >= 0 && (*(_DWORD *)(v3 + 144) & 0x8000) == 0 && (__int64)(*(_QWORD *)(v3 + 2968) - v13) > 0x100000 )
      CmpDoFileSetSizeEx(v3, 0LL, v13, 0);
    CmpCmdHiveClose(v3);
    if ( v6 )
    {
      *(_DWORD *)(v3 + 6032) = 0;
      _InterlockedOr(v31, 0);
      if ( *(_QWORD *)(v3 + 6040) )
        ExfUnblockPushLock((volatile __int64 *)(v3 + 6040), 0LL);
    }
    CmpSignalUnloadEventArrayForHive(v3);
  }
  v14 = EtwpRegTraceHandle;
  v33 = 0;
  v35 = (EVENT_DESCRIPTOR)REGISTRY_PERF_EVENT_HIVE_UNLOAD_STOP;
  result = EtwEventEnabled(EtwpRegTraceHandle, &v35);
  if ( result )
  {
    *(_QWORD *)&v37.Size = 4LL;
    v37.Ptr = (ULONGLONG)&v33;
    return EtwWrite(v14, &v35, 0LL, 1u, &v37);
  }
  return result;
}
