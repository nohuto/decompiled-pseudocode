/*
 * XREFs of IopQueueThreadIrp @ 0x1400F1410
 * Callers:
 *     IoAsynchronousPageWrite @ 0x1400369F8 (IoAsynchronousPageWrite.c)
 *     NtSetInformationFile @ 0x14004FBC0 (NtSetInformationFile.c)
 *     IoSynchronousPageWriteEx @ 0x14012C59C (IoSynchronousPageWriteEx.c)
 *     IoQueueThreadIrp @ 0x140136450 (IoQueueThreadIrp.c)
 *     IoSetInformation @ 0x14045D250 (IoSetInformation.c)
 *     IopGetSetSecurityObject @ 0x140482710 (IopGetSetSecurityObject.c)
 *     IopBuildSynchronousFsdRequest @ 0x1404DDEB0 (IopBuildSynchronousFsdRequest.c)
 *     IopSynchronousCall @ 0x1404DDF94 (IopSynchronousCall.c)
 *     IopGetFileInformation @ 0x1404FC060 (IopGetFileInformation.c)
 *     IopDeleteFile @ 0x14051E790 (IopDeleteFile.c)
 *     IopCloseFile @ 0x140527CA0 (IopCloseFile.c)
 *     NtQueryInformationFile @ 0x14052EC70 (NtQueryInformationFile.c)
 *     IopParseDevice @ 0x1405385E0 (IopParseDevice.c)
 *     IopSynchronousServiceTail @ 0x14053A760 (IopSynchronousServiceTail.c)
 *     IopQueryXxxInformation @ 0x14053E758 (IopQueryXxxInformation.c)
 *     IopFilterResourceRequirementsCall @ 0x14055BFFC (IopFilterResourceRequirementsCall.c)
 *     IoCancelFileOpen @ 0x14068B2F0 (IoCancelFileOpen.c)
 *     IoEnqueueIrp @ 0x14068B860 (IoEnqueueIrp.c)
 *     IoVerifyVolume @ 0x14068BEE0 (IoVerifyVolume.c)
 *     IopFreeBandwidthContract @ 0x1406918FC (IopFreeBandwidthContract.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x14004FB00 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x1401FEC08 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1401FECBC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall IopQueueThreadIrp(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // rsi
  __int64 *v3; // rdi
  volatile signed __int32 *v4; // rbx
  unsigned __int8 CurrentIrql; // bp
  __int64 v6; // rax
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(_QWORD *)(a1 + 152);
  v2 = (_QWORD *)(a1 + 32);
  v3 = (__int64 *)(v1 + 1648);
  v4 = (volatile signed __int32 *)(v1 + 1848);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(v4);
  }
  else if ( _interlockedbittestandset64(v4, 0LL) )
  {
    KxWaitForSpinLockAndAcquire(v4);
  }
  v6 = *v3;
  if ( *(__int64 **)(*v3 + 8) != v3 )
    __fastfail(3u);
  *v2 = v6;
  v2[1] = v3;
  *(_QWORD *)(v6 + 8) = v2;
  *v3 = (__int64)v2;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(v4, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v4, 0LL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
