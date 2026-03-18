/*
 * XREFs of KeRetryOutswapProcess @ 0x140240590
 * Callers:
 *     MiProcessWorkingSets @ 0x14000A690 (MiProcessWorkingSets.c)
 *     MmReleaseCommitForMemResetPages @ 0x140251BF0 (MmReleaseCommitForMemResetPages.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x1400EA710 (KiAcquireKobjectLockSafe.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 */

int __fastcall KeRetryOutswapProcess(volatile signed __int32 *a1)
{
  unsigned __int8 CurrentIrql; // di
  signed __int64 v3; // rax
  signed __int64 *v4; // rbx
  signed __int64 v5; // rcx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  KiAcquireKobjectLockSafe(a1);
  LODWORD(v3) = a1[143] & 7;
  if ( (_DWORD)v3 == 1 )
    _InterlockedXor(a1 + 143, 7u);
  _InterlockedAnd(a1, 0xFFFFFF7F);
  __writecr8(CurrentIrql);
  if ( (_DWORD)v3 == 1 )
  {
    v4 = (signed __int64 *)(a1 + 66);
    _m_prefetchw(&KiProcessOutSwapListHead);
    v3 = KiProcessOutSwapListHead;
    do
    {
      *v4 = v3;
      v5 = v3;
      v3 = _InterlockedCompareExchange64(&KiProcessOutSwapListHead, (signed __int64)v4, v3);
    }
    while ( v3 != v5 );
    if ( !v3 )
      LODWORD(v3) = KeSetEvent(&KiSwapEvent, 10, 0);
  }
  return v3;
}
