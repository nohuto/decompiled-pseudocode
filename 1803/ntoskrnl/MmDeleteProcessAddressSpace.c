/*
 * XREFs of MmDeleteProcessAddressSpace @ 0x1405128C0
 * Callers:
 *     PspProcessDelete @ 0x14006F630 (PspProcessDelete.c)
 * Callees:
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     PsReturnProcessQuota @ 0x1400703DC (PsReturnProcessQuota.c)
 *     MiDeleteWorkingSetList @ 0x14007040C (MiDeleteWorkingSetList.c)
 *     MiContractPagingFiles @ 0x140070440 (MiContractPagingFiles.c)
 *     MiUnlinkWorkingSet @ 0x140070894 (MiUnlinkWorkingSet.c)
 *     MiDeleteFinalPageTables @ 0x140070A70 (MiDeleteFinalPageTables.c)
 *     MiEmptyPageAccessLog @ 0x14007A620 (MiEmptyPageAccessLog.c)
 *     MiGetSharedVm @ 0x1400E47F8 (MiGetSharedVm.c)
 *     MiGetProcessPartition @ 0x1401199C8 (MiGetProcessPartition.c)
 *     MiReturnResidentAvailable @ 0x14013511C (MiReturnResidentAvailable.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     MiReturnPartitionResidentAvailable @ 0x140265758 (MiReturnPartitionResidentAvailable.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x14054FD20 (PspChangeJobMemoryUsageByProcess.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x14057A8C0 (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MiDeletePhysicalProcessPages @ 0x14074FB68 (MiDeletePhysicalProcessPages.c)
 */

__int64 __fastcall MmDeleteProcessAddressSpace(ULONG_PTR BugCheckParameter1)
{
  __int64 v1; // r14
  ULONG_PTR v3; // r9
  char *v4; // rbx
  LONG *SharedVm; // rsi
  __int64 v6; // r15
  __int64 v7; // rdx
  ULONG_PTR *ProcessPartition; // rbp
  _QWORD *v9; // rcx
  void *v10; // rcx
  _QWORD *v12; // rax
  ULONG_PTR v13; // rdx
  _QWORD *i; // rax
  char *j; // rsi
  _QWORD *v16; // rax
  void *v17; // rcx

  v1 = BugCheckParameter1 + 1280;
  MiUnlinkWorkingSet(BugCheckParameter1 + 1280, 0LL);
  v3 = *(_QWORD *)(BugCheckParameter1 + 928);
  v4 = *(char **)(BugCheckParameter1 + 1200);
  if ( v3 )
  {
    if ( v4 && *((_QWORD *)v4 + 2) && *((_DWORD *)v4 + 8) == 1 )
    {
      v12 = *(_QWORD **)v4;
      v13 = 0LL;
      while ( v12 )
      {
        v13 = (ULONG_PTR)v12;
        v12 = (_QWORD *)*v12;
      }
      if ( !v13 )
      {
        for ( i = (_QWORD *)*((_QWORD *)v4 + 1); i; i = (_QWORD *)*i )
          v13 = (ULONG_PTR)i;
      }
      KeBugCheckEx(0xCBu, v13, 0LL, *(_QWORD *)(v13 + 24), *(_QWORD *)(BugCheckParameter1 + 928));
    }
    KeBugCheckEx(0x76u, 0LL, BugCheckParameter1, v3, *(_QWORD *)(BugCheckParameter1 + 1200));
  }
  if ( v4 )
  {
    for ( j = *(char **)(BugCheckParameter1 + 1200); ; j = v4 + 8 )
    {
      while ( 1 )
      {
        v16 = *(_QWORD **)j;
        if ( !*(_QWORD *)j )
          break;
        do
        {
          v17 = v16;
          v16 = (_QWORD *)*v16;
        }
        while ( v16 );
        if ( !v17 )
          break;
        ExFreePoolWithTag(v17, 0);
      }
      if ( j != v4 )
        break;
    }
    ExFreePoolWithTag(v4, 0);
  }
  SharedVm = MiGetSharedVm(v1);
  v6 = MiDeleteFinalPageTables((_KPROCESS *)BugCheckParameter1);
  PsReturnProcessQuota((struct _KPROCESS *)BugCheckParameter1, v7, 4LL);
  ProcessPartition = (ULONG_PTR *)MiGetProcessPartition(BugCheckParameter1);
  if ( ProcessPartition == &MiSystemPartition )
    MiReturnResidentAvailable(4uLL);
  else
    MiReturnPartitionResidentAvailable((__int64)ProcessPartition, 4uLL);
  if ( *(_QWORD *)(BugCheckParameter1 + 1032) )
    MiDeletePhysicalProcessPages(BugCheckParameter1);
  v9 = (_QWORD *)*((_QWORD *)SharedVm + 6);
  if ( v9 )
  {
    MiEmptyPageAccessLog(v9);
    *((_QWORD *)SharedVm + 6) = 0LL;
  }
  v10 = (void *)*((_QWORD *)SharedVm + 4);
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0);
    *((_QWORD *)SharedVm + 4) = 0LL;
  }
  if ( (*(_DWORD *)(BugCheckParameter1 + 768) & 0x10) != 0 )
    PspChangeJobMemoryUsageByProcess(2LL, -4LL, BugCheckParameter1);
  MiReturnCommit((__int64)ProcessPartition, 4 - v6);
  MiDeleteWorkingSetList(v1);
  if ( *(_QWORD *)(BugCheckParameter1 + 1024) )
    MiReleaseProcessReferenceToSessionDataPage();
  return MiContractPagingFiles((__int64)ProcessPartition);
}
