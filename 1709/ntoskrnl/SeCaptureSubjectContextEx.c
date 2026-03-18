/*
 * XREFs of SeCaptureSubjectContextEx @ 0x1404C5AF0
 * Callers:
 *     NtSetInformationFile @ 0x14005F8B0 (NtSetInformationFile.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x140122710 (ExCpuSetResourceManagerAccessCheck.c)
 *     AlpcpCheckConnectionSecurity @ 0x140467994 (AlpcpCheckConnectionSecurity.c)
 *     ObpCaptureBoundaryDescriptor @ 0x1404893EC (ObpCaptureBoundaryDescriptor.c)
 *     IopXxxControlFile @ 0x1404AD980 (IopXxxControlFile.c)
 *     ObOpenObjectByPointer @ 0x1404C5930 (ObOpenObjectByPointer.c)
 *     SeCreateAccessState @ 0x1404C6430 (SeCreateAccessState.c)
 *     NtDuplicateToken @ 0x1404C66A0 (NtDuplicateToken.c)
 *     NtSetInformationProcess @ 0x1404D7080 (NtSetInformationProcess.c)
 *     EtwpCheckProviderLoggingAccess @ 0x1404EFE30 (EtwpCheckProviderLoggingAccess.c)
 *     NtSetInformationJobObject @ 0x140510C80 (NtSetInformationJobObject.c)
 *     ObpVerifyCreatorAccessCheck @ 0x14054903C (ObpVerifyCreatorAccessCheck.c)
 *     SeCreateAccessStateEx @ 0x14057ECE0 (SeCreateAccessStateEx.c)
 *     ExpCheckWakeTimerAccess @ 0x1405F15A0 (ExpCheckWakeTimerAccess.c)
 *     VfUtilIsLocalSystem @ 0x1407A6E28 (VfUtilIsLocalSystem.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ObFastReferenceObject @ 0x140081EF0 (ObFastReferenceObject.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ObFastReferenceObjectLocked @ 0x14008AA44 (ObFastReferenceObjectLocked.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
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
        v6 = (void *)(*(_QWORD *)((char *)&Thread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
        ObfReferenceObject(v6);
        SubjectContext->ImpersonationLevel = *((_DWORD *)&Thread[1].0 + 1) & 3;
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
