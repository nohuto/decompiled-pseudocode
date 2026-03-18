/*
 * XREFs of VfFailSystemBIOS @ 0x140250000
 * Callers:
 *     <none>
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x14076EF94 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall VfFailSystemBIOS(ULONG a1)
{
  __int64 result; // rax

  if ( ViDdiInitialized )
  {
    if ( (MmVerifierData & 0x40000000) != 0 )
      return VerifierBugCheckIfAppropriate(a1, 0LL);
  }
  return result;
}
