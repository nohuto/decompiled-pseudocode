/*
 * XREFs of KiInsertNonMaxOverQuotaScb @ 0x1400D2B88
 * Callers:
 *     KiTransitionSchedulingGroupGeneration @ 0x14008AB70 (KiTransitionSchedulingGroupGeneration.c)
 *     KiAddThreadToScbQueue @ 0x1400D2AE0 (KiAddThreadToScbQueue.c)
 * Callees:
 *     KiInsertSchedulingGroupQueue @ 0x1400D2BE8 (KiInsertSchedulingGroupQueue.c)
 *     KiResortScbQueue @ 0x1400D2CD0 (KiResortScbQueue.c)
 */

char __fastcall KiInsertNonMaxOverQuotaScb(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // si
  char result; // al

  v4 = a3;
  do
  {
    result = *(_BYTE *)(a1 + 112);
    if ( (result & 2) != 0 )
      break;
    if ( (result & 1) != 0 )
    {
      result = KiResortScbQueue(a2, a1, 0LL, a4);
    }
    else
    {
      LOBYTE(a3) = v4;
      result = KiInsertSchedulingGroupQueue(a2, a1, a3);
    }
    a1 = *(_QWORD *)(a1 + 408);
  }
  while ( a1 );
  return result;
}
