/*
 * XREFs of ACPIBuildDeviceDpc @ 0x1C000B5C0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildProcessSynchronizationList @ 0x1C00093B8 (ACPIBuildProcessSynchronizationList.c)
 *     ACPIBuildProcessQueueList @ 0x1C0009AE0 (ACPIBuildProcessQueueList.c)
 *     ACPIPowerScheduleDpc @ 0x1C0009B6C (ACPIPowerScheduleDpc.c)
 *     ACPIBuildProcessSpecialSynchronizationList @ 0x1C000D5E8 (ACPIBuildProcessSpecialSynchronizationList.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C00286D8 (ACPIBuildSynchronizationRequestInternal.c)
 *     ACPIInternalMoveList @ 0x1C002B028 (ACPIInternalMoveList.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ACPIBuildDeviceDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  int v4; // eax
  int v5; // r9d
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rsi
  unsigned __int32 v12; // eax
  void (__fastcall *v13)(__int64); // rdx
  __int64 v14; // rdi
  signed __int32 v15; // edi
  char v16; // bp
  __int64 v17; // rsi
  unsigned __int32 v18; // eax
  __int64 (__fastcall *v19)(PSLIST_ENTRY); // rdx
  signed __int32 v20; // ebx
  __int64 v21; // rsi
  unsigned __int32 v22; // eax
  __int64 (__fastcall *v23)(PSLIST_ENTRY); // rdx
  signed __int32 v24; // ebx
  __int64 v25; // rsi
  unsigned __int32 v26; // eax
  void (__fastcall *v27)(__int64); // rdx
  signed __int32 v28; // ebx
  __int64 v29; // rsi
  unsigned __int32 v30; // eax
  __int64 (__fastcall *v31)(PSLIST_ENTRY); // rdx
  signed __int32 v32; // ebx
  char v33; // bp
  __int64 v34; // rsi
  unsigned __int32 v35; // eax
  void (__fastcall *v36)(__int64); // rdx
  signed __int32 v37; // ebx

  KeAcquireSpinLockAtDpcLevel(&AcpiBuildQueueLock);
  v4 = AcpiBuildDpcFlags;
  if ( (AcpiBuildDpcFlags & 2) == 0 )
    goto LABEL_22;
  do
  {
    AcpiBuildDpcFlags = v4 & 0xFFFFFFFD;
    if ( (__int64 *)AcpiBuildQueueList != &AcpiBuildQueueList )
      ACPIBuildProcessQueueList();
    KeReleaseSpinLockFromDpcLevel(&AcpiBuildQueueLock);
    v6 = AcpiBuildRunMethodList;
    if ( (__int64 *)AcpiBuildRunMethodList != &AcpiBuildRunMethodList )
    {
      v16 = 1;
      while ( 1 )
      {
        v17 = *(_QWORD *)v6;
        v18 = _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 24), 1, 1);
        if ( v18 >= 0xA )
          KeBugCheckEx(0xA3u, 1uLL, 0x102130uLL, 0LL, 0LL);
        v19 = AcpiBuildRunMethodDispatch[v18];
        if ( v19 )
        {
          if ( v18 != 2 )
            *(_DWORD *)(v6 + 28) = v18;
          v20 = _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 24), 1, v18);
          v19((PSLIST_ENTRY)v6);
          if ( (v20 & 0xFFFFFFFD) != 0 )
            goto LABEL_32;
        }
        else
        {
          v16 = 0;
        }
        v6 = v17;
LABEL_32:
        if ( (__int64 *)v6 == &AcpiBuildRunMethodList )
        {
          KeAcquireSpinLockAtDpcLevel(&AcpiBuildQueueLock);
          v4 = AcpiBuildDpcFlags;
          if ( v16 )
            v4 = AcpiBuildDpcFlags | 2;
          goto LABEL_21;
        }
      }
    }
    v7 = AcpiBuildOperationRegionList;
    while ( (__int64 *)v7 != &AcpiBuildOperationRegionList )
    {
      v29 = *(_QWORD *)v7;
      v30 = _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 24), 1, 1);
      if ( v30 >= 4 )
        KeBugCheckEx(0xA3u, 1uLL, 0x102130uLL, 0LL, 0LL);
      v31 = AcpiBuildOperationRegionDispatch[v30];
      if ( v31 )
      {
        if ( v30 != 2 )
          *(_DWORD *)(v7 + 28) = v30;
        v32 = _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 24), 1, v30);
        v31((PSLIST_ENTRY)v7);
        if ( (v32 & 0xFFFFFFFD) != 0 )
          continue;
      }
      v7 = v29;
    }
    v8 = AcpiBuildPowerResourceList;
    if ( (__int64 *)AcpiBuildPowerResourceList == &AcpiBuildPowerResourceList )
    {
LABEL_7:
      v9 = AcpiBuildDelayedDependencyList;
      if ( (__int64 *)AcpiBuildDelayedDependencyList != &AcpiBuildDelayedDependencyList )
      {
        do
        {
          v21 = *(_QWORD *)v9;
          v22 = _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 24), 1, 1);
          if ( v22 >= 5 )
            KeBugCheckEx(0xA3u, 1uLL, 0x102130uLL, 0LL, 0LL);
          v23 = AcpiBuildDelayedDependencyDispatch[v22];
          if ( v23 )
          {
            if ( v22 != 2 )
              *(_DWORD *)(v9 + 28) = v22;
            v24 = _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 24), 1, v22);
            v23((PSLIST_ENTRY)v9);
            if ( (v24 & 0xFFFFFFFD) != 0 )
              continue;
          }
          v9 = v21;
        }
        while ( (__int64 *)v9 != &AcpiBuildDelayedDependencyList );
        if ( (__int64 *)AcpiBuildDelayedDependencyList == &AcpiBuildDelayedDependencyList
          && (AcpiOverrideAttributes & 0x80000) != 0 )
        {
          ACPIBuildSynchronizationRequestInternal(
            RootDeviceExtension,
            (unsigned int)ACPIBuildIssueNotifyInvalidateRelations,
            RootDeviceExtension,
            v5,
            0);
        }
      }
      v10 = AcpiBuildDeviceList;
      if ( (__int64 *)AcpiBuildDeviceList != &AcpiBuildDeviceList )
      {
        do
        {
          v11 = *(_QWORD *)v10;
          v12 = _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 24), 1, 1);
          if ( v12 >= 0x22 )
            KeBugCheckEx(0xA3u, 1uLL, 0x102130uLL, 0LL, 0LL);
          v13 = (void (__fastcall *)(__int64))*(&AcpiBuildDeviceDispatch + v12);
          if ( v13 )
          {
            if ( v12 != 2 )
              *(_DWORD *)(v10 + 28) = v12;
            v15 = _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 24), 1, v12);
            v13(v10);
            if ( (v15 & 0xFFFFFFFD) != 0 )
              continue;
          }
          v10 = v11;
        }
        while ( (__int64 *)v10 != &AcpiBuildDeviceList );
        v10 = AcpiBuildDeviceList;
      }
      v14 = AcpiBuildThermalZoneList;
      if ( (__int64 *)AcpiBuildThermalZoneList != &AcpiBuildThermalZoneList )
      {
        do
        {
          v25 = *(_QWORD *)v14;
          v26 = _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 24), 1, 1);
          if ( v26 >= 8 )
            KeBugCheckEx(0xA3u, 1uLL, 0x102130uLL, 0LL, 0LL);
          v27 = (void (__fastcall *)(__int64))*(&AcpiBuildThermalZoneDispatch + v26);
          if ( v27 )
          {
            if ( v26 != 2 )
              *(_DWORD *)(v14 + 28) = v26;
            v28 = _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 24), 1, v26);
            v27(v14);
            if ( (v28 & 0xFFFFFFFD) != 0 )
              continue;
          }
          v14 = v25;
        }
        while ( (__int64 *)v14 != &AcpiBuildThermalZoneList );
        v10 = AcpiBuildDeviceList;
        v14 = AcpiBuildThermalZoneList;
      }
      if ( (__int64 *)v10 == &AcpiBuildDeviceList
        && (__int64 *)AcpiBuildOperationRegionList == &AcpiBuildOperationRegionList
        && (__int64 *)AcpiBuildPowerResourceList == &AcpiBuildPowerResourceList
        && (__int64 *)AcpiBuildRunMethodList == &AcpiBuildRunMethodList
        && (__int64 *)v14 == &AcpiBuildThermalZoneList )
      {
        KeAcquireSpinLockAtDpcLevel(&AcpiPowerQueueLock);
        if ( (__int64 *)AcpiPowerDelayedQueueList != &AcpiPowerDelayedQueueList )
        {
          ACPIInternalMoveList(&AcpiPowerDelayedQueueList, &AcpiPowerQueueList);
          ACPIPowerScheduleDpc();
        }
        KeReleaseSpinLockFromDpcLevel(&AcpiPowerQueueLock);
      }
      if ( AcpiBuildSynchronizationList != (PSLIST_ENTRY)&AcpiBuildSynchronizationList )
        ACPIBuildProcessSynchronizationList();
      if ( AcpiBuildSpecialSynchronizationList != (PSLIST_ENTRY)&AcpiBuildSpecialSynchronizationList )
        ACPIBuildProcessSpecialSynchronizationList();
      goto LABEL_20;
    }
    v33 = 1;
    do
    {
      v34 = *(_QWORD *)v8;
      v35 = _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 24), 1, 1);
      if ( v35 >= 7 )
        KeBugCheckEx(0xA3u, 1uLL, 0x102130uLL, 0LL, 0LL);
      v36 = (void (__fastcall *)(__int64))*(&AcpiBuildPowerResourceDispatch + v35);
      if ( !v36 )
      {
        v33 = 0;
LABEL_80:
        v8 = v34;
        continue;
      }
      if ( v35 != 2 )
        *(_DWORD *)(v8 + 28) = v35;
      v37 = _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 24), 1, v35);
      v36(v8);
      if ( (v37 & 0xFFFFFFFD) == 0 )
        goto LABEL_80;
    }
    while ( (__int64 *)v8 != &AcpiBuildPowerResourceList );
    if ( v33 )
      goto LABEL_7;
LABEL_20:
    KeAcquireSpinLockAtDpcLevel(&AcpiBuildQueueLock);
    v4 = AcpiBuildDpcFlags;
LABEL_21:
    ;
  }
  while ( (v4 & 2) != 0 );
LABEL_22:
  AcpiBuildDpcFlags = v4 & 0xFFFFFFFE;
  KeReleaseSpinLockFromDpcLevel(&AcpiBuildQueueLock);
}
