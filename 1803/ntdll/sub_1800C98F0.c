/*
 * XREFs of sub_1800C98F0 @ 0x1800C98F0
 * Callers:
 *     sub_180075968 @ 0x180075968 (sub_180075968.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     sub_18001EE04 @ 0x18001EE04 (sub_18001EE04.c)
 *     ZwQueryVirtualMemory @ 0x18009AF20 (ZwQueryVirtualMemory.c)
 *     sub_1800C9DEC @ 0x1800C9DEC (sub_1800C9DEC.c)
 */

char __fastcall sub_1800C98F0(PVOID BaseAddress)
{
  __int64 *v2; // rax
  bool v3; // bl
  __int64 *v4; // rdi
  __int64 v5; // rax
  _BYTE MemoryInformation[40]; // [rsp+30h] [rbp-28h] BYREF

  v2 = sub_18001EE04((unsigned __int64)BaseAddress, 0);
  v3 = 0;
  v4 = v2;
  if ( v2 )
  {
    v5 = v2[13];
    if ( v5
      && BaseAddress == *(PVOID *)(v5 + 184)
      && ZwQueryVirtualMemory(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           BaseAddress,
           MemoryRegionInformationEx,
           MemoryInformation,
           0x20uLL,
           0LL) >= 0 )
    {
      v3 = (MemoryInformation[12] & 0x40) != 0;
    }
    RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(v4 + 2));
    sub_1800C9DEC(v4);
    LOBYTE(v2) = v3;
  }
  return (char)v2;
}
