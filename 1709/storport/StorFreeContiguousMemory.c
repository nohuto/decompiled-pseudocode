/*
 * XREFs of StorFreeContiguousMemory @ 0x1C005F914
 * Callers:
 *     StorPortReleaseAdditionalCrashDumpArea @ 0x1C001C838 (StorPortReleaseAdditionalCrashDumpArea.c)
 *     RaidDeleteAdapter @ 0x1C002FB9C (RaidDeleteAdapter.c)
 *     StorpUpdateUncachedExtensionAllocationRegion @ 0x1C003638C (StorpUpdateUncachedExtensionAllocationRegion.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StorFreeContiguousMemory(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  MmFreeContiguousMemory(*(PVOID *)a2);
  result = 0LL;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_DWORD *)(a2 + 16) = 0;
  return result;
}
