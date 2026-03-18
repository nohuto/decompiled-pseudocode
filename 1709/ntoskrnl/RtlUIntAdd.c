/*
 * XREFs of RtlUIntAdd @ 0x1400DF340
 * Callers:
 *     SepFilterToken @ 0x14045B120 (SepFilterToken.c)
 *     SepDuplicateToken @ 0x1404C6BB0 (SepDuplicateToken.c)
 *     SPCall2ServerInternal @ 0x140534E00 (SPCall2ServerInternal.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUIntAdd(UINT uAugend, UINT uAddend, UINT *puResult)
{
  UINT v3; // eax

  v3 = -1;
  if ( uAugend + uAddend >= uAugend )
    v3 = uAugend + uAddend;
  *puResult = v3;
  return uAugend + uAddend < uAugend ? 0xC0000095 : 0;
}
