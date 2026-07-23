/*
 * XREFs of sub_180105554 @ 0x180105554
 * Callers:
 *     sub_180104908 @ 0x180104908 (sub_180104908.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x18009AF20 (ZwQueryVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x18009B4C0 (ZwProtectVirtualMemory.c)
 */

int __fastcall sub_180105554(__int64 a1, ULONG a2)
{
  int result; // eax
  _QWORD v4[7]; // [rsp+30h] [rbp-38h] BYREF
  ULONG OldProtect; // [rsp+70h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+80h] [rbp+18h] BYREF
  PVOID BaseAddress; // [rsp+88h] [rbp+20h] BYREF

  BaseAddress = (PVOID)(*(_QWORD *)(a1 + 24) & 0xFFFFFFFFFFFF0000uLL);
  result = ZwQueryVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress, MemoryBasicInformation, v4, 0x30uLL, 0LL);
  if ( result >= 0 )
  {
    RegionSize = v4[3];
    return ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, a2, &OldProtect);
  }
  return result;
}
