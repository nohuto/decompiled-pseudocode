/*
 * XREFs of RtlCrc32 @ 0x1402894C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpComputeCrcInternal @ 0x140149C5C (RtlpComputeCrcInternal.c)
 */

__int64 __fastcall RtlCrc32(unsigned __int64 a1, unsigned __int64 a2, unsigned int a3)
{
  return RtlpComputeCrcInternal(a1, a2, a3, &Crc32Ctrl);
}
