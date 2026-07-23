/*
 * XREFs of sub_180011A6C @ 0x180011A6C
 * Callers:
 *     sub_180012070 @ 0x180012070 (sub_180012070.c)
 *     RtlProtectHeap @ 0x18002A2B0 (RtlProtectHeap.c)
 *     sub_18002AE30 @ 0x18002AE30 (sub_18002AE30.c)
 *     sub_18005CA3C @ 0x18005CA3C (sub_18005CA3C.c)
 *     sub_18005EC0C @ 0x18005EC0C (sub_18005EC0C.c)
 *     sub_18005EF74 @ 0x18005EF74 (sub_18005EF74.c)
 *     sub_180081CA0 @ 0x180081CA0 (sub_180081CA0.c)
 * Callees:
 *     sub_18009A5F0 @ 0x18009A5F0 (sub_18009A5F0.c)
 *     ZwQueryVirtualMemory @ 0x18009AF20 (ZwQueryVirtualMemory.c)
 */

__int64 __fastcall sub_180011A6C(PVOID BaseAddress, unsigned int a2)
{
  unsigned int v2; // ebx
  PVOID MemoryInformation; // [rsp+30h] [rbp-28h] BYREF
  int v6; // [rsp+38h] [rbp-20h]

  v2 = a2;
  if ( a2 == 64
    && (ZwQueryVirtualMemory(
          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
          BaseAddress,
          MemoryRegionInformation,
          &MemoryInformation,
          0x20uLL,
          0LL) < 0
     || (v6 & 0x60) == 0
     || MemoryInformation != BaseAddress) )
  {
    sub_18009A5F0(0, (_DWORD)BaseAddress, 1, v6, 0LL, 0LL);
    return 4;
  }
  return v2;
}
