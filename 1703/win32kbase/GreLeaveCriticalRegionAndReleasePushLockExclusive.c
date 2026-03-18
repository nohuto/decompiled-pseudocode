/*
 * XREFs of GreLeaveCriticalRegionAndReleasePushLockExclusive @ 0x1C00FBD70
 * Callers:
 *     NtGdiDdDDICreateOutputDupl @ 0x1C00F0DA0 (NtGdiDdDDICreateOutputDupl.c)
 * Callees:
 *     <none>
 */

void __fastcall GreLeaveCriticalRegionAndReleasePushLockExclusive(__int64 a1)
{
  ExReleasePushLockExclusiveEx(a1, 0LL);
  KeLeaveCriticalRegion();
}
