/*
 * XREFs of RtlCSparseBitmapStart @ 0x180105B50
 * Callers:
 *     RtlInitializeHeapManager @ 0x1800EEF80 (RtlInitializeHeapManager.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x1800A03C0 (ZwAllocateVirtualMemory.c)
 */

NTSTATUS RtlCSparseBitmapStart()
{
  NTSTATUS result; // eax
  ULONG_PTR RegionSize; // [rsp+40h] [rbp+8h] BYREF
  ULONG_PTR v2; // [rsp+48h] [rbp+10h] BYREF

  RegionSize = 4096LL;
  v2 = 33558528LL;
  result = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &v2, 0x2000u, 4u);
  if ( result >= 0 )
  {
    RtlpHpAllocTrackerBitmap = (char *)BaseAddress + 0x2000000;
    qword_18015D6B0 = 0x10000000LL;
    result = ZwAllocateVirtualMemory(
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               &RtlpHpAllocTrackerBitmap,
               0LL,
               &RegionSize,
               0x1000u,
               4u);
    if ( result >= 0 )
      return 0;
  }
  return result;
}
