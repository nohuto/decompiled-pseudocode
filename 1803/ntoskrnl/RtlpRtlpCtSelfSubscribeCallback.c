/*
 * XREFs of RtlpRtlpCtSelfSubscribeCallback @ 0x14028E880
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCtSelfSubscribe @ 0x14078AE0C (RtlpCtSelfSubscribe.c)
 */

__int64 __fastcall RtlpRtlpCtSelfSubscribeCallback(__int64 a1, __int64 a2, char a3, __int64 a4, int a5, __int64 a6)
{
  if ( (a3 & 8) != 0 )
    return RtlpCtSelfSubscribe(a6);
  else
    return 0LL;
}
