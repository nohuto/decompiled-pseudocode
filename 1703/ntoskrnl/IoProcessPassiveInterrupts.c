/*
 * XREFs of IoProcessPassiveInterrupts @ 0x1401F8634
 * Callers:
 *     KiDispatchPassiveInterrupts @ 0x140204B90 (KiDispatchPassiveInterrupts.c)
 *     KiInterruptDispatchCommon @ 0x140204C2C (KiInterruptDispatchCommon.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1400498E0 (KxAcquireSpinLock.c)
 *     KiInsertQueueDpc @ 0x1400F1510 (KiInsertQueueDpc.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     IopFindPassiveInterruptBlock @ 0x1401F87A0 (IopFindPassiveInterruptBlock.c)
 */

__int64 IoProcessPassiveInterrupts()
{
  __int64 result; // rax
  __int64 v1; // rbx
  unsigned __int8 CurrentIrql; // si
  bool v3; // zf

  result = IopFindPassiveInterruptBlock();
  v1 = result;
  if ( result )
  {
    if ( !*(_DWORD *)(result + 32) )
      ((void (__fastcall *)(_QWORD, __int64))off_14033B480[0])(*(unsigned int *)(result + 24), 1LL);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    KxAcquireSpinLock((PKSPIN_LOCK)(v1 + 56));
    v3 = *(_BYTE *)(v1 + 64) == 0;
    *(_BYTE *)(v1 + 65) = 1;
    if ( v3 )
    {
      *(_BYTE *)(v1 + 64) = 1;
      KiInsertQueueDpc(v1 + 104, 0LL, 0LL, 0LL, 0);
    }
    KxReleaseSpinLock((PKSPIN_LOCK)(v1 + 56));
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
