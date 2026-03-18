/*
 * XREFs of IopQueueThreadIrp @ 0x1400FDC10
 * Callers:
 *     IoPageReadEx @ 0x140048610 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x140048838 (IoSynchronousPageWriteEx.c)
 *     IoAsynchronousPageWrite @ 0x1400CCE90 (IoAsynchronousPageWrite.c)
 *     IoQueueThreadIrp @ 0x14014D660 (IoQueueThreadIrp.c)
 *     IopSynchronousCall @ 0x140499818 (IopSynchronousCall.c)
 *     IopQueryXxxInformation @ 0x1404A51B8 (IopQueryXxxInformation.c)
 *     IopGetFileInformation @ 0x1404A5514 (IopGetFileInformation.c)
 *     IopGetSetSecurityObject @ 0x1404D2090 (IopGetSetSecurityObject.c)
 *     IopBuildSynchronousFsdRequest @ 0x140539280 (IopBuildSynchronousFsdRequest.c)
 *     NtQueryInformationFile @ 0x140596F20 (NtQueryInformationFile.c)
 *     IopSynchronousServiceTail @ 0x14059D990 (IopSynchronousServiceTail.c)
 *     IopCloseFile @ 0x1405B12E0 (IopCloseFile.c)
 *     IopDeleteFile @ 0x1405B15A0 (IopDeleteFile.c)
 *     IopParseDevice @ 0x1405B17F0 (IopParseDevice.c)
 *     IopFilterResourceRequirementsCall @ 0x1405DBF84 (IopFilterResourceRequirementsCall.c)
 *     IoSetInformation @ 0x1405E7BF0 (IoSetInformation.c)
 *     IoCancelFileOpen @ 0x14071BC10 (IoCancelFileOpen.c)
 *     IoEnqueueIrp @ 0x14071C230 (IoEnqueueIrp.c)
 *     IoVerifyVolume @ 0x14071C9D0 (IoVerifyVolume.c)
 *     IopFreeBandwidthContract @ 0x1407225F8 (IopFreeBandwidthContract.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x140069440 (KxWaitForSpinLockAndAcquire.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     KiAcquireSpinLockInstrumented @ 0x140242718 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402427F0 (KiReleaseSpinLockInstrumented.c)
 *     KiPerformUnboostKick @ 0x140248638 (KiPerformUnboostKick.c)
 */

__int64 __fastcall IopQueueThreadIrp(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // rsi
  __int64 *v3; // rdi
  volatile signed __int32 *v4; // rbx
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // rcx
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // rdx
  int v11; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(_QWORD *)(a1 + 152);
  v2 = (_QWORD *)(a1 + 32);
  v3 = (__int64 *)(v1 + 1648);
  v4 = (volatile signed __int32 *)(v1 + 1856);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(v4);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v11 = SchedulerAssist[5];
        SchedulerAssist[5] = v11 + 1;
        if ( v11 == -1 && !*((_BYTE *)SchedulerAssist + 25) && !*((_BYTE *)SchedulerAssist + 27) )
          KiPerformUnboostKick(CurrentPrcb);
      }
    }
    if ( _interlockedbittestandset64(v4, 0LL) )
    {
      KiSetVpThreadSpinLockCount(CurrentPrcb, 0LL);
      KxWaitForSpinLockAndAcquire(v4, v10);
    }
  }
  v8 = *v3;
  if ( *(__int64 **)(*v3 + 8) != v3 )
    __fastfail(3u);
  *v2 = v8;
  v2[1] = v3;
  *(_QWORD *)(v8 + 8) = v2;
  *v3 = (__int64)v2;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(v4, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v4, 0LL);
  KiSetVpThreadSpinLockCount(KeGetCurrentPrcb(), 0LL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
