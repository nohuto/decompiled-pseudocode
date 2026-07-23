/*
 * XREFs of KiForceSymbolReferences @ 0x14086B5B8
 * Callers:
 *     KiInitSystem @ 0x140832A0C (KiInitSystem.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x1400BAF60 (KeAbPostReleaseEx.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1400FD510 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 */

__int64 KiForceSymbolReferences()
{
  PRTL_BALANCED_NODE v0; // rax
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax
  signed __int32 v4; // [rsp+30h] [rbp+8h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp+10h] BYREF

  if ( !KeGetPcr()->Prcb.Number )
  {
    v0 = KeAbPreAcquire((ULONG_PTR)&BugCheckParameter2, 0LL, 1);
    if ( _interlockedbittestandset64((volatile signed __int32 *)&BugCheckParameter2, 0LL) )
    {
      if ( v0 )
        KeAbPostReleaseEx((ULONG_PTR)&BugCheckParameter2, (unsigned __int64)v0);
    }
    else if ( v0 )
    {
      BYTE2(v0[1].Left) |= 1u;
    }
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  ExTryAcquireSpinLockExclusiveAtDpcLevel(&v4);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
