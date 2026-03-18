/*
 * XREFs of TtmpScheduledEvaluationWorker @ 0x14070ED30
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x14007FE20 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     TtmiScheduleSessionWorker @ 0x14070F9F4 (TtmiScheduleSessionWorker.c)
 */

LONG_PTR __fastcall TtmpScheduledEvaluationWorker(volatile __int32 *Object)
{
  LONG_PTR result; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // rcx
  int v5; // eax

  result = (unsigned int)_InterlockedExchange(Object + 60, 0);
  if ( (_DWORD)result )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&TtmpSessionLock, 1u);
    v4 = *((_QWORD *)Object + 2);
    if ( v4 )
    {
      v5 = *((_DWORD *)Object + 8);
      if ( (v5 & 1) == 0 && (v5 & 2) == 0 )
      {
        *((_DWORD *)Object + 8) = v5 | 4;
        TtmiScheduleSessionWorker(v4, 2LL);
      }
    }
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return ObfDereferenceObject((PVOID)Object);
  }
  return result;
}
