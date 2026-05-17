/*
 * XREFs of RtlpEstimateAllocatedSize @ 0x1800133A8
 * Callers:
 *     RtlpQueryExtendedInformationHeap @ 0x180012E80 (RtlpQueryExtendedInformationHeap.c)
 *     RtlpLogHeapContractEvent @ 0x18010148C (RtlpLogHeapContractEvent.c)
 *     RtlpLogHeapCreateEvent @ 0x18010153C (RtlpLogHeapCreateEvent.c)
 *     RtlpLogHeapExtendEvent @ 0x180101658 (RtlpLogHeapExtendEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpEstimateAllocatedSize(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx

  v1 = *(_QWORD *)(a1 + 544) - 16LL * *(_QWORD *)(a1 + 192);
  if ( *(_BYTE *)(a1 + 386) == 2 )
    v2 = *(_QWORD *)(a1 + 376);
  else
    v2 = 0LL;
  if ( v2 )
    v1 -= *(_QWORD *)(v2 + 72);
  return v1;
}
