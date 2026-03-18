/*
 * XREFs of ViMmValidateIrql @ 0x140782C30
 * Callers:
 *     VerifierMmAllocateNodePagesForMdlEx @ 0x1407819E0 (VerifierMmAllocateNodePagesForMdlEx.c)
 *     VerifierMmAllocatePagesForMdl @ 0x140781B70 (VerifierMmAllocatePagesForMdl.c)
 *     VerifierMmAllocatePagesForMdlEx @ 0x140781C30 (VerifierMmAllocatePagesForMdlEx.c)
 *     VerifierMmFreePagesFromMdl @ 0x140781FB0 (VerifierMmFreePagesFromMdl.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x14076EF94 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall ViMmValidateIrql(char a1)
{
  unsigned __int8 CurrentIrql; // cl
  __int64 result; // rax

  if ( !a1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql > 2u && (MmVerifierData & 0x20000) != 0 )
      return VerifierBugCheckIfAppropriate(0xC4u, 0x7EuLL, CurrentIrql, 2uLL, 0LL);
  }
  return result;
}
