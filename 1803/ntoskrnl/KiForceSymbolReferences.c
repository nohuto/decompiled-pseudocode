/*
 * XREFs of KiForceSymbolReferences @ 0x1408DFFA0
 * Callers:
 *     KiInitSystem @ 0x1408BC154 (KiInitSystem.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140079C30 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeAbPostReleaseEx @ 0x14007C82C (KeAbPostReleaseEx.c)
 */

__int64 KiForceSymbolReferences()
{
  _KLOCK_ENTRY *v0; // rax
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax
  signed __int32 v4; // [rsp+30h] [rbp+8h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp+10h] BYREF

  if ( !KeGetPcr()->Prcb.Number )
  {
    v0 = (_KLOCK_ENTRY *)KeAbPreAcquire((ULONG_PTR)&BugCheckParameter2, 0LL, 1);
    if ( _interlockedbittestandset64((volatile signed __int32 *)&BugCheckParameter2, 0LL) )
    {
      if ( v0 )
        KeAbPostReleaseEx((ULONG_PTR)&BugCheckParameter2, v0);
    }
    else if ( v0 )
    {
      v0->AcquiredByte |= 1u;
    }
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  ExTryAcquireSpinLockExclusiveAtDpcLevel(&v4);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
