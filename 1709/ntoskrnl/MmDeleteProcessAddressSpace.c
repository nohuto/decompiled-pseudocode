/*
 * XREFs of MmDeleteProcessAddressSpace @ 0x1404FB9A4
 * Callers:
 *     PspProcessDelete @ 0x1400B8F70 (PspProcessDelete.c)
 * Callees:
 *     MiEmptyPageAccessLog @ 0x140011730 (MiEmptyPageAccessLog.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiReturnCommit @ 0x140036530 (MiReturnCommit.c)
 *     MiGetProcessPartition @ 0x14003ADE0 (MiGetProcessPartition.c)
 *     MiDeleteFinalPageTables @ 0x1400B7F8C (MiDeleteFinalPageTables.c)
 *     MiContractPagingFiles @ 0x1400B866C (MiContractPagingFiles.c)
 *     MiDeleteWorkingSetList @ 0x1400B8724 (MiDeleteWorkingSetList.c)
 *     PsReturnProcessQuota @ 0x1400B8758 (PsReturnProcessQuota.c)
 *     MiUnlinkWorkingSet @ 0x1400B8788 (MiUnlinkWorkingSet.c)
 *     MiReturnResidentAvailable @ 0x1400BFE10 (MiReturnResidentAvailable.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MiReturnPartitionResidentAvailable @ 0x14022AC50 (MiReturnPartitionResidentAvailable.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PsChangeJobMemoryUsage @ 0x1404961D4 (PsChangeJobMemoryUsage.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x14059081C (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MiDeletePhysicalProcessPages @ 0x1406E5634 (MiDeletePhysicalProcessPages.c)
 */

__int64 __fastcall MmDeleteProcessAddressSpace(ULONG_PTR BugCheckParameter1)
{
  __int64 v1; // r14
  ULONG_PTR v3; // r9
  char *v4; // rbx
  _QWORD *v5; // rax
  ULONG_PTR v6; // rdx
  _QWORD *i; // rax
  char *j; // rsi
  _QWORD *v9; // rax
  void *v10; // rcx
  LONG *SharedVm; // rsi
  __int64 v12; // r15
  __int64 v13; // rdx
  ULONG_PTR *ProcessPartition; // rbp
  _QWORD *v15; // rcx
  void *v16; // rcx

  v1 = BugCheckParameter1 + 1280;
  MiUnlinkWorkingSet(BugCheckParameter1 + 1280, 0LL);
  v3 = *(_QWORD *)(BugCheckParameter1 + 928);
  v4 = *(char **)(BugCheckParameter1 + 1200);
  if ( v3 )
  {
    if ( v4 && *((_QWORD *)v4 + 2) && *((_DWORD *)v4 + 8) == 1 )
    {
      v5 = *(_QWORD **)v4;
      v6 = 0LL;
      while ( v5 )
      {
        v6 = (ULONG_PTR)v5;
        v5 = (_QWORD *)*v5;
      }
      if ( !v6 )
      {
        for ( i = (_QWORD *)*((_QWORD *)v4 + 1); i; i = (_QWORD *)*i )
          v6 = (ULONG_PTR)i;
      }
      KeBugCheckEx(0xCBu, v6, 0LL, *(_QWORD *)(v6 + 24), *(_QWORD *)(BugCheckParameter1 + 928));
    }
    KeBugCheckEx(0x76u, 0LL, BugCheckParameter1, v3, *(_QWORD *)(BugCheckParameter1 + 1200));
  }
  if ( v4 )
  {
    for ( j = *(char **)(BugCheckParameter1 + 1200); ; j = v4 + 8 )
    {
      while ( 1 )
      {
        v9 = *(_QWORD **)j;
        if ( !*(_QWORD *)j )
          break;
        do
        {
          v10 = v9;
          v9 = (_QWORD *)*v9;
        }
        while ( v9 );
        if ( !v10 )
          break;
        ExFreePoolWithTag(v10, 0);
      }
      if ( j != v4 )
        break;
    }
    ExFreePoolWithTag(v4, 0);
  }
  SharedVm = MiGetSharedVm(v1);
  v12 = MiDeleteFinalPageTables((_KPROCESS *)BugCheckParameter1);
  PsReturnProcessQuota(BugCheckParameter1, v13, 4uLL);
  ProcessPartition = (ULONG_PTR *)MiGetProcessPartition(BugCheckParameter1);
  if ( ProcessPartition == &MiSystemPartition )
    MiReturnResidentAvailable(4uLL);
  else
    MiReturnPartitionResidentAvailable((__int64)ProcessPartition, 4uLL);
  if ( *(_QWORD *)(BugCheckParameter1 + 1032) )
    MiDeletePhysicalProcessPages(BugCheckParameter1);
  v15 = (_QWORD *)*((_QWORD *)SharedVm + 5);
  if ( v15 )
  {
    MiEmptyPageAccessLog(v15);
    *((_QWORD *)SharedVm + 5) = 0LL;
  }
  v16 = (void *)*((_QWORD *)SharedVm + 4);
  if ( v16 )
  {
    ExFreePoolWithTag(v16, 0);
    *((_QWORD *)SharedVm + 4) = 0LL;
  }
  if ( (*(_DWORD *)(BugCheckParameter1 + 768) & 0x10) != 0 )
    PsChangeJobMemoryUsage(16LL, -4LL, BugCheckParameter1);
  MiReturnCommit((__int64)ProcessPartition, 4 - v12);
  MiDeleteWorkingSetList(v1);
  if ( *(_QWORD *)(BugCheckParameter1 + 1024) )
    MiReleaseProcessReferenceToSessionDataPage();
  return MiContractPagingFiles((__int64)ProcessPartition);
}
