/*
 * XREFs of StorFreeContiguousMemory @ 0x1C0064EAC
 * Callers:
 *     RaidDeleteAdapter @ 0x1C002EE60 (RaidDeleteAdapter.c)
 *     StorPortReleaseAdditionalCrashDumpArea @ 0x1C003F8C0 (StorPortReleaseAdditionalCrashDumpArea.c)
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
