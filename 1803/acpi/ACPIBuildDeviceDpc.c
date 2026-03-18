/*
 * XREFs of ACPIBuildDeviceDpc @ 0x1C0009DE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 *     ACPIBuildProcessGenericList @ 0x1C000EBAC (ACPIBuildProcessGenericList.c)
 *     ACPIBuildProcessSpecialSynchronizationList @ 0x1C000FEA8 (ACPIBuildProcessSpecialSynchronizationList.c)
 *     ACPIBuildProcessSynchronizationList @ 0x1C0010104 (ACPIBuildProcessSynchronizationList.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C00117C0 (ACPIBuildSynchronizationRequestInternal.c)
 *     ACPIPowerScheduleDpc @ 0x1C001F95C (ACPIPowerScheduleDpc.c)
 *     ACPIInternalMoveList @ 0x1C002A20C (ACPIInternalMoveList.c)
 */

void __fastcall ACPIBuildDeviceDpc(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  int v4; // eax
  __int64 v5; // rcx
  __int64 *v6; // rdx
  __int64 **v7; // rax
  __int64 v8; // rax
  __int64 *v9; // r8
  __int64 (__fastcall *v10)(PVOID); // rdx
  __int64 v11; // rcx
  int v12; // r9d
  __int64 v13; // rdi
  char v14; // bp
  __int64 v15; // rsi
  unsigned __int32 v16; // eax
  __int64 (__fastcall *v17)(PVOID); // rdx
  signed __int32 v18; // ebx
  __int64 v19; // rdi
  unsigned __int64 v20; // r8
  __int64 v21; // rsi
  unsigned __int32 v22; // eax
  signed __int32 v23; // ebx
  __int64 v24; // rdi
  char v25; // bp
  __int64 v26; // rsi
  unsigned __int32 v27; // eax
  signed __int32 v28; // ebx
  __int64 v29; // rdi
  __int64 v30; // rsi
  unsigned __int32 v31; // eax
  signed __int32 v32; // ebx
  __int64 v33; // rdi
  __int64 v34; // rsi
  unsigned __int32 v35; // eax
  signed __int32 v36; // ebx

  KeAcquireSpinLockAtDpcLevel(&AcpiBuildQueueLock);
  v4 = AcpiBuildDpcFlags;
  if ( (AcpiBuildDpcFlags & 2) == 0 )
    goto LABEL_77;
  do
  {
    v5 = AcpiBuildQueueList;
    AcpiBuildDpcFlags = v4 & 0xFFFFFFFD;
    if ( (__int64 *)AcpiBuildQueueList != &AcpiBuildQueueList )
    {
      do
      {
        v6 = *(__int64 **)v5;
        if ( (*(_DWORD *)(v5 + 20) & 0x40) == 0 )
        {
          if ( v6[1] != v5 || (v7 = *(__int64 ***)(v5 + 8), *v7 != (__int64 *)v5) )
            __fastfail(3u);
          *v7 = v6;
          v6[1] = (__int64)v7;
          v8 = *(_QWORD *)(v5 + 128);
          v9 = *(__int64 **)(v8 + 8);
          if ( *v9 != v8 )
            __fastfail(3u);
          *(_QWORD *)v5 = v8;
          *(_QWORD *)(v5 + 8) = v9;
          *v9 = v5;
          *(_QWORD *)(v8 + 8) = v5;
          *(_DWORD *)(v5 + 20) &= ~0x1000u;
          *(_QWORD *)(v5 + 128) = 0LL;
        }
        v5 = (__int64)v6;
      }
      while ( v6 != &AcpiBuildQueueList );
    }
    KeReleaseSpinLockFromDpcLevel(&AcpiBuildQueueLock);
    v13 = AcpiBuildRunMethodList;
    if ( (__int64 *)AcpiBuildRunMethodList == &AcpiBuildRunMethodList )
    {
      v19 = AcpiBuildOperationRegionList;
      v20 = 0x1C0000000uLL;
      while ( (__int64 *)v19 != &AcpiBuildOperationRegionList )
      {
        v21 = *(_QWORD *)v19;
        v22 = _InterlockedCompareExchange((volatile signed __int32 *)(v19 + 24), 1, 1);
        if ( v22 >= 4 )
          KeBugCheckEx(0xA3u, 1uLL, 0x102132uLL, 0LL, 0LL);
        v11 = v22;
        v10 = AcpiBuildOperationRegionDispatch[v22];
        if ( v10 )
        {
          if ( v22 != 2 )
            *(_DWORD *)(v19 + 28) = v22;
          v23 = _InterlockedCompareExchange((volatile signed __int32 *)(v19 + 24), 1, v22);
          ((void (__fastcall *)(__int64, __int64 (__fastcall *)(PVOID), unsigned __int64))v10)(v19, v10, 0x1C0000000uLL);
          v20 = 0x1C0000000uLL;
          if ( (v23 & 0xFFFFFFFD) != 0 )
            continue;
        }
        v19 = v21;
      }
      v24 = AcpiBuildPowerResourceList;
      if ( (__int64 *)AcpiBuildPowerResourceList == &AcpiBuildPowerResourceList )
      {
LABEL_42:
        v29 = AcpiBuildDelayedDependencyList;
        if ( (__int64 *)AcpiBuildDelayedDependencyList != &AcpiBuildDelayedDependencyList )
        {
          do
          {
            v30 = *(_QWORD *)v29;
            v31 = _InterlockedCompareExchange((volatile signed __int32 *)(v29 + 24), 1, 1);
            if ( v31 >= 5 )
              KeBugCheckEx(0xA3u, 1uLL, 0x102132uLL, 0LL, 0LL);
            v11 = v31;
            v10 = AcpiBuildDelayedDependencyDispatch[v31];
            if ( v10 )
            {
              if ( v31 != 2 )
                *(_DWORD *)(v29 + 28) = v31;
              v32 = _InterlockedCompareExchange((volatile signed __int32 *)(v29 + 24), 1, v31);
              ((void (__fastcall *)(__int64, __int64 (__fastcall *)(PVOID), unsigned __int64))v10)(
                v29,
                v10,
                0x1C0000000uLL);
              v20 = 0x1C0000000uLL;
              if ( (v32 & 0xFFFFFFFD) != 0 )
                continue;
            }
            v29 = v30;
          }
          while ( (__int64 *)v29 != &AcpiBuildDelayedDependencyList );
          if ( (__int64 *)AcpiBuildDelayedDependencyList == &AcpiBuildDelayedDependencyList
            && (AcpiOverrideAttributes & 0x80000) != 0 )
          {
            ACPIBuildSynchronizationRequestInternal(
              RootDeviceExtension,
              (unsigned int)ACPIBuildIssueNotifyInvalidateRelations,
              RootDeviceExtension,
              v12,
              0);
            v20 = 0x1C0000000uLL;
          }
        }
        if ( (__int64 *)AcpiBuildDeviceList != &AcpiBuildDeviceList )
        {
          ACPIBuildProcessGenericList(&AcpiBuildDeviceList, &AcpiBuildDeviceDispatch, 34LL);
          v20 = 0x1C0000000uLL;
        }
        v33 = AcpiBuildThermalZoneList;
        while ( (__int64 *)v33 != &AcpiBuildThermalZoneList )
        {
          v34 = *(_QWORD *)v33;
          v35 = _InterlockedCompareExchange((volatile signed __int32 *)(v33 + 24), 1, 1);
          if ( v35 >= 8 )
            KeBugCheckEx(0xA3u, 1uLL, 0x102132uLL, 0LL, 0LL);
          v11 = v35;
          v10 = *(&AcpiBuildThermalZoneDispatch + v35);
          if ( v10 )
          {
            if ( v35 != 2 )
              *(_DWORD *)(v33 + 28) = v35;
            v36 = _InterlockedCompareExchange((volatile signed __int32 *)(v33 + 24), 1, v35);
            ((void (__fastcall *)(__int64, __int64 (__fastcall *)(PVOID), unsigned __int64))v10)(
              v33,
              v10,
              0x1C0000000uLL);
            v20 = 0x1C0000000uLL;
            if ( (v36 & 0xFFFFFFFD) != 0 )
              continue;
          }
          v33 = v34;
        }
        if ( (__int64 *)AcpiBuildDeviceList == &AcpiBuildDeviceList
          && (__int64 *)AcpiBuildOperationRegionList == &AcpiBuildOperationRegionList
          && (__int64 *)AcpiBuildPowerResourceList == &AcpiBuildPowerResourceList
          && (__int64 *)AcpiBuildRunMethodList == &AcpiBuildRunMethodList
          && (__int64 *)AcpiBuildThermalZoneList == &AcpiBuildThermalZoneList )
        {
          KeAcquireSpinLockAtDpcLevel(&AcpiPowerQueueLock);
          if ( (__int64 *)AcpiPowerDelayedQueueList != &AcpiPowerDelayedQueueList )
          {
            ACPIInternalMoveList(&AcpiPowerDelayedQueueList, &AcpiPowerQueueList);
            ACPIPowerScheduleDpc();
          }
          KeReleaseSpinLockFromDpcLevel(&AcpiPowerQueueLock);
        }
        if ( AcpiBuildSynchronizationList != &AcpiBuildSynchronizationList )
          ACPIBuildProcessSynchronizationList(v11, v10, v20);
        if ( AcpiBuildSpecialSynchronizationList != &AcpiBuildSpecialSynchronizationList )
          ACPIBuildProcessSpecialSynchronizationList(v11, v10, v20);
        goto LABEL_75;
      }
      v25 = 1;
      while ( 1 )
      {
        v26 = *(_QWORD *)v24;
        v27 = _InterlockedCompareExchange((volatile signed __int32 *)(v24 + 24), 1, 1);
        if ( v27 >= 7 )
          KeBugCheckEx(0xA3u, 1uLL, 0x102132uLL, 0LL, 0LL);
        v11 = v27;
        v10 = AcpiBuildPowerResourceDispatch[v27];
        if ( v10 )
        {
          if ( v27 != 2 )
            *(_DWORD *)(v24 + 28) = v27;
          v28 = _InterlockedCompareExchange((volatile signed __int32 *)(v24 + 24), 1, v27);
          ((void (__fastcall *)(__int64, __int64 (__fastcall *)(PVOID), unsigned __int64))v10)(v24, v10, 0x1C0000000uLL);
          v20 = 0x1C0000000uLL;
          if ( (v28 & 0xFFFFFFFD) != 0 )
            goto LABEL_40;
        }
        else
        {
          v25 = 0;
        }
        v24 = v26;
LABEL_40:
        if ( (__int64 *)v24 == &AcpiBuildPowerResourceList )
        {
          if ( v25 )
            goto LABEL_42;
LABEL_75:
          KeAcquireSpinLockAtDpcLevel(&AcpiBuildQueueLock);
          goto LABEL_76;
        }
      }
    }
    v14 = 1;
    do
    {
      v15 = *(_QWORD *)v13;
      v16 = _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 24), 1, 1);
      if ( v16 >= 0xA )
        KeBugCheckEx(0xA3u, 1uLL, 0x102132uLL, 0LL, 0LL);
      v17 = AcpiBuildRunMethodDispatch[v16];
      if ( !v17 )
      {
        v14 = 0;
LABEL_18:
        v13 = v15;
        continue;
      }
      if ( v16 != 2 )
        *(_DWORD *)(v13 + 28) = v16;
      v18 = _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 24), 1, v16);
      v17((PVOID)v13);
      if ( (v18 & 0xFFFFFFFD) == 0 )
        goto LABEL_18;
    }
    while ( (__int64 *)v13 != &AcpiBuildRunMethodList );
    KeAcquireSpinLockAtDpcLevel(&AcpiBuildQueueLock);
    if ( v14 )
      AcpiBuildDpcFlags |= 2u;
LABEL_76:
    v4 = AcpiBuildDpcFlags;
  }
  while ( (AcpiBuildDpcFlags & 2) != 0 );
LABEL_77:
  AcpiBuildDpcFlags = v4 & 0xFFFFFFFE;
  KeReleaseSpinLockFromDpcLevel(&AcpiBuildQueueLock);
}
