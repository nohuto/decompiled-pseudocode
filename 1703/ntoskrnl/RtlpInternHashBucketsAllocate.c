/*
 * XREFs of RtlpInternHashBucketsAllocate @ 0x1406EFBC4
 * Callers:
 *     RtlInternTableIntern @ 0x1406EF324 (RtlInternTableIntern.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpInternHashBucketsAllocate(__int64 a1, __int64 a2)
{
  return (**(__int64 (__fastcall ***)(__int64, __int64))(a2 + 16))(a2, a1);
}
