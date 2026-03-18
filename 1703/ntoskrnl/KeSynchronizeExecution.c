/*
 * XREFs of KeSynchronizeExecution @ 0x1401828C0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1400498E0 (KxAcquireSpinLock.c)
 *     KiSynchronizePassiveInterruptExecution @ 0x1402052F0 (KiSynchronizePassiveInterruptExecution.c)
 */

BOOLEAN __stdcall KeSynchronizeExecution(
        PKINTERRUPT Interrupt,
        PKSYNCHRONIZE_ROUTINE SynchronizeRoutine,
        PVOID SynchronizeContext)
{
  unsigned __int64 *ActualLock; // rsi
  unsigned __int64 SynchronizeIrql; // rcx
  unsigned int CurrentIrql; // eax
  BOOLEAN v6; // al
  KSPIN_LOCK *v7; // rcx
  BOOLEAN v8; // si
  unsigned int v10; // [rsp+20h] [rbp-18h]

  ActualLock = Interrupt->ActualLock;
  SynchronizeIrql = Interrupt->SynchronizeIrql;
  if ( !(_BYTE)SynchronizeIrql )
    return KiSynchronizePassiveInterruptExecution(Interrupt, SynchronizeRoutine, SynchronizeContext);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(SynchronizeIrql);
  v10 = CurrentIrql;
  KxAcquireSpinLock(ActualLock);
  v6 = ((__int64 (__fastcall *)(PVOID))SynchronizeRoutine)(SynchronizeContext);
  v7 = ActualLock;
  v8 = v6;
  KxReleaseSpinLock(v7);
  __writecr8(v10);
  return v8;
}
