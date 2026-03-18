/*
 * XREFs of AlpcpWaitForSingleObject @ 0x140024478
 * Callers:
 *     AlpcpCompleteDeferSignalRequestAndWait @ 0x14043FB60 (AlpcpCompleteDeferSignalRequestAndWait.c)
 *     AlpcpReceiveMessagePort @ 0x140522CF0 (AlpcpReceiveMessagePort.c)
 *     AlpcpReceiveSynchronousReply @ 0x140526E80 (AlpcpReceiveSynchronousReply.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     AlpcpLogUnwait @ 0x1406B29A4 (AlpcpLogUnwait.c)
 */

__int64 __fastcall AlpcpWaitForSingleObject(
        PVOID Object,
        KWAIT_REASON WaitReason,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout)
{
  unsigned int v9; // eax
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v11; // ebx

  KeLeaveCriticalRegion();
  v9 = KeWaitForSingleObject(Object, WaitReason, WaitMode, Alertable, Timeout);
  CurrentThread = KeGetCurrentThread();
  v11 = v9;
  --CurrentThread->KernelApcDisable;
  if ( AlpcpLogEnabled )
    AlpcpLogUnwait(v9);
  return v11;
}
