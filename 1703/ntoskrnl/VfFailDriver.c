/*
 * XREFs of VfFailDriver @ 0x14024FFD0
 * Callers:
 *     <none>
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x14076EF94 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VfFailDriver(ULONG a1)
{
  __int64 result; // rax

  if ( ViDdiInitialized )
    return VerifierBugCheckIfAppropriate(a1, 0LL);
  return result;
}
