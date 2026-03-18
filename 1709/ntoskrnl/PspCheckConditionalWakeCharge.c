/*
 * XREFs of PspCheckConditionalWakeCharge @ 0x14050BAF0
 * Callers:
 *     PspChargeProcessWakeCounter @ 0x1404A2250 (PspChargeProcessWakeCounter.c)
 * Callees:
 *     PspIsProcessInJob @ 0x14050BB68 (PspIsProcessInJob.c)
 */

char __fastcall PspCheckConditionalWakeCharge(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  __int64 v3; // rdx
  int v4; // r9d
  _QWORD *v5; // r11

  v2 = a1;
  if ( !*(_QWORD *)(a1 + 944) || *(_QWORD *)(*(_QWORD *)(a1 + 944) + 1080LL) != *(_QWORD *)(a2 + 1080) )
    return 1;
  while ( (unsigned int)PspIsProcessInJob(v2, a2) != 292 || (*(_DWORD *)(v3 + 952) & v4) == 0 )
  {
    if ( v3 == *v5 )
      return 1;
    a2 = *(_QWORD *)(v3 + 1072);
  }
  return 0;
}
