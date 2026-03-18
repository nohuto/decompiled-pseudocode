/*
 * XREFs of RtlpHpLargeLockAcquire @ 0x14029ED0C
 * Callers:
 *     RtlpHpLargeAlloc @ 0x14029E2A0 (RtlpHpLargeAlloc.c)
 *     RtlpHpLargeFree @ 0x14029E80C (RtlpHpLargeFree.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x1400AC764 (RtlpHpAcquireLockExclusive.c)
 */

KIRQL __fastcall RtlpHpLargeLockAcquire(__int64 a1, char a2)
{
  if ( (a2 & 1) != 0 )
    return -1;
  else
    return RtlpHpAcquireLockExclusive((volatile LONG *)(a1 + 72), *(_DWORD *)a1 & 1);
}
