/*
 * XREFs of TtmpScheduledEvaluationWorker @ 0x1406D89A0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14008F1B0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     TtmiScheduleSessionWorker @ 0x1406D95E8 (TtmiScheduleSessionWorker.c)
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
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return ObfDereferenceObject((PVOID)Object);
  }
  return result;
}
