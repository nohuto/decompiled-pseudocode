/*
 * XREFs of sub_1800D8968 @ 0x1800D8968
 * Callers:
 *     sub_180007740 @ 0x180007740 (sub_180007740.c)
 *     sub_180026330 @ 0x180026330 (sub_180026330.c)
 *     RtlQueryWnfStateData @ 0x18007C1B0 (RtlQueryWnfStateData.c)
 *     RtlQueryWnfStateDataWithExplicitScope @ 0x180081FA0 (RtlQueryWnfStateDataWithExplicitScope.c)
 *     sub_180106D08 @ 0x180106D08 (sub_180106D08.c)
 * Callees:
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwAllocateVirtualMemory @ 0x18009ADC0 (ZwAllocateVirtualMemory.c)
 *     ZwQueryVirtualMemory @ 0x18009AF20 (ZwQueryVirtualMemory.c)
 *     ZwQuerySystemInformation @ 0x18009B180 (ZwQuerySystemInformation.c)
 *     ZwProtectVirtualMemory @ 0x18009B4C0 (ZwProtectVirtualMemory.c)
 */

int sub_1800D8968()
{
  _BYTE *v0; // rax
  unsigned __int64 v1; // r8
  ULONG_PTR v2; // rdx
  ULONG_PTR v3; // rcx
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-49h] BYREF
  PVOID v6; // [rsp+38h] [rbp-41h] BYREF
  ULONG OldProtect; // [rsp+40h] [rbp-39h] BYREF
  _BYTE BaseAddress[8]; // [rsp+48h] [rbp-31h] BYREF
  __int64 v9; // [rsp+50h] [rbp-29h]
  _BYTE SystemInformation[8]; // [rsp+80h] [rbp+7h] BYREF
  unsigned int v11; // [rsp+88h] [rbp+Fh]

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
    v1 = ~(unsigned __int64)(v11 - 1);
    v2 = v1 & (NtCurrentTeb()->GuaranteedStackBytes + v11 - 1LL);
    RegionSize = v2;
    if ( v2 )
    {
      v2 += v11;
      RegionSize = v2;
    }
    v3 = 3 * v11;
    if ( v2 < v3 )
    {
      RegionSize = 3 * v11;
      v2 = (unsigned int)v3;
    }
    v0 = BaseAddress;
    v6 = (PVOID)(((unsigned __int64)BaseAddress & v1) - v2);
    if ( (unsigned __int64)v6 >= v9 + (unsigned __int64)(17 * v11) )
    {
      LODWORD(v0) = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v6, 0LL, &RegionSize, 0x1000u, 4u);
      if ( (int)v0 >= 0 )
        LODWORD(v0) = ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v6, &RegionSize, 0x104u, &OldProtect);
    }
  }
  return (int)v0;
}
