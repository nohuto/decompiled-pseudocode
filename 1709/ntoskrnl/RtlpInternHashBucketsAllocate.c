/*
 * XREFs of RtlpInternHashBucketsAllocate @ 0x140459A34
 * Callers:
 *     RtlInternTableIntern @ 0x140458D2C (RtlInternTableIntern.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RtlpInternHashBucketsAllocate(__int64 a1, __int64 a2)
{
  return (**(__int64 (__fastcall ***)(__int64, __int64))(a2 + 16))(a2, a1);
}
