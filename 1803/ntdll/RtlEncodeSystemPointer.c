/*
 * XREFs of RtlEncodeSystemPointer @ 0x180083360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlEncodeSystemPointer(__int64 a1)
{
  return __ROR8__(a1 ^ MEMORY[0x7FFE0330], MEMORY[0x7FFE0330] & 0x3F);
}
