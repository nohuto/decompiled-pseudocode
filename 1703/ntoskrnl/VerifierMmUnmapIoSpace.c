/*
 * XREFs of VerifierMmUnmapIoSpace @ 0x1407827C0
 * Callers:
 *     <none>
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x14076EF94 (VerifierBugCheckIfAppropriate.c)
 *     ViTargetAddToCounter @ 0x1407751DC (ViTargetAddToCounter.c)
 */

__int64 __fastcall VerifierMmUnmapIoSpace(ULONG_PTR a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // dl
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u && (MmVerifierData & 1) != 0 )
    VerifierBugCheckIfAppropriate(0xC4u, 0x7BuLL, CurrentIrql, a1, a2);
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetAddToCounter(retaddr, 184LL, 0xC0u, -a2);
  return ((__int64 (__fastcall *)(ULONG_PTR, __int64))pXdvMmUnmapIoSpace)(a1, a2);
}
