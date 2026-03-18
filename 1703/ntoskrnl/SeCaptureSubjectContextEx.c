/*
 * XREFs of SeCaptureSubjectContextEx @ 0x14050F760
 * Callers:
 *     ExCpuSetResourceManagerAccessCheck @ 0x14002B79C (ExCpuSetResourceManagerAccessCheck.c)
 *     NtSetInformationFile @ 0x14004FBC0 (NtSetInformationFile.c)
 *     SeCreateAccessStateEx @ 0x140443DD0 (SeCreateAccessStateEx.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140469540 (ObpVerifyCreatorAccessCheck.c)
 *     ObpCaptureBoundaryDescriptor @ 0x1404699E4 (ObpCaptureBoundaryDescriptor.c)
 *     AlpcpCheckConnectionSecurity @ 0x140472F48 (AlpcpCheckConnectionSecurity.c)
 *     NtDuplicateToken @ 0x140476350 (NtDuplicateToken.c)
 *     NtSetInformationProcess @ 0x1404A2550 (NtSetInformationProcess.c)
 *     SeCreateAccessState @ 0x1404F4470 (SeCreateAccessState.c)
 *     ObOpenObjectByPointer @ 0x14050ED20 (ObOpenObjectByPointer.c)
 *     NtOpenProcessTokenEx @ 0x14050EFA0 (NtOpenProcessTokenEx.c)
 *     PsOpenProcess @ 0x14050F290 (PsOpenProcess.c)
 *     IopXxxControlFile @ 0x14052BAD0 (IopXxxControlFile.c)
 *     EtwpCheckProviderLoggingAccess @ 0x1405534E0 (EtwpCheckProviderLoggingAccess.c)
 *     NtSetInformationJobObject @ 0x14055E0D0 (NtSetInformationJobObject.c)
 *     ExpCheckWakeTimerAccess @ 0x140586274 (ExpCheckWakeTimerAccess.c)
 *     VfUtilIsLocalSystem @ 0x140765258 (VfUtilIsLocalSystem.c)
 * Callees:
 *     ObFastReferenceObjectLocked @ 0x1400445AC (ObFastReferenceObjectLocked.c)
 *     ObFastReferenceObject @ 0x1400EE6B0 (ObFastReferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 */

void __stdcall SeCaptureSubjectContextEx(PETHREAD Thread, PEPROCESS Process, PSECURITY_SUBJECT_CONTEXT SubjectContext)
{
  void *v6; // rbp
  unsigned __int64 *v7; // rbp
  _QWORD *v8; // rdi
  struct _KTHREAD *CurrentThread; // r12
  struct _KTHREAD *v10; // r15
  signed __int64 *p_Lock; // rsi

  SubjectContext->ProcessAuditId = Process[1].Header.WaitListHead.Flink;
  if ( Thread )
  {
    if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) != 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&Thread[1].WaitBlockList, 0LL);
      if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 8) != 0 )
      {
        v6 = (void *)(*(_QWORD *)&Thread[1].SystemCallNumber & 0xFFFFFFFFFFFFFFF8uLL);
        ObfReferenceObject(v6);
        SubjectContext->ImpersonationLevel = Thread[1].SystemCallNumber & 3;
      }
      else
      {
        v6 = 0LL;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Thread[1].WaitBlockList, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&Thread[1].WaitBlockList);
      KeAbPostRelease((ULONG_PTR)&Thread[1].WaitBlockList);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
    }
    else
    {
      v6 = 0LL;
    }
    SubjectContext->ClientToken = v6;
  }
  else
  {
    SubjectContext->ClientToken = 0LL;
  }
  v7 = &Process[1].Affinity.Bitmap[5];
  v8 = (_QWORD *)ObFastReferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5]);
  if ( !v8 )
  {
    v10 = KeGetCurrentThread();
    --v10->KernelApcDisable;
    p_Lock = (signed __int64 *)&Process[1].Header.Lock;
    ExAcquirePushLockSharedEx((ULONG_PTR)p_Lock, 0LL);
    v8 = (_QWORD *)ObFastReferenceObjectLocked(v7);
    if ( _InterlockedCompareExchange64(p_Lock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(p_Lock);
    KeAbPostRelease((ULONG_PTR)p_Lock);
    KeLeaveCriticalRegionThread((__int64)v10);
  }
  SubjectContext->PrimaryToken = v8;
  if ( SeTokenLeakTracking )
  {
    if ( v8 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v8[143] + 284LL));
      if ( SubjectContext->PrimaryToken == (PACCESS_TOKEN)SepTokenLeakToken )
        __debugbreak();
    }
    if ( SubjectContext->ClientToken )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)SubjectContext->ClientToken + 143) + 284LL));
      if ( SubjectContext->ClientToken == (PACCESS_TOKEN)SepTokenLeakToken )
        __debugbreak();
    }
  }
}
