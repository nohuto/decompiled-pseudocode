/*
 * XREFs of AcquireAggregateSessionLockForFlush @ 0x140030EA8
 * Callers:
 *     FlushLookUpTableBucket @ 0x140030D44 (FlushLookUpTableBucket.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x1400FDC60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 */

KIRQL __fastcall AcquireAggregateSessionLockForFlush(__int64 a1)
{
  volatile signed __int32 *v1; // rdi
  __int64 v3; // rbx

  v1 = (volatile signed __int32 *)(a1 + 328);
  v3 = KeAbPreAcquire(a1 + 328, 0LL);
  if ( _interlockedbittestandset64(v1, 0LL) )
    ExfAcquirePushLockExclusiveEx(v1);
  if ( v3 )
    *(_BYTE *)(v3 + 26) |= 1u;
  return ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 336));
}
