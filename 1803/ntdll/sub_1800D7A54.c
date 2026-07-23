/*
 * XREFs of sub_1800D7A54 @ 0x1800D7A54
 * Callers:
 *     sub_1800D7658 @ 0x1800D7658 (sub_1800D7658.c)
 * Callees:
 *     RtlInitializeSid @ 0x180044340 (RtlInitializeSid.c)
 *     ZwAllocateVirtualMemory @ 0x18009ADC0 (ZwAllocateVirtualMemory.c)
 *     memset @ 0x1800A16C0 (memset.c)
 *     sub_1800D7D5C @ 0x1800D7D5C (sub_1800D7D5C.c)
 */

__int64 __fastcall sub_1800D7A54(
        PSID_IDENTIFIER_AUTHORITY IdentifierAuthority,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        PVOID *a11)
{
  NTSTATUS v13; // ebx
  PVOID BaseAddress; // [rsp+38h] [rbp-20h] BYREF
  ULONG_PTR RegionSize[3]; // [rsp+40h] [rbp-18h] BYREF

  RegionSize[0] = 12LL;
  BaseAddress = 0LL;
  if ( !a11 )
    return 3221225485LL;
  v13 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, RegionSize, 0x1000u, 4u);
  if ( v13 < 0 )
    goto LABEL_8;
  if ( BaseAddress )
  {
    memset(BaseAddress, 0, RegionSize[0]);
    v13 = RtlInitializeSid(BaseAddress, IdentifierAuthority, 1u);
    if ( v13 >= 0 )
    {
      *((_DWORD *)BaseAddress + 2) = 18;
      *a11 = BaseAddress;
      v13 = 0;
    }
  }
  if ( v13 < 0 )
  {
LABEL_8:
    if ( BaseAddress )
      sub_1800D7D5C(BaseAddress);
  }
  return (unsigned int)v13;
}
