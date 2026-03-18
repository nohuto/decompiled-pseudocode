/*
 * XREFs of MmGetTotalCommitLimit @ 0x1400F0978
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404C0DD0 (ExpQuerySystemInformation.c)
 *     ExpQuerySystemPerformanceInformation @ 0x140540C50 (ExpQuerySystemPerformanceInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetTotalCommitLimit(unsigned __int16 a1)
{
  return *(_QWORD *)(*(_QWORD *)(qword_140388AF0 + 8LL * a1) + 6440LL);
}
