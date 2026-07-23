/*
 * XREFs of sub_1800DF0F4 @ 0x1800DF0F4
 * Callers:
 *     sub_180014980 @ 0x180014980 (sub_180014980.c)
 *     sub_18005E3C8 @ 0x18005E3C8 (sub_18005E3C8.c)
 *     RtlQueryWnfStateData @ 0x180081350 (RtlQueryWnfStateData.c)
 *     RtlQueryWnfStateDataWithExplicitScope @ 0x180087AE0 (RtlQueryWnfStateDataWithExplicitScope.c)
 *     sub_180104A98 @ 0x180104A98 (sub_180104A98.c)
 * Callees:
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwAllocateVirtualMemory @ 0x1800A5600 (ZwAllocateVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x1800A5760 (ZwQueryVirtualMemory.c)
 *     ZwQuerySystemInformation @ 0x1800A59C0 (ZwQuerySystemInformation.c)
 *     ZwProtectVirtualMemory @ 0x1800A5D00 (ZwProtectVirtualMemory.c)
 */

int sub_1800DF0F4()
{
  _BYTE *v0; // rax
  unsigned __int64 v1; // r9
  ULONG_PTR v2; // r8
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-49h] BYREF
  PVOID v5; // [rsp+38h] [rbp-41h] BYREF
  ULONG OldProtect; // [rsp+40h] [rbp-39h] BYREF
  _BYTE BaseAddress[8]; // [rsp+48h] [rbp-31h] BYREF
  __int64 v8; // [rsp+50h] [rbp-29h]
  _BYTE SystemInformation[8]; // [rsp+80h] [rbp+7h] BYREF
  unsigned int v10; // [rsp+88h] [rbp+Fh]

  LODWORD(v0) = ZwQueryVirtualMemory(
                  (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                  BaseAddress,
                  MemoryBasicInformation,
                  BaseAddress,
                  0x30uLL,
                  0LL);
  if ( (int)v0 >= 0 )
  {
    ZwQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
    v1 = ~(unsigned __int64)(v10 - 1);
    v2 = v1 & (NtCurrentTeb()->GuaranteedStackBytes + v10 - 1LL);
    if ( v2 )
      v2 += v10;
    v0 = BaseAddress;
    if ( v2 < 3 * v10 )
      v2 = 3 * v10;
    RegionSize = v2;
    v5 = (PVOID)(((unsigned __int64)BaseAddress & v1) - v2);
    if ( (unsigned __int64)v5 >= v8 + (unsigned __int64)(17 * v10) )
    {
      LODWORD(v0) = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v5, 0LL, &RegionSize, 0x1000u, 4u);
      if ( (int)v0 >= 0 )
        LODWORD(v0) = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v5, &RegionSize, 0x104u, &OldProtect);
    }
  }
  return (int)v0;
}
