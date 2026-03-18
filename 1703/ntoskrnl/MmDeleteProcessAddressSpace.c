/*
 * XREFs of MmDeleteProcessAddressSpace @ 0x1404998CC
 * Callers:
 *     PspProcessDelete @ 0x140061C30 (PspProcessDelete.c)
 * Callees:
 *     MiEmptyPageAccessLog @ 0x140006990 (MiEmptyPageAccessLog.c)
 *     MiContractPagingFiles @ 0x140062BA0 (MiContractPagingFiles.c)
 *     MiDeleteWorkingSetList @ 0x140062C50 (MiDeleteWorkingSetList.c)
 *     PsReturnProcessQuota @ 0x140062C84 (PsReturnProcessQuota.c)
 *     MiDeleteFinalPageTables @ 0x140063178 (MiDeleteFinalPageTables.c)
 *     MiGetSharedVm @ 0x1400A7780 (MiGetSharedVm.c)
 *     MiReturnResidentAvailable @ 0x1400CCD70 (MiReturnResidentAvailable.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     MiGetProcessPartition @ 0x1400D0EA8 (MiGetProcessPartition.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MiReturnPartitionResidentAvailable @ 0x14021F5AC (MiReturnPartitionResidentAvailable.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x1404515C8 (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MiDeletePhysicalProcessPages @ 0x1406B896C (MiDeletePhysicalProcessPages.c)
 *     PsChangeJobMemoryUsageByProcess @ 0x1406E0FF0 (PsChangeJobMemoryUsageByProcess.c)
 */

void __fastcall MmDeleteProcessAddressSpace(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v1; // r9
  _QWORD *v3; // rbx
  _QWORD *v4; // rax
  ULONG_PTR v5; // rdx
  _QWORD *v6; // rax
  void *v7; // rcx
  LONG *SharedVm; // rbp
  __int64 v9; // r15
  __int64 v10; // rdx
  ULONG_PTR *ProcessPartition; // rbx
  _QWORD *v12; // rcx
  void *v13; // rcx
  unsigned __int64 v14; // rcx

  v1 = *(_QWORD *)(BugCheckParameter2 + 928);
  v3 = *(_QWORD **)(BugCheckParameter2 + 1200);
  if ( v1 )
  {
    if ( v3 && v3[1] && *((_DWORD *)v3 + 6) == 1 )
    {
      v4 = (_QWORD *)*v3;
      v5 = 0LL;
      while ( v4 )
      {
        v5 = (ULONG_PTR)v4;
        v4 = (_QWORD *)*v4;
      }
      KeBugCheckEx(0xCBu, v5, 0LL, *(_QWORD *)(v5 + 24), *(_QWORD *)(BugCheckParameter2 + 928));
    }
    KeBugCheckEx(0x76u, 0LL, BugCheckParameter2, v1, *(_QWORD *)(BugCheckParameter2 + 1200));
  }
  if ( v3 )
  {
    while ( 1 )
    {
      v6 = (_QWORD *)*v3;
      if ( !*v3 )
        break;
      do
      {
        v7 = v6;
        v6 = (_QWORD *)*v6;
      }
      while ( v6 );
      if ( !v7 )
        break;
      ExFreePoolWithTag(v7, 0);
    }
    ExFreePoolWithTag(v3, 0);
  }
  SharedVm = MiGetSharedVm(BugCheckParameter2 + 1280);
  v9 = MiDeleteFinalPageTables(BugCheckParameter2);
  PsReturnProcessQuota((struct _KPROCESS *)BugCheckParameter2, v10, 4LL);
  ProcessPartition = (ULONG_PTR *)MiGetProcessPartition(BugCheckParameter2);
  if ( ProcessPartition == &MiSystemPartition )
    MiReturnResidentAvailable(4uLL);
  else
    MiReturnPartitionResidentAvailable((__int64)ProcessPartition, 4uLL);
  if ( *(_QWORD *)(BugCheckParameter2 + 1032) )
    MiDeletePhysicalProcessPages(BugCheckParameter2);
  v12 = (_QWORD *)*((_QWORD *)SharedVm + 5);
  if ( v12 )
  {
    MiEmptyPageAccessLog(v12);
    *((_QWORD *)SharedVm + 5) = 0LL;
  }
  v13 = (void *)*((_QWORD *)SharedVm + 4);
  if ( v13 )
  {
    ExFreePoolWithTag(v13, 0);
    *((_QWORD *)SharedVm + 4) = 0LL;
  }
  if ( (*(_DWORD *)(BugCheckParameter2 + 768) & 0x10) != 0 )
    PsChangeJobMemoryUsageByProcess(v13, -4LL, BugCheckParameter2);
  MiReturnCommit((__int64)ProcessPartition, 4 - v9);
  MiDeleteWorkingSetList(BugCheckParameter2 + 1280);
  v14 = *(_QWORD *)(BugCheckParameter2 + 1024);
  if ( v14 )
    MiReleaseProcessReferenceToSessionDataPage(v14);
  MiContractPagingFiles((__int64)ProcessPartition);
  MiDereferencePartition((volatile LONG *)ProcessPartition);
}
