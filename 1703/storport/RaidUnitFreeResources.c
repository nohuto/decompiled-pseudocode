/*
 * XREFs of RaidUnitFreeResources @ 0x1C00132D0
 * Callers:
 *     RaidDeleteUnit @ 0x1C0013250 (RaidDeleteUnit.c)
 *     RaidUnitAllocateResources @ 0x1C0017048 (RaidUnitAllocateResources.c)
 * Callees:
 *     StorDeleteScsiIdentity @ 0x1C0015A54 (StorDeleteScsiIdentity.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C001D990 (RaidAdapterPoFxIdleComponent.c)
 *     StorpUninititalizePerUnitPerfTelemetry @ 0x1C0045B7C (StorpUninititalizePerUnitPerfTelemetry.c)
 *     RaDeleteTagList @ 0x1C005E580 (RaDeleteTagList.c)
 */

__int64 __fastcall RaidUnitFreeResources(__int64 a1)
{
  unsigned int v2; // edi
  unsigned int HighestNodeNumber; // r8d
  __int64 v4; // rcx
  void *v5; // rdi
  void *v6; // rcx
  struct _IO_WORKITEM *v7; // rcx
  struct _IO_WORKITEM *v8; // rcx
  struct _IO_WORKITEM *v9; // rcx
  __int64 v10; // rcx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v11; // rcx
  void *v12; // rcx
  char v14; // al

  KeCancelTimer((PKTIMER)(a1 + 664));
  KeCancelTimer((PKTIMER)(a1 + 792));
  KeFlushQueuedDpcs();
  v2 = *(_DWORD *)(a1 + 1408);
  if ( v2 != -1 )
  {
    HighestNodeNumber = KeQueryHighestNodeNumber();
    if ( v2 / *(_DWORD *)(a1 + 328) < HighestNodeNumber + 1 )
      HighestNodeNumber = v2 / *(_DWORD *)(a1 + 328);
    ExpInterlockedPushEntrySList(
      (PSLIST_HEADER)(*(_QWORD *)(a1 + 256) + ((unsigned __int64)HighestNodeNumber << 6)),
      (PSLIST_ENTRY)(*(_QWORD *)(a1 + 320) + 16LL * v2));
  }
  v4 = *(_QWORD *)(a1 + 1424);
  if ( v4 )
    MmFreeContiguousMemory((PVOID)(v4 - 16));
  v5 = *(void **)(a1 + 208);
  if ( v5 )
  {
    KeQueryHighestNodeNumber();
    ExFreePoolWithTag(v5, 0x51506152u);
    *(_QWORD *)(a1 + 208) = 0LL;
  }
  StorDeleteScsiIdentity(a1 + 96);
  RaDeleteTagList(a1 + 256);
  v6 = *(void **)(a1 + 16);
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0x45556152u);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  if ( *(_DWORD *)(a1 + 1844) )
    StorpUninititalizePerUnitPerfTelemetry(a1);
  if ( (*(_BYTE *)(a1 + 152) & 0x10) != 0 )
  {
    IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(a1 + 8), 2u);
    *(_BYTE *)(a1 + 152) &= ~0x10u;
  }
  v7 = *(struct _IO_WORKITEM **)(a1 + 1560);
  if ( v7 )
  {
    IoFreeWorkItem(v7);
    *(_QWORD *)(a1 + 1560) = 0LL;
  }
  v8 = *(struct _IO_WORKITEM **)(a1 + 1576);
  if ( v8 )
  {
    IoFreeWorkItem(v8);
    *(_QWORD *)(a1 + 1576) = 0LL;
  }
  v9 = *(struct _IO_WORKITEM **)(a1 + 1600);
  if ( v9 )
  {
    IoFreeWorkItem(v9);
    *(_QWORD *)(a1 + 1600) = 0LL;
  }
  v10 = *(_QWORD *)(a1 + 24);
  if ( v10 )
  {
    if ( *(_QWORD *)(v10 + 5088) )
    {
      v14 = *(_BYTE *)(a1 + 153);
      if ( (v14 & 8) != 0 )
      {
        *(_BYTE *)(a1 + 153) = v14 & 0xF7;
        RaidAdapterPoFxIdleComponent(v10, 0LL, 0LL);
      }
    }
  }
  v11 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(a1 + 1448);
  if ( v11 )
  {
    ExFreeCacheAwareRundownProtection(v11);
    *(_QWORD *)(a1 + 1448) = 0LL;
  }
  v12 = *(void **)(a1 + 1464);
  if ( v12 )
  {
    ExFreePoolWithTag(v12, 0x57506152u);
    *(_QWORD *)(a1 + 1464) = 0LL;
  }
  return 0LL;
}
