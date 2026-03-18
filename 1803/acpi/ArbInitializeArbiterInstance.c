/*
 * XREFs of ArbInitializeArbiterInstance @ 0x1C00943AC
 * Callers:
 *     AcpiInitializeBusNumberArbiter @ 0x1C0078DDC (AcpiInitializeBusNumberArbiter.c)
 *     AcpiInitializeMemoryArbiter @ 0x1C007E6A0 (AcpiInitializeMemoryArbiter.c)
 *     AcpiInitializePortArbiter @ 0x1C00811FC (AcpiInitializePortArbiter.c)
 *     AcpiIrqLibInitializeGlobalState @ 0x1C009C790 (AcpiIrqLibInitializeGlobalState.c)
 * Callees:
 *     RtlInitializeRangeList_0 @ 0x1C0003F92 (RtlInitializeRangeList_0.c)
 *     ArbBuildAssignmentOrdering @ 0x1C0093B00 (ArbBuildAssignmentOrdering.c)
 */

__int64 __fastcall ArbInitializeArbiterInstance(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  struct _KEVENT *PoolWithTag; // rax
  int v8; // edi
  PVOID v9; // rax
  PVOID v10; // rax
  PVOID v11; // rax
  struct _KEVENT *v12; // rax
  void *v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  void *v16; // rcx
  void *v17; // rcx

  *(_QWORD *)(a1 + 312) = a2;
  *(_DWORD *)a1 = 1935831617;
  PoolWithTag = (struct _KEVENT *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x4D627241u);
  *(_QWORD *)(a1 + 8) = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_2;
  KeInitializeEvent(PoolWithTag, SynchronizationEvent, 1u);
  v9 = ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x41627241u);
  *(_QWORD *)(a1 + 112) = v9;
  if ( !v9 )
    goto LABEL_2;
  *(_DWORD *)(a1 + 104) = 4096;
  v10 = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x52627241u);
  *(_QWORD *)(a1 + 40) = v10;
  if ( !v10 )
    goto LABEL_2;
  v11 = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x52627241u);
  *(_QWORD *)(a1 + 48) = v11;
  if ( v11
    && (RtlInitializeRangeList_0(*(PRTL_RANGE_LIST *)(a1 + 40)),
        RtlInitializeRangeList_0(*(PRTL_RANGE_LIST *)(a1 + 48)),
        *(_BYTE *)(a1 + 288) = 0,
        v12 = (struct _KEVENT *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x4D627241u),
        (*(_QWORD *)(a1 + 296) = v12) != 0LL) )
  {
    KeInitializeEvent(v12, NotificationEvent, 1u);
    *(_QWORD *)(a1 + 16) = a4;
    *(_QWORD *)(a1 + 24) = L"Root";
    *(_DWORD *)(a1 + 32) = a3;
    if ( !*(_QWORD *)(a1 + 152) )
      *(_QWORD *)(a1 + 152) = ArbTestAllocation;
    if ( !*(_QWORD *)(a1 + 160) )
      *(_QWORD *)(a1 + 160) = ArbRetestAllocation;
    if ( !*(_QWORD *)(a1 + 168) )
      *(_QWORD *)(a1 + 168) = ArbCommitAllocation;
    if ( !*(_QWORD *)(a1 + 176) )
      *(_QWORD *)(a1 + 176) = ArbRollbackAllocation;
    if ( !*(_QWORD *)(a1 + 208) )
      *(_QWORD *)(a1 + 208) = ArbAddReserved;
    if ( !*(_QWORD *)(a1 + 224) )
      *(_QWORD *)(a1 + 224) = ArbPreprocessEntry;
    if ( !*(_QWORD *)(a1 + 232) )
      *(_QWORD *)(a1 + 232) = ArbAllocateEntry;
    if ( !*(_QWORD *)(a1 + 240) )
      *(_QWORD *)(a1 + 240) = ArbGetNextAllocationRange;
    if ( !*(_QWORD *)(a1 + 248) )
      *(_QWORD *)(a1 + 248) = ArbFindSuitableRange;
    if ( !*(_QWORD *)(a1 + 256) )
      *(_QWORD *)(a1 + 256) = ArbAddAllocation;
    if ( !*(_QWORD *)(a1 + 264) )
      *(_QWORD *)(a1 + 264) = ArbBacktrackAllocation;
    if ( !*(_QWORD *)(a1 + 272) )
      *(_QWORD *)(a1 + 272) = ArbOverrideConflict;
    if ( !*(_QWORD *)(a1 + 184) )
      *(_QWORD *)(a1 + 184) = ArbBootAllocation;
    if ( !*(_QWORD *)(a1 + 200) )
      *(_QWORD *)(a1 + 200) = ArbQueryConflict;
    if ( !*(_QWORD *)(a1 + 192) )
      *(_QWORD *)(a1 + 192) = ArbPreprocessEntry;
    if ( !*(_QWORD *)(a1 + 216) )
      *(_QWORD *)(a1 + 216) = ArbStartArbiter;
    if ( !*(_QWORD *)(a1 + 280) )
      *(_QWORD *)(a1 + 280) = &ArbInitializeRangeList;
    v8 = ArbBuildAssignmentOrdering(a1);
    if ( v8 >= 0 )
      return 0LL;
  }
  else
  {
LABEL_2:
    v8 = -1073741670;
  }
  v13 = *(void **)(a1 + 8);
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  v14 = *(void **)(a1 + 296);
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  v15 = *(void **)(a1 + 40);
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
  v16 = *(void **)(a1 + 48);
  if ( v16 )
    ExFreePoolWithTag(v16, 0);
  v17 = *(void **)(a1 + 112);
  if ( v17 )
    ExFreePoolWithTag(v17, 0);
  return (unsigned int)v8;
}
