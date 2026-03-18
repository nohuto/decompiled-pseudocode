/*
 * XREFs of AlpcpSignalAndWait @ 0x14006B0B0
 * Callers:
 *     AlpcpReceiveSynchronousReply @ 0x1404A2C40 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpCompleteDeferSignalRequestAndWait @ 0x1405728B8 (AlpcpCompleteDeferSignalRequestAndWait.c)
 * Callees:
 *     AlpcpSignal @ 0x14006AE10 (AlpcpSignal.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     AlpcpLogUnwait @ 0x1406DE6EC (AlpcpLogUnwait.c)
 */

__int64 __fastcall AlpcpSignalAndWait(
        __int64 a1,
        void *a2,
        KWAIT_REASON a3,
        KPROCESSOR_MODE a4,
        LARGE_INTEGER *Timeout)
{
  int v5; // ebx
  unsigned int v10; // eax
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v12; // ebx
  void *v13; // rcx

  v5 = *(_DWORD *)(a1 + 48);
  AlpcpSignal(a1, 1);
  KeLeaveCriticalRegion();
  v10 = KeWaitForSingleObject(a2, a3, a4, (v5 & 0x200000) != 0, Timeout);
  CurrentThread = KeGetCurrentThread();
  v12 = v10;
  --CurrentThread->KernelApcDisable;
  if ( AlpcpLogEnabled )
    AlpcpLogUnwait(v10);
  v13 = *(void **)(a1 + 32);
  if ( v13 )
    ObfDereferenceObject(v13);
  return v12;
}
