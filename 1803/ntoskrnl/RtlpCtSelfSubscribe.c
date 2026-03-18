/*
 * XREFs of RtlpCtSelfSubscribe @ 0x14078AE0C
 * Callers:
 *     RtlpRtlpCtSelfSubscribeCallback @ 0x14028E880 (RtlpRtlpCtSelfSubscribeCallback.c)
 * Callees:
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 */

__int64 __fastcall RtlpCtSelfSubscribe(__int64 a1)
{
  KeSetEvent(*(PRKEVENT *)(a1 + 16), 1, 0);
  return 0LL;
}
