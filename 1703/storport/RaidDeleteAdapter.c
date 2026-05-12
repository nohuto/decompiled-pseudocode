/*
 * XREFs of RaidDeleteAdapter @ 0x1C002EE60
 * Callers:
 *     RaDriverAddDevice @ 0x1C0019B00 (RaDriverAddDevice.c)
 *     RaidAdapterRemoveDeviceIrp @ 0x1C006421C (RaidAdapterRemoveDeviceIrp.c)
 * Callees:
 *     RaidDeleteDeferredQueue @ 0x1C0030AB0 (RaidDeleteDeferredQueue.c)
 *     RaDriverDeleteDevice @ 0x1C0030BBC (RaDriverDeleteDevice.c)
 *     RaDeleteBus @ 0x1C0060774 (RaDeleteBus.c)
 *     RaidDeleteDma @ 0x1C0064704 (RaidDeleteDma.c)
 *     RaDeleteMiniport @ 0x1C0064DF4 (RaDeleteMiniport.c)
 *     RaidDeleteResourceList @ 0x1C0064E64 (RaidDeleteResourceList.c)
 *     StorFreeContiguousMemory @ 0x1C0064EAC (StorFreeContiguousMemory.c)
 *     PortFreeDriverParameters @ 0x1C0065D64 (PortFreeDriverParameters.c)
 */

void __fastcall RaidDeleteAdapter(__int64 a1)
{
  KSPIN_LOCK *v1; // rdi
  KIRQL v3; // si
  __int64 v4; // rdx
  __int64 v5; // rcx
  void *v6; // rcx
  __int64 v7; // rcx
  void *v8; // rcx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v9; // rcx
  void *v10; // rcx
  KIRQL v11; // di
  void *v12; // rcx
  _DWORD *v13; // rsi
  USHORT HighestNodeNumber; // ax
  unsigned int v15; // edi
  unsigned int v16; // ebp
  PSLIST_ENTRY v17; // rax
  void *v18; // rcx
  void *v19; // rcx
  void *v20; // rcx
  void *v21; // rcx
  signed __int32 v22[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = (KSPIN_LOCK *)(a1 + 2112);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 2112));
  if ( (*(_DWORD *)(a1 + 2144) & 2) != 0 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 2120), 0);
  *(_DWORD *)(a1 + 2144) = 0;
  *(_QWORD *)(a1 + 2120) = 0LL;
  KeReleaseSpinLock(v1, v3);
  RaidDeleteResourceList(a1 + 280);
  LOBYTE(v4) = *(_BYTE *)(a1 + 4450) == 0;
  RaDeleteMiniport(a1 + 296, v4);
  if ( *(_DWORD *)(a1 + 744) )
    StorFreeContiguousMemory(v5, a1 + 728);
  if ( *(_BYTE *)(a1 + 4450) )
    RaidDeleteDma((void *)(a1 + 696));
  v6 = *(void **)(a1 + 4632);
  if ( v6 )
  {
    MmFreeContiguousMemory(v6);
    *(_QWORD *)(a1 + 4632) = 0LL;
  }
  RaDeleteBus(a1 + 592);
  RaidDeleteDeferredQueue(a1 + 1088);
  RaidDeleteDeferredQueue(a1 + 1472);
  v7 = *(_QWORD *)(a1 + 2080);
  *(_DWORD *)a1 = -1;
  if ( v7 )
  {
    PortFreeDriverParameters();
    *(_QWORD *)(a1 + 2080) = 0LL;
  }
  v8 = *(void **)(a1 + 4456);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0);
    *(_QWORD *)(a1 + 4456) = 0LL;
  }
  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 2056));
  RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 5624));
  RaDriverDeleteDevice(a1);
  v9 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(a1 + 256);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( v9 )
  {
    ExFreeCacheAwareRundownProtection(v9);
    *(_QWORD *)(a1 + 256) = 0LL;
  }
  if ( *(_BYTE *)(a1 + 4449) )
  {
    v10 = *(void **)(a1 + 4440);
    if ( v10 )
    {
      ExFreePoolWithTag(v10, 0x72446152u);
      *(_QWORD *)(a1 + 4440) = 0LL;
    }
  }
  if ( (*(_BYTE *)(a1 + 4740) & 1) != 0 )
  {
    v11 = KeAcquireSpinLockRaiseToDpc(&g_RaidDPCRedirectionInitLock);
    if ( _InterlockedExchangeAdd(&g_RaidPerfRedirectRefCount, 0xFFFFFFFF) == 1 )
    {
      HIDWORD(WPP_MAIN_CB.Reserved) = 0;
      _InterlockedOr(v22, 0);
      ExFreePoolWithTag(*(&WPP_MAIN_CB.Reserved + 1), 0x72446152u);
      ExFreePoolWithTag(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink, 0x72446152u);
      *((_QWORD *)&WPP_MAIN_CB.Reserved + 1) = 0LL;
      WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink = 0LL;
    }
    KeReleaseSpinLock(&g_RaidDPCRedirectionInitLock, v11);
    v12 = *(void **)(a1 + 4760);
    if ( v12 )
    {
      ExFreePoolWithTag(v12, 0x72446152u);
      *(_QWORD *)(a1 + 4760) = 0LL;
    }
  }
  if ( *(int *)(a1 + 4744) > 1 )
  {
    v13 = 0LL;
    HighestNodeNumber = KeQueryHighestNodeNumber();
    v15 = 0;
    v16 = HighestNodeNumber + 1;
    if ( HighestNodeNumber != -1 )
    {
      do
      {
        v17 = ExpInterlockedFlushSList((PSLIST_HEADER)(*(_QWORD *)(a1 + 4752) + ((unsigned __int64)v15 << 6)));
        do
        {
          v13 = v17;
          if ( !HIDWORD(v17[1].Next) )
            break;
          v17 = v17->Next;
        }
        while ( v17 );
        if ( !v13[5] )
          break;
        ++v15;
      }
      while ( v15 < v16 );
    }
    ExFreePoolWithTag(v13, 0x54436152u);
    ExFreePoolWithTag(*(PVOID *)(a1 + 4752), 0x54436152u);
  }
  v18 = *(void **)(a1 + 4808);
  if ( v18 )
  {
    ExFreePoolWithTag(v18, 0x51536152u);
    *(_QWORD *)(a1 + 4808) = 0LL;
  }
  v19 = *(void **)(a1 + 4976);
  if ( v19 )
  {
    ExFreePoolWithTag(v19, 0x4D566152u);
    *(_QWORD *)(a1 + 4976) = 0LL;
  }
  if ( !*(_DWORD *)(a1 + 144) )
    ExFreePoolWithTag(*(PVOID *)(a1 + 160), 0x74636944u);
  v20 = *(void **)(a1 + 48);
  if ( v20 )
    ExFreePoolWithTag(v20, 0);
  v21 = *(void **)(a1 + 5472);
  if ( v21 )
  {
    ExFreePoolWithTag(v21, 0x45436152u);
    *(_QWORD *)(a1 + 5472) = 0LL;
  }
  *(_DWORD *)(a1 + 5056) = -1;
  *(_DWORD *)(a1 + 5060) = 0;
  *(_QWORD *)(a1 + 5064) = 0LL;
}
