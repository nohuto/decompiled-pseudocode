/*
 * XREFs of VerifierMmBuildMdlForNonPagedPool @ 0x140781D30
 * Callers:
 *     <none>
 * Callees:
 *     MmDeterminePoolType @ 0x1400A6B04 (MmDeterminePoolType.c)
 *     VerifierBugCheckIfAppropriate @ 0x14076EF94 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VerifierMmBuildMdlForNonPagedPool(ULONG_PTR a1)
{
  __int64 v2; // r8

  if ( !KeGetCurrentIrql() && (unsigned int)MmDeterminePoolType(*(_QWORD *)(a1 + 32)) && (MmVerifierData & 1) != 0 )
    VerifierBugCheckIfAppropriate(0xC4u, 0x7FuLL, 0LL, a1, v2);
  return ((__int64 (__fastcall *)(ULONG_PTR))pXdvMmBuildMdlForNonPagedPool)(a1);
}
