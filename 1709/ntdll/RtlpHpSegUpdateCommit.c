/*
 * XREFs of RtlpHpSegUpdateCommit @ 0x18004A9CC
 * Callers:
 *     RtlpHpSegPageRangeDecommit @ 0x18004A1DC (RtlpHpSegPageRangeDecommit.c)
 * Callees:
 *     RtlpHpTlLogMemStats @ 0x180105F7C (RtlpHpTlLogMemStats.c)
 */

__int64 __fastcall RtlpHpSegUpdateCommit(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax

  _InterlockedExchangeAdd64((volatile signed __int64 *)(*(_QWORD *)(a1 + 72) + 8LL), a3);
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    RtlpHpTlLogMemStats(*(_QWORD *)(a1 + 96), *(_QWORD *)(a1 + 72));
  result = (*(_DWORD *)(a2 + 28) ^ (~(a3 + ~(*(_DWORD *)(a2 + 28) >> 8)) << 8)) & 0xFFFF00;
  *(_DWORD *)(a2 + 28) ^= result;
  return result;
}
