/*
 * XREFs of PopEtEnergyTrackerClose @ 0x140708830
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x1400B0AF4 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x1400B1870 (PopReleaseRwLock.c)
 */

void __fastcall PopEtEnergyTrackerClose(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  if ( a4 == 1 )
  {
    PopAcquireRwLockExclusive(a2 + 16);
    *(_DWORD *)(a2 + 636) |= 2u;
    PopReleaseRwLock(a2 + 16);
  }
}
