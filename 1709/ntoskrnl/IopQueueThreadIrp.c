/*
 * XREFs of IopQueueThreadIrp @ 0x140082130
 * Callers:
 *     IoSynchronousPageWriteEx @ 0x140114DBC (IoSynchronousPageWriteEx.c)
 *     IoAsynchronousPageWrite @ 0x14012EDB0 (IoAsynchronousPageWrite.c)
 *     IoQueueThreadIrp @ 0x140131A50 (IoQueueThreadIrp.c)
 *     IopGetFileInformation @ 0x14048FE14 (IopGetFileInformation.c)
 *     IopQueryXxxInformation @ 0x14048FF44 (IopQueryXxxInformation.c)
 *     IopGetSetSecurityObject @ 0x140491160 (IopGetSetSecurityObject.c)
 *     NtQueryInformationFile @ 0x14049A060 (NtQueryInformationFile.c)
 *     IopSynchronousServiceTail @ 0x1404AD220 (IopSynchronousServiceTail.c)
 *     IopParseDevice @ 0x1404B86A0 (IopParseDevice.c)
 *     IopCloseFile @ 0x1404BAD60 (IopCloseFile.c)
 *     IopDeleteFile @ 0x1404BB010 (IopDeleteFile.c)
 *     IopBuildSynchronousFsdRequest @ 0x14051AFE0 (IopBuildSynchronousFsdRequest.c)
 *     IopSynchronousCall @ 0x14051CF64 (IopSynchronousCall.c)
 *     IopFilterResourceRequirementsCall @ 0x1405580F0 (IopFilterResourceRequirementsCall.c)
 *     IoSetInformation @ 0x14059BCF0 (IoSetInformation.c)
 *     IoCancelFileOpen @ 0x1406B6F90 (IoCancelFileOpen.c)
 *     IoEnqueueIrp @ 0x1406B75A0 (IoEnqueueIrp.c)
 *     IoVerifyVolume @ 0x1406B7D20 (IoVerifyVolume.c)
 *     IopFreeBandwidthContract @ 0x1406BD638 (IopFreeBandwidthContract.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400931F0 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x140204F88 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x14020503C (KiReleaseSpinLockInstrumented.c)
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
  v4 = (volatile signed __int32 *)(v1 + 1856);
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
